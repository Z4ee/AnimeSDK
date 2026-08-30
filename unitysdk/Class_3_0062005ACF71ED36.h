#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ElationTimeAtmosphereShowNumberType.h"
#include "unitysdk/RPG/GameCore/ElationTimeAtmosphereType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define CLASS_3_0062005ACF71ED36_METHOD_3_18338215AC7BEB04_OFFSET UNITYSDK_OFFSET(0x1B49EE80)
#define CLASS_3_0062005ACF71ED36_METHOD_3_F32CA7BD1D486055_OFFSET UNITYSDK_OFFSET(0x1B49EE30)
#define CLASS_3_0062005ACF71ED36__CTOR_OFFSET UNITYSDK_OFFSET(0x1B49EE70)

inline static constexpr unsigned int Class_3_0062005ACF71ED36_TypeDefinitionIndex = 22367;

class Class_3_0062005ACF71ED36 : public ::RPG::GameCore::TaskConfig
{
public:
	::RPG::GameCore::TargetEvaluator* HILNFHCPEAD; // 0x18
	::RPG::GameCore::ElationTimeAtmosphereType GMPGDEINODK; // 0x20
	::RPG::GameCore::ElationTimeAtmosphereShowNumberType CBFGKOPANAK; // 0x24
	::System::Boolean FGFILICHKOH; // 0x28
	::System::Boolean GNDCCBNILML; // 0x29

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0062005ACF71ED36__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_F32CA7BD1D486055(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_0062005ACF71ED36*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_0062005ACF71ED36*&))((::PBYTE)hIl2Cpp + CLASS_3_0062005ACF71ED36_METHOD_3_F32CA7BD1D486055_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_18338215AC7BEB04(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_0062005ACF71ED36* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_0062005ACF71ED36*))((::PBYTE)hIl2Cpp + CLASS_3_0062005ACF71ED36_METHOD_3_18338215AC7BEB04_OFFSET))(a1, a2);
	}
};
