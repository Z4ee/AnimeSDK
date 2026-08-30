#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_BELOBOGSHOPUICONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1CE82E60)
#define RPG_GAMECORE_BELOBOGSHOPUICONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1CE83610)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BelobogShopUIConfigRow_TypeDefinitionIndex = 11942;

	class BelobogShopUIConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* ReplyIDList; // 0x10
		::System::String* IconPath; // 0x18
		::System::String* ImgPath; // 0x20
		::System::UInt32 ID; // 0x28
		::RPG::Client::TextID Desc; // 0x30
		::RPG::Client::TextID Name; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BELOBOGSHOPUICONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::BelobogShopUIConfigRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::BelobogShopUIConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BELOBOGSHOPUICONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
