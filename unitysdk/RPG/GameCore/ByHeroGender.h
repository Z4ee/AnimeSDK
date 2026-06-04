#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GenderType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYHEROGENDER_METHOD_4_41D5BE0DF3E20250_OFFSET UNITYSDK_OFFSET(0x195552C0)
#define RPG_GAMECORE_BYHEROGENDER_METHOD_4_9279A63839C02240_OFFSET UNITYSDK_OFFSET(0x195550C0)
#define RPG_GAMECORE_BYHEROGENDER_METHOD_4_A02C874533E6583D_OFFSET UNITYSDK_OFFSET(0x19555240)
#define RPG_GAMECORE_BYHEROGENDER_METHOD_4_EBC702719B577E3E_OFFSET UNITYSDK_OFFSET(0x19554FF0)
#define RPG_GAMECORE_BYHEROGENDER__CTOR_OFFSET UNITYSDK_OFFSET(0x19555070)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByHeroGender_TypeDefinitionIndex = 22457;

	class ByHeroGender : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::GenderType Gender; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHEROGENDER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_EBC702719B577E3E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByHeroGender*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByHeroGender*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHEROGENDER_METHOD_4_EBC702719B577E3E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_9279A63839C02240(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByHeroGender* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByHeroGender*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHEROGENDER_METHOD_4_9279A63839C02240_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_A02C874533E6583D(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByHeroGender*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByHeroGender*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHEROGENDER_METHOD_4_A02C874533E6583D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_41D5BE0DF3E20250(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByHeroGender* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByHeroGender*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHEROGENDER_METHOD_4_41D5BE0DF3E20250_OFFSET))(a1, a2);
		}
	};
}
