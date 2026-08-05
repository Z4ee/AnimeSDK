#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigEntityLiftGammaGainEffects; }
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_5C5D1BCD30A891BA_CLASS_1_08830DA37182E024_METHOD_1_862963BA23D4DCC5_OFFSET UNITYSDK_OFFSET(0x158F2490)
#define CLASS_1_5C5D1BCD30A891BA_CLASS_1_08830DA37182E024__CTOR_OFFSET UNITYSDK_OFFSET(0x158F2480)

inline static constexpr unsigned int Class_1_5C5D1BCD30A891BA_Class_1_08830DA37182E024_TypeDefinitionIndex = 67625;

class Class_1_5C5D1BCD30A891BA_Class_1_08830DA37182E024 : public ::System::Object
{
public:
	::System::Action* Field_1_1; // 0x10
	::System::Action_1<::MoleMole::Config::ConfigEntityLiftGammaGainEffects*>* Field_1_0; // 0x18
	::System::Int32 Field_1_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5C5D1BCD30A891BA_CLASS_1_08830DA37182E024__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_862963BA23D4DCC5(::MoleMole::Config::ConfigEntityLiftGammaGainEffects* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigEntityLiftGammaGainEffects*))((::PBYTE)hIl2Cpp + CLASS_1_5C5D1BCD30A891BA_CLASS_1_08830DA37182E024_METHOD_1_862963BA23D4DCC5_OFFSET))(this, a1);
	}
};
