#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LevelPedestrianV2IntersectionInfo.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class LevelPedestrianV2IntersectionAreaInfo; }
namespace RPG::GameCore { class LevelPedestrianV2IntersectionConnectAreaInfo; }
namespace System { class String; }

#define RPG_GAMECORE_LEVELPEDESTRIANV2INTERSECTIONSTATIONINFO_METHOD_3_1F8C45A7C1EA03F8_OFFSET UNITYSDK_OFFSET(0x19885130)
#define RPG_GAMECORE_LEVELPEDESTRIANV2INTERSECTIONSTATIONINFO_METHOD_3_EC3E6B3EDAC12BFF_OFFSET UNITYSDK_OFFSET(0x19885670)
#define RPG_GAMECORE_LEVELPEDESTRIANV2INTERSECTIONSTATIONINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x19885120)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelPedestrianV2IntersectionStationInfo_TypeDefinitionIndex = 16452;

	class LevelPedestrianV2IntersectionStationInfo : public ::RPG::GameCore::LevelPedestrianV2IntersectionInfo
	{
	public:
		::System::UInt32 MaxMemberCount; // 0x50
		::System::UInt32 MaxSpawnMemberCount; // 0x54
		::System::String* BindStationName; // 0x58
		::Il2CppArray<::RPG::GameCore::LevelPedestrianV2IntersectionAreaInfo*>* AreaInfo; // 0x60
		::Il2CppArray<::RPG::GameCore::LevelPedestrianV2IntersectionConnectAreaInfo*>* ConnectAreaInfo; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELPEDESTRIANV2INTERSECTIONSTATIONINFO__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_EC3E6B3EDAC12BFF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LevelPedestrianV2IntersectionStationInfo*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LevelPedestrianV2IntersectionStationInfo*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELPEDESTRIANV2INTERSECTIONSTATIONINFO_METHOD_3_EC3E6B3EDAC12BFF_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_1F8C45A7C1EA03F8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LevelPedestrianV2IntersectionStationInfo* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LevelPedestrianV2IntersectionStationInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELPEDESTRIANV2INTERSECTIONSTATIONINFO_METHOD_3_1F8C45A7C1EA03F8_OFFSET))(a1, a2);
		}
	};
}
