#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigEntityNapContactShadowEffects; }
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_5C5D1BCD30A891BA_CLASS_1_129C7EDA974D1AC8_METHOD_1_8FCF84847CEC2B73_OFFSET UNITYSDK_OFFSET(0x168EC000)
#define CLASS_1_5C5D1BCD30A891BA_CLASS_1_129C7EDA974D1AC8__CTOR_OFFSET UNITYSDK_OFFSET(0x168E67B0)

inline static constexpr unsigned int Class_1_5C5D1BCD30A891BA_Class_1_129C7EDA974D1AC8_TypeDefinitionIndex = 77463;

class Class_1_5C5D1BCD30A891BA_Class_1_129C7EDA974D1AC8 : public ::System::Object
{
public:
	::System::Action* Field_1_1; // 0x10
	::System::Action_1<::MoleMole::Config::ConfigEntityNapContactShadowEffects*>* Field_1_2; // 0x18
	::System::Int32 Field_1_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5C5D1BCD30A891BA_CLASS_1_129C7EDA974D1AC8__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_8FCF84847CEC2B73(::MoleMole::Config::ConfigEntityNapContactShadowEffects* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigEntityNapContactShadowEffects*))((::PBYTE)hIl2Cpp + CLASS_1_5C5D1BCD30A891BA_CLASS_1_129C7EDA974D1AC8_METHOD_1_8FCF84847CEC2B73_OFFSET))(this, a1);
	}
};
