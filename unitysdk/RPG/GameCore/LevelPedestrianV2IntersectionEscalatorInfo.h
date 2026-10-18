#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LevelPedestrianV2IntersectionInfo.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_LEVELPEDESTRIANV2INTERSECTIONESCALATORINFO_METHOD_3_3A7D1D5F4416B761_OFFSET UNITYSDK_OFFSET(0x1D799740)
#define RPG_GAMECORE_LEVELPEDESTRIANV2INTERSECTIONESCALATORINFO_METHOD_3_960152C9D52BCE89_OFFSET UNITYSDK_OFFSET(0x1D799780)
#define RPG_GAMECORE_LEVELPEDESTRIANV2INTERSECTIONESCALATORINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1D799770)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelPedestrianV2IntersectionEscalatorInfo_TypeDefinitionIndex = 17299;

	class LevelPedestrianV2IntersectionEscalatorInfo : public ::RPG::GameCore::LevelPedestrianV2IntersectionInfo
	{
	public:
		::System::UInt32 BindEntityGroupID; // 0x50
		::System::UInt32 BindEntityGroupInstanceID; // 0x54

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELPEDESTRIANV2INTERSECTIONESCALATORINFO__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_3A7D1D5F4416B761(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LevelPedestrianV2IntersectionEscalatorInfo*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LevelPedestrianV2IntersectionEscalatorInfo*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELPEDESTRIANV2INTERSECTIONESCALATORINFO_METHOD_3_3A7D1D5F4416B761_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_960152C9D52BCE89(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LevelPedestrianV2IntersectionEscalatorInfo* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LevelPedestrianV2IntersectionEscalatorInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELPEDESTRIANV2INTERSECTIONESCALATORINFO_METHOD_3_960152C9D52BCE89_OFFSET))(a1, a2);
		}
	};
}
