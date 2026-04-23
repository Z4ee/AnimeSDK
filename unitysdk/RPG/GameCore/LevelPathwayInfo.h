#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/NamedLevelObjectInfo.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class LevelPathwayLinkInfo; }

#define RPG_GAMECORE_LEVELPATHWAYINFO_METHOD_4_E6AA41D8781A1A7D_OFFSET UNITYSDK_OFFSET(0x18A4FFF0)
#define RPG_GAMECORE_LEVELPATHWAYINFO_METHOD_4_FAD5CAC8DC3A8538_OFFSET UNITYSDK_OFFSET(0x18A52A50)
#define RPG_GAMECORE_LEVELPATHWAYINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x18A4FFE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelPathwayInfo_TypeDefinitionIndex = 16372;

	class LevelPathwayInfo : public ::RPG::GameCore::NamedLevelObjectInfo
	{
	public:
		::Il2CppArray<::System::UInt32>* WaypointIDList; // 0x38
		::Il2CppArray<::RPG::GameCore::LevelPathwayLinkInfo*>* WaypointGraph; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELPATHWAYINFO__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_FAD5CAC8DC3A8538(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LevelPathwayInfo*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LevelPathwayInfo*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELPATHWAYINFO_METHOD_4_FAD5CAC8DC3A8538_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_E6AA41D8781A1A7D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LevelPathwayInfo* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LevelPathwayInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELPATHWAYINFO_METHOD_4_E6AA41D8781A1A7D_OFFSET))(a1, a2);
		}
	};
}
