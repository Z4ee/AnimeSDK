#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigGachaPerformanceEffects; }
namespace System { class Action; }

#define CLASS_1_5893027ACC0762C1_CLASS_1_B6FDA393C95E0773_METHOD_1_8FB3708EEEC86DB6_OFFSET UNITYSDK_OFFSET(0x16DE2DC0)
#define CLASS_1_5893027ACC0762C1_CLASS_1_B6FDA393C95E0773__CTOR_OFFSET UNITYSDK_OFFSET(0x16DE2DB0)

inline static constexpr unsigned int Class_1_5893027ACC0762C1_Class_1_B6FDA393C95E0773_TypeDefinitionIndex = 81185;

class Class_1_5893027ACC0762C1_Class_1_B6FDA393C95E0773 : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5893027ACC0762C1_CLASS_1_B6FDA393C95E0773__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_8FB3708EEEC86DB6(::MoleMole::Config::ConfigGachaPerformanceEffects* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigGachaPerformanceEffects*))((::PBYTE)hIl2Cpp + CLASS_1_5893027ACC0762C1_CLASS_1_B6FDA393C95E0773_METHOD_1_8FB3708EEEC86DB6_OFFSET))(this, a1);
	}
};
