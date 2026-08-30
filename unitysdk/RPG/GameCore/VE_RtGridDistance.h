#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ValueEvaluatorConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_VE_RTGRIDDISTANCE_METHOD_3_2FC0A58C508B2192_OFFSET UNITYSDK_OFFSET(0x1DEA6850)
#define RPG_GAMECORE_VE_RTGRIDDISTANCE_METHOD_3_35FC0FC06BD5D211_OFFSET UNITYSDK_OFFSET(0x1DEA6A10)
#define RPG_GAMECORE_VE_RTGRIDDISTANCE_METHOD_3_832E6B6F1A47B3A6_OFFSET UNITYSDK_OFFSET(0x1DEA6A40)
#define RPG_GAMECORE_VE_RTGRIDDISTANCE_METHOD_3_E8B9FF8A1538795B_OFFSET UNITYSDK_OFFSET(0x1DEA6810)
#define RPG_GAMECORE_VE_RTGRIDDISTANCE__CTOR_OFFSET UNITYSDK_OFFSET(0x1DEA6840)

namespace RPG::GameCore
{
	inline static constexpr unsigned int VE_RtGridDistance_TypeDefinitionIndex = 23985;

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

		static ::System::Void Method_3_35FC0FC06BD5D211(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::VE_RtGridDistance*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::VE_RtGridDistance*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VE_RTGRIDDISTANCE_METHOD_3_35FC0FC06BD5D211_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_832E6B6F1A47B3A6(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::VE_RtGridDistance* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::VE_RtGridDistance*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VE_RTGRIDDISTANCE_METHOD_3_832E6B6F1A47B3A6_OFFSET))(a1, a2);
		}
	};
}
