#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_LEVELPEDESTRIANV2ROADENTRYINFO_METHOD_2_662403E26E324806_OFFSET UNITYSDK_OFFSET(0x1C129C10)
#define RPG_GAMECORE_LEVELPEDESTRIANV2ROADENTRYINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1C12DD90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelPedestrianV2RoadEntryInfo_TypeDefinitionIndex = 17097;

	class LevelPedestrianV2RoadEntryInfo : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Int32 RoadIndex; // 0x10
		::System::Boolean Reverse; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELPEDESTRIANV2ROADENTRYINFO__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_662403E26E324806(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LevelPedestrianV2RoadEntryInfo*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LevelPedestrianV2RoadEntryInfo*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELPEDESTRIANV2ROADENTRYINFO_METHOD_2_662403E26E324806_OFFSET))(a1, a2);
		}
	};
}
