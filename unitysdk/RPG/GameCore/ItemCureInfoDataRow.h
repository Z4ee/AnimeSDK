#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_ITEMCUREINFODATAROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x172C9590)
#define RPG_GAMECORE_ITEMCUREINFODATAROW__CTOR_OFFSET UNITYSDK_OFFSET(0x172C9CF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ItemCureInfoDataRow_TypeDefinitionIndex = 12687;

	class ItemCureInfoDataRow : public ::System::Object
	{
	public:
		::System::String* ImgPath; // 0x10
		::RPG::Client::TextID CureInfoTitle; // 0x18
		::RPG::Client::TextID CureInfoDesc; // 0x28
		::System::UInt32 ID; // 0x38
		::System::Boolean SyncServerOnUse; // 0x3C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMCUREINFODATAROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::ItemCureInfoDataRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ItemCureInfoDataRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMCUREINFODATAROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
