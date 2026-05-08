#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigEntityWhiteBalanceEffects; }
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_5C5D1BCD30A891BA_CLASS_1_FE08CF684ABB8B86_METHOD_1_E5B4276816A69D05_OFFSET UNITYSDK_OFFSET(0x15955540)
#define CLASS_1_5C5D1BCD30A891BA_CLASS_1_FE08CF684ABB8B86__CTOR_OFFSET UNITYSDK_OFFSET(0x15955530)

inline static constexpr unsigned int Class_1_5C5D1BCD30A891BA_Class_1_FE08CF684ABB8B86_TypeDefinitionIndex = 69915;

class Class_1_5C5D1BCD30A891BA_Class_1_FE08CF684ABB8B86 : public ::System::Object
{
public:
	::System::Action_1<::MoleMole::Config::ConfigEntityWhiteBalanceEffects*>* Field_1_2; // 0x10
	::System::Action* Field_1_1; // 0x18
	::System::Int32 Field_1_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5C5D1BCD30A891BA_CLASS_1_FE08CF684ABB8B86__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_E5B4276816A69D05(::MoleMole::Config::ConfigEntityWhiteBalanceEffects* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigEntityWhiteBalanceEffects*))((::PBYTE)hIl2Cpp + CLASS_1_5C5D1BCD30A891BA_CLASS_1_FE08CF684ABB8B86_METHOD_1_E5B4276816A69D05_OFFSET))(this, a1);
	}
};
