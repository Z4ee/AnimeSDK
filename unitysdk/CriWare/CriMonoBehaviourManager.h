#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace CriWare { class CriMonoBehaviour; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CRIWARE_CRIMONOBEHAVIOURMANAGER_AWAKE_OFFSET UNITYSDK_OFFSET(0x1E51FC60)
#define CRIWARE_CRIMONOBEHAVIOURMANAGER_CREATEINSTANCE_OFFSET UNITYSDK_OFFSET(0x1E51F4C0)
#define CRIWARE_CRIMONOBEHAVIOURMANAGER_GETINDEX_OFFSET UNITYSDK_OFFSET(0x1E51F630)
#define CRIWARE_CRIMONOBEHAVIOURMANAGER_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x1E51F460)
#define CRIWARE_CRIMONOBEHAVIOURMANAGER_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x1E520020)
#define CRIWARE_CRIMONOBEHAVIOURMANAGER_REGISTER_OFFSET UNITYSDK_OFFSET(0x1E51F840)
#define CRIWARE_CRIMONOBEHAVIOURMANAGER_UNREGISTER_OFFSET UNITYSDK_OFFSET(0x1E51FA20)
#define CRIWARE_CRIMONOBEHAVIOURMANAGER_UPDATE_OFFSET UNITYSDK_OFFSET(0x1E51FE60)
#define CRIWARE_CRIMONOBEHAVIOURMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E520230)
#define CRIWARE_CRIMONOBEHAVIOURMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1E5201E0)

namespace CriWare
{
	inline static constexpr unsigned int CriMonoBehaviourManager_TypeDefinitionIndex = 34376;

	class CriMonoBehaviourManager : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::Collections::Generic::List_1<::CriWare::CriMonoBehaviour*>** StaticGet_criMonoBehaviourList()
		{
			return (::System::Collections::Generic::List_1<::CriWare::CriMonoBehaviour*>**)Il2CppClass::FromTypeDefinitionIndex(CriMonoBehaviourManager_TypeDefinitionIndex)->GetStaticField(0x27A20);
		}
		static ::CriWare::CriMonoBehaviourManager** StaticGet__instance()
		{
			return (::CriWare::CriMonoBehaviourManager**)Il2CppClass::FromTypeDefinitionIndex(CriMonoBehaviourManager_TypeDefinitionIndex)->GetStaticField(0x27A28);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIMONOBEHAVIOURMANAGER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIMONOBEHAVIOURMANAGER__CCTOR_OFFSET))();
		}

		static ::CriWare::CriMonoBehaviourManager* get_instance()
		{
			return ((::CriWare::CriMonoBehaviourManager*(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIMONOBEHAVIOURMANAGER_GET_INSTANCE_OFFSET))();
		}

		static ::System::Void CreateInstance()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIMONOBEHAVIOURMANAGER_CREATEINSTANCE_OFFSET))();
		}

		static ::System::Int32 GetIndex(::CriWare::CriMonoBehaviour* criMonoBehaviour)
		{
			return ((::System::Int32(*)(::CriWare::CriMonoBehaviour*))((::PBYTE)hIl2Cpp + CRIWARE_CRIMONOBEHAVIOURMANAGER_GETINDEX_OFFSET))(criMonoBehaviour);
		}

		::System::Boolean Register(::CriWare::CriMonoBehaviour* criMonoBehaviour)
		{
			return ((::System::Boolean(*)(::PVOID, ::CriWare::CriMonoBehaviour*))((::PBYTE)hIl2Cpp + CRIWARE_CRIMONOBEHAVIOURMANAGER_REGISTER_OFFSET))(this, criMonoBehaviour);
		}

		static ::System::Boolean UnRegister(::CriWare::CriMonoBehaviour* criMonoBehaviour)
		{
			return ((::System::Boolean(*)(::CriWare::CriMonoBehaviour*))((::PBYTE)hIl2Cpp + CRIWARE_CRIMONOBEHAVIOURMANAGER_UNREGISTER_OFFSET))(criMonoBehaviour);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIMONOBEHAVIOURMANAGER_AWAKE_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIMONOBEHAVIOURMANAGER_UPDATE_OFFSET))(this);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIMONOBEHAVIOURMANAGER_LATEUPDATE_OFFSET))(this);
		}
	};
}
