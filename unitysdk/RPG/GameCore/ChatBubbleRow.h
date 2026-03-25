#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PersonalizeShowType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CHATBUBBLEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x17074710)
#define RPG_GAMECORE_CHATBUBBLEROW__CTOR_OFFSET UNITYSDK_OFFSET(0x17074880)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChatBubbleRow_TypeDefinitionIndex = 11853;

	class ChatBubbleRow : public ::System::Object
	{
	public:
		::System::UInt32 ID; // 0x10
		::RPG::GameCore::PersonalizeShowType ShowType; // 0x14
		::System::UInt32 ShowParam; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHATBUBBLEROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::ChatBubbleRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChatBubbleRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHATBUBBLEROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
