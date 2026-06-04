#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/AvatarPropertyType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_GRIDFIGHTROLEPROPERTYCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x19806550)
#define RPG_GAMECORE_GRIDFIGHTROLEPROPERTYCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x198068E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightRolePropertyConfigRow_TypeDefinitionIndex = 12874;

	class GridFightRolePropertyConfigRow : public ::System::Object
	{
	public:
		::System::String* IconPath; // 0x10
		::System::String* MiniIconPath; // 0x18
		::RPG::Client::TextID PropertyName; // 0x20
		::System::UInt32 Order; // 0x30
		::System::Boolean IsDisplay; // 0x34
		::System::UInt32 ExtraEffectID; // 0x38
		::RPG::GameCore::AvatarPropertyType PropertyType; // 0x3C
		::RPG::Client::TextID PanelPropertyName; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTROLEPROPERTYCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightRolePropertyConfigRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightRolePropertyConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTROLEPROPERTYCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
