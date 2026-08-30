#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LightningStrikeAreDisableReason.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define CLASS_3_09376A7DCD92D0D0_METHOD_3_B4C09A5853E73B8A_OFFSET UNITYSDK_OFFSET(0x1CC5EA70)
#define CLASS_3_09376A7DCD92D0D0_METHOD_3_C6C799B3DFBE236B_OFFSET UNITYSDK_OFFSET(0x1CC5EA30)
#define CLASS_3_09376A7DCD92D0D0__CTOR_OFFSET UNITYSDK_OFFSET(0x1CC5EA60)

inline static constexpr unsigned int Class_3_09376A7DCD92D0D0_TypeDefinitionIndex = 20840;

class Class_3_09376A7DCD92D0D0 : public ::RPG::GameCore::TaskConfig
{
public:
	::RPG::GameCore::TargetEvaluator* EGMDGDCHCOI; // 0x18
	::RPG::GameCore::LightningStrikeAreDisableReason KDHPKOFLNFM; // 0x20
	::System::Boolean BBLMMNLCMGM; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_09376A7DCD92D0D0__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_C6C799B3DFBE236B(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_09376A7DCD92D0D0*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_09376A7DCD92D0D0*&))((::PBYTE)hIl2Cpp + CLASS_3_09376A7DCD92D0D0_METHOD_3_C6C799B3DFBE236B_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_B4C09A5853E73B8A(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_09376A7DCD92D0D0* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_09376A7DCD92D0D0*))((::PBYTE)hIl2Cpp + CLASS_3_09376A7DCD92D0D0_METHOD_3_B4C09A5853E73B8A_OFFSET))(a1, a2);
	}
};
