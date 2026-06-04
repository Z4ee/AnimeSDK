#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_RTBYHASTARGETINALERTRANGE_METHOD_4_A9CAAF7D5E939E68_OFFSET UNITYSDK_OFFSET(0x19BE1100)
#define RPG_GAMECORE_RTBYHASTARGETINALERTRANGE_METHOD_4_B3A6C3174BEDE4C6_OFFSET UNITYSDK_OFFSET(0x19BE1030)
#define RPG_GAMECORE_RTBYHASTARGETINALERTRANGE_METHOD_4_C9E87C3D16625018_OFFSET UNITYSDK_OFFSET(0x19BE1300)
#define RPG_GAMECORE_RTBYHASTARGETINALERTRANGE_METHOD_4_D4A96B83C3BC9575_OFFSET UNITYSDK_OFFSET(0x19BE1280)
#define RPG_GAMECORE_RTBYHASTARGETINALERTRANGE__CTOR_OFFSET UNITYSDK_OFFSET(0x19BE10B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RtByHasTargetInAlertRange_TypeDefinitionIndex = 22905;

	class RtByHasTargetInAlertRange : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBYHASTARGETINALERTRANGE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_B3A6C3174BEDE4C6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RtByHasTargetInAlertRange*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RtByHasTargetInAlertRange*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBYHASTARGETINALERTRANGE_METHOD_4_B3A6C3174BEDE4C6_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_A9CAAF7D5E939E68(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RtByHasTargetInAlertRange* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RtByHasTargetInAlertRange*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBYHASTARGETINALERTRANGE_METHOD_4_A9CAAF7D5E939E68_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_D4A96B83C3BC9575(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::RtByHasTargetInAlertRange*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::RtByHasTargetInAlertRange*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBYHASTARGETINALERTRANGE_METHOD_4_D4A96B83C3BC9575_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_C9E87C3D16625018(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::RtByHasTargetInAlertRange* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::RtByHasTargetInAlertRange*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBYHASTARGETINALERTRANGE_METHOD_4_C9E87C3D16625018_OFFSET))(a1, a2);
		}
	};
}
