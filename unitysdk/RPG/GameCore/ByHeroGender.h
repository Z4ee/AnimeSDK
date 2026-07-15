#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GenderType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYHEROGENDER_METHOD_4_15EDA23E9B5351D5_OFFSET UNITYSDK_OFFSET(0x1A8D03E0)
#define RPG_GAMECORE_BYHEROGENDER_METHOD_4_195B904260F83870_OFFSET UNITYSDK_OFFSET(0x1A8D05A0)
#define RPG_GAMECORE_BYHEROGENDER_METHOD_4_9279A63839C02240_OFFSET UNITYSDK_OFFSET(0x1A8D0420)
#define RPG_GAMECORE_BYHEROGENDER_METHOD_4_9B3DDB09CD98FA07_OFFSET UNITYSDK_OFFSET(0x1A8D05D0)
#define RPG_GAMECORE_BYHEROGENDER__CTOR_OFFSET UNITYSDK_OFFSET(0x1A8D0410)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByHeroGender_TypeDefinitionIndex = 22907;

	class ByHeroGender : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::GenderType Gender; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHEROGENDER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_15EDA23E9B5351D5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByHeroGender*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByHeroGender*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHEROGENDER_METHOD_4_15EDA23E9B5351D5_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_9279A63839C02240(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByHeroGender* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByHeroGender*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHEROGENDER_METHOD_4_9279A63839C02240_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_195B904260F83870(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByHeroGender*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByHeroGender*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHEROGENDER_METHOD_4_195B904260F83870_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_9B3DDB09CD98FA07(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByHeroGender* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByHeroGender*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHEROGENDER_METHOD_4_9B3DDB09CD98FA07_OFFSET))(a1, a2);
		}
	};
}
