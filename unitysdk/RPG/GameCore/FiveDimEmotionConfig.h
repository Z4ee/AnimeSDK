#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EmotionEnum.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_FIVEDIMEMOTIONCONFIG_METHOD_2_347BCCAE6B3B8C98_OFFSET UNITYSDK_OFFSET(0x1D0E2600)
#define RPG_GAMECORE_FIVEDIMEMOTIONCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D0E2710)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimEmotionConfig_TypeDefinitionIndex = 16539;

	class FiveDimEmotionConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::EmotionEnum Emotion; // 0x10
		::System::String* SoundEvent; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMEMOTIONCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_347BCCAE6B3B8C98(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimEmotionConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimEmotionConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMEMOTIONCONFIG_METHOD_2_347BCCAE6B3B8C98_OFFSET))(a1, a2);
		}
	};
}
