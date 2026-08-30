#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AvatarPropertyType.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_758;
class Class_1_A05AF49AB4C19659;
namespace RPG::Client { class GridFightElationTraitEquipComponent; }

#define CLASS_1_430C50E881726763_METHOD_1_92F85D4296A9ADDA_OFFSET UNITYSDK_OFFSET(0xE5D9980)
#define CLASS_1_430C50E881726763_METHOD_1_AC425167B3BD4E59_OFFSET UNITYSDK_OFFSET(0xE5DA070)
#define CLASS_1_430C50E881726763__CTOR_OFFSET UNITYSDK_OFFSET(0xE5D98A0)

inline static constexpr unsigned int Class_1_430C50E881726763_TypeDefinitionIndex = 65438;

class Class_1_430C50E881726763 : public ::System::Object
{
public:
	::RPG::Client::GridFightElationTraitEquipComponent* GFCOCDCKNLD; // 0x10
	::Class_1_A05AF49AB4C19659* IAFNNMFIMOI; // 0x18

	::System::Void _ctor(::RPG::Client::GridFightElationTraitEquipComponent* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightElationTraitEquipComponent*))((::PBYTE)hIl2Cpp + CLASS_1_430C50E881726763__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_92F85D4296A9ADDA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_430C50E881726763_METHOD_1_92F85D4296A9ADDA_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_758* Method_1_AC425167B3BD4E59(::RPG::GameCore::AvatarPropertyType a1)
	{
		return ((::Class_0_16E4307DCC419505_758*(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType))((::PBYTE)hIl2Cpp + CLASS_1_430C50E881726763_METHOD_1_AC425167B3BD4E59_OFFSET))(this, a1);
	}
};
