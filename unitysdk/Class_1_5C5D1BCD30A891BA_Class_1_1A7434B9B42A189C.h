#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigEntityCharacterIgnisFatuusEffects; }
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_5C5D1BCD30A891BA_CLASS_1_1A7434B9B42A189C_METHOD_1_8BB4D78EFA8952FF_OFFSET UNITYSDK_OFFSET(0x113D7750)
#define CLASS_1_5C5D1BCD30A891BA_CLASS_1_1A7434B9B42A189C__CTOR_OFFSET UNITYSDK_OFFSET(0x113D7740)

inline static constexpr unsigned int Class_1_5C5D1BCD30A891BA_Class_1_1A7434B9B42A189C_TypeDefinitionIndex = 77458;

class Class_1_5C5D1BCD30A891BA_Class_1_1A7434B9B42A189C : public ::System::Object
{
public:
	::System::Action_1<::MoleMole::Config::ConfigEntityCharacterIgnisFatuusEffects*>* Field_1_2; // 0x10
	::System::Action* Field_1_1; // 0x18
	::System::Int32 Field_1_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5C5D1BCD30A891BA_CLASS_1_1A7434B9B42A189C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_8BB4D78EFA8952FF(::MoleMole::Config::ConfigEntityCharacterIgnisFatuusEffects* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigEntityCharacterIgnisFatuusEffects*))((::PBYTE)hIl2Cpp + CLASS_1_5C5D1BCD30A891BA_CLASS_1_1A7434B9B42A189C_METHOD_1_8BB4D78EFA8952FF_OFFSET))(this, a1);
	}
};
