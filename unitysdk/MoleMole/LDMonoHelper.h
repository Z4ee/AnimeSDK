#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_LDMONOHELPER_AWAKE_OFFSET UNITYSDK_OFFSET(0x129AB240)
#define MOLEMOLE_LDMONOHELPER_CONFIRMINUPDATE_OFFSET UNITYSDK_OFFSET(0x129AB610)
#define MOLEMOLE_LDMONOHELPER_GET_ISINLATEUPDATE_OFFSET UNITYSDK_OFFSET(0x129AB230)
#define MOLEMOLE_LDMONOHELPER_INIT_OFFSET UNITYSDK_OFFSET(0x129AB3F0)
#define MOLEMOLE_LDMONOHELPER_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x129AB3B0)
#define MOLEMOLE_LDMONOHELPER_UPDATE_OFFSET UNITYSDK_OFFSET(0x129AB290)
#define MOLEMOLE_LDMONOHELPER__CTOR_OFFSET UNITYSDK_OFFSET(0x129AB7E0)

namespace MoleMole
{
	inline static constexpr unsigned int LDMonoHelper_TypeDefinitionIndex = 65687;

	class LDMonoHelper : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::MoleMole::LDMonoHelper** StaticGet_lazyInstance()
		{
			return (::MoleMole::LDMonoHelper**)Il2CppClass::FromTypeDefinitionIndex(LDMonoHelper_TypeDefinitionIndex)->GetStaticField(0x50EF0);
		}
		::System::Boolean IsInUpdate; // 0x18
		::System::Collections::Generic::List_1<::System::Action*>* Field_5_0; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LDMONOHELPER__CTOR_OFFSET))(this);
		}

		::System::Boolean get_IsInLateUpdate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LDMONOHELPER_GET_ISINLATEUPDATE_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LDMONOHELPER_AWAKE_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LDMONOHELPER_UPDATE_OFFSET))(this);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LDMONOHELPER_LATEUPDATE_OFFSET))(this);
		}

		static ::System::Boolean Init()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_LDMONOHELPER_INIT_OFFSET))();
		}

		static ::System::Void ConfirmInUpdate(::System::Action* a1)
		{
			return ((::System::Void(*)(::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_LDMONOHELPER_CONFIRMINUPDATE_OFFSET))(a1);
		}
	};
}
