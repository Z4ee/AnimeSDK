#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_GIFTDANMUSENDERROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D95A300)
#define RPG_GAMECORE_GIFTDANMUSENDERROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D95A4D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GiftDanmuSenderRow_TypeDefinitionIndex = 15022;

	class GiftDanmuSenderRow : public ::System::Object
	{
	public:
		::System::String* IconPath; // 0x10
		::System::UInt32 ID; // 0x18
		::RPG::Client::TextID Name; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GIFTDANMUSENDERROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GiftDanmuSenderRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GiftDanmuSenderRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GIFTDANMUSENDERROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
