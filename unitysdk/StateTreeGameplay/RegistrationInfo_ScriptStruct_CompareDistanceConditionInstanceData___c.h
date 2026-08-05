#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnrealTypes { class ICppStructOps; }

#define STATETREEGAMEPLAY_REGISTRATIONINFO_SCRIPTSTRUCT_COMPAREDISTANCECONDITIONINSTANCEDATA___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1878ECE0)
#define STATETREEGAMEPLAY_REGISTRATIONINFO_SCRIPTSTRUCT_COMPAREDISTANCECONDITIONINSTANCEDATA___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1878ED20)
#define STATETREEGAMEPLAY_REGISTRATIONINFO_SCRIPTSTRUCT_COMPAREDISTANCECONDITIONINSTANCEDATA___C___CCTOR_B__6_0_OFFSET UNITYSDK_OFFSET(0x1878ED30)

namespace StateTreeGameplay
{
	inline static constexpr unsigned int RegistrationInfo_ScriptStruct_CompareDistanceConditionInstanceData___c_TypeDefinitionIndex = 72961;

	class RegistrationInfo_ScriptStruct_CompareDistanceConditionInstanceData___c : public ::System::Object
	{
	public:
		static ::StateTreeGameplay::RegistrationInfo_ScriptStruct_CompareDistanceConditionInstanceData___c** StaticGet___9()
		{
			return (::StateTreeGameplay::RegistrationInfo_ScriptStruct_CompareDistanceConditionInstanceData___c**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_CompareDistanceConditionInstanceData___c_TypeDefinitionIndex)->GetStaticField(0x497F0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_REGISTRATIONINFO_SCRIPTSTRUCT_COMPAREDISTANCECONDITIONINSTANCEDATA___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_REGISTRATIONINFO_SCRIPTSTRUCT_COMPAREDISTANCECONDITIONINSTANCEDATA___C__CTOR_OFFSET))(this);
		}

		::UnrealTypes::ICppStructOps* __cctor_b__6_0()
		{
			return ((::UnrealTypes::ICppStructOps*(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_REGISTRATIONINFO_SCRIPTSTRUCT_COMPAREDISTANCECONDITIONINSTANCEDATA___C___CCTOR_B__6_0_OFFSET))(this);
		}
	};
}
