#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EAnimatorComparableParameterType.h"
#include "unitysdk/RPG/GameCore/ParamType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }
namespace System { class String; }

#define RPG_GAMECORE_BYANIMATORPARAM_METHOD_4_3E8F49C8E4B91C8D_OFFSET UNITYSDK_OFFSET(0x194F2710)
#define RPG_GAMECORE_BYANIMATORPARAM_METHOD_4_71E6FB3E7E9E59D3_OFFSET UNITYSDK_OFFSET(0x194F27E0)
#define RPG_GAMECORE_BYANIMATORPARAM_METHOD_4_82732DF462C7B851_OFFSET UNITYSDK_OFFSET(0x194F2B30)
#define RPG_GAMECORE_BYANIMATORPARAM_METHOD_4_FFF4BCC834AADF3E_OFFSET UNITYSDK_OFFSET(0x194F2BB0)
#define RPG_GAMECORE_BYANIMATORPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0x194F2790)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByAnimatorParam_TypeDefinitionIndex = 19659;

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

		static ::System::Void Method_4_3E8F49C8E4B91C8D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByAnimatorParam*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByAnimatorParam*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYANIMATORPARAM_METHOD_4_3E8F49C8E4B91C8D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_71E6FB3E7E9E59D3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByAnimatorParam* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByAnimatorParam*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYANIMATORPARAM_METHOD_4_71E6FB3E7E9E59D3_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_82732DF462C7B851(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByAnimatorParam*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByAnimatorParam*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYANIMATORPARAM_METHOD_4_82732DF462C7B851_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_FFF4BCC834AADF3E(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByAnimatorParam* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByAnimatorParam*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYANIMATORPARAM_METHOD_4_FFF4BCC834AADF3E_OFFSET))(a1, a2);
		}
	};
}
