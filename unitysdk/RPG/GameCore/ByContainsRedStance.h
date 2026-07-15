#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCONTAINSREDSTANCE_METHOD_4_0E116B107F97CF93_OFFSET UNITYSDK_OFFSET(0x1A8B7B20)
#define RPG_GAMECORE_BYCONTAINSREDSTANCE_METHOD_4_126A154B379E343C_OFFSET UNITYSDK_OFFSET(0x1A8B7960)
#define RPG_GAMECORE_BYCONTAINSREDSTANCE_METHOD_4_8561E5D2F0F0EAA5_OFFSET UNITYSDK_OFFSET(0x1A8B7B50)
#define RPG_GAMECORE_BYCONTAINSREDSTANCE_METHOD_4_CA48AD5BFC6BFFF9_OFFSET UNITYSDK_OFFSET(0x1A8B79A0)
#define RPG_GAMECORE_BYCONTAINSREDSTANCE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A8B7990)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByContainsRedStance_TypeDefinitionIndex = 21816;

	class ByContainsRedStance : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCONTAINSREDSTANCE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_126A154B379E343C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByContainsRedStance*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByContainsRedStance*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCONTAINSREDSTANCE_METHOD_4_126A154B379E343C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_CA48AD5BFC6BFFF9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByContainsRedStance* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByContainsRedStance*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCONTAINSREDSTANCE_METHOD_4_CA48AD5BFC6BFFF9_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_0E116B107F97CF93(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByContainsRedStance*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByContainsRedStance*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCONTAINSREDSTANCE_METHOD_4_0E116B107F97CF93_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_8561E5D2F0F0EAA5(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByContainsRedStance* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByContainsRedStance*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCONTAINSREDSTANCE_METHOD_4_8561E5D2F0F0EAA5_OFFSET))(a1, a2);
		}
	};
}
