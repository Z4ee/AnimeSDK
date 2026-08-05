#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigGoalPath; }
namespace System { class Action; }

#define CLASS_1_8C089F2204A205A8_CLASS_1_318A3577E986730F_METHOD_1_6C43717FA21BCDB8_OFFSET UNITYSDK_OFFSET(0x124D8750)
#define CLASS_1_8C089F2204A205A8_CLASS_1_318A3577E986730F__CTOR_OFFSET UNITYSDK_OFFSET(0x124D8740)

inline static constexpr unsigned int Class_1_8C089F2204A205A8_Class_1_318A3577E986730F_TypeDefinitionIndex = 89154;

class Class_1_8C089F2204A205A8_Class_1_318A3577E986730F : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8C089F2204A205A8_CLASS_1_318A3577E986730F__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_6C43717FA21BCDB8(::MoleMole::Config::ConfigGoalPath* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigGoalPath*))((::PBYTE)hIl2Cpp + CLASS_1_8C089F2204A205A8_CLASS_1_318A3577E986730F_METHOD_1_6C43717FA21BCDB8_OFFSET))(this, a1);
	}
};
