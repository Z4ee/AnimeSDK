#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TimeRewindState.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TimeRewindEntityEventConfig; }

#define CLASS_1_8BF4612146B525E3_CLEAR_OFFSET UNITYSDK_OFFSET(0xD194E60)
#define CLASS_1_8BF4612146B525E3_METHOD_1_2A4AA0F1931D69C0_OFFSET UNITYSDK_OFFSET(0xD194EB0)
#define CLASS_1_8BF4612146B525E3_METHOD_1_479759059E440327_OFFSET UNITYSDK_OFFSET(0xD195180)
#define CLASS_1_8BF4612146B525E3_METHOD_1_89EF21CA0414B145_OFFSET UNITYSDK_OFFSET(0xD195240)
#define CLASS_1_8BF4612146B525E3_METHOD_1_8D663435C6E609D2_OFFSET UNITYSDK_OFFSET(0xD195020)
#define CLASS_1_8BF4612146B525E3_METHOD_1_A36150C5DCC8409E_OFFSET UNITYSDK_OFFSET(0xD1950F0)
#define CLASS_1_8BF4612146B525E3_METHOD_1_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0xD1950B0)
#define CLASS_1_8BF4612146B525E3_METHOD_1_CA373AA1C7054598_2_OFFSET UNITYSDK_OFFSET(0xD195140)
#define CLASS_1_8BF4612146B525E3_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xD195070)
#define CLASS_1_8BF4612146B525E3_METHOD_1_D1928E494FECCF06_OFFSET UNITYSDK_OFFSET(0xD194F20)
#define CLASS_1_8BF4612146B525E3_METHOD_1_DE755D35777788D0_OFFSET UNITYSDK_OFFSET(0xD194DF0)
#define CLASS_1_8BF4612146B525E3__CTOR_OFFSET UNITYSDK_OFFSET(0xD1953F0)

inline static constexpr unsigned int Class_1_8BF4612146B525E3_TypeDefinitionIndex = 49268;

class Class_1_8BF4612146B525E3 : public ::System::Object
{
public:
	::RPG::GameCore::TimeRewindEntityEventConfig* Field_1_1; // 0x10
	::RPG::GameCore::GameEntity* Field_1_0; // 0x18
	::System::Boolean Field_1_5; // 0x20
	::System::Single Field_1_4; // 0x24
	::System::Single Field_1_2; // 0x28
	::System::Single Field_1_3; // 0x2C
	::RPG::GameCore::TimeRewindState Field_1_6; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8BF4612146B525E3__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_DE755D35777788D0(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::TimeRewindEntityEventConfig* a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TimeRewindEntityEventConfig*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_8BF4612146B525E3_METHOD_1_DE755D35777788D0_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8BF4612146B525E3_CLEAR_OFFSET))(this);
	}

	::System::Void Method_1_2A4AA0F1931D69C0(::System::Single a1, ::RPG::GameCore::TimeRewindState a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::RPG::GameCore::TimeRewindState))((::PBYTE)hIl2Cpp + CLASS_1_8BF4612146B525E3_METHOD_1_2A4AA0F1931D69C0_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_8D663435C6E609D2(::RPG::GameCore::TimeRewindState a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TimeRewindState))((::PBYTE)hIl2Cpp + CLASS_1_8BF4612146B525E3_METHOD_1_8D663435C6E609D2_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8BF4612146B525E3_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8BF4612146B525E3_METHOD_1_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Single Method_1_A36150C5DCC8409E()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8BF4612146B525E3_METHOD_1_A36150C5DCC8409E_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8BF4612146B525E3_METHOD_1_CA373AA1C7054598_2_OFFSET))(this);
	}

	::System::Void Method_1_D1928E494FECCF06(::System::Single a1, ::RPG::GameCore::TimeRewindState a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::RPG::GameCore::TimeRewindState))((::PBYTE)hIl2Cpp + CLASS_1_8BF4612146B525E3_METHOD_1_D1928E494FECCF06_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_479759059E440327(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_8BF4612146B525E3_METHOD_1_479759059E440327_OFFSET))(this, a1);
	}

	::System::Void Method_1_89EF21CA0414B145()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8BF4612146B525E3_METHOD_1_89EF21CA0414B145_OFFSET))(this);
	}
};
