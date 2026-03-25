#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/MonopolyGoodsType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_MONOPOLYGOODSCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1743B860)
#define RPG_GAMECORE_MONOPOLYGOODSCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1743BBC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MonopolyGoodsConfigRow_TypeDefinitionIndex = 11032;

	class MonopolyGoodsConfigRow : public ::System::Object
	{
	public:
		::System::String* IconPath; // 0x10
		::System::UInt32 TextDisplayParam1; // 0x18
		::RPG::Client::TextID Desc; // 0x20
		::RPG::Client::TextID Name; // 0x30
		::RPG::GameCore::MonopolyGoodsType GoodsType; // 0x40
		::System::UInt32 GoodsID; // 0x44
		::System::UInt32 TextDisplayParam2; // 0x48
		::System::UInt32 Cost; // 0x4C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYGOODSCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::MonopolyGoodsConfigRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MonopolyGoodsConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYGOODSCONFIGROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
