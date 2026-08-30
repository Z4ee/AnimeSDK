#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class LevelPedestrianV2SpawnGroupInfo_ChenLingStack; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_LEVELPEDESTRIANV2CHENLINGSTACKGROUPCOLLECTIONCONFIG_METHOD_2_AEBE7FB967AC133F_OFFSET UNITYSDK_OFFSET(0x1D1E6260)
#define RPG_GAMECORE_LEVELPEDESTRIANV2CHENLINGSTACKGROUPCOLLECTIONCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D1E6360)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelPedestrianV2ChenLingStackGroupCollectionConfig_TypeDefinitionIndex = 17126;

	class LevelPedestrianV2ChenLingStackGroupCollectionConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::LevelPedestrianV2SpawnGroupInfo_ChenLingStack*>* StackGroupMap; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELPEDESTRIANV2CHENLINGSTACKGROUPCOLLECTIONCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_AEBE7FB967AC133F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LevelPedestrianV2ChenLingStackGroupCollectionConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LevelPedestrianV2ChenLingStackGroupCollectionConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELPEDESTRIANV2CHENLINGSTACKGROUPCOLLECTIONCONFIG_METHOD_2_AEBE7FB967AC133F_OFFSET))(a1, a2);
		}
	};
}
