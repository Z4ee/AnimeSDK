#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/Struct_2_87C8F594A107C13B.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_502;
class Class_0_16E4307DCC419505_503;

#define CLASS_1_42487500DF521EF5_APPLYVALUERULE_OFFSET UNITYSDK_OFFSET(0x1703A290)
#define CLASS_1_42487500DF521EF5_CREATE_OFFSET UNITYSDK_OFFSET(0x1703A200)
#define CLASS_1_42487500DF521EF5__CTOR_OFFSET UNITYSDK_OFFSET(0x1703A310)

inline static constexpr unsigned int Class_1_42487500DF521EF5_TypeDefinitionIndex = 54506;

class Class_1_42487500DF521EF5 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_42487500DF521EF5__CTOR_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_503* Create(::Class_0_16E4307DCC419505_502* a1)
	{
		return ((::Class_0_16E4307DCC419505_503*(*)(::PVOID, ::Class_0_16E4307DCC419505_502*))((::PBYTE)hIl2Cpp + CLASS_1_42487500DF521EF5_CREATE_OFFSET))(this, a1);
	}

	::System::Void ApplyValueRule(::Class_0_16E4307DCC419505_502* a1, ::RPG::GameCore::FixPoint& a2, ::Struct_2_87C8F594A107C13B& a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_502*, ::RPG::GameCore::FixPoint&, ::Struct_2_87C8F594A107C13B&))((::PBYTE)hIl2Cpp + CLASS_1_42487500DF521EF5_APPLYVALUERULE_OFFSET))(this, a1, a2, a3);
	}
};
