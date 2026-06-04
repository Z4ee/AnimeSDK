#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCHECKMECHANISMBARPHASE_METHOD_4_2F2E72E86913A32D_OFFSET UNITYSDK_OFFSET(0x194FCC90)
#define RPG_GAMECORE_BYCHECKMECHANISMBARPHASE_METHOD_4_5D6071B6D7420D39_OFFSET UNITYSDK_OFFSET(0x194FCA60)
#define RPG_GAMECORE_BYCHECKMECHANISMBARPHASE_METHOD_4_72E8150CBAF48F49_OFFSET UNITYSDK_OFFSET(0x194FCC10)
#define RPG_GAMECORE_BYCHECKMECHANISMBARPHASE_METHOD_4_E06D468CB2D9C61F_OFFSET UNITYSDK_OFFSET(0x194FC990)
#define RPG_GAMECORE_BYCHECKMECHANISMBARPHASE__CTOR_OFFSET UNITYSDK_OFFSET(0x194FCA10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCheckMechanismBarPhase_TypeDefinitionIndex = 19387;

	class ByCheckMechanismBarPhase : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::UInt32 ID; // 0x20
		::System::UInt32 Phase; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKMECHANISMBARPHASE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_E06D468CB2D9C61F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCheckMechanismBarPhase*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCheckMechanismBarPhase*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKMECHANISMBARPHASE_METHOD_4_E06D468CB2D9C61F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_5D6071B6D7420D39(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCheckMechanismBarPhase* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCheckMechanismBarPhase*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKMECHANISMBARPHASE_METHOD_4_5D6071B6D7420D39_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_72E8150CBAF48F49(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCheckMechanismBarPhase*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCheckMechanismBarPhase*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKMECHANISMBARPHASE_METHOD_4_72E8150CBAF48F49_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_2F2E72E86913A32D(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCheckMechanismBarPhase* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCheckMechanismBarPhase*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKMECHANISMBARPHASE_METHOD_4_2F2E72E86913A32D_OFFSET))(a1, a2);
		}
	};
}
