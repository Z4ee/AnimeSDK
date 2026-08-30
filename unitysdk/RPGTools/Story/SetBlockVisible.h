#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class HoyoTagContainer; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPGTOOLS_STORY_SETBLOCKVISIBLE__CTOR_OFFSET UNITYSDK_OFFSET(0xE80B3D0)

namespace RPGTools::Story
{
	inline static constexpr unsigned int SetBlockVisible_TypeDefinitionIndex = 49395;

	class SetBlockVisible : public ::System::Object
	{
	public:
		::System::Boolean Visible; // 0x10
		::System::Collections::Generic::List_1<::System::String*>* BlockTags; // 0x18
		::RPG::GameCore::HoyoTagContainer* BlockHoyoTags; // 0x20
		::System::Collections::Generic::List_1<::System::String*>* BlockAlias; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_STORY_SETBLOCKVISIBLE__CTOR_OFFSET))(this);
		}
	};
}
