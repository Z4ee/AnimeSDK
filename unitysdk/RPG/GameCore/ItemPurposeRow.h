#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ITEMPURPOSEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D22FC20)
#define RPG_GAMECORE_ITEMPURPOSEROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D230260)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ItemPurposeRow_TypeDefinitionIndex = 13768;

	class ItemPurposeRow : public ::System::Object
	{
	public:
		::System::UInt32 ID; // 0x10
		::RPG::Client::TextID PurposeText; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMPURPOSEROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ItemPurposeRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ItemPurposeRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMPURPOSEROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
