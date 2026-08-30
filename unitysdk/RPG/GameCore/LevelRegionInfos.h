#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class LevelRegionInfo; }

#define RPG_GAMECORE_LEVELREGIONINFOS_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1C1307C0)
#define RPG_GAMECORE_LEVELREGIONINFOS__CTOR_OFFSET UNITYSDK_OFFSET(0x1C130880)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelRegionInfos_TypeDefinitionIndex = 17196;

	class LevelRegionInfos : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::LevelRegionInfo*>* RegionList; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELREGIONINFOS__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LevelRegionInfos*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LevelRegionInfos*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELREGIONINFOS_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
