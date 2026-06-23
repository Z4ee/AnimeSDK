#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigEntityScreenEffects; }
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_5C5D1BCD30A891BA_CLASS_1_A078DCD169921421_METHOD_1_B1500051234AC178_OFFSET UNITYSDK_OFFSET(0x13342DF0)
#define CLASS_1_5C5D1BCD30A891BA_CLASS_1_A078DCD169921421__CTOR_OFFSET UNITYSDK_OFFSET(0x13342DE0)

inline static constexpr unsigned int Class_1_5C5D1BCD30A891BA_Class_1_A078DCD169921421_TypeDefinitionIndex = 77460;

class Class_1_5C5D1BCD30A891BA_Class_1_A078DCD169921421 : public ::System::Object
{
public:
	::System::Action* Field_1_1; // 0x10
	::System::Action_1<::MoleMole::Config::ConfigEntityScreenEffects*>* Field_1_2; // 0x18
	::System::Int32 Field_1_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5C5D1BCD30A891BA_CLASS_1_A078DCD169921421__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_B1500051234AC178(::MoleMole::Config::ConfigEntityScreenEffects* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigEntityScreenEffects*))((::PBYTE)hIl2Cpp + CLASS_1_5C5D1BCD30A891BA_CLASS_1_A078DCD169921421_METHOD_1_B1500051234AC178_OFFSET))(this, a1);
	}
};
