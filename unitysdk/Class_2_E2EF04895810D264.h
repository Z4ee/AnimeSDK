#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_F49CA2983DD8D8E6.h"
#include "unitysdk/RPG/GameCore/AnimStateLogicType.h"

class Class_1_8632A9A99C579E84;
class Class_1_DB457F2E821DD51D;
class Class_2_1DBE0E1023AFDBC5;
namespace RPG::GameCore { class GameEntity; }

#define CLASS_2_E2EF04895810D264_DISPOSE_OFFSET UNITYSDK_OFFSET(0x99CE230)
#define CLASS_2_E2EF04895810D264_METHOD_2_1B9BCD64F419AAE9_OFFSET UNITYSDK_OFFSET(0x99CE280)
#define CLASS_2_E2EF04895810D264_METHOD_2_4E30FEEB9D0D4E0D_OFFSET UNITYSDK_OFFSET(0x99CE450)
#define CLASS_2_E2EF04895810D264_METHOD_2_EBE8F191C3D7CB8A_OFFSET UNITYSDK_OFFSET(0x99CE2C0)
#define CLASS_2_E2EF04895810D264__CTOR_OFFSET UNITYSDK_OFFSET(0x99CE210)

inline static constexpr unsigned int Class_2_E2EF04895810D264_TypeDefinitionIndex = 51580;

class Class_2_E2EF04895810D264 : public ::Class_1_F49CA2983DD8D8E6
{
public:
	::RPG::GameCore::AnimStateLogicType Field_2_0; // 0x30

	::System::Void _ctor(::RPG::GameCore::GameEntity* a1, ::Class_2_1DBE0E1023AFDBC5* a2, ::Class_1_DB457F2E821DD51D* a3, ::RPG::GameCore::AnimStateLogicType a4)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::Class_2_1DBE0E1023AFDBC5*, ::Class_1_DB457F2E821DD51D*, ::RPG::GameCore::AnimStateLogicType))((::PBYTE)hIl2Cpp + CLASS_2_E2EF04895810D264__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E2EF04895810D264_DISPOSE_OFFSET))(this);
	}

	::RPG::GameCore::AnimStateLogicType Method_2_1B9BCD64F419AAE9()
	{
		return ((::RPG::GameCore::AnimStateLogicType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E2EF04895810D264_METHOD_2_1B9BCD64F419AAE9_OFFSET))(this);
	}

	::System::Void Method_2_EBE8F191C3D7CB8A(::RPG::GameCore::AnimStateLogicType a1, ::Class_1_8632A9A99C579E84* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AnimStateLogicType, ::Class_1_8632A9A99C579E84*))((::PBYTE)hIl2Cpp + CLASS_2_E2EF04895810D264_METHOD_2_EBE8F191C3D7CB8A_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_4E30FEEB9D0D4E0D(::RPG::GameCore::AnimStateLogicType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AnimStateLogicType))((::PBYTE)hIl2Cpp + CLASS_2_E2EF04895810D264_METHOD_2_4E30FEEB9D0D4E0D_OFFSET))(this, a1);
	}
};
