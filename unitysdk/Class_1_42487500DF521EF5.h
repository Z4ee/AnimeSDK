#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/Struct_2_310B46602BEB4586.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_424;
class Class_0_16E4307DCC419505_425;

#define CLASS_1_42487500DF521EF5_APPLYVALUERULE_OFFSET UNITYSDK_OFFSET(0xB48E8F0)
#define CLASS_1_42487500DF521EF5_CREATE_OFFSET UNITYSDK_OFFSET(0xB48E860)
#define CLASS_1_42487500DF521EF5__CTOR_OFFSET UNITYSDK_OFFSET(0xB48E970)

inline static constexpr unsigned int Class_1_42487500DF521EF5_TypeDefinitionIndex = 50073;

class Class_1_42487500DF521EF5 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_42487500DF521EF5__CTOR_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_425* Create(::Class_0_16E4307DCC419505_424* a1)
	{
		return ((::Class_0_16E4307DCC419505_425*(*)(::PVOID, ::Class_0_16E4307DCC419505_424*))((::PBYTE)hIl2Cpp + CLASS_1_42487500DF521EF5_CREATE_OFFSET))(this, a1);
	}

	::System::Void ApplyValueRule(::Class_0_16E4307DCC419505_424* a1, ::RPG::GameCore::FixPoint& a2, ::Struct_2_310B46602BEB4586& a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_424*, ::RPG::GameCore::FixPoint&, ::Struct_2_310B46602BEB4586&))((::PBYTE)hIl2Cpp + CLASS_1_42487500DF521EF5_APPLYVALUERULE_OFFSET))(this, a1, a2, a3);
	}
};
