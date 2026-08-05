#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnrealTypes { class ICppStructOps; }

#define STATETREEGAMEPLAY_REGISTRATIONINFO_SCRIPTSTRUCT_COMPAREVALUEFLOATCONDITION___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BC411D0)
#define STATETREEGAMEPLAY_REGISTRATIONINFO_SCRIPTSTRUCT_COMPAREVALUEFLOATCONDITION___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1BC41210)
#define STATETREEGAMEPLAY_REGISTRATIONINFO_SCRIPTSTRUCT_COMPAREVALUEFLOATCONDITION___C___CCTOR_B__6_0_OFFSET UNITYSDK_OFFSET(0x1BC41220)

namespace StateTreeGameplay
{
	inline static constexpr unsigned int RegistrationInfo_ScriptStruct_CompareValueFloatCondition___c_TypeDefinitionIndex = 83388;

	class RegistrationInfo_ScriptStruct_CompareValueFloatCondition___c : public ::System::Object
	{
	public:
		static ::StateTreeGameplay::RegistrationInfo_ScriptStruct_CompareValueFloatCondition___c** StaticGet___9()
		{
			return (::StateTreeGameplay::RegistrationInfo_ScriptStruct_CompareValueFloatCondition___c**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_CompareValueFloatCondition___c_TypeDefinitionIndex)->GetStaticField(0x3B260);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_REGISTRATIONINFO_SCRIPTSTRUCT_COMPAREVALUEFLOATCONDITION___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_REGISTRATIONINFO_SCRIPTSTRUCT_COMPAREVALUEFLOATCONDITION___C__CTOR_OFFSET))(this);
		}

		::UnrealTypes::ICppStructOps* __cctor_b__6_0()
		{
			return ((::UnrealTypes::ICppStructOps*(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_REGISTRATIONINFO_SCRIPTSTRUCT_COMPAREVALUEFLOATCONDITION___C___CCTOR_B__6_0_OFFSET))(this);
		}
	};
}
