#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_CHARACTERATLASFACEEMOTION_METHOD_2_3E89669D07E186FB_OFFSET UNITYSDK_OFFSET(0x1D11A150)
#define RPG_GAMECORE_CHARACTERATLASFACEEMOTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1D11A260)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CharacterAtlasFaceEmotion_TypeDefinitionIndex = 21644;

	class CharacterAtlasFaceEmotion : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* MeshName; // 0x10
		::System::UInt32 EmotionIndex; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERATLASFACEEMOTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_3E89669D07E186FB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CharacterAtlasFaceEmotion*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CharacterAtlasFaceEmotion*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERATLASFACEEMOTION_METHOD_2_3E89669D07E186FB_OFFSET))(a1, a2);
		}
	};
}
