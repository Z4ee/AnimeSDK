#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BodySize.h"
#include "unitysdk/RPG/GameCore/NPCBodySize.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPGTools::Timeline::Story { class AvatarStoryMoveRunData; }
namespace RPGTools::Timeline::Story { class AvatarStoryMoveWalkData; }
namespace RPGTools::Timeline::Story { class BaseStoryMoveRunData; }
namespace RPGTools::Timeline::Story { class BaseStoryMoveWalkData; }
namespace RPGTools::Timeline::Story { class CharacterStoryMoveMap; }
namespace RPGTools::Timeline::Story { class NpcStoryMoveRunData; }
namespace RPGTools::Timeline::Story { class NpcStoryMoveWalkData; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_F823E6C98F54DF37_METHOD_1_023671D0E3147B36_OFFSET UNITYSDK_OFFSET(0x11769A80)
#define CLASS_1_F823E6C98F54DF37_METHOD_1_143B5CD9F6E4DE8E_OFFSET UNITYSDK_OFFSET(0x11768CE0)
#define CLASS_1_F823E6C98F54DF37_METHOD_1_31C5B0763EAD8C2D_OFFSET UNITYSDK_OFFSET(0x11769470)
#define CLASS_1_F823E6C98F54DF37_METHOD_1_335A2372395F223A_OFFSET UNITYSDK_OFFSET(0x11769390)
#define CLASS_1_F823E6C98F54DF37_METHOD_1_39C7BAE737D01BF2_OFFSET UNITYSDK_OFFSET(0x11769900)
#define CLASS_1_F823E6C98F54DF37_METHOD_1_7C1AC8F0AADEE700_OFFSET UNITYSDK_OFFSET(0x11769B40)
#define CLASS_1_F823E6C98F54DF37_METHOD_1_ACE1ED3B378D8EB8_OFFSET UNITYSDK_OFFSET(0x11769710)
#define CLASS_1_F823E6C98F54DF37_METHOD_1_E540BF4A4596C9EF_OFFSET UNITYSDK_OFFSET(0x11769630)
#define CLASS_1_F823E6C98F54DF37_METHOD_1_E8F7D64DDF61F4CB_OFFSET UNITYSDK_OFFSET(0x117699C0)
#define CLASS_1_F823E6C98F54DF37__CTOR_OFFSET UNITYSDK_OFFSET(0x11769C20)

inline static constexpr unsigned int Class_1_F823E6C98F54DF37_TypeDefinitionIndex = 45396;

class Class_1_F823E6C98F54DF37 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::NPCBodySize, ::RPGTools::Timeline::Story::NpcStoryMoveRunData*>* Field_1_3; // 0x10
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::BodySize, ::RPGTools::Timeline::Story::AvatarStoryMoveRunData*>* Field_1_1; // 0x18
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::NPCBodySize, ::RPGTools::Timeline::Story::NpcStoryMoveWalkData*>* Field_1_2; // 0x20
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::BodySize, ::RPGTools::Timeline::Story::AvatarStoryMoveWalkData*>* Field_1_0; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F823E6C98F54DF37__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_143B5CD9F6E4DE8E(::RPGTools::Timeline::Story::CharacterStoryMoveMap* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPGTools::Timeline::Story::CharacterStoryMoveMap*))((::PBYTE)hIl2Cpp + CLASS_1_F823E6C98F54DF37_METHOD_1_143B5CD9F6E4DE8E_OFFSET))(this, a1);
	}

	::RPGTools::Timeline::Story::BaseStoryMoveWalkData* Method_1_335A2372395F223A(::RPG::GameCore::GameEntity* a1)
	{
		return ((::RPGTools::Timeline::Story::BaseStoryMoveWalkData*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_F823E6C98F54DF37_METHOD_1_335A2372395F223A_OFFSET))(this, a1);
	}

	::RPGTools::Timeline::Story::BaseStoryMoveRunData* Method_1_E540BF4A4596C9EF(::RPG::GameCore::GameEntity* a1)
	{
		return ((::RPGTools::Timeline::Story::BaseStoryMoveRunData*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_F823E6C98F54DF37_METHOD_1_E540BF4A4596C9EF_OFFSET))(this, a1);
	}

	::RPGTools::Timeline::Story::BaseStoryMoveWalkData* Method_1_31C5B0763EAD8C2D(::RPG::GameCore::BodySize a1, ::RPG::GameCore::NPCBodySize a2)
	{
		return ((::RPGTools::Timeline::Story::BaseStoryMoveWalkData*(*)(::PVOID, ::RPG::GameCore::BodySize, ::RPG::GameCore::NPCBodySize))((::PBYTE)hIl2Cpp + CLASS_1_F823E6C98F54DF37_METHOD_1_31C5B0763EAD8C2D_OFFSET))(this, a1, a2);
	}

	::RPGTools::Timeline::Story::BaseStoryMoveRunData* Method_1_ACE1ED3B378D8EB8(::RPG::GameCore::BodySize a1, ::RPG::GameCore::NPCBodySize a2)
	{
		return ((::RPGTools::Timeline::Story::BaseStoryMoveRunData*(*)(::PVOID, ::RPG::GameCore::BodySize, ::RPG::GameCore::NPCBodySize))((::PBYTE)hIl2Cpp + CLASS_1_F823E6C98F54DF37_METHOD_1_ACE1ED3B378D8EB8_OFFSET))(this, a1, a2);
	}

	::RPGTools::Timeline::Story::AvatarStoryMoveWalkData* Method_1_39C7BAE737D01BF2(::RPG::GameCore::BodySize a1)
	{
		return ((::RPGTools::Timeline::Story::AvatarStoryMoveWalkData*(*)(::PVOID, ::RPG::GameCore::BodySize))((::PBYTE)hIl2Cpp + CLASS_1_F823E6C98F54DF37_METHOD_1_39C7BAE737D01BF2_OFFSET))(this, a1);
	}

	::RPGTools::Timeline::Story::AvatarStoryMoveRunData* Method_1_023671D0E3147B36(::RPG::GameCore::BodySize a1)
	{
		return ((::RPGTools::Timeline::Story::AvatarStoryMoveRunData*(*)(::PVOID, ::RPG::GameCore::BodySize))((::PBYTE)hIl2Cpp + CLASS_1_F823E6C98F54DF37_METHOD_1_023671D0E3147B36_OFFSET))(this, a1);
	}

	::RPGTools::Timeline::Story::NpcStoryMoveWalkData* Method_1_E8F7D64DDF61F4CB(::RPG::GameCore::NPCBodySize a1)
	{
		return ((::RPGTools::Timeline::Story::NpcStoryMoveWalkData*(*)(::PVOID, ::RPG::GameCore::NPCBodySize))((::PBYTE)hIl2Cpp + CLASS_1_F823E6C98F54DF37_METHOD_1_E8F7D64DDF61F4CB_OFFSET))(this, a1);
	}

	::RPGTools::Timeline::Story::NpcStoryMoveRunData* Method_1_7C1AC8F0AADEE700(::RPG::GameCore::NPCBodySize a1)
	{
		return ((::RPGTools::Timeline::Story::NpcStoryMoveRunData*(*)(::PVOID, ::RPG::GameCore::NPCBodySize))((::PBYTE)hIl2Cpp + CLASS_1_F823E6C98F54DF37_METHOD_1_7C1AC8F0AADEE700_OFFSET))(this, a1);
	}
};
