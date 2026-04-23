#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_BELOBOGSHOPUICONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18707E80)
#define RPG_GAMECORE_BELOBOGSHOPUICONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x18708620)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BelobogShopUIConfigRow_TypeDefinitionIndex = 11408;

	class BelobogShopUIConfigRow : public ::System::Object
	{
	public:
		::System::String* IconPath; // 0x10
		::System::String* ImgPath; // 0x18
		::Il2CppArray<::System::UInt32>* ReplyIDList; // 0x20
		::RPG::Client::TextID Desc; // 0x28
		::RPG::Client::TextID Name; // 0x38
		::System::UInt32 ID; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BELOBOGSHOPUICONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::BelobogShopUIConfigRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::BelobogShopUIConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BELOBOGSHOPUICONFIGROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
