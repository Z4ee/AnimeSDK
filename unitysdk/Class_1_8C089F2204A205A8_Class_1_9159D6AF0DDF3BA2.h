#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigGoalPath; }
namespace System { class Action; }

#define CLASS_1_8C089F2204A205A8_CLASS_1_9159D6AF0DDF3BA2_METHOD_1_25B659FD2CF426D1_OFFSET UNITYSDK_OFFSET(0x1AE77880)
#define CLASS_1_8C089F2204A205A8_CLASS_1_9159D6AF0DDF3BA2__CTOR_OFFSET UNITYSDK_OFFSET(0x1AE77870)

inline static constexpr unsigned int Class_1_8C089F2204A205A8_Class_1_9159D6AF0DDF3BA2_TypeDefinitionIndex = 69125;

class Class_1_8C089F2204A205A8_Class_1_9159D6AF0DDF3BA2 : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8C089F2204A205A8_CLASS_1_9159D6AF0DDF3BA2__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_25B659FD2CF426D1(::MoleMole::Config::ConfigGoalPath* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigGoalPath*))((::PBYTE)hIl2Cpp + CLASS_1_8C089F2204A205A8_CLASS_1_9159D6AF0DDF3BA2_METHOD_1_25B659FD2CF426D1_OFFSET))(this, a1);
	}
};
