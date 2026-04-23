#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_LEVELOBJECTNAVMAPBAKEDINFO_METHOD_2_139CA547CB6E6FA6_OFFSET UNITYSDK_OFFSET(0x18A528E0)
#define RPG_GAMECORE_LEVELOBJECTNAVMAPBAKEDINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x18A52A40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelObjectNavMapBakedInfo_TypeDefinitionIndex = 16252;

	class LevelObjectNavMapBakedInfo : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Int32 MapLayerID; // 0x10
		::System::UInt32 AreaID; // 0x14
		::System::UInt32 SectionID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELOBJECTNAVMAPBAKEDINFO__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_139CA547CB6E6FA6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LevelObjectNavMapBakedInfo*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LevelObjectNavMapBakedInfo*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELOBJECTNAVMAPBAKEDINFO_METHOD_2_139CA547CB6E6FA6_OFFSET))(a1, a2);
		}
	};
}
