#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PersonalizeShowType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CHATBUBBLEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1B72CAD0)
#define RPG_GAMECORE_CHATBUBBLEROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1B72CC40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChatBubbleRow_TypeDefinitionIndex = 12505;

	class ChatBubbleRow : public ::System::Object
	{
	public:
		::System::UInt32 ID; // 0x10
		::System::UInt32 ShowParam; // 0x14
		::RPG::GameCore::PersonalizeShowType ShowType; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHATBUBBLEROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChatBubbleRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChatBubbleRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHATBUBBLEROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
