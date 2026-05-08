#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnrealTypes { class ICppStructOps; }

#define STATETREECORE_REGISTRATIONINFO_SCRIPTSTRUCT_STATETREESTATEHANDLE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C4D6080)
#define STATETREECORE_REGISTRATIONINFO_SCRIPTSTRUCT_STATETREESTATEHANDLE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1C4D60C0)
#define STATETREECORE_REGISTRATIONINFO_SCRIPTSTRUCT_STATETREESTATEHANDLE___C___CCTOR_B__4_0_OFFSET UNITYSDK_OFFSET(0x1C4D60D0)

namespace StateTreeCore
{
	inline static constexpr unsigned int RegistrationInfo_ScriptStruct_StateTreeStateHandle___c_TypeDefinitionIndex = 28435;

	class RegistrationInfo_ScriptStruct_StateTreeStateHandle___c : public ::System::Object
	{
	public:
		static ::StateTreeCore::RegistrationInfo_ScriptStruct_StateTreeStateHandle___c** StaticGet___9()
		{
			return (::StateTreeCore::RegistrationInfo_ScriptStruct_StateTreeStateHandle___c**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_StateTreeStateHandle___c_TypeDefinitionIndex)->GetStaticField(0x215A0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STATETREECORE_REGISTRATIONINFO_SCRIPTSTRUCT_STATETREESTATEHANDLE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_REGISTRATIONINFO_SCRIPTSTRUCT_STATETREESTATEHANDLE___C__CTOR_OFFSET))(this);
		}

		::UnrealTypes::ICppStructOps* __cctor_b__4_0()
		{
			return ((::UnrealTypes::ICppStructOps*(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_REGISTRATIONINFO_SCRIPTSTRUCT_STATETREESTATEHANDLE___C___CCTOR_B__4_0_OFFSET))(this);
		}
	};
}
