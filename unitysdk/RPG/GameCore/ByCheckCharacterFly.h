#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCHECKCHARACTERFLY_METHOD_4_292F2F7F8AF188AD_OFFSET UNITYSDK_OFFSET(0x19CC2DC0)
#define RPG_GAMECORE_BYCHECKCHARACTERFLY_METHOD_4_73486363B3F9D0F1_OFFSET UNITYSDK_OFFSET(0x19CC2BE0)
#define RPG_GAMECORE_BYCHECKCHARACTERFLY_METHOD_4_848CFAD4AA25622C_OFFSET UNITYSDK_OFFSET(0x19CC2D60)
#define RPG_GAMECORE_BYCHECKCHARACTERFLY_METHOD_4_EF844F947DF61AA0_OFFSET UNITYSDK_OFFSET(0x19CC2B40)
#define RPG_GAMECORE_BYCHECKCHARACTERFLY__CTOR_OFFSET UNITYSDK_OFFSET(0x19CC2BA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCheckCharacterFly_TypeDefinitionIndex = 22674;

	class ByCheckCharacterFly : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKCHARACTERFLY__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_EF844F947DF61AA0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCheckCharacterFly*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCheckCharacterFly*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKCHARACTERFLY_METHOD_4_EF844F947DF61AA0_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_73486363B3F9D0F1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCheckCharacterFly* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCheckCharacterFly*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKCHARACTERFLY_METHOD_4_73486363B3F9D0F1_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_848CFAD4AA25622C(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCheckCharacterFly*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCheckCharacterFly*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKCHARACTERFLY_METHOD_4_848CFAD4AA25622C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_292F2F7F8AF188AD(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCheckCharacterFly* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCheckCharacterFly*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKCHARACTERFLY_METHOD_4_292F2F7F8AF188AD_OFFSET))(a1, a2);
		}
	};
}
