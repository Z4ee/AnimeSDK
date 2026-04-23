#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class MarbleSkillConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_GLOBALMARBLESKILLCONFIG_METHOD_2_AF5F4EB235EBEEC6_OFFSET UNITYSDK_OFFSET(0x18997BD0)
#define RPG_GAMECORE_GLOBALMARBLESKILLCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x18997CE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GlobalMarbleSkillConfig_TypeDefinitionIndex = 15989;

	class GlobalMarbleSkillConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::MarbleSkillConfig*>* SkillDict; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GLOBALMARBLESKILLCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_AF5F4EB235EBEEC6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GlobalMarbleSkillConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GlobalMarbleSkillConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GLOBALMARBLESKILLCONFIG_METHOD_2_AF5F4EB235EBEEC6_OFFSET))(a1, a2);
		}
	};
}
