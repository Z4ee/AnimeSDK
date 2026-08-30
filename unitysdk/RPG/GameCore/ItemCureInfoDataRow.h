#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_ITEMCUREINFODATAROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D22AF30)
#define RPG_GAMECORE_ITEMCUREINFODATAROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D22B6B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ItemCureInfoDataRow_TypeDefinitionIndex = 13772;

	class ItemCureInfoDataRow : public ::System::Object
	{
	public:
		::System::String* ImgPath; // 0x10
		::RPG::Client::TextID CureInfoDesc; // 0x18
		::RPG::Client::TextID CureInfoTitle; // 0x28
		::System::UInt32 ID; // 0x38
		::System::Boolean SyncServerOnUse; // 0x3C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMCUREINFODATAROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ItemCureInfoDataRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ItemCureInfoDataRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMCUREINFODATAROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
