#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_ROGUEMIRACLEDISPLAYROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18D286F0)
#define RPG_GAMECORE_ROGUEMIRACLEDISPLAYROW__CTOR_OFFSET UNITYSDK_OFFSET(0x18D28E10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueMiracleDisplayRow_TypeDefinitionIndex = 13897;

	class RogueMiracleDisplayRow : public ::System::Object
	{
	public:
		::System::String* MiracleFigureIconPath; // 0x10
		::System::String* MiracleIconPath; // 0x18
		::RPG::Client::TextID MiracleName; // 0x20
		::System::UInt32 MiracleDisplayID; // 0x30
		::RPG::Client::TextID MiracleBGDesc; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMIRACLEDISPLAYROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::RogueMiracleDisplayRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueMiracleDisplayRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMIRACLEDISPLAYROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
