#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/DisplayMessageBase.h"

class Class_2_208CC9941471731A_602;
namespace System { class Object; }
namespace System { class String; }

#define MOLEMOLE_GENERALBOTTOMTIPSHOW_GET_ISTRIGGER_OFFSET UNITYSDK_OFFSET(0x1912CDD0)
#define MOLEMOLE_GENERALBOTTOMTIPSHOW_ONPROCESS_OFFSET UNITYSDK_OFFSET(0x1912CB50)
#define MOLEMOLE_GENERALBOTTOMTIPSHOW_SETMESSAGECONFIG_OFFSET UNITYSDK_OFFSET(0x1912CAF0)
#define MOLEMOLE_GENERALBOTTOMTIPSHOW__CTOR_OFFSET UNITYSDK_OFFSET(0x1912C8B0)
#define MOLEMOLE_GENERALBOTTOMTIPSHOW___BASE_GET_ISTRIGGER_OFFSET UNITYSDK_OFFSET(0x1912CFF0)
#define MOLEMOLE_GENERALBOTTOMTIPSHOW___BASE_SETMESSAGECONFIG_OFFSET UNITYSDK_OFFSET(0x1912D000)

namespace MoleMole
{
	inline static constexpr unsigned int GeneralBottomTipShow_TypeDefinitionIndex = 78584;

	class GeneralBottomTipShow : public ::MoleMole::DisplayMessageBase
	{
	public:
		::Il2CppArray<::System::Object*>* m_params; // 0x28
		::Class_2_208CC9941471731A_602* m_cfg; // 0x30
		::System::String* m_triggerUIName; // 0x38

		::System::Void _ctor(::System::Int32 tipsID, ::Il2CppArray<::System::Object*>* strParams)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_GENERALBOTTOMTIPSHOW__CTOR_OFFSET))(this, tipsID, strParams);
		}

		::System::Void SetMessageConfig()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GENERALBOTTOMTIPSHOW_SETMESSAGECONFIG_OFFSET))(this);
		}

		::System::Void OnProcess()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GENERALBOTTOMTIPSHOW_ONPROCESS_OFFSET))(this);
		}

		::System::Boolean get_IsTrigger()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GENERALBOTTOMTIPSHOW_GET_ISTRIGGER_OFFSET))(this);
		}

		::System::Boolean __base_get_IsTrigger()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GENERALBOTTOMTIPSHOW___BASE_GET_ISTRIGGER_OFFSET))(this);
		}

		::System::Void __base_SetMessageConfig()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GENERALBOTTOMTIPSHOW___BASE_SETMESSAGECONFIG_OFFSET))(this);
		}
	};
}
