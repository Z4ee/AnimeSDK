#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_RTBYINALERTRANGE_METHOD_4_169368F11DE32A39_OFFSET UNITYSDK_OFFSET(0x1CCDE010)
#define RPG_GAMECORE_RTBYINALERTRANGE_METHOD_4_AC0A73EC5CBC8DAB_OFFSET UNITYSDK_OFFSET(0x1CCDDE20)
#define RPG_GAMECORE_RTBYINALERTRANGE_METHOD_4_D56B0DE018B04F62_OFFSET UNITYSDK_OFFSET(0x1CCDDDE0)
#define RPG_GAMECORE_RTBYINALERTRANGE_METHOD_4_DA843652E79C0AE7_OFFSET UNITYSDK_OFFSET(0x1CCDDFE0)
#define RPG_GAMECORE_RTBYINALERTRANGE__CTOR_OFFSET UNITYSDK_OFFSET(0x1CCDDE10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RtByInAlertRange_TypeDefinitionIndex = 23953;

	class RtByInAlertRange : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::RPG::GameCore::TargetEvaluator* CheckTargetType; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBYINALERTRANGE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_D56B0DE018B04F62(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RtByInAlertRange*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RtByInAlertRange*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBYINALERTRANGE_METHOD_4_D56B0DE018B04F62_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_AC0A73EC5CBC8DAB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RtByInAlertRange* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RtByInAlertRange*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBYINALERTRANGE_METHOD_4_AC0A73EC5CBC8DAB_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_DA843652E79C0AE7(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::RtByInAlertRange*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::RtByInAlertRange*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBYINALERTRANGE_METHOD_4_DA843652E79C0AE7_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_169368F11DE32A39(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::RtByInAlertRange* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::RtByInAlertRange*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBYINALERTRANGE_METHOD_4_169368F11DE32A39_OFFSET))(a1, a2);
		}
	};
}
