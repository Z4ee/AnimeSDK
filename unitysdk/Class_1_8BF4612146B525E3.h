#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TimeRewindState.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TimeRewindEntityEventConfig; }

#define CLASS_1_8BF4612146B525E3_CLEAR_OFFSET UNITYSDK_OFFSET(0x161DC800)
#define CLASS_1_8BF4612146B525E3_METHOD_1_2A4AA0F1931D69C0_OFFSET UNITYSDK_OFFSET(0x161DC860)
#define CLASS_1_8BF4612146B525E3_METHOD_1_479759059E440327_OFFSET UNITYSDK_OFFSET(0x161DCB30)
#define CLASS_1_8BF4612146B525E3_METHOD_1_8D663435C6E609D2_OFFSET UNITYSDK_OFFSET(0x161DC9D0)
#define CLASS_1_8BF4612146B525E3_METHOD_1_A36150C5DCC8409E_OFFSET UNITYSDK_OFFSET(0x161DCAA0)
#define CLASS_1_8BF4612146B525E3_METHOD_1_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x161DCA60)
#define CLASS_1_8BF4612146B525E3_METHOD_1_CA373AA1C7054598_2_OFFSET UNITYSDK_OFFSET(0x161DCAF0)
#define CLASS_1_8BF4612146B525E3_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x161DCA20)
#define CLASS_1_8BF4612146B525E3_METHOD_1_D1928E494FECCF06_OFFSET UNITYSDK_OFFSET(0x161DC8D0)
#define CLASS_1_8BF4612146B525E3_METHOD_1_DE755D35777788D0_OFFSET UNITYSDK_OFFSET(0x161DC790)
#define CLASS_1_8BF4612146B525E3_METHOD_1_F7300E87EC49A206_OFFSET UNITYSDK_OFFSET(0x161DCBF0)
#define CLASS_1_8BF4612146B525E3__CTOR_OFFSET UNITYSDK_OFFSET(0x161DCDA0)

inline static constexpr unsigned int Class_1_8BF4612146B525E3_TypeDefinitionIndex = 60901;

class Class_1_8BF4612146B525E3 : public ::System::Object
{
public:
	::RPG::GameCore::GameEntity* CFKHNPGEAJA; // 0x10
	::RPG::GameCore::TimeRewindEntityEventConfig* IGHAHBNLIJA; // 0x18
	::System::Single LDFDNKPCLGJ; // 0x20
	::System::Boolean MFGHMLJJNIG; // 0x24
	::System::Single FOMKPMGACFB; // 0x28
	::RPG::GameCore::TimeRewindState CFIKPOFNONJ; // 0x2C
	::System::Single ONMEOCDIPMM; // 0x30

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

	::System::Void Method_1_F7300E87EC49A206()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8BF4612146B525E3_METHOD_1_F7300E87EC49A206_OFFSET))(this);
	}
};
