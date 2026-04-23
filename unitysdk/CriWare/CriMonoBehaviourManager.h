#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace CriWare { class CriMonoBehaviour; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CRIWARE_CRIMONOBEHAVIOURMANAGER_AWAKE_OFFSET UNITYSDK_OFFSET(0x12C21980)
#define CRIWARE_CRIMONOBEHAVIOURMANAGER_CREATEINSTANCE_OFFSET UNITYSDK_OFFSET(0x12C216B0)
#define CRIWARE_CRIMONOBEHAVIOURMANAGER_GETINDEX_OFFSET UNITYSDK_OFFSET(0x12C217A0)
#define CRIWARE_CRIMONOBEHAVIOURMANAGER_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x12C21180)
#define CRIWARE_CRIMONOBEHAVIOURMANAGER_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x12C21B90)
#define CRIWARE_CRIMONOBEHAVIOURMANAGER_REGISTER_OFFSET UNITYSDK_OFFSET(0x12C21290)
#define CRIWARE_CRIMONOBEHAVIOURMANAGER_UNREGISTER_OFFSET UNITYSDK_OFFSET(0x12C214A0)
#define CRIWARE_CRIMONOBEHAVIOURMANAGER_UPDATE_OFFSET UNITYSDK_OFFSET(0x12C21A10)
#define CRIWARE_CRIMONOBEHAVIOURMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x12C21D20)
#define CRIWARE_CRIMONOBEHAVIOURMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x12C21D10)

namespace CriWare
{
	inline static constexpr unsigned int CriMonoBehaviourManager_TypeDefinitionIndex = 36938;

	class CriMonoBehaviourManager : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::CriWare::CriMonoBehaviourManager** StaticGet__instance()
		{
			return (::CriWare::CriMonoBehaviourManager**)Il2CppClass::FromTypeDefinitionIndex(CriMonoBehaviourManager_TypeDefinitionIndex)->GetStaticField(0xB290);
		}
		static ::System::Collections::Generic::List_1<::CriWare::CriMonoBehaviour*>** StaticGet_criMonoBehaviourList()
		{
			return (::System::Collections::Generic::List_1<::CriWare::CriMonoBehaviour*>**)Il2CppClass::FromTypeDefinitionIndex(CriMonoBehaviourManager_TypeDefinitionIndex)->GetStaticField(0xB298);
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
