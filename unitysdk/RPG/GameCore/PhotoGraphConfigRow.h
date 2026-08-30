#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/EmotionID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_PHOTOGRAPHCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D433EE0)
#define RPG_GAMECORE_PHOTOGRAPHCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D4340C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PhotoGraphConfigRow_TypeDefinitionIndex = 14324;

	class PhotoGraphConfigRow : public ::System::Object
	{
	public:
		::System::String* EmotionIconPath; // 0x10
		::RPG::Client::TextID EmotionName; // 0x18
		::RPG::GameCore::EmotionID EmotionID; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PHOTOGRAPHCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PhotoGraphConfigRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PhotoGraphConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PHOTOGRAPHCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
