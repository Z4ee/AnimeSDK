#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ValueEvaluatorConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_VE_RTGRIDDISTANCE_METHOD_3_2FC0A58C508B2192_OFFSET UNITYSDK_OFFSET(0x19E44800)
#define RPG_GAMECORE_VE_RTGRIDDISTANCE_METHOD_3_6818E417D0CB97D0_OFFSET UNITYSDK_OFFSET(0x19E449F0)
#define RPG_GAMECORE_VE_RTGRIDDISTANCE_METHOD_3_E8B9FF8A1538795B_OFFSET UNITYSDK_OFFSET(0x19E447C0)
#define RPG_GAMECORE_VE_RTGRIDDISTANCE_METHOD_3_EA98BBEAB075793E_OFFSET UNITYSDK_OFFSET(0x19E449C0)
#define RPG_GAMECORE_VE_RTGRIDDISTANCE__CTOR_OFFSET UNITYSDK_OFFSET(0x19E447F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int VE_RtGridDistance_TypeDefinitionIndex = 22938;

	class VE_RtGridDistance : public ::RPG::GameCore::ValueEvaluatorConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* From; // 0x20
		::RPG::GameCore::TargetEvaluator* To; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VE_RTGRIDDISTANCE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_E8B9FF8A1538795B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::VE_RtGridDistance*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::VE_RtGridDistance*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VE_RTGRIDDISTANCE_METHOD_3_E8B9FF8A1538795B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_2FC0A58C508B2192(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::VE_RtGridDistance* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::VE_RtGridDistance*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VE_RTGRIDDISTANCE_METHOD_3_2FC0A58C508B2192_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_EA98BBEAB075793E(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::VE_RtGridDistance*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::VE_RtGridDistance*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VE_RTGRIDDISTANCE_METHOD_3_EA98BBEAB075793E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_6818E417D0CB97D0(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::VE_RtGridDistance* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::VE_RtGridDistance*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VE_RTGRIDDISTANCE_METHOD_3_6818E417D0CB97D0_OFFSET))(a1, a2);
		}
	};
}
