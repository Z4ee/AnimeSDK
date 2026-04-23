#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/RogueMagicAreaGroupID.h"
#include "unitysdk/RPG/GameCore/RogueMagicStyleType.h"
#include "unitysdk/System/Object.h"

class Class_1_73507DF29F8561CD;
class Class_1_7A22A3DBEEDD1F80;
class Class_1_A88C3AAF0DD46F4C_7;
namespace System { class String; }

#define RPG_GAMECORE_ROGUEMAGICAREAROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18D1E440)
#define RPG_GAMECORE_ROGUEMAGICAREAROW__CTOR_OFFSET UNITYSDK_OFFSET(0x18D1EDB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueMagicAreaRow_TypeDefinitionIndex = 14053;

	class RogueMagicAreaRow : public ::System::Object
	{
	public:
		::Il2CppArray<::Class_1_A88C3AAF0DD46F4C_7*>* WorldLevel2DisplayMonster; // 0x10
		::Il2CppArray<::System::UInt32>* LayerIDList; // 0x18
		::Il2CppArray<::Class_1_73507DF29F8561CD*>* CustomStageDisplayParams; // 0x20
		::Il2CppArray<::System::UInt32>* DifficultyIDList; // 0x28
		::System::String* CustomStageDisplayIcon; // 0x30
		::System::UInt32 ExtraLayerID; // 0x38
		::RPG::GameCore::RogueMagicAreaGroupID AreaGroupID; // 0x3C
		::System::UInt32 AreaID; // 0x40
		::System::UInt32 AreaIndex; // 0x44
		::System::Boolean IsHard; // 0x48
		::System::UInt32 FirstReward; // 0x4C
		::System::UInt32 UnlockID; // 0x50
		::RPG::GameCore::RogueMagicStyleType DefaultStyle; // 0x54
		::RPG::Client::TextID AreaNameID; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMAGICAREAROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::RogueMagicAreaRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueMagicAreaRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMAGICAREAROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
