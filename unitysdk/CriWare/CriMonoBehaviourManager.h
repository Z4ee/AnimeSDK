#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace CriWare { class CriMonoBehaviour; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CRIWARE_CRIMONOBEHAVIOURMANAGER_AWAKE_OFFSET UNITYSDK_OFFSET(0x146DAB30)
#define CRIWARE_CRIMONOBEHAVIOURMANAGER_CREATEINSTANCE_OFFSET UNITYSDK_OFFSET(0x146DA830)
#define CRIWARE_CRIMONOBEHAVIOURMANAGER_GETINDEX_OFFSET UNITYSDK_OFFSET(0x146DA920)
#define CRIWARE_CRIMONOBEHAVIOURMANAGER_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x146DA2E0)
#define CRIWARE_CRIMONOBEHAVIOURMANAGER_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x146DAD70)
#define CRIWARE_CRIMONOBEHAVIOURMANAGER_REGISTER_OFFSET UNITYSDK_OFFSET(0x146DA3F0)
#define CRIWARE_CRIMONOBEHAVIOURMANAGER_UNREGISTER_OFFSET UNITYSDK_OFFSET(0x146DA650)
#define CRIWARE_CRIMONOBEHAVIOURMANAGER_UPDATE_OFFSET UNITYSDK_OFFSET(0x146DABC0)
#define CRIWARE_CRIMONOBEHAVIOURMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x146DAF30)
#define CRIWARE_CRIMONOBEHAVIOURMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x146DAF20)

namespace CriWare
{
	inline static constexpr unsigned int CriMonoBehaviourManager_TypeDefinitionIndex = 37238;

	class CriMonoBehaviourManager : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::CriWare::CriMonoBehaviourManager** StaticGet__instance()
		{
			return (::CriWare::CriMonoBehaviourManager**)Il2CppClass::FromTypeDefinitionIndex(CriMonoBehaviourManager_TypeDefinitionIndex)->GetStaticField(0x80F0);
		}
		static ::System::Collections::Generic::List_1<::CriWare::CriMonoBehaviour*>** StaticGet_criMonoBehaviourList()
		{
			return (::System::Collections::Generic::List_1<::CriWare::CriMonoBehaviour*>**)Il2CppClass::FromTypeDefinitionIndex(CriMonoBehaviourManager_TypeDefinitionIndex)->GetStaticField(0x80F8);
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

		static ::System::Int32 GetIndex(::CriWare::CriMonoBehaviour* a1)
		{
			return ((::System::Int32(*)(::CriWare::CriMonoBehaviour*))((::PBYTE)hIl2Cpp + CRIWARE_CRIMONOBEHAVIOURMANAGER_GETINDEX_OFFSET))(a1);
		}

		::System::Boolean Register(::CriWare::CriMonoBehaviour* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CriWare::CriMonoBehaviour*))((::PBYTE)hIl2Cpp + CRIWARE_CRIMONOBEHAVIOURMANAGER_REGISTER_OFFSET))(this, a1);
		}

		static ::System::Boolean UnRegister(::CriWare::CriMonoBehaviour* a1)
		{
			return ((::System::Boolean(*)(::CriWare::CriMonoBehaviour*))((::PBYTE)hIl2Cpp + CRIWARE_CRIMONOBEHAVIOURMANAGER_UNREGISTER_OFFSET))(a1);
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
