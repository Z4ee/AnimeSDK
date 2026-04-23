#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/AvatarBaseType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_AVATARBASETYPEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x186B84F0)
#define RPG_GAMECORE_AVATARBASETYPEROW__CTOR_OFFSET UNITYSDK_OFFSET(0x186B8DB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AvatarBaseTypeRow_TypeDefinitionIndex = 12046;

	class AvatarBaseTypeRow : public ::System::Object
	{
	public:
		::System::String* LightConeCardBackImagePath; // 0x10
		::System::String* BaseTypeIconSmall; // 0x18
		::System::String* BaseTypeIcon; // 0x20
		::System::String* BaseTypeIconPathTalk; // 0x28
		::System::String* BgPath; // 0x30
		::System::String* FirstWordText; // 0x38
		::System::String* Equipment3DTgaPath; // 0x40
		::System::String* EquipmentLightMatPath; // 0x48
		::System::String* BaseTypeIconMiddle; // 0x50
		::RPG::GameCore::AvatarBaseType ID; // 0x58
		::RPG::Client::TextID BaseTypeDesc; // 0x60
		::RPG::Client::TextID BaseTypeText; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARBASETYPEROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::AvatarBaseTypeRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AvatarBaseTypeRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARBASETYPEROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
