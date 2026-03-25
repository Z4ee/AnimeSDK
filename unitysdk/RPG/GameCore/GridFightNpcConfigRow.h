#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/GridFightRegion.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_GRIDFIGHTNPCCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1726DA30)
#define RPG_GAMECORE_GRIDFIGHTNPCCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1726DDC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightNpcConfigRow_TypeDefinitionIndex = 12322;

	class GridFightNpcConfigRow : public ::System::Object
	{
	public:
		::System::String* Icon; // 0x10
		::System::String* RoundIcon; // 0x18
		::RPG::Client::TextID NpcDesc; // 0x20
		::System::UInt32 ID; // 0x30
		::System::UInt32 NpcType; // 0x34
		::RPG::Client::TextID NpcName; // 0x38
		::System::Boolean IsEquippable; // 0x48
		::RPG::GameCore::GridFightRegion PositionRegion; // 0x4C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTNPCCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::GridFightNpcConfigRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightNpcConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTNPCCONFIGROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
