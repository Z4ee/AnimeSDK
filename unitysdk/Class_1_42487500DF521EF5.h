#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/Struct_2_87C8F594A107C13B.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_590;
class Class_0_16E4307DCC419505_591;

#define CLASS_1_42487500DF521EF5_APPLYVALUERULE_OFFSET UNITYSDK_OFFSET(0xBB23CB0)
#define CLASS_1_42487500DF521EF5_CREATE_OFFSET UNITYSDK_OFFSET(0xBB23C20)
#define CLASS_1_42487500DF521EF5__CTOR_OFFSET UNITYSDK_OFFSET(0xBB23D30)

inline static constexpr unsigned int Class_1_42487500DF521EF5_TypeDefinitionIndex = 54292;

class Class_1_42487500DF521EF5 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_42487500DF521EF5__CTOR_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_591* Create(::Class_0_16E4307DCC419505_590* a1)
	{
		return ((::Class_0_16E4307DCC419505_591*(*)(::PVOID, ::Class_0_16E4307DCC419505_590*))((::PBYTE)hIl2Cpp + CLASS_1_42487500DF521EF5_CREATE_OFFSET))(this, a1);
	}

	::System::Void ApplyValueRule(::Class_0_16E4307DCC419505_590* a1, ::RPG::GameCore::FixPoint& a2, ::Struct_2_87C8F594A107C13B& a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_590*, ::RPG::GameCore::FixPoint&, ::Struct_2_87C8F594A107C13B&))((::PBYTE)hIl2Cpp + CLASS_1_42487500DF521EF5_APPLYVALUERULE_OFFSET))(this, a1, a2, a3);
	}
};
