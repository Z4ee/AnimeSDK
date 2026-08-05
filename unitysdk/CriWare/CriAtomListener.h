#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CriWare/CriMonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace CriWare { class CriAtomEx3dListener; }
namespace CriWare { class CriAtomRegion; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CRIWARE_CRIATOMLISTENER_ACTIVATELISTENER_OFFSET UNITYSDK_OFFSET(0x1FC00DC0)
#define CRIWARE_CRIATOMLISTENER_AWAKE_OFFSET UNITYSDK_OFFSET(0x1FC009D0)
#define CRIWARE_CRIATOMLISTENER_CREATEDUMMYNATIVELISTENER_OFFSET UNITYSDK_OFFSET(0x1FBFFB10)
#define CRIWARE_CRIATOMLISTENER_CRIINTERNALLATEUPDATE_OFFSET UNITYSDK_OFFSET(0x1FC017A0)
#define CRIWARE_CRIATOMLISTENER_CRIINTERNALUPDATE_OFFSET UNITYSDK_OFFSET(0x1FC01790)
#define CRIWARE_CRIATOMLISTENER_DESTROYDUMMYNATIVELISTENER_OFFSET UNITYSDK_OFFSET(0x1FBFFBC0)
#define CRIWARE_CRIATOMLISTENER_GET_DUMMYNATIVELISTENER_OFFSET UNITYSDK_OFFSET(0x1FC00970)
#define CRIWARE_CRIATOMLISTENER_GET_ISACTIVE_OFFSET UNITYSDK_OFFSET(0x1FBFFCA0)
#define CRIWARE_CRIATOMLISTENER_GET_NATIVELISTENER_OFFSET UNITYSDK_OFFSET(0x1FBFFC80)
#define CRIWARE_CRIATOMLISTENER_GET_REGION3D_OFFSET UNITYSDK_OFFSET(0x1FC00430)
#define CRIWARE_CRIATOMLISTENER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1FC01660)
#define CRIWARE_CRIATOMLISTENER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1FC01350)
#define CRIWARE_CRIATOMLISTENER_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1FC00DA0)
#define CRIWARE_CRIATOMLISTENER_SET_ISACTIVE_OFFSET UNITYSDK_OFFSET(0x1FBFFCB0)
#define CRIWARE_CRIATOMLISTENER_SET_NATIVELISTENER_OFFSET UNITYSDK_OFFSET(0x1FBFFC90)
#define CRIWARE_CRIATOMLISTENER_SET_REGION3D_OFFSET UNITYSDK_OFFSET(0x1FC00440)
#define CRIWARE_CRIATOMLISTENER_START_OFFSET UNITYSDK_OFFSET(0x1FC00C60)
#define CRIWARE_CRIATOMLISTENER_UPDATEPOSITION_OFFSET UNITYSDK_OFFSET(0x1FBFFE10)
#define CRIWARE_CRIATOMLISTENER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1FC01820)
#define CRIWARE_CRIATOMLISTENER__CTOR_OFFSET UNITYSDK_OFFSET(0x1FC017B0)

namespace CriWare
{
	inline static constexpr unsigned int CriAtomListener_TypeDefinitionIndex = 34889;

	class CriAtomListener : public ::CriWare::CriMonoBehaviour
	{
	public:
		static ::CriWare::CriAtomListener** StaticGet_exclusiveListener()
		{
			return (::CriWare::CriAtomListener**)Il2CppClass::FromTypeDefinitionIndex(CriAtomListener_TypeDefinitionIndex)->GetStaticField(0x29230);
		}
		static ::CriWare::CriAtomEx3dListener** StaticGet_dummyNativeListener()
		{
			return (::CriWare::CriAtomEx3dListener**)Il2CppClass::FromTypeDefinitionIndex(CriAtomListener_TypeDefinitionIndex)->GetStaticField(0x29238);
		}
		static ::System::Collections::Generic::List_1<::CriWare::CriAtomListener*>** StaticGet_listenersList()
		{
			return (::System::Collections::Generic::List_1<::CriWare::CriAtomListener*>**)Il2CppClass::FromTypeDefinitionIndex(CriAtomListener_TypeDefinitionIndex)->GetStaticField(0x29240);
		}
		::CriWare::CriAtomEx3dListener* _nativeListener_k__BackingField; // 0x28
		::CriWare::CriAtomRegion* regionOnStart; // 0x30
		::System::Boolean activateListenerOnEnable; // 0x38
		::UnityEngine::Vector3 lastPosition; // 0x3C
		::CriWare::CriAtomRegion* currentRegion; // 0x48
		::System::Boolean _isActive; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMLISTENER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMLISTENER__CCTOR_OFFSET))();
		}

		static ::System::Void CreateDummyNativeListener()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMLISTENER_CREATEDUMMYNATIVELISTENER_OFFSET))();
		}

		static ::System::Void DestroyDummyNativeListener()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMLISTENER_DESTROYDUMMYNATIVELISTENER_OFFSET))();
		}

		::CriWare::CriAtomEx3dListener* get_nativeListener()
		{
			return ((::CriWare::CriAtomEx3dListener*(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMLISTENER_GET_NATIVELISTENER_OFFSET))(this);
		}

		::System::Void set_nativeListener(::CriWare::CriAtomEx3dListener* value)
		{
			return ((::System::Void(*)(::PVOID, ::CriWare::CriAtomEx3dListener*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMLISTENER_SET_NATIVELISTENER_OFFSET))(this, value);
		}

		::System::Boolean get_isActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMLISTENER_GET_ISACTIVE_OFFSET))(this);
		}

		::System::Void set_isActive(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMLISTENER_SET_ISACTIVE_OFFSET))(this, value);
		}

		::CriWare::CriAtomRegion* get_region3d()
		{
			return ((::CriWare::CriAtomRegion*(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMLISTENER_GET_REGION3D_OFFSET))(this);
		}

		::System::Void set_region3d(::CriWare::CriAtomRegion* value)
		{
			return ((::System::Void(*)(::PVOID, ::CriWare::CriAtomRegion*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMLISTENER_SET_REGION3D_OFFSET))(this, value);
		}

		static ::CriWare::CriAtomEx3dListener* get_DummyNativeListener()
		{
			return ((::CriWare::CriAtomEx3dListener*(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMLISTENER_GET_DUMMYNATIVELISTENER_OFFSET))();
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMLISTENER_AWAKE_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMLISTENER_START_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMLISTENER_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMLISTENER_ONDISABLE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMLISTENER_ONDESTROY_OFFSET))(this);
		}

		::System::Void CriInternalUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMLISTENER_CRIINTERNALUPDATE_OFFSET))(this);
		}

		::System::Void CriInternalLateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMLISTENER_CRIINTERNALLATEUPDATE_OFFSET))(this);
		}

		::System::Void UpdatePosition()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMLISTENER_UPDATEPOSITION_OFFSET))(this);
		}

		::System::Void ActivateListener(::System::Boolean exclusive)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMLISTENER_ACTIVATELISTENER_OFFSET))(this, exclusive);
		}
	};
}
