#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ValueEvaluatorConfig; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_VALUEEVALUATORVEC3_METHOD_2_68F29CB8F0377FB8_OFFSET UNITYSDK_OFFSET(0x1D6974B0)
#define RPG_GAMECORE_VALUEEVALUATORVEC3_METHOD_2_F8BBECF252744C67_OFFSET UNITYSDK_OFFSET(0x1D6975A0)
#define RPG_GAMECORE_VALUEEVALUATORVEC3__CTOR_OFFSET UNITYSDK_OFFSET(0x1D697590)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ValueEvaluatorVec3_TypeDefinitionIndex = 23764;

	class ValueEvaluatorVec3 : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::ValueEvaluatorConfig* x; // 0x10
		::RPG::GameCore::ValueEvaluatorConfig* y; // 0x18
		::RPG::GameCore::ValueEvaluatorConfig* z; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VALUEEVALUATORVEC3__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_68F29CB8F0377FB8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ValueEvaluatorVec3*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ValueEvaluatorVec3*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VALUEEVALUATORVEC3_METHOD_2_68F29CB8F0377FB8_OFFSET))(a1, a2);
		}

		static ::System::Void Method_2_F8BBECF252744C67(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ValueEvaluatorVec3*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ValueEvaluatorVec3*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VALUEEVALUATORVEC3_METHOD_2_F8BBECF252744C67_OFFSET))(a1, a2);
		}
	};
}
