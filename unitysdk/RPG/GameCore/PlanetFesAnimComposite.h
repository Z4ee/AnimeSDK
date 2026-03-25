#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/PlanetFesAnimTypeEnum.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_PLANETFESANIMCOMPOSITE_METHOD_2_42A19DAA9AD4874E_OFFSET UNITYSDK_OFFSET(0x174B4720)
#define RPG_GAMECORE_PLANETFESANIMCOMPOSITE__CTOR_OFFSET UNITYSDK_OFFSET(0x174B4A40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PlanetFesAnimComposite_TypeDefinitionIndex = 14870;

	class PlanetFesAnimComposite : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::PlanetFesAnimTypeEnum Type; // 0x10
		::System::UInt32 Probility; // 0x14
		::System::String* FaceAnimName; // 0x18
		::System::String* HandAnimName; // 0x20
		::System::String* MoveAnimName; // 0x28
		::System::String* ActionAnimName; // 0x30
		::RPG::Client::TextID TalkBubbleText; // 0x38
		::System::UInt32 EmojiEffectID; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLANETFESANIMCOMPOSITE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_42A19DAA9AD4874E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PlanetFesAnimComposite*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PlanetFesAnimComposite*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLANETFESANIMCOMPOSITE_METHOD_2_42A19DAA9AD4874E_OFFSET))(a1, a2);
		}
	};
}
