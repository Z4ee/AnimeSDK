#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnrealTypes { class ICppStructOps; }

#define STATETREECORE_REGISTRATIONINFO_SCRIPTSTRUCT_STATETREE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1FC2F750)
#define STATETREECORE_REGISTRATIONINFO_SCRIPTSTRUCT_STATETREE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1FC2F790)
#define STATETREECORE_REGISTRATIONINFO_SCRIPTSTRUCT_STATETREE___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1FC2F7A0)

namespace StateTreeCore
{
	inline static constexpr unsigned int RegistrationInfo_ScriptStruct_StateTree___c_TypeDefinitionIndex = 31520;

	class RegistrationInfo_ScriptStruct_StateTree___c : public ::System::Object
	{
	public:
		static ::StateTreeCore::RegistrationInfo_ScriptStruct_StateTree___c** StaticGet___9()
		{
			return (::StateTreeCore::RegistrationInfo_ScriptStruct_StateTree___c**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_StateTree___c_TypeDefinitionIndex)->GetStaticField(0x26940);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STATETREECORE_REGISTRATIONINFO_SCRIPTSTRUCT_STATETREE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_REGISTRATIONINFO_SCRIPTSTRUCT_STATETREE___C__CTOR_OFFSET))(this);
		}

		::UnrealTypes::ICppStructOps* __cctor_b__23_0()
		{
			return ((::UnrealTypes::ICppStructOps*(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_REGISTRATIONINFO_SCRIPTSTRUCT_STATETREE___C___CCTOR_B__23_0_OFFSET))(this);
		}
	};
}
