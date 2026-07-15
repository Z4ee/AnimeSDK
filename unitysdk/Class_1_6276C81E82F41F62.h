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

#define CLASS_1_6276C81E82F41F62_METHOD_1_023671D0E3147B36_OFFSET UNITYSDK_OFFSET(0x1585A780)
#define CLASS_1_6276C81E82F41F62_METHOD_1_1671A1953C020671_OFFSET UNITYSDK_OFFSET(0x1585A3B0)
#define CLASS_1_6276C81E82F41F62_METHOD_1_39C7BAE737D01BF2_OFFSET UNITYSDK_OFFSET(0x1585A620)
#define CLASS_1_6276C81E82F41F62_METHOD_1_3AC38BC97A5E881A_OFFSET UNITYSDK_OFFSET(0x15859A80)
#define CLASS_1_6276C81E82F41F62_METHOD_1_85B9694FB3FF8783_OFFSET UNITYSDK_OFFSET(0x1585A140)
#define CLASS_1_6276C81E82F41F62_METHOD_1_86667CFD93C22BA4_OFFSET UNITYSDK_OFFSET(0x1585A220)
#define CLASS_1_6276C81E82F41F62_METHOD_1_A9ADAD9C731210C9_OFFSET UNITYSDK_OFFSET(0x1585A830)
#define CLASS_1_6276C81E82F41F62_METHOD_1_CDF3D0289770B976_OFFSET UNITYSDK_OFFSET(0x1585A490)
#define CLASS_1_6276C81E82F41F62_METHOD_1_E8F7D64DDF61F4CB_OFFSET UNITYSDK_OFFSET(0x1585A6D0)
#define CLASS_1_6276C81E82F41F62__CTOR_OFFSET UNITYSDK_OFFSET(0x1585A8E0)

inline static constexpr unsigned int Class_1_6276C81E82F41F62_TypeDefinitionIndex = 46918;

class Class_1_6276C81E82F41F62 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::NPCBodySize, ::RPGTools::Timeline::Story::NpcStoryMoveWalkData*>* Field_1_0; // 0x10
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::NPCBodySize, ::RPGTools::Timeline::Story::NpcStoryMoveRunData*>* Field_1_1; // 0x18
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::BodySize, ::RPGTools::Timeline::Story::AvatarStoryMoveRunData*>* Field_1_2; // 0x20
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::BodySize, ::RPGTools::Timeline::Story::AvatarStoryMoveWalkData*>* Field_1_3; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6276C81E82F41F62__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_3AC38BC97A5E881A(::RPGTools::Timeline::Story::CharacterStoryMoveMap* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPGTools::Timeline::Story::CharacterStoryMoveMap*))((::PBYTE)hIl2Cpp + CLASS_1_6276C81E82F41F62_METHOD_1_3AC38BC97A5E881A_OFFSET))(this, a1);
	}

	::RPGTools::Timeline::Story::BaseStoryMoveWalkData* Method_1_85B9694FB3FF8783(::RPG::GameCore::GameEntity* a1)
	{
		return ((::RPGTools::Timeline::Story::BaseStoryMoveWalkData*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_6276C81E82F41F62_METHOD_1_85B9694FB3FF8783_OFFSET))(this, a1);
	}

	::RPGTools::Timeline::Story::BaseStoryMoveRunData* Method_1_1671A1953C020671(::RPG::GameCore::GameEntity* a1)
	{
		return ((::RPGTools::Timeline::Story::BaseStoryMoveRunData*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_6276C81E82F41F62_METHOD_1_1671A1953C020671_OFFSET))(this, a1);
	}

	::RPGTools::Timeline::Story::BaseStoryMoveWalkData* Method_1_86667CFD93C22BA4(::RPG::GameCore::BodySize a1, ::RPG::GameCore::NPCBodySize a2)
	{
		return ((::RPGTools::Timeline::Story::BaseStoryMoveWalkData*(*)(::PVOID, ::RPG::GameCore::BodySize, ::RPG::GameCore::NPCBodySize))((::PBYTE)hIl2Cpp + CLASS_1_6276C81E82F41F62_METHOD_1_86667CFD93C22BA4_OFFSET))(this, a1, a2);
	}

	::RPGTools::Timeline::Story::BaseStoryMoveRunData* Method_1_CDF3D0289770B976(::RPG::GameCore::BodySize a1, ::RPG::GameCore::NPCBodySize a2)
	{
		return ((::RPGTools::Timeline::Story::BaseStoryMoveRunData*(*)(::PVOID, ::RPG::GameCore::BodySize, ::RPG::GameCore::NPCBodySize))((::PBYTE)hIl2Cpp + CLASS_1_6276C81E82F41F62_METHOD_1_CDF3D0289770B976_OFFSET))(this, a1, a2);
	}

	::RPGTools::Timeline::Story::AvatarStoryMoveWalkData* Method_1_39C7BAE737D01BF2(::RPG::GameCore::BodySize a1)
	{
		return ((::RPGTools::Timeline::Story::AvatarStoryMoveWalkData*(*)(::PVOID, ::RPG::GameCore::BodySize))((::PBYTE)hIl2Cpp + CLASS_1_6276C81E82F41F62_METHOD_1_39C7BAE737D01BF2_OFFSET))(this, a1);
	}

	::RPGTools::Timeline::Story::AvatarStoryMoveRunData* Method_1_023671D0E3147B36(::RPG::GameCore::BodySize a1)
	{
		return ((::RPGTools::Timeline::Story::AvatarStoryMoveRunData*(*)(::PVOID, ::RPG::GameCore::BodySize))((::PBYTE)hIl2Cpp + CLASS_1_6276C81E82F41F62_METHOD_1_023671D0E3147B36_OFFSET))(this, a1);
	}

	::RPGTools::Timeline::Story::NpcStoryMoveWalkData* Method_1_E8F7D64DDF61F4CB(::RPG::GameCore::NPCBodySize a1)
	{
		return ((::RPGTools::Timeline::Story::NpcStoryMoveWalkData*(*)(::PVOID, ::RPG::GameCore::NPCBodySize))((::PBYTE)hIl2Cpp + CLASS_1_6276C81E82F41F62_METHOD_1_E8F7D64DDF61F4CB_OFFSET))(this, a1);
	}

	::RPGTools::Timeline::Story::NpcStoryMoveRunData* Method_1_A9ADAD9C731210C9(::RPG::GameCore::NPCBodySize a1)
	{
		return ((::RPGTools::Timeline::Story::NpcStoryMoveRunData*(*)(::PVOID, ::RPG::GameCore::NPCBodySize))((::PBYTE)hIl2Cpp + CLASS_1_6276C81E82F41F62_METHOD_1_A9ADAD9C731210C9_OFFSET))(this, a1);
	}
};
