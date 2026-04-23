#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/AvatarPropertyType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_GRIDFIGHTROLEPROPERTYCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x189D3400)
#define RPG_GAMECORE_GRIDFIGHTROLEPROPERTYCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x189D3790)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightRolePropertyConfigRow_TypeDefinitionIndex = 12786;

	class GridFightRolePropertyConfigRow : public ::System::Object
	{
	public:
		::System::String* MiniIconPath; // 0x10
		::System::String* IconPath; // 0x18
		::System::UInt32 ExtraEffectID; // 0x20
		::System::Boolean IsDisplay; // 0x24
		::RPG::Client::TextID PanelPropertyName; // 0x28
		::RPG::GameCore::AvatarPropertyType PropertyType; // 0x38
		::System::UInt32 Order; // 0x3C
		::RPG::Client::TextID PropertyName; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTROLEPROPERTYCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::GridFightRolePropertyConfigRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightRolePropertyConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTROLEPROPERTYCONFIGROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
