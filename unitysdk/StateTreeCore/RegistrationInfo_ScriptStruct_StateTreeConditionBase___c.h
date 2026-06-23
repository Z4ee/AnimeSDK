#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnrealTypes { class ICppStructOps; }

#define STATETREECORE_REGISTRATIONINFO_SCRIPTSTRUCT_STATETREECONDITIONBASE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E886110)
#define STATETREECORE_REGISTRATIONINFO_SCRIPTSTRUCT_STATETREECONDITIONBASE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1E886150)
#define STATETREECORE_REGISTRATIONINFO_SCRIPTSTRUCT_STATETREECONDITIONBASE___C___CCTOR_B__8_0_OFFSET UNITYSDK_OFFSET(0x1E886160)

namespace StateTreeCore
{
	inline static constexpr unsigned int RegistrationInfo_ScriptStruct_StateTreeConditionBase___c_TypeDefinitionIndex = 30921;

	class RegistrationInfo_ScriptStruct_StateTreeConditionBase___c : public ::System::Object
	{
	public:
		static ::StateTreeCore::RegistrationInfo_ScriptStruct_StateTreeConditionBase___c** StaticGet___9()
		{
			return (::StateTreeCore::RegistrationInfo_ScriptStruct_StateTreeConditionBase___c**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_StateTreeConditionBase___c_TypeDefinitionIndex)->GetStaticField(0x252A0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STATETREECORE_REGISTRATIONINFO_SCRIPTSTRUCT_STATETREECONDITIONBASE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_REGISTRATIONINFO_SCRIPTSTRUCT_STATETREECONDITIONBASE___C__CTOR_OFFSET))(this);
		}

		::UnrealTypes::ICppStructOps* __cctor_b__8_0()
		{
			return ((::UnrealTypes::ICppStructOps*(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_REGISTRATIONINFO_SCRIPTSTRUCT_STATETREECONDITIONBASE___C___CCTOR_B__8_0_OFFSET))(this);
		}
	};
}
