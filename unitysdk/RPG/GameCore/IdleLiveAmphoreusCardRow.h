#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/GenderType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_IDLELIVEAMPHOREUSCARDROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1983F7F0)
#define RPG_GAMECORE_IDLELIVEAMPHOREUSCARDROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1983FBF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int IdleLiveAmphoreusCardRow_TypeDefinitionIndex = 11230;

	class IdleLiveAmphoreusCardRow : public ::System::Object
	{
	public:
		::System::String* CardFigure; // 0x10
		::System::String* AbilityName; // 0x18
		::Il2CppArray<::RPG::GameCore::FixPoint>* Param; // 0x20
		::System::String* MiniIcon; // 0x28
		::RPG::Client::TextID Desc; // 0x30
		::System::UInt32 TriggerNode; // 0x40
		::System::UInt32 TriggerChapter; // 0x44
		::RPG::GameCore::GenderType GenderLimit; // 0x48
		::System::UInt32 ID; // 0x4C
		::RPG::Client::TextID Name; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_IDLELIVEAMPHOREUSCARDROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::IdleLiveAmphoreusCardRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::IdleLiveAmphoreusCardRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_IDLELIVEAMPHOREUSCARDROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
