#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_A474572029D08468;
namespace RPG::GameCore { class BattleInstance; }

#define CLASS_2_C5DF62D7DCF1980D_CLASS_1_B5E16AB8EEB1D2A0__CTOR_OFFSET UNITYSDK_OFFSET(0x185EF330)

inline static constexpr unsigned int Class_2_C5DF62D7DCF1980D_Class_1_B5E16AB8EEB1D2A0_TypeDefinitionIndex = 68614;

class Class_2_C5DF62D7DCF1980D_Class_1_B5E16AB8EEB1D2A0 : public ::System::Object
{
public:
	::Class_1_A474572029D08468* Field_1_0; // 0x10
	::RPG::GameCore::BattleInstance* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C5DF62D7DCF1980D_CLASS_1_B5E16AB8EEB1D2A0__CTOR_OFFSET))(this);
	}
};
