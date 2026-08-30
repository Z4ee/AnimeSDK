#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_F49CA2983DD8D8E6.h"
#include "unitysdk/RPG/GameCore/AnimStateLogicType.h"

class Class_1_CB986F8DD1655D73;
class Class_1_DB457F2E821DD51D;
class Class_2_2461A19B320A03F9;
namespace RPG::GameCore { class GameEntity; }

#define CLASS_2_E2EF04895810D264_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16E90500)
#define CLASS_2_E2EF04895810D264_METHOD_2_1B9BCD64F419AAE9_OFFSET UNITYSDK_OFFSET(0x16E90550)
#define CLASS_2_E2EF04895810D264_METHOD_2_4E30FEEB9D0D4E0D_OFFSET UNITYSDK_OFFSET(0x16E90720)
#define CLASS_2_E2EF04895810D264_METHOD_2_9620EFC2FE8E11F5_OFFSET UNITYSDK_OFFSET(0x16E90590)
#define CLASS_2_E2EF04895810D264__CTOR_OFFSET UNITYSDK_OFFSET(0x16E904E0)

inline static constexpr unsigned int Class_2_E2EF04895810D264_TypeDefinitionIndex = 56115;

class Class_2_E2EF04895810D264 : public ::Class_1_F49CA2983DD8D8E6
{
public:
	::RPG::GameCore::AnimStateLogicType ENIIFGJIIBF; // 0x30

	::System::Void _ctor(::RPG::GameCore::GameEntity* a1, ::Class_2_2461A19B320A03F9* a2, ::Class_1_DB457F2E821DD51D* a3, ::RPG::GameCore::AnimStateLogicType a4)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::Class_2_2461A19B320A03F9*, ::Class_1_DB457F2E821DD51D*, ::RPG::GameCore::AnimStateLogicType))((::PBYTE)hIl2Cpp + CLASS_2_E2EF04895810D264__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E2EF04895810D264_DISPOSE_OFFSET))(this);
	}

	::RPG::GameCore::AnimStateLogicType Method_2_1B9BCD64F419AAE9()
	{
		return ((::RPG::GameCore::AnimStateLogicType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E2EF04895810D264_METHOD_2_1B9BCD64F419AAE9_OFFSET))(this);
	}

	::System::Void Method_2_9620EFC2FE8E11F5(::RPG::GameCore::AnimStateLogicType a1, ::Class_1_CB986F8DD1655D73* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AnimStateLogicType, ::Class_1_CB986F8DD1655D73*))((::PBYTE)hIl2Cpp + CLASS_2_E2EF04895810D264_METHOD_2_9620EFC2FE8E11F5_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_4E30FEEB9D0D4E0D(::RPG::GameCore::AnimStateLogicType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AnimStateLogicType))((::PBYTE)hIl2Cpp + CLASS_2_E2EF04895810D264_METHOD_2_4E30FEEB9D0D4E0D_OFFSET))(this, a1);
	}
};
