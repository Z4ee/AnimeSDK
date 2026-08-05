#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigEntityScreenSpaceReflectionEffects; }
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_5C5D1BCD30A891BA_CLASS_1_07086E1E61EFCD2E_METHOD_1_AA75D3292BB07AEB_OFFSET UNITYSDK_OFFSET(0x18B91A60)
#define CLASS_1_5C5D1BCD30A891BA_CLASS_1_07086E1E61EFCD2E__CTOR_OFFSET UNITYSDK_OFFSET(0x18B91A50)

inline static constexpr unsigned int Class_1_5C5D1BCD30A891BA_Class_1_07086E1E61EFCD2E_TypeDefinitionIndex = 67643;

class Class_1_5C5D1BCD30A891BA_Class_1_07086E1E61EFCD2E : public ::System::Object
{
public:
	::System::Action_1<::MoleMole::Config::ConfigEntityScreenSpaceReflectionEffects*>* Field_1_7; // 0x10
	::System::Action* Field_1_0; // 0x18
	::System::Int32 Field_1_1; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5C5D1BCD30A891BA_CLASS_1_07086E1E61EFCD2E__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_AA75D3292BB07AEB(::MoleMole::Config::ConfigEntityScreenSpaceReflectionEffects* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigEntityScreenSpaceReflectionEffects*))((::PBYTE)hIl2Cpp + CLASS_1_5C5D1BCD30A891BA_CLASS_1_07086E1E61EFCD2E_METHOD_1_AA75D3292BB07AEB_OFFSET))(this, a1);
	}
};
