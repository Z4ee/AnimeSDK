#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigEntityDirectionalBlurEffects; }
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_5C5D1BCD30A891BA_CLASS_1_1FC910018A5ADBBA_METHOD_1_64872DD45B300141_OFFSET UNITYSDK_OFFSET(0x156FCB90)
#define CLASS_1_5C5D1BCD30A891BA_CLASS_1_1FC910018A5ADBBA__CTOR_OFFSET UNITYSDK_OFFSET(0x156FCB80)

inline static constexpr unsigned int Class_1_5C5D1BCD30A891BA_Class_1_1FC910018A5ADBBA_TypeDefinitionIndex = 67651;

class Class_1_5C5D1BCD30A891BA_Class_1_1FC910018A5ADBBA : public ::System::Object
{
public:
	::System::Action* Field_1_7; // 0x10
	::System::Action_1<::MoleMole::Config::ConfigEntityDirectionalBlurEffects*>* Field_1_6; // 0x18
	::System::Int32 Field_1_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5C5D1BCD30A891BA_CLASS_1_1FC910018A5ADBBA__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_64872DD45B300141(::MoleMole::Config::ConfigEntityDirectionalBlurEffects* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigEntityDirectionalBlurEffects*))((::PBYTE)hIl2Cpp + CLASS_1_5C5D1BCD30A891BA_CLASS_1_1FC910018A5ADBBA_METHOD_1_64872DD45B300141_OFFSET))(this, a1);
	}
};
