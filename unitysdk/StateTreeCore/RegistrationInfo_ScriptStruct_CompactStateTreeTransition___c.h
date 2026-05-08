#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnrealTypes { class ICppStructOps; }

#define STATETREECORE_REGISTRATIONINFO_SCRIPTSTRUCT_COMPACTSTATETREETRANSITION___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C4D5FA0)
#define STATETREECORE_REGISTRATIONINFO_SCRIPTSTRUCT_COMPACTSTATETREETRANSITION___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1C4D5FE0)
#define STATETREECORE_REGISTRATIONINFO_SCRIPTSTRUCT_COMPACTSTATETREETRANSITION___C___CCTOR_B__15_0_OFFSET UNITYSDK_OFFSET(0x1C4D5FF0)

namespace StateTreeCore
{
	inline static constexpr unsigned int RegistrationInfo_ScriptStruct_CompactStateTreeTransition___c_TypeDefinitionIndex = 28443;

	class RegistrationInfo_ScriptStruct_CompactStateTreeTransition___c : public ::System::Object
	{
	public:
		static ::StateTreeCore::RegistrationInfo_ScriptStruct_CompactStateTreeTransition___c** StaticGet___9()
		{
			return (::StateTreeCore::RegistrationInfo_ScriptStruct_CompactStateTreeTransition___c**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_CompactStateTreeTransition___c_TypeDefinitionIndex)->GetStaticField(0x21700);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STATETREECORE_REGISTRATIONINFO_SCRIPTSTRUCT_COMPACTSTATETREETRANSITION___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_REGISTRATIONINFO_SCRIPTSTRUCT_COMPACTSTATETREETRANSITION___C__CTOR_OFFSET))(this);
		}

		::UnrealTypes::ICppStructOps* __cctor_b__15_0()
		{
			return ((::UnrealTypes::ICppStructOps*(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_REGISTRATIONINFO_SCRIPTSTRUCT_COMPACTSTATETREETRANSITION___C___CCTOR_B__15_0_OFFSET))(this);
		}
	};
}
