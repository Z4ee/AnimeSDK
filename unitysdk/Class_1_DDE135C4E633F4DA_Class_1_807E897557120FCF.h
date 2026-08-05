#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigHackerDrone; }
namespace System { class Action; }

#define CLASS_1_DDE135C4E633F4DA_CLASS_1_807E897557120FCF_METHOD_1_4FF74D3DB4FB77D8_OFFSET UNITYSDK_OFFSET(0x171A6830)
#define CLASS_1_DDE135C4E633F4DA_CLASS_1_807E897557120FCF__CTOR_OFFSET UNITYSDK_OFFSET(0x171A6820)

inline static constexpr unsigned int Class_1_DDE135C4E633F4DA_Class_1_807E897557120FCF_TypeDefinitionIndex = 89040;

class Class_1_DDE135C4E633F4DA_Class_1_807E897557120FCF : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DDE135C4E633F4DA_CLASS_1_807E897557120FCF__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_4FF74D3DB4FB77D8(::MoleMole::Config::ConfigHackerDrone* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigHackerDrone*))((::PBYTE)hIl2Cpp + CLASS_1_DDE135C4E633F4DA_CLASS_1_807E897557120FCF_METHOD_1_4FF74D3DB4FB77D8_OFFSET))(this, a1);
	}
};
