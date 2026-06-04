#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AvatarPropertyType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_684;
class Class_1_A05AF49AB4C19659;
namespace RPG::Client { class GridFightRole; }
namespace RPG::Client { class GridFightTraitElationEffect; }

#define CLASS_1_D9ACF93B257D9E03_METHOD_1_8BCB3191E6BEE7CB_OFFSET UNITYSDK_OFFSET(0x112D1370)
#define CLASS_1_D9ACF93B257D9E03_METHOD_1_AC425167B3BD4E59_OFFSET UNITYSDK_OFFSET(0x112D1D10)
#define CLASS_1_D9ACF93B257D9E03_METHOD_1_B97E33612FF95788_OFFSET UNITYSDK_OFFSET(0x112D1AC0)
#define CLASS_1_D9ACF93B257D9E03_METHOD_1_DA7B73E28C3E328E_OFFSET UNITYSDK_OFFSET(0x112D13F0)
#define CLASS_1_D9ACF93B257D9E03__CTOR_OFFSET UNITYSDK_OFFSET(0x112D1290)

inline static constexpr unsigned int Class_1_D9ACF93B257D9E03_TypeDefinitionIndex = 61137;

class Class_1_D9ACF93B257D9E03 : public ::System::Object
{
public:
	::RPG::Client::GridFightTraitElationEffect* Field_1_0; // 0x10
	::Class_1_A05AF49AB4C19659* Field_1_1; // 0x18

	::System::Void _ctor(::RPG::Client::GridFightTraitElationEffect* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightTraitElationEffect*))((::PBYTE)hIl2Cpp + CLASS_1_D9ACF93B257D9E03__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_8BCB3191E6BEE7CB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D9ACF93B257D9E03_METHOD_1_8BCB3191E6BEE7CB_OFFSET))(this);
	}

	::RPG::GameCore::FixPoint Method_1_B97E33612FF95788(::RPG::Client::GridFightRole* a1)
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + CLASS_1_D9ACF93B257D9E03_METHOD_1_B97E33612FF95788_OFFSET))(this, a1);
	}

	::RPG::GameCore::FixPoint Method_1_DA7B73E28C3E328E()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D9ACF93B257D9E03_METHOD_1_DA7B73E28C3E328E_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_684* Method_1_AC425167B3BD4E59(::RPG::GameCore::AvatarPropertyType a1)
	{
		return ((::Class_0_16E4307DCC419505_684*(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType))((::PBYTE)hIl2Cpp + CLASS_1_D9ACF93B257D9E03_METHOD_1_AC425167B3BD4E59_OFFSET))(this, a1);
	}
};
