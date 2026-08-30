#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/AvatarPropertyType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_GRIDFIGHTROLEPROPERTYCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D1632D0)
#define RPG_GAMECORE_GRIDFIGHTROLEPROPERTYCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D163660)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightRolePropertyConfigRow_TypeDefinitionIndex = 13413;

	class GridFightRolePropertyConfigRow : public ::System::Object
	{
	public:
		::System::String* MiniIconPath; // 0x10
		::System::String* IconPath; // 0x18
		::System::UInt32 ExtraEffectID; // 0x20
		::System::Boolean IsDisplay; // 0x24
		::RPG::Client::TextID PanelPropertyName; // 0x28
		::RPG::Client::TextID PropertyName; // 0x38
		::System::UInt32 Order; // 0x48
		::RPG::GameCore::AvatarPropertyType PropertyType; // 0x4C

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
