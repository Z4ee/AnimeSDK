#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/SpritePresetStrategyType.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class SpritePresetRecord; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_SPRITEPRESET_METHOD_2_6D64A035745A20F5_OFFSET UNITYSDK_OFFSET(0x18E84FC0)
#define RPG_GAMECORE_SPRITEPRESET__CTOR_OFFSET UNITYSDK_OFFSET(0x18E851A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SpritePreset_TypeDefinitionIndex = 23449;

	class SpritePreset : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* Name; // 0x10
		::System::String* FolderPath; // 0x18
		::RPG::GameCore::SpritePresetStrategyType StrategyType; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::SpritePresetRecord*>* SpriteRecords; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPRITEPRESET__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_6D64A035745A20F5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SpritePreset*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SpritePreset*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPRITEPRESET_METHOD_2_6D64A035745A20F5_OFFSET))(a1, a2);
		}
	};
}
