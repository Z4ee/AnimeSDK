#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/HeartDialEmoType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_HEARTDIALEMOROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D17CF30)
#define RPG_GAMECORE_HEARTDIALEMOROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D17D570)

namespace RPG::GameCore
{
	inline static constexpr unsigned int HeartDialEmoRow_TypeDefinitionIndex = 13619;

	class HeartDialEmoRow : public ::System::Object
	{
	public:
		::RPG::Client::TextID EmoName; // 0x10
		::RPG::GameCore::HeartDialEmoType EmoType; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HEARTDIALEMOROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::HeartDialEmoRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::HeartDialEmoRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HEARTDIALEMOROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
