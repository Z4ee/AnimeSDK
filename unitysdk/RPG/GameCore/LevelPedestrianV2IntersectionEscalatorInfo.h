#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LevelPedestrianV2IntersectionInfo.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_LEVELPEDESTRIANV2INTERSECTIONESCALATORINFO_METHOD_3_B9DE4FD8F6A0DEA7_OFFSET UNITYSDK_OFFSET(0x1C12C2A0)
#define RPG_GAMECORE_LEVELPEDESTRIANV2INTERSECTIONESCALATORINFO_METHOD_3_F22A446D6A2BCA30_OFFSET UNITYSDK_OFFSET(0x1C12C2E0)
#define RPG_GAMECORE_LEVELPEDESTRIANV2INTERSECTIONESCALATORINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1C12C2D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelPedestrianV2IntersectionEscalatorInfo_TypeDefinitionIndex = 17104;

	class LevelPedestrianV2IntersectionEscalatorInfo : public ::RPG::GameCore::LevelPedestrianV2IntersectionInfo
	{
	public:
		::System::UInt32 BindEntityGroupID; // 0x50
		::System::UInt32 BindEntityGroupInstanceID; // 0x54

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELPEDESTRIANV2INTERSECTIONESCALATORINFO__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_B9DE4FD8F6A0DEA7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LevelPedestrianV2IntersectionEscalatorInfo*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LevelPedestrianV2IntersectionEscalatorInfo*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELPEDESTRIANV2INTERSECTIONESCALATORINFO_METHOD_3_B9DE4FD8F6A0DEA7_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_F22A446D6A2BCA30(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LevelPedestrianV2IntersectionEscalatorInfo* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LevelPedestrianV2IntersectionEscalatorInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELPEDESTRIANV2INTERSECTIONESCALATORINFO_METHOD_3_F22A446D6A2BCA30_OFFSET))(a1, a2);
		}
	};
}
