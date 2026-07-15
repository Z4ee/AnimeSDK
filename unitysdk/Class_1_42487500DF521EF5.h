#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/Struct_2_87C8F594A107C13B.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_467;
class Class_0_16E4307DCC419505_468;

#define CLASS_1_42487500DF521EF5_APPLYVALUERULE_OFFSET UNITYSDK_OFFSET(0x15EC8040)
#define CLASS_1_42487500DF521EF5_CREATE_OFFSET UNITYSDK_OFFSET(0x15EC7FB0)
#define CLASS_1_42487500DF521EF5__CTOR_OFFSET UNITYSDK_OFFSET(0x15EC80C0)

inline static constexpr unsigned int Class_1_42487500DF521EF5_TypeDefinitionIndex = 51822;

class Class_1_42487500DF521EF5 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_42487500DF521EF5__CTOR_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_468* Create(::Class_0_16E4307DCC419505_467* a1)
	{
		return ((::Class_0_16E4307DCC419505_468*(*)(::PVOID, ::Class_0_16E4307DCC419505_467*))((::PBYTE)hIl2Cpp + CLASS_1_42487500DF521EF5_CREATE_OFFSET))(this, a1);
	}

	::System::Void ApplyValueRule(::Class_0_16E4307DCC419505_467* a1, ::RPG::GameCore::FixPoint& a2, ::Struct_2_87C8F594A107C13B& a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_467*, ::RPG::GameCore::FixPoint&, ::Struct_2_87C8F594A107C13B&))((::PBYTE)hIl2Cpp + CLASS_1_42487500DF521EF5_APPLYVALUERULE_OFFSET))(this, a1, a2, a3);
	}
};
