#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class MarbleSkillConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_GLOBALPETMARBLESKILLCONFIG_METHOD_2_4F7077C76FE2A345_OFFSET UNITYSDK_OFFSET(0x1D71F4D0)
#define RPG_GAMECORE_GLOBALPETMARBLESKILLCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D71F5D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GlobalPetMarbleSkillConfig_TypeDefinitionIndex = 16900;

	class GlobalPetMarbleSkillConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::MarbleSkillConfig*>* SkillDict; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GLOBALPETMARBLESKILLCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_4F7077C76FE2A345(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GlobalPetMarbleSkillConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GlobalPetMarbleSkillConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GLOBALPETMARBLESKILLCONFIG_METHOD_2_4F7077C76FE2A345_OFFSET))(a1, a2);
		}
	};
}
