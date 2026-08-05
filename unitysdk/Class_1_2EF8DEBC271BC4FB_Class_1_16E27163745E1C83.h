#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigZipLineMap; }
namespace System { class Action; }

#define CLASS_1_2EF8DEBC271BC4FB_CLASS_1_16E27163745E1C83_METHOD_1_A8DF9C94973EDDBB_OFFSET UNITYSDK_OFFSET(0x17EE8840)
#define CLASS_1_2EF8DEBC271BC4FB_CLASS_1_16E27163745E1C83__CTOR_OFFSET UNITYSDK_OFFSET(0x17EE8830)

inline static constexpr unsigned int Class_1_2EF8DEBC271BC4FB_Class_1_16E27163745E1C83_TypeDefinitionIndex = 69575;

class Class_1_2EF8DEBC271BC4FB_Class_1_16E27163745E1C83 : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2EF8DEBC271BC4FB_CLASS_1_16E27163745E1C83__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_A8DF9C94973EDDBB(::MoleMole::Config::ConfigZipLineMap* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigZipLineMap*))((::PBYTE)hIl2Cpp + CLASS_1_2EF8DEBC271BC4FB_CLASS_1_16E27163745E1C83_METHOD_1_A8DF9C94973EDDBB_OFFSET))(this, a1);
	}
};
