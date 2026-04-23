#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_F49CA2983DD8D8E6.h"
#include "unitysdk/RPG/GameCore/AnimStateLogicType.h"

class Class_1_8632A9A99C579E84;
class Class_1_CC76D1702CC17C09_6;
class Class_1_DB457F2E821DD51D;
class Class_2_1DBE0E1023AFDBC5;
namespace RPG::GameCore { class CharacterDataComponent; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class SkillCharacterComponent; }
namespace RPG::GameCore { class SkillConfig; }
namespace RPG::GameCore { class SkillData; }

#define CLASS_2_2676F57CB476901C_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9BD0350)
#define CLASS_2_2676F57CB476901C_METHOD_2_0F76D2A38DFBC84F_OFFSET UNITYSDK_OFFSET(0x9BD0820)
#define CLASS_2_2676F57CB476901C_METHOD_2_15C118F4F0B624D4_OFFSET UNITYSDK_OFFSET(0x9BD0890)
#define CLASS_2_2676F57CB476901C_METHOD_2_1B9BCD64F419AAE9_OFFSET UNITYSDK_OFFSET(0x9BD0390)
#define CLASS_2_2676F57CB476901C_METHOD_2_595E641DF1B4387D_OFFSET UNITYSDK_OFFSET(0x9BD1040)
#define CLASS_2_2676F57CB476901C_METHOD_2_62330CC299C646C7_OFFSET UNITYSDK_OFFSET(0x9BD03E0)
#define CLASS_2_2676F57CB476901C_METHOD_2_793FFA9A76FE6840_OFFSET UNITYSDK_OFFSET(0x9BD1360)
#define CLASS_2_2676F57CB476901C_METHOD_2_7998F8CA1E002410_OFFSET UNITYSDK_OFFSET(0x9BD0EC0)
#define CLASS_2_2676F57CB476901C_METHOD_2_7D745FA24EFCA3D0_OFFSET UNITYSDK_OFFSET(0x9BD0E60)
#define CLASS_2_2676F57CB476901C_METHOD_2_8064AC226697BC81_OFFSET UNITYSDK_OFFSET(0x9BD0720)
#define CLASS_2_2676F57CB476901C_METHOD_2_D240830C442C70A4_OFFSET UNITYSDK_OFFSET(0x9BD07C0)
#define CLASS_2_2676F57CB476901C_METHOD_2_E347A4BF189E0365_OFFSET UNITYSDK_OFFSET(0x9BD11D0)
#define CLASS_2_2676F57CB476901C__CTOR_OFFSET UNITYSDK_OFFSET(0x9BD02C0)

inline static constexpr unsigned int Class_2_2676F57CB476901C_TypeDefinitionIndex = 51590;

class Class_2_2676F57CB476901C : public ::Class_1_F49CA2983DD8D8E6
{
public:
	::Class_1_CC76D1702CC17C09_6* Field_2_1; // 0x30
	::Class_1_8632A9A99C579E84* Field_2_2; // 0x38
	::RPG::GameCore::CharacterDataComponent* Field_2_3; // 0x40
	::RPG::GameCore::SkillCharacterComponent* Field_2_4; // 0x48
	::System::Int32 Field_2_0; // 0x50

	::System::Void _ctor(::RPG::GameCore::GameEntity* a1, ::Class_2_1DBE0E1023AFDBC5* a2, ::Class_1_DB457F2E821DD51D* a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::Class_2_1DBE0E1023AFDBC5*, ::Class_1_DB457F2E821DD51D*))((::PBYTE)hIl2Cpp + CLASS_2_2676F57CB476901C__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2676F57CB476901C_DISPOSE_OFFSET))(this);
	}

	::RPG::GameCore::AnimStateLogicType Method_2_1B9BCD64F419AAE9()
	{
		return ((::RPG::GameCore::AnimStateLogicType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2676F57CB476901C_METHOD_2_1B9BCD64F419AAE9_OFFSET))(this);
	}

	::System::Void Method_2_62330CC299C646C7(::RPG::GameCore::AnimStateLogicType a1, ::Class_1_8632A9A99C579E84* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AnimStateLogicType, ::Class_1_8632A9A99C579E84*))((::PBYTE)hIl2Cpp + CLASS_2_2676F57CB476901C_METHOD_2_62330CC299C646C7_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_7D745FA24EFCA3D0(::RPG::GameCore::AnimStateLogicType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AnimStateLogicType))((::PBYTE)hIl2Cpp + CLASS_2_2676F57CB476901C_METHOD_2_7D745FA24EFCA3D0_OFFSET))(this, a1);
	}

	::System::Void Method_2_7998F8CA1E002410(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_2676F57CB476901C_METHOD_2_7998F8CA1E002410_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_595E641DF1B4387D()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2676F57CB476901C_METHOD_2_595E641DF1B4387D_OFFSET))(this);
	}

	::System::Void Method_2_15C118F4F0B624D4(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_2676F57CB476901C_METHOD_2_15C118F4F0B624D4_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_0F76D2A38DFBC84F(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_2676F57CB476901C_METHOD_2_0F76D2A38DFBC84F_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_D240830C442C70A4()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2676F57CB476901C_METHOD_2_D240830C442C70A4_OFFSET))(this);
	}

	::RPG::GameCore::SkillConfig* Method_2_8064AC226697BC81(::System::Int32 a1)
	{
		return ((::RPG::GameCore::SkillConfig*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_2676F57CB476901C_METHOD_2_8064AC226697BC81_OFFSET))(this, a1);
	}

	::RPG::GameCore::SkillData* Method_2_E347A4BF189E0365(::System::Int32 a1)
	{
		return ((::RPG::GameCore::SkillData*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_2676F57CB476901C_METHOD_2_E347A4BF189E0365_OFFSET))(this, a1);
	}

	::System::Void Method_2_793FFA9A76FE6840(::System::Single P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_2676F57CB476901C_METHOD_2_793FFA9A76FE6840_OFFSET))(this, P0);
	}
};
