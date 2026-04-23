#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class FloorCustomValueConfig; }
namespace RPG::GameCore { class HoyoTagContainer; }
namespace System { class String; }

#define RPG_GAMECORE_LEVELDIMENSIONCROSSMAPBRIEFINFO_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18A3F130)
#define RPG_GAMECORE_LEVELDIMENSIONCROSSMAPBRIEFINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x18A3F3A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelDimensionCrossMapBriefInfo_TypeDefinitionIndex = 16279;

	class LevelDimensionCrossMapBriefInfo : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 ID; // 0x10
		::Il2CppArray<::System::UInt32>* GroupIndexList; // 0x18
		::System::UInt32 StartGroupIndex; // 0x20
		::System::UInt32 StartAnchorID; // 0x24
		::Il2CppArray<::RPG::GameCore::FloorCustomValueConfig*>* ConstValues; // 0x28
		::System::String* DefaultEnviroProfile; // 0x30
		::RPG::GameCore::HoyoTagContainer* TagContainer; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELDIMENSIONCROSSMAPBRIEFINFO__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::LevelDimensionCrossMapBriefInfo*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LevelDimensionCrossMapBriefInfo*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELDIMENSIONCROSSMAPBRIEFINFO_FROMBINARY_OFFSET))(array, val);
		}
	};
}
