#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AvatarPropertyType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_758;
class Class_1_A05AF49AB4C19659;
namespace RPG::Client { class GridFightRole; }
namespace RPG::Client { class GridFightTraitElationEffect; }

#define CLASS_1_A2C50125AFB75162_METHOD_1_1C86FBE29F1B1C17_OFFSET UNITYSDK_OFFSET(0x12E9B790)
#define CLASS_1_A2C50125AFB75162_METHOD_1_7DA7E3A9B0480B72_OFFSET UNITYSDK_OFFSET(0x12E9C050)
#define CLASS_1_A2C50125AFB75162_METHOD_1_8BCB3191E6BEE7CB_OFFSET UNITYSDK_OFFSET(0x12E9B710)
#define CLASS_1_A2C50125AFB75162_METHOD_1_AC425167B3BD4E59_OFFSET UNITYSDK_OFFSET(0x12E9C2E0)
#define CLASS_1_A2C50125AFB75162__CTOR_OFFSET UNITYSDK_OFFSET(0x12E9B630)

inline static constexpr unsigned int Class_1_A2C50125AFB75162_TypeDefinitionIndex = 65441;

class Class_1_A2C50125AFB75162 : public ::System::Object
{
public:
	::RPG::Client::GridFightTraitElationEffect* INKLGHHCKIK; // 0x10
	::Class_1_A05AF49AB4C19659* IAFNNMFIMOI; // 0x18

	::System::Void _ctor(::RPG::Client::GridFightTraitElationEffect* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightTraitElationEffect*))((::PBYTE)hIl2Cpp + CLASS_1_A2C50125AFB75162__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_8BCB3191E6BEE7CB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A2C50125AFB75162_METHOD_1_8BCB3191E6BEE7CB_OFFSET))(this);
	}

	::RPG::GameCore::FixPoint Method_1_7DA7E3A9B0480B72(::RPG::Client::GridFightRole* a1)
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + CLASS_1_A2C50125AFB75162_METHOD_1_7DA7E3A9B0480B72_OFFSET))(this, a1);
	}

	::RPG::GameCore::FixPoint Method_1_1C86FBE29F1B1C17()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A2C50125AFB75162_METHOD_1_1C86FBE29F1B1C17_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_758* Method_1_AC425167B3BD4E59(::RPG::GameCore::AvatarPropertyType a1)
	{
		return ((::Class_0_16E4307DCC419505_758*(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType))((::PBYTE)hIl2Cpp + CLASS_1_A2C50125AFB75162_METHOD_1_AC425167B3BD4E59_OFFSET))(this, a1);
	}
};
