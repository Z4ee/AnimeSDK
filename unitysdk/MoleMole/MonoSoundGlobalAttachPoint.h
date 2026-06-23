#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_MONOSOUNDGLOBALATTACHPOINT_ADD_OFFSET UNITYSDK_OFFSET(0x1303B680)
#define MOLEMOLE_MONOSOUNDGLOBALATTACHPOINT_AWAKE_OFFSET UNITYSDK_OFFSET(0x1303BD00)
#define MOLEMOLE_MONOSOUNDGLOBALATTACHPOINT_GETATTACHPOINTTRANSBYNAME_OFFSET UNITYSDK_OFFSET(0x1303B2C0)
#define MOLEMOLE_MONOSOUNDGLOBALATTACHPOINT_GET_OFFSET UNITYSDK_OFFSET(0x1303B160)
#define MOLEMOLE_MONOSOUNDGLOBALATTACHPOINT_METHOD_5_7744894CEC41BF06_OFFSET UNITYSDK_OFFSET(0x1303C070)
#define MOLEMOLE_MONOSOUNDGLOBALATTACHPOINT_METHOD_5_F0BD65B017F2AC0B_OFFSET UNITYSDK_OFFSET(0x1303C010)
#define MOLEMOLE_MONOSOUNDGLOBALATTACHPOINT_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1303BDB0)
#define MOLEMOLE_MONOSOUNDGLOBALATTACHPOINT_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1303B000)
#define MOLEMOLE_MONOSOUNDGLOBALATTACHPOINT_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1303AE90)
#define MOLEMOLE_MONOSOUNDGLOBALATTACHPOINT_ONREALDISABLE_OFFSET UNITYSDK_OFFSET(0x1303B0C0)
#define MOLEMOLE_MONOSOUNDGLOBALATTACHPOINT_ONREALENABLE_OFFSET UNITYSDK_OFFSET(0x1303AF50)
#define MOLEMOLE_MONOSOUNDGLOBALATTACHPOINT_REMOVE_OFFSET UNITYSDK_OFFSET(0x1303B9D0)
#define MOLEMOLE_MONOSOUNDGLOBALATTACHPOINT_REREGISTER_OFFSET UNITYSDK_OFFSET(0x1303BE50)
#define MOLEMOLE_MONOSOUNDGLOBALATTACHPOINT__CCTOR_OFFSET UNITYSDK_OFFSET(0x1303BF70)
#define MOLEMOLE_MONOSOUNDGLOBALATTACHPOINT__CTOR_OFFSET UNITYSDK_OFFSET(0x1303BF20)

namespace MoleMole
{
	inline static constexpr unsigned int MonoSoundGlobalAttachPoint_TypeDefinitionIndex = 41193;

	class MonoSoundGlobalAttachPoint : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*>** StaticGet_attachPoints()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*>**)Il2CppClass::FromTypeDefinitionIndex(MonoSoundGlobalAttachPoint_TypeDefinitionIndex)->GetStaticField(0x42C80);
		}
		::System::String* attachPointName; // 0x18
		::System::Boolean registerOnAwake; // 0x20
		::System::Boolean Field_5_3; // 0x21

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSOUNDGLOBALATTACHPOINT__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSOUNDGLOBALATTACHPOINT__CCTOR_OFFSET))();
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSOUNDGLOBALATTACHPOINT_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSOUNDGLOBALATTACHPOINT_ONDISABLE_OFFSET))(this);
		}

		static ::UnityEngine::GameObject* Get(::System::String* a1)
		{
			return ((::UnityEngine::GameObject*(*)(::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSOUNDGLOBALATTACHPOINT_GET_OFFSET))(a1);
		}

		static ::UnityEngine::Transform* GetAttachPointTransByName(::System::String* a1, ::System::Boolean a2)
		{
			return ((::UnityEngine::Transform*(*)(::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSOUNDGLOBALATTACHPOINT_GETATTACHPOINTTRANSBYNAME_OFFSET))(a1, a2);
		}

		static ::System::Void Add(::System::String* a1, ::UnityEngine::GameObject* a2)
		{
			return ((::System::Void(*)(::System::String*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSOUNDGLOBALATTACHPOINT_ADD_OFFSET))(a1, a2);
		}

		static ::System::Boolean Remove(::UnityEngine::GameObject* a1)
		{
			return ((::System::Boolean(*)(::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSOUNDGLOBALATTACHPOINT_REMOVE_OFFSET))(a1);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSOUNDGLOBALATTACHPOINT_AWAKE_OFFSET))(this);
		}

		::System::Void OnRealEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSOUNDGLOBALATTACHPOINT_ONREALENABLE_OFFSET))(this);
		}

		::System::Void OnRealDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSOUNDGLOBALATTACHPOINT_ONREALDISABLE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSOUNDGLOBALATTACHPOINT_ONDESTROY_OFFSET))(this);
		}

		::System::Void Reregister()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSOUNDGLOBALATTACHPOINT_REREGISTER_OFFSET))(this);
		}

		::System::Void Method_5_F0BD65B017F2AC0B()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSOUNDGLOBALATTACHPOINT_METHOD_5_F0BD65B017F2AC0B_OFFSET))(this);
		}

		::System::Void Method_5_7744894CEC41BF06()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSOUNDGLOBALATTACHPOINT_METHOD_5_7744894CEC41BF06_OFFSET))(this);
		}
	};
}
