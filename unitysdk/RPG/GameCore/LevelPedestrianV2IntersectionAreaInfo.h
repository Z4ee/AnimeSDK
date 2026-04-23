#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/MVector3.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_LEVELPEDESTRIANV2INTERSECTIONAREAINFO_METHOD_2_A04FDB264E916DC3_OFFSET UNITYSDK_OFFSET(0x18A53C10)
#define RPG_GAMECORE_LEVELPEDESTRIANV2INTERSECTIONAREAINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x18A53DB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelPedestrianV2IntersectionAreaInfo_TypeDefinitionIndex = 16413;

	class LevelPedestrianV2IntersectionAreaInfo : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::MVector3 LimitPoint; // 0x10
		::RPG::MVector3 LimitDirection; // 0x1C
		::System::Single LimitWidth; // 0x28
		::System::Single LimitDistance; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELPEDESTRIANV2INTERSECTIONAREAINFO__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_A04FDB264E916DC3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LevelPedestrianV2IntersectionAreaInfo*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LevelPedestrianV2IntersectionAreaInfo*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELPEDESTRIANV2INTERSECTIONAREAINFO_METHOD_2_A04FDB264E916DC3_OFFSET))(a1, a2);
		}
	};
}
