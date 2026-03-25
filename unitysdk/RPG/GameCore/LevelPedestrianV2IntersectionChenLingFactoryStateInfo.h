#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_LEVELPEDESTRIANV2INTERSECTIONCHENLINGFACTORYSTATEINFO_METHOD_2_8935A8C6754461D8_OFFSET UNITYSDK_OFFSET(0x173466B0)
#define RPG_GAMECORE_LEVELPEDESTRIANV2INTERSECTIONCHENLINGFACTORYSTATEINFO_METHOD_2_ADAD844C796F44EC_OFFSET UNITYSDK_OFFSET(0x17346A30)
#define RPG_GAMECORE_LEVELPEDESTRIANV2INTERSECTIONCHENLINGFACTORYSTATEINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x17346A20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelPedestrianV2IntersectionChenLingFactoryStateInfo_TypeDefinitionIndex = 15895;

	class LevelPedestrianV2IntersectionChenLingFactoryStateInfo : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELPEDESTRIANV2INTERSECTIONCHENLINGFACTORYSTATEINFO__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_8935A8C6754461D8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LevelPedestrianV2IntersectionChenLingFactoryStateInfo*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LevelPedestrianV2IntersectionChenLingFactoryStateInfo*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELPEDESTRIANV2INTERSECTIONCHENLINGFACTORYSTATEINFO_METHOD_2_8935A8C6754461D8_OFFSET))(a1, a2);
		}

		static ::System::Void Method_2_ADAD844C796F44EC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LevelPedestrianV2IntersectionChenLingFactoryStateInfo* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LevelPedestrianV2IntersectionChenLingFactoryStateInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELPEDESTRIANV2INTERSECTIONCHENLINGFACTORYSTATEINFO_METHOD_2_ADAD844C796F44EC_OFFSET))(a1, a2);
		}
	};
}
