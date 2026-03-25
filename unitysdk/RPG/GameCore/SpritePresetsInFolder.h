#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class SpritePresetNameList; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_SPRITEPRESETSINFOLDER_METHOD_2_39AA5E2114E8DD53_OFFSET UNITYSDK_OFFSET(0x17760550)
#define RPG_GAMECORE_SPRITEPRESETSINFOLDER__CTOR_OFFSET UNITYSDK_OFFSET(0x17760660)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SpritePresetsInFolder_TypeDefinitionIndex = 22479;

	class SpritePresetsInFolder : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::SpritePresetNameList*>* Collection; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPRITEPRESETSINFOLDER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_39AA5E2114E8DD53(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SpritePresetsInFolder*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SpritePresetsInFolder*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPRITEPRESETSINFOLDER_METHOD_2_39AA5E2114E8DD53_OFFSET))(a1, a2);
		}
	};
}
