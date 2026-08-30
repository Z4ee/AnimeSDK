#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_F49CA2983DD8D8E6.h"
#include "unitysdk/RPG/GameCore/AnimStateLogicType.h"

class Class_1_CB986F8DD1655D73;
class Class_1_CC76D1702CC17C09_6;
class Class_1_DB457F2E821DD51D;
class Class_2_2461A19B320A03F9;
namespace RPG::GameCore { class CharacterDataComponent; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class SkillCharacterComponent; }
namespace RPG::GameCore { class SkillConfig; }
namespace RPG::GameCore { class SkillData; }

#define CLASS_2_2676F57CB476901C_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC0C1100)
#define CLASS_2_2676F57CB476901C_METHOD_2_0F76D2A38DFBC84F_OFFSET UNITYSDK_OFFSET(0xC0C15D0)
#define CLASS_2_2676F57CB476901C_METHOD_2_1B9BCD64F419AAE9_OFFSET UNITYSDK_OFFSET(0xC0C1140)
#define CLASS_2_2676F57CB476901C_METHOD_2_595E641DF1B4387D_OFFSET UNITYSDK_OFFSET(0xC0C1E40)
#define CLASS_2_2676F57CB476901C_METHOD_2_62330CC299C646C7_OFFSET UNITYSDK_OFFSET(0xC0C1190)
#define CLASS_2_2676F57CB476901C_METHOD_2_628B9EF69E7FDAF3_OFFSET UNITYSDK_OFFSET(0xC0C14D0)
#define CLASS_2_2676F57CB476901C_METHOD_2_783D289DA90BA019_OFFSET UNITYSDK_OFFSET(0xC0C1C70)
#define CLASS_2_2676F57CB476901C_METHOD_2_7998F8CA1E002410_OFFSET UNITYSDK_OFFSET(0xC0C1CD0)
#define CLASS_2_2676F57CB476901C_METHOD_2_B1722B90F1E60E32_OFFSET UNITYSDK_OFFSET(0xC0C1FD0)
#define CLASS_2_2676F57CB476901C_METHOD_2_D240830C442C70A4_OFFSET UNITYSDK_OFFSET(0xC0C1570)
#define CLASS_2_2676F57CB476901C_METHOD_2_E707E527CA6452F2_OFFSET UNITYSDK_OFFSET(0xC0C1640)
#define CLASS_2_2676F57CB476901C__CTOR_OFFSET UNITYSDK_OFFSET(0xC0C1070)

inline static constexpr unsigned int Class_2_2676F57CB476901C_TypeDefinitionIndex = 56125;

class Class_2_2676F57CB476901C : public ::Class_1_F49CA2983DD8D8E6
{
public:
	::RPG::GameCore::SkillCharacterComponent* KBDBKHPNJHC; // 0x30
	::Class_1_CB986F8DD1655D73* LJOAMDHBBLH; // 0x38
	::Class_1_CC76D1702CC17C09_6* BFOFNGCJOOK; // 0x40
	::RPG::GameCore::CharacterDataComponent* HKCICBFPGGF; // 0x48
	::System::Int32 DMKHAFAGKKC; // 0x50

	::System::Void _ctor(::RPG::GameCore::GameEntity* a1, ::Class_2_2461A19B320A03F9* a2, ::Class_1_DB457F2E821DD51D* a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::Class_2_2461A19B320A03F9*, ::Class_1_DB457F2E821DD51D*))((::PBYTE)hIl2Cpp + CLASS_2_2676F57CB476901C__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2676F57CB476901C_DISPOSE_OFFSET))(this);
	}

	::RPG::GameCore::AnimStateLogicType Method_2_1B9BCD64F419AAE9()
	{
		return ((::RPG::GameCore::AnimStateLogicType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2676F57CB476901C_METHOD_2_1B9BCD64F419AAE9_OFFSET))(this);
	}

	::System::Void Method_2_62330CC299C646C7(::RPG::GameCore::AnimStateLogicType a1, ::Class_1_CB986F8DD1655D73* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AnimStateLogicType, ::Class_1_CB986F8DD1655D73*))((::PBYTE)hIl2Cpp + CLASS_2_2676F57CB476901C_METHOD_2_62330CC299C646C7_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_783D289DA90BA019(::RPG::GameCore::AnimStateLogicType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AnimStateLogicType))((::PBYTE)hIl2Cpp + CLASS_2_2676F57CB476901C_METHOD_2_783D289DA90BA019_OFFSET))(this, a1);
	}

	::System::Void Method_2_7998F8CA1E002410(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_2676F57CB476901C_METHOD_2_7998F8CA1E002410_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_595E641DF1B4387D()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2676F57CB476901C_METHOD_2_595E641DF1B4387D_OFFSET))(this);
	}

	::System::Void Method_2_E707E527CA6452F2(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_2676F57CB476901C_METHOD_2_E707E527CA6452F2_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_0F76D2A38DFBC84F(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_2676F57CB476901C_METHOD_2_0F76D2A38DFBC84F_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_D240830C442C70A4()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2676F57CB476901C_METHOD_2_D240830C442C70A4_OFFSET))(this);
	}

	::RPG::GameCore::SkillConfig* Method_2_628B9EF69E7FDAF3(::System::Int32 a1)
	{
		return ((::RPG::GameCore::SkillConfig*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_2676F57CB476901C_METHOD_2_628B9EF69E7FDAF3_OFFSET))(this, a1);
	}

	::RPG::GameCore::SkillData* Method_2_B1722B90F1E60E32(::System::Int32 a1)
	{
		return ((::RPG::GameCore::SkillData*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_2676F57CB476901C_METHOD_2_B1722B90F1E60E32_OFFSET))(this, a1);
	}
};
