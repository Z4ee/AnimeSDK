#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LevelPedestrianV2IntersectionInfo.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_LEVELPEDESTRIANV2INTERSECTIONESCALATORINFO_METHOD_3_85BD9CCC8D7C4906_OFFSET UNITYSDK_OFFSET(0x18A55570)
#define RPG_GAMECORE_LEVELPEDESTRIANV2INTERSECTIONESCALATORINFO_METHOD_3_92DBD128C1B310C8_OFFSET UNITYSDK_OFFSET(0x18A55530)
#define RPG_GAMECORE_LEVELPEDESTRIANV2INTERSECTIONESCALATORINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x18A55560)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelPedestrianV2IntersectionEscalatorInfo_TypeDefinitionIndex = 16416;

	class LevelPedestrianV2IntersectionEscalatorInfo : public ::RPG::GameCore::LevelPedestrianV2IntersectionInfo
	{
	public:
		::System::UInt32 BindEntityGroupID; // 0x50
		::System::UInt32 BindEntityGroupInstanceID; // 0x54

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELPEDESTRIANV2INTERSECTIONESCALATORINFO__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_92DBD128C1B310C8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LevelPedestrianV2IntersectionEscalatorInfo*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LevelPedestrianV2IntersectionEscalatorInfo*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELPEDESTRIANV2INTERSECTIONESCALATORINFO_METHOD_3_92DBD128C1B310C8_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_85BD9CCC8D7C4906(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LevelPedestrianV2IntersectionEscalatorInfo* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LevelPedestrianV2IntersectionEscalatorInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELPEDESTRIANV2INTERSECTIONESCALATORINFO_METHOD_3_85BD9CCC8D7C4906_OFFSET))(a1, a2);
		}
	};
}
