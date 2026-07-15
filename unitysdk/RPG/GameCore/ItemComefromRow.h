#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ITEMCOMEFROMROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1B017060)
#define RPG_GAMECORE_ITEMCOMEFROMROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1B018FA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ItemComefromRow_TypeDefinitionIndex = 13366;

	class ItemComefromRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* GotoParam; // 0x10
		::System::UInt32 ID; // 0x18
		::System::UInt32 ComefromID; // 0x1C
		::System::UInt32 NPCMonsterTrackID; // 0x20
		::System::UInt32 Sort; // 0x24
		::RPG::Client::TextID Desc; // 0x28
		::System::UInt32 GotoID; // 0x38
		::System::Boolean EnableMissionTrack; // 0x3C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMCOMEFROMROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ItemComefromRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ItemComefromRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMCOMEFROMROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
