#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCHECKMECHANISMBARPHASE_METHOD_4_4C9B001430CF8C9B_OFFSET UNITYSDK_OFFSET(0x1C2FF180)
#define RPG_GAMECORE_BYCHECKMECHANISMBARPHASE_METHOD_4_5D6071B6D7420D39_OFFSET UNITYSDK_OFFSET(0x1C2FEFA0)
#define RPG_GAMECORE_BYCHECKMECHANISMBARPHASE_METHOD_4_8F539C0CB1473A8C_OFFSET UNITYSDK_OFFSET(0x1C2FEF60)
#define RPG_GAMECORE_BYCHECKMECHANISMBARPHASE_METHOD_4_E5418F831B560474_OFFSET UNITYSDK_OFFSET(0x1C2FF150)
#define RPG_GAMECORE_BYCHECKMECHANISMBARPHASE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C2FEF90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCheckMechanismBarPhase_TypeDefinitionIndex = 20289;

	class ByCheckMechanismBarPhase : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::UInt32 ID; // 0x20
		::System::UInt32 Phase; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKMECHANISMBARPHASE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_8F539C0CB1473A8C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCheckMechanismBarPhase*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCheckMechanismBarPhase*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKMECHANISMBARPHASE_METHOD_4_8F539C0CB1473A8C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_5D6071B6D7420D39(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCheckMechanismBarPhase* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCheckMechanismBarPhase*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKMECHANISMBARPHASE_METHOD_4_5D6071B6D7420D39_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_E5418F831B560474(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCheckMechanismBarPhase*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCheckMechanismBarPhase*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKMECHANISMBARPHASE_METHOD_4_E5418F831B560474_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_4C9B001430CF8C9B(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCheckMechanismBarPhase* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCheckMechanismBarPhase*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKMECHANISMBARPHASE_METHOD_4_4C9B001430CF8C9B_OFFSET))(a1, a2);
		}
	};
}
