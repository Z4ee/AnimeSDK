#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/GenderType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_IDLELIVEAMPHOREUSCARDROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18A0D4A0)
#define RPG_GAMECORE_IDLELIVEAMPHOREUSCARDROW__CTOR_OFFSET UNITYSDK_OFFSET(0x18A0D8B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int IdleLiveAmphoreusCardRow_TypeDefinitionIndex = 11183;

	class IdleLiveAmphoreusCardRow : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::GameCore::FixPoint>* Param; // 0x10
		::System::String* CardFigure; // 0x18
		::System::String* MiniIcon; // 0x20
		::System::String* AbilityName; // 0x28
		::System::UInt32 TriggerNode; // 0x30
		::RPG::GameCore::GenderType GenderLimit; // 0x34
		::RPG::Client::TextID Name; // 0x38
		::RPG::Client::TextID Desc; // 0x48
		::System::UInt32 TriggerChapter; // 0x58
		::System::UInt32 ID; // 0x5C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_IDLELIVEAMPHOREUSCARDROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::IdleLiveAmphoreusCardRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::IdleLiveAmphoreusCardRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_IDLELIVEAMPHOREUSCARDROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
