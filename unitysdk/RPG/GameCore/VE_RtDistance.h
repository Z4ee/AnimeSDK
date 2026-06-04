#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ValueEvaluatorConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_VE_RTDISTANCE_METHOD_3_5247D7110F266308_OFFSET UNITYSDK_OFFSET(0x19E44430)
#define RPG_GAMECORE_VE_RTDISTANCE_METHOD_3_DA4A9E89A6988726_OFFSET UNITYSDK_OFFSET(0x19E44400)
#define RPG_GAMECORE_VE_RTDISTANCE_METHOD_3_E8355CC3AEC1C07A_OFFSET UNITYSDK_OFFSET(0x19E44240)
#define RPG_GAMECORE_VE_RTDISTANCE_METHOD_3_F07FDD403E6930A3_OFFSET UNITYSDK_OFFSET(0x19E44200)
#define RPG_GAMECORE_VE_RTDISTANCE__CTOR_OFFSET UNITYSDK_OFFSET(0x19E44230)

namespace RPG::GameCore
{
	inline static constexpr unsigned int VE_RtDistance_TypeDefinitionIndex = 22944;

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

		static ::System::Void Method_3_DA4A9E89A6988726(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::VE_RtDistance*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::VE_RtDistance*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VE_RTDISTANCE_METHOD_3_DA4A9E89A6988726_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_5247D7110F266308(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::VE_RtDistance* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::VE_RtDistance*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VE_RTDISTANCE_METHOD_3_5247D7110F266308_OFFSET))(a1, a2);
		}
	};
}
