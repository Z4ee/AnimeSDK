#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AvatarPropertyType.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_758;
class Class_1_A05AF49AB4C19659;
namespace RPG::Client { class GridFightTraitElationEffect; }

#define CLASS_1_D9ACF93B257D9E03_METHOD_1_AC425167B3BD4E59_OFFSET UNITYSDK_OFFSET(0x17F9CAB0)
#define CLASS_1_D9ACF93B257D9E03_METHOD_1_ECA33935490AF2E4_OFFSET UNITYSDK_OFFSET(0x17F9C490)
#define CLASS_1_D9ACF93B257D9E03__CTOR_OFFSET UNITYSDK_OFFSET(0x17F9C3B0)

inline static constexpr unsigned int Class_1_D9ACF93B257D9E03_TypeDefinitionIndex = 65439;

class Class_1_D9ACF93B257D9E03 : public ::System::Object
{
public:
	::RPG::Client::GridFightTraitElationEffect* INKLGHHCKIK; // 0x10
	::Class_1_A05AF49AB4C19659* IAFNNMFIMOI; // 0x18

	::System::Void _ctor(::RPG::Client::GridFightTraitElationEffect* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightTraitElationEffect*))((::PBYTE)hIl2Cpp + CLASS_1_D9ACF93B257D9E03__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_ECA33935490AF2E4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D9ACF93B257D9E03_METHOD_1_ECA33935490AF2E4_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_758* Method_1_AC425167B3BD4E59(::RPG::GameCore::AvatarPropertyType a1)
	{
		return ((::Class_0_16E4307DCC419505_758*(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType))((::PBYTE)hIl2Cpp + CLASS_1_D9ACF93B257D9E03_METHOD_1_AC425167B3BD4E59_OFFSET))(this, a1);
	}
};
