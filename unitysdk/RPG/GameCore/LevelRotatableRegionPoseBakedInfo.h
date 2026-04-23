#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_LEVELROTATABLEREGIONPOSEBAKEDINFO_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18A5A0A0)
#define RPG_GAMECORE_LEVELROTATABLEREGIONPOSEBAKEDINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x18A5A1D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelRotatableRegionPoseBakedInfo_TypeDefinitionIndex = 16262;

	class LevelRotatableRegionPoseBakedInfo : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* NavMesh; // 0x10
		::System::String* NavMeshLargeMonster; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELROTATABLEREGIONPOSEBAKEDINFO__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::LevelRotatableRegionPoseBakedInfo*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LevelRotatableRegionPoseBakedInfo*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELROTATABLEREGIONPOSEBAKEDINFO_FROMBINARY_OFFSET))(array, val);
		}
	};
}
