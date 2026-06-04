#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class LevelObjectNavMapBakedInfo; }

#define RPG_GAMECORE_LEVELENTITYBAKEDINFO_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x198727C0)
#define RPG_GAMECORE_LEVELENTITYBAKEDINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x19872940)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelEntityBakedInfo_TypeDefinitionIndex = 16287;

	class LevelEntityBakedInfo : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 ID; // 0x10
		::RPG::GameCore::LevelObjectNavMapBakedInfo* NavMap; // 0x18
		::System::UInt32 RegionID; // 0x20
		::Il2CppArray<::System::UInt32>* ArtRegionIDList; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYBAKEDINFO__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LevelEntityBakedInfo*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LevelEntityBakedInfo*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYBAKEDINFO_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
