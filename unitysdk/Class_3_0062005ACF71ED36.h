#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ElationTimeAtmosphereShowNumberType.h"
#include "unitysdk/RPG/GameCore/ElationTimeAtmosphereType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define CLASS_3_0062005ACF71ED36_METHOD_3_18338215AC7BEB04_OFFSET UNITYSDK_OFFSET(0x191EDBD0)
#define CLASS_3_0062005ACF71ED36_METHOD_3_FF096862EF90B096_OFFSET UNITYSDK_OFFSET(0x191EDB50)
#define CLASS_3_0062005ACF71ED36__CTOR_OFFSET UNITYSDK_OFFSET(0x191EDBA0)

inline static constexpr unsigned int Class_3_0062005ACF71ED36_TypeDefinitionIndex = 21385;

class Class_3_0062005ACF71ED36 : public ::RPG::GameCore::TaskConfig
{
public:
	::RPG::GameCore::TargetEvaluator* Field_3_0; // 0x18
	::RPG::GameCore::ElationTimeAtmosphereShowNumberType Field_3_1; // 0x20
	::RPG::GameCore::ElationTimeAtmosphereType Field_3_2; // 0x24
	::System::Boolean Field_3_3; // 0x28
	::System::Boolean Field_3_4; // 0x29

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0062005ACF71ED36__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_FF096862EF90B096(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_0062005ACF71ED36*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_0062005ACF71ED36*&))((::PBYTE)hIl2Cpp + CLASS_3_0062005ACF71ED36_METHOD_3_FF096862EF90B096_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_18338215AC7BEB04(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_0062005ACF71ED36* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_0062005ACF71ED36*))((::PBYTE)hIl2Cpp + CLASS_3_0062005ACF71ED36_METHOD_3_18338215AC7BEB04_OFFSET))(a1, a2);
	}
};
