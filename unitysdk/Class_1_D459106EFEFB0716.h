#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RtBattleAnimMoveOption.h"
#include "unitysdk/RPG/MVector3.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TransformComponent; }
namespace System { class String; }

#define CLASS_1_D459106EFEFB0716_METHOD_1_0B2B6008BD1006E8_OFFSET UNITYSDK_OFFSET(0xB5E2FE0)
#define CLASS_1_D459106EFEFB0716_METHOD_1_948A43AE709EF68A_OFFSET UNITYSDK_OFFSET(0xB5E2E00)
#define CLASS_1_D459106EFEFB0716_METHOD_1_9D9CF8F6C2342EE5_OFFSET UNITYSDK_OFFSET(0xB5E3580)
#define CLASS_1_D459106EFEFB0716_METHOD_1_B5EA5DD8B4C0957C_OFFSET UNITYSDK_OFFSET(0xB5E2D80)
#define CLASS_1_D459106EFEFB0716_METHOD_1_E29A6A61C6FD21D1_OFFSET UNITYSDK_OFFSET(0xB5E3140)
#define CLASS_1_D459106EFEFB0716__CTOR_OFFSET UNITYSDK_OFFSET(0xB5E3830)

inline static constexpr unsigned int Class_1_D459106EFEFB0716_TypeDefinitionIndex = 54407;

class Class_1_D459106EFEFB0716 : public ::System::Object
{
public:
	::RPG::GameCore::GameEntity* KDPPFKNCKIL; // 0x10
	::System::String* GBIOGILHAHO; // 0x18
	::RPG::GameCore::GameEntity* MCLLALGABAB; // 0x20
	::System::Single FMHMAHCNDGB; // 0x28
	::RPG::MVector3 KEBGGHNKODJ; // 0x2C
	::RPG::GameCore::RtBattleAnimMoveOption ALEGIFEHGLH; // 0x38
	::System::Single KJIOHLANNHA; // 0x3C
	::System::Single NNNAGHMNFKB; // 0x40
	::System::Single ACCBAMDABCA; // 0x44
	::System::Single HJLOCBLHNLD; // 0x48
	::System::Boolean NPEHDAMFOCH; // 0x4C
	::System::Single DLOECBHBAGB; // 0x50
	::System::Single HJKMFPPHEJH; // 0x54
	::RPG::MVector3 HFPGLABPMMO; // 0x58
	::RPG::MVector3 LOFKEOFNMKA; // 0x64
	::RPG::MVector3 FJBPOFJPFNP; // 0x70

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D459106EFEFB0716__CTOR_OFFSET))(this);
	}

	::RPG::MVector3 Method_1_B5EA5DD8B4C0957C()
	{
		return ((::RPG::MVector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D459106EFEFB0716_METHOD_1_B5EA5DD8B4C0957C_OFFSET))(this);
	}

	::RPG::MVector3 Method_1_0B2B6008BD1006E8()
	{
		return ((::RPG::MVector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D459106EFEFB0716_METHOD_1_0B2B6008BD1006E8_OFFSET))(this);
	}

	::RPG::MVector3 Method_1_948A43AE709EF68A(::RPG::MVector3 a1)
	{
		return ((::RPG::MVector3(*)(::PVOID, ::RPG::MVector3))((::PBYTE)hIl2Cpp + CLASS_1_D459106EFEFB0716_METHOD_1_948A43AE709EF68A_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_E29A6A61C6FD21D1(::RPG::GameCore::TransformComponent* a1, ::RPG::MVector3& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::TransformComponent*, ::RPG::MVector3&))((::PBYTE)hIl2Cpp + CLASS_1_D459106EFEFB0716_METHOD_1_E29A6A61C6FD21D1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_9D9CF8F6C2342EE5(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_D459106EFEFB0716_METHOD_1_9D9CF8F6C2342EE5_OFFSET))(this, a1);
	}
};
