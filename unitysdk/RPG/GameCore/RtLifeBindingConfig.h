#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/RtLifeBindingType.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }
namespace System { class String; }

#define RPG_GAMECORE_RTLIFEBINDINGCONFIG_METHOD_2_8856EDBC5189C167_OFFSET UNITYSDK_OFFSET(0x1CCEAE00)
#define RPG_GAMECORE_RTLIFEBINDINGCONFIG_METHOD_2_A15ABFF53065C2F5_OFFSET UNITYSDK_OFFSET(0x1CCEAF70)
#define RPG_GAMECORE_RTLIFEBINDINGCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1CCEAF60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RtLifeBindingConfig_TypeDefinitionIndex = 23881;

	class RtLifeBindingConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::RtLifeBindingType Type; // 0x10
		::RPG::GameCore::TargetEvaluator* CustomTarget; // 0x18
		::System::String* CustomBindName; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTLIFEBINDINGCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_8856EDBC5189C167(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RtLifeBindingConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RtLifeBindingConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTLIFEBINDINGCONFIG_METHOD_2_8856EDBC5189C167_OFFSET))(a1, a2);
		}

		static ::System::Void Method_2_A15ABFF53065C2F5(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::RtLifeBindingConfig*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::RtLifeBindingConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTLIFEBINDINGCONFIG_METHOD_2_A15ABFF53065C2F5_OFFSET))(a1, a2);
		}
	};
}
