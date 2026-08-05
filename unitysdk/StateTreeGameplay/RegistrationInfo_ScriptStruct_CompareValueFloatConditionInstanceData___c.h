#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnrealTypes { class ICppStructOps; }

#define STATETREEGAMEPLAY_REGISTRATIONINFO_SCRIPTSTRUCT_COMPAREVALUEFLOATCONDITIONINSTANCEDATA___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1DE8D260)
#define STATETREEGAMEPLAY_REGISTRATIONINFO_SCRIPTSTRUCT_COMPAREVALUEFLOATCONDITIONINSTANCEDATA___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1DE8D2A0)
#define STATETREEGAMEPLAY_REGISTRATIONINFO_SCRIPTSTRUCT_COMPAREVALUEFLOATCONDITIONINSTANCEDATA___C___CCTOR_B__5_0_OFFSET UNITYSDK_OFFSET(0x1DE8D2B0)

namespace StateTreeGameplay
{
	inline static constexpr unsigned int RegistrationInfo_ScriptStruct_CompareValueFloatConditionInstanceData___c_TypeDefinitionIndex = 57549;

	class RegistrationInfo_ScriptStruct_CompareValueFloatConditionInstanceData___c : public ::System::Object
	{
	public:
		static ::StateTreeGameplay::RegistrationInfo_ScriptStruct_CompareValueFloatConditionInstanceData___c** StaticGet___9()
		{
			return (::StateTreeGameplay::RegistrationInfo_ScriptStruct_CompareValueFloatConditionInstanceData___c**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_CompareValueFloatConditionInstanceData___c_TypeDefinitionIndex)->GetStaticField(0x3B2A0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_REGISTRATIONINFO_SCRIPTSTRUCT_COMPAREVALUEFLOATCONDITIONINSTANCEDATA___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_REGISTRATIONINFO_SCRIPTSTRUCT_COMPAREVALUEFLOATCONDITIONINSTANCEDATA___C__CTOR_OFFSET))(this);
		}

		::UnrealTypes::ICppStructOps* __cctor_b__5_0()
		{
			return ((::UnrealTypes::ICppStructOps*(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_REGISTRATIONINFO_SCRIPTSTRUCT_COMPAREVALUEFLOATCONDITIONINSTANCEDATA___C___CCTOR_B__5_0_OFFSET))(this);
		}
	};
}
