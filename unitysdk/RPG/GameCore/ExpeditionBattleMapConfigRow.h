#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_EXPEDITIONBATTLEMAPCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D7DC010)
#define RPG_GAMECORE_EXPEDITIONBATTLEMAPCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D7DC2F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ExpeditionBattleMapConfigRow_TypeDefinitionIndex = 11426;

	class ExpeditionBattleMapConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* RouteIDList; // 0x10
		::System::String* MapIconPath; // 0x18
		::System::String* ExpeditionBackgroundPrefabPath; // 0x20
		::System::String* ExpeditionBGM; // 0x28
		::RPG::Client::TextID MapName; // 0x30
		::System::UInt32 ID; // 0x40
		::System::UInt32 ActivityModuleID; // 0x44

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EXPEDITIONBATTLEMAPCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ExpeditionBattleMapConfigRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ExpeditionBattleMapConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EXPEDITIONBATTLEMAPCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
