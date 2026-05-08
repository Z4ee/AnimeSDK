#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnrealTypes { class ICppStructOps; }

#define STATETREECORE_REGISTRATIONINFO_SCRIPTSTRUCT_STATETREEINSTANCEDATA___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C412C90)
#define STATETREECORE_REGISTRATIONINFO_SCRIPTSTRUCT_STATETREEINSTANCEDATA___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1C412CD0)
#define STATETREECORE_REGISTRATIONINFO_SCRIPTSTRUCT_STATETREEINSTANCEDATA___C___CCTOR_B__4_0_OFFSET UNITYSDK_OFFSET(0x1C412CE0)

namespace StateTreeCore
{
	inline static constexpr unsigned int RegistrationInfo_ScriptStruct_StateTreeInstanceData___c_TypeDefinitionIndex = 28324;

	class RegistrationInfo_ScriptStruct_StateTreeInstanceData___c : public ::System::Object
	{
	public:
		static ::StateTreeCore::RegistrationInfo_ScriptStruct_StateTreeInstanceData___c** StaticGet___9()
		{
			return (::StateTreeCore::RegistrationInfo_ScriptStruct_StateTreeInstanceData___c**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_StateTreeInstanceData___c_TypeDefinitionIndex)->GetStaticField(0x21710);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STATETREECORE_REGISTRATIONINFO_SCRIPTSTRUCT_STATETREEINSTANCEDATA___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_REGISTRATIONINFO_SCRIPTSTRUCT_STATETREEINSTANCEDATA___C__CTOR_OFFSET))(this);
		}

		::UnrealTypes::ICppStructOps* __cctor_b__4_0()
		{
			return ((::UnrealTypes::ICppStructOps*(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_REGISTRATIONINFO_SCRIPTSTRUCT_STATETREEINSTANCEDATA___C___CCTOR_B__4_0_OFFSET))(this);
		}
	};
}
