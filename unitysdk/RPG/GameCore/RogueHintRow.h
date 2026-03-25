#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEHINTROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1760DFB0)
#define RPG_GAMECORE_ROGUEHINTROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1760E560)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueHintRow_TypeDefinitionIndex = 13416;

	class RogueHintRow : public ::System::Object
	{
	public:
		::RPG::Client::TextID HintText; // 0x10
		::System::UInt32 HintID; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEHINTROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::RogueHintRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueHintRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEHINTROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
