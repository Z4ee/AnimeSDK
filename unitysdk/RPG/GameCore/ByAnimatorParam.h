#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EAnimatorComparableParameterType.h"
#include "unitysdk/RPG/GameCore/ParamType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }
namespace System { class String; }

#define RPG_GAMECORE_BYANIMATORPARAM_METHOD_4_27905C31AD505595_OFFSET UNITYSDK_OFFSET(0x19CBAA60)
#define RPG_GAMECORE_BYANIMATORPARAM_METHOD_4_2D51BE5494461CE2_OFFSET UNITYSDK_OFFSET(0x19CBA6D0)
#define RPG_GAMECORE_BYANIMATORPARAM_METHOD_4_713F0924ACC0E61B_OFFSET UNITYSDK_OFFSET(0x19CBAA90)
#define RPG_GAMECORE_BYANIMATORPARAM_METHOD_4_71E6FB3E7E9E59D3_OFFSET UNITYSDK_OFFSET(0x19CBA710)
#define RPG_GAMECORE_BYANIMATORPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0x19CBA700)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByAnimatorParam_TypeDefinitionIndex = 20018;

	class ByAnimatorParam : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::RPG::GameCore::EAnimatorComparableParameterType ParamType; // 0x28
		::System::String* ParamName; // 0x30
		::RPG::GameCore::ParamType ParamCompareType; // 0x38
		::System::Single FloatValue; // 0x3C
		::System::Int32 IntegerValue; // 0x40
		::System::Boolean BooleanValue; // 0x44

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYANIMATORPARAM__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_2D51BE5494461CE2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByAnimatorParam*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByAnimatorParam*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYANIMATORPARAM_METHOD_4_2D51BE5494461CE2_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_71E6FB3E7E9E59D3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByAnimatorParam* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByAnimatorParam*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYANIMATORPARAM_METHOD_4_71E6FB3E7E9E59D3_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_27905C31AD505595(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByAnimatorParam*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByAnimatorParam*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYANIMATORPARAM_METHOD_4_27905C31AD505595_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_713F0924ACC0E61B(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByAnimatorParam* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByAnimatorParam*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYANIMATORPARAM_METHOD_4_713F0924ACC0E61B_OFFSET))(a1, a2);
		}
	};
}
