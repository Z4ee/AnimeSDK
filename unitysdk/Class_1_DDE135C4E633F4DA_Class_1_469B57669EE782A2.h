#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigHackerDrone; }
namespace System { class Action; }

#define CLASS_1_DDE135C4E633F4DA_CLASS_1_469B57669EE782A2_METHOD_1_0EE395D8E9FA5471_OFFSET UNITYSDK_OFFSET(0x13E2E690)
#define CLASS_1_DDE135C4E633F4DA_CLASS_1_469B57669EE782A2__CTOR_OFFSET UNITYSDK_OFFSET(0x13E2E680)

inline static constexpr unsigned int Class_1_DDE135C4E633F4DA_Class_1_469B57669EE782A2_TypeDefinitionIndex = 43206;

class Class_1_DDE135C4E633F4DA_Class_1_469B57669EE782A2 : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DDE135C4E633F4DA_CLASS_1_469B57669EE782A2__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_0EE395D8E9FA5471(::MoleMole::Config::ConfigHackerDrone* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigHackerDrone*))((::PBYTE)hIl2Cpp + CLASS_1_DDE135C4E633F4DA_CLASS_1_469B57669EE782A2_METHOD_1_0EE395D8E9FA5471_OFFSET))(this, a1);
	}
};
