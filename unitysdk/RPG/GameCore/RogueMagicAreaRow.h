#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/RogueMagicAreaGroupID.h"
#include "unitysdk/RPG/GameCore/RogueMagicStyleType.h"
#include "unitysdk/System/Object.h"

class Class_1_73507DF29F8561CD;
class Class_1_7A22A3DBEEDD1F80;
class Class_1_A88C3AAF0DD46F4C_9;
namespace System { class String; }

#define RPG_GAMECORE_ROGUEMAGICAREAROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D939410)
#define RPG_GAMECORE_ROGUEMAGICAREAROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D939DC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueMagicAreaRow_TypeDefinitionIndex = 14685;

	class RogueMagicAreaRow : public ::System::Object
	{
	public:
		::System::String* CustomStageDisplayIcon; // 0x10
		::Il2CppArray<::System::UInt32>* LayerIDList; // 0x18
		::Il2CppArray<::System::UInt32>* DifficultyIDList; // 0x20
		::Il2CppArray<::Class_1_A88C3AAF0DD46F4C_9*>* WorldLevel2DisplayMonster; // 0x28
		::Il2CppArray<::Class_1_73507DF29F8561CD*>* CustomStageDisplayParams; // 0x30
		::System::Boolean IsHard; // 0x38
		::System::UInt32 ExtraLayerID; // 0x3C
		::RPG::GameCore::RogueMagicAreaGroupID AreaGroupID; // 0x40
		::System::UInt32 AreaID; // 0x44
		::System::UInt32 AreaIndex; // 0x48
		::System::UInt32 FirstReward; // 0x4C
		::RPG::Client::TextID AreaNameID; // 0x50
		::System::UInt32 UnlockID; // 0x60
		::RPG::GameCore::RogueMagicStyleType DefaultStyle; // 0x64

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMAGICAREAROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueMagicAreaRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueMagicAreaRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMAGICAREAROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
