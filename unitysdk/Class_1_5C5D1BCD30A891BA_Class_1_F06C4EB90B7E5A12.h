#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigEntityShadowsMidtonesHighlightsEffects; }
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_5C5D1BCD30A891BA_CLASS_1_F06C4EB90B7E5A12_METHOD_1_A076548AE4CDB6AB_OFFSET UNITYSDK_OFFSET(0x14FCD490)
#define CLASS_1_5C5D1BCD30A891BA_CLASS_1_F06C4EB90B7E5A12__CTOR_OFFSET UNITYSDK_OFFSET(0x14FCD480)

inline static constexpr unsigned int Class_1_5C5D1BCD30A891BA_Class_1_F06C4EB90B7E5A12_TypeDefinitionIndex = 67624;

class Class_1_5C5D1BCD30A891BA_Class_1_F06C4EB90B7E5A12 : public ::System::Object
{
public:
	::System::Action* Field_1_1; // 0x10
	::System::Action_1<::MoleMole::Config::ConfigEntityShadowsMidtonesHighlightsEffects*>* Field_1_0; // 0x18
	::System::Int32 Field_1_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5C5D1BCD30A891BA_CLASS_1_F06C4EB90B7E5A12__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_A076548AE4CDB6AB(::MoleMole::Config::ConfigEntityShadowsMidtonesHighlightsEffects* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigEntityShadowsMidtonesHighlightsEffects*))((::PBYTE)hIl2Cpp + CLASS_1_5C5D1BCD30A891BA_CLASS_1_F06C4EB90B7E5A12_METHOD_1_A076548AE4CDB6AB_OFFSET))(this, a1);
	}
};
