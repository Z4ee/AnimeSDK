#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/NamedLevelObjectInfo.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class LevelPathwayLinkInfo; }

#define RPG_GAMECORE_LEVELPATHWAYINFO_METHOD_4_658EE803461797FF_OFFSET UNITYSDK_OFFSET(0x1C126230)
#define RPG_GAMECORE_LEVELPATHWAYINFO_METHOD_4_8F467125A4E418BB_OFFSET UNITYSDK_OFFSET(0x1C128C80)
#define RPG_GAMECORE_LEVELPATHWAYINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1C126220)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelPathwayInfo_TypeDefinitionIndex = 17057;

	class LevelPathwayInfo : public ::RPG::GameCore::NamedLevelObjectInfo
	{
	public:
		::Il2CppArray<::System::UInt32>* WaypointIDList; // 0x38
		::Il2CppArray<::RPG::GameCore::LevelPathwayLinkInfo*>* WaypointGraph; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELPATHWAYINFO__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_8F467125A4E418BB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LevelPathwayInfo*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LevelPathwayInfo*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELPATHWAYINFO_METHOD_4_8F467125A4E418BB_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_658EE803461797FF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LevelPathwayInfo* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LevelPathwayInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELPATHWAYINFO_METHOD_4_658EE803461797FF_OFFSET))(a1, a2);
		}
	};
}
