#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnrealTypes { class ICppStructOps; }

#define STATETREECORE_REGISTRATIONINFO_SCRIPTSTRUCT_COMPACTSTATETREEPARAMETERS___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C44D320)
#define STATETREECORE_REGISTRATIONINFO_SCRIPTSTRUCT_COMPACTSTATETREEPARAMETERS___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1C44D360)
#define STATETREECORE_REGISTRATIONINFO_SCRIPTSTRUCT_COMPACTSTATETREEPARAMETERS___C___CCTOR_B__4_0_OFFSET UNITYSDK_OFFSET(0x1C44D370)

namespace StateTreeCore
{
	inline static constexpr unsigned int RegistrationInfo_ScriptStruct_CompactStateTreeParameters___c_TypeDefinitionIndex = 28447;

	class RegistrationInfo_ScriptStruct_CompactStateTreeParameters___c : public ::System::Object
	{
	public:
		static ::StateTreeCore::RegistrationInfo_ScriptStruct_CompactStateTreeParameters___c** StaticGet___9()
		{
			return (::StateTreeCore::RegistrationInfo_ScriptStruct_CompactStateTreeParameters___c**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_CompactStateTreeParameters___c_TypeDefinitionIndex)->GetStaticField(0x215F0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STATETREECORE_REGISTRATIONINFO_SCRIPTSTRUCT_COMPACTSTATETREEPARAMETERS___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_REGISTRATIONINFO_SCRIPTSTRUCT_COMPACTSTATETREEPARAMETERS___C__CTOR_OFFSET))(this);
		}

		::UnrealTypes::ICppStructOps* __cctor_b__4_0()
		{
			return ((::UnrealTypes::ICppStructOps*(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_REGISTRATIONINFO_SCRIPTSTRUCT_COMPACTSTATETREEPARAMETERS___C___CCTOR_B__4_0_OFFSET))(this);
		}
	};
}
