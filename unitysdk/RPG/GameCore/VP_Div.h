#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ValuePostProcessConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ValueEvaluatorConfig; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_VP_DIV_METHOD_3_43F749C00776FDA9_OFFSET UNITYSDK_OFFSET(0x19E474C0)
#define RPG_GAMECORE_VP_DIV_METHOD_3_75CC7125958743EC_OFFSET UNITYSDK_OFFSET(0x19E47410)
#define RPG_GAMECORE_VP_DIV_METHOD_3_D05E69D478F0EA89_OFFSET UNITYSDK_OFFSET(0x19E475E0)
#define RPG_GAMECORE_VP_DIV_METHOD_3_FF188C08A8679F47_OFFSET UNITYSDK_OFFSET(0x19E47540)
#define RPG_GAMECORE_VP_DIV__CTOR_OFFSET UNITYSDK_OFFSET(0x19E474B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int VP_Div_TypeDefinitionIndex = 22728;

	class VP_Div : public ::RPG::GameCore::ValuePostProcessConfig
	{
	public:
		::RPG::GameCore::ValueEvaluatorConfig* Value; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VP_DIV__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_75CC7125958743EC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::VP_Div*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::VP_Div*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VP_DIV_METHOD_3_75CC7125958743EC_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_43F749C00776FDA9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::VP_Div* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::VP_Div*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VP_DIV_METHOD_3_43F749C00776FDA9_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_FF188C08A8679F47(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::VP_Div*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::VP_Div*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VP_DIV_METHOD_3_FF188C08A8679F47_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_D05E69D478F0EA89(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::VP_Div* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::VP_Div*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VP_DIV_METHOD_3_D05E69D478F0EA89_OFFSET))(a1, a2);
		}
	};
}
