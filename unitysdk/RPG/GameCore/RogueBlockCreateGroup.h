#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/RogueDLCBlockType.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class RogueDLCBlockWeight; }
namespace RPG::GameCore { class RogueDLCMarkType; }

#define RPG_GAMECORE_ROGUEBLOCKCREATEGROUP_METHOD_2_87B509123B6B96DC_OFFSET UNITYSDK_OFFSET(0x175E3DE0)
#define RPG_GAMECORE_ROGUEBLOCKCREATEGROUP__CTOR_OFFSET UNITYSDK_OFFSET(0x175E4010)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueBlockCreateGroup_TypeDefinitionIndex = 16455;

	class RogueBlockCreateGroup : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 BlockCreateID; // 0x10
		::System::UInt32 GroupID; // 0x14
		::RPG::GameCore::RogueDLCBlockType BlockType; // 0x18
		::Il2CppArray<::RPG::GameCore::RogueDLCBlockWeight*>* BlockCreatNumList; // 0x20
		::Il2CppArray<::RPG::GameCore::RogueDLCMarkType*>* MarkCreateRandomList; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEBLOCKCREATEGROUP__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_87B509123B6B96DC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueBlockCreateGroup*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueBlockCreateGroup*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEBLOCKCREATEGROUP_METHOD_2_87B509123B6B96DC_OFFSET))(a1, a2);
		}
	};
}
