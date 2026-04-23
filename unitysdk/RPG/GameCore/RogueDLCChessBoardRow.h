#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_ROGUEDLCCHESSBOARDROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18D0A1D0)
#define RPG_GAMECORE_ROGUEDLCCHESSBOARDROW__CTOR_OFFSET UNITYSDK_OFFSET(0x18D0A3A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueDLCChessBoardRow_TypeDefinitionIndex = 13972;

	class RogueDLCChessBoardRow : public ::System::Object
	{
	public:
		::System::String* ChessBoardConfiguration; // 0x10
		::Il2CppArray<::System::UInt32>* ChessBoardEventList; // 0x18
		::System::UInt32 ChessBoardID; // 0x20
		::System::UInt32 BlockCreatGroupID; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCCHESSBOARDROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::RogueDLCChessBoardRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueDLCChessBoardRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCCHESSBOARDROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
