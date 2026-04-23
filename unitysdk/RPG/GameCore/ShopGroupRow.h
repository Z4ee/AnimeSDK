#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_SHOPGROUPROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18E56710)
#define RPG_GAMECORE_SHOPGROUPROW__CTOR_OFFSET UNITYSDK_OFFSET(0x18E56D80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ShopGroupRow_TypeDefinitionIndex = 14318;

	class ShopGroupRow : public ::System::Object
	{
	public:
		::System::String* IconPath; // 0x10
		::RPG::Client::TextID Name; // 0x18
		::System::UInt32 ID; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOPGROUPROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::ShopGroupRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ShopGroupRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOPGROUPROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
