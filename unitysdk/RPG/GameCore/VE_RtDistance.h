#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ValueEvaluatorConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_VE_RTDISTANCE_METHOD_3_4B3BC8ABF290F6B9_OFFSET UNITYSDK_OFFSET(0x1D691240)
#define RPG_GAMECORE_VE_RTDISTANCE_METHOD_3_E8355CC3AEC1C07A_OFFSET UNITYSDK_OFFSET(0x1D691080)
#define RPG_GAMECORE_VE_RTDISTANCE_METHOD_3_F07FDD403E6930A3_OFFSET UNITYSDK_OFFSET(0x1D691040)
#define RPG_GAMECORE_VE_RTDISTANCE_METHOD_3_FBCA8F805CAE44FE_OFFSET UNITYSDK_OFFSET(0x1D691270)
#define RPG_GAMECORE_VE_RTDISTANCE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D691070)

namespace RPG::GameCore
{
	inline static constexpr unsigned int VE_RtDistance_TypeDefinitionIndex = 23991;

	class VE_RtDistance : public ::RPG::GameCore::ValueEvaluatorConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* From; // 0x20
		::RPG::GameCore::TargetEvaluator* To; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VE_RTDISTANCE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_F07FDD403E6930A3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::VE_RtDistance*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::VE_RtDistance*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VE_RTDISTANCE_METHOD_3_F07FDD403E6930A3_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_E8355CC3AEC1C07A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::VE_RtDistance* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::VE_RtDistance*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VE_RTDISTANCE_METHOD_3_E8355CC3AEC1C07A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_4B3BC8ABF290F6B9(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::VE_RtDistance*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::VE_RtDistance*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VE_RTDISTANCE_METHOD_3_4B3BC8ABF290F6B9_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_FBCA8F805CAE44FE(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::VE_RtDistance* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::VE_RtDistance*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VE_RTDISTANCE_METHOD_3_FBCA8F805CAE44FE_OFFSET))(a1, a2);
		}
	};
}
