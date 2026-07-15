#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYDYNAMICVALUEDEFINED_METHOD_4_339D44C92E73E34F_OFFSET UNITYSDK_OFFSET(0x1A8BF980)
#define RPG_GAMECORE_BYDYNAMICVALUEDEFINED_METHOD_4_8B0A6747C8E65176_OFFSET UNITYSDK_OFFSET(0x1A8BFB90)
#define RPG_GAMECORE_BYDYNAMICVALUEDEFINED_METHOD_4_C3F1A8B9E2BC6238_OFFSET UNITYSDK_OFFSET(0x1A8BFB60)
#define RPG_GAMECORE_BYDYNAMICVALUEDEFINED_METHOD_4_F386CA00352A972E_OFFSET UNITYSDK_OFFSET(0x1A8BF9C0)
#define RPG_GAMECORE_BYDYNAMICVALUEDEFINED__CTOR_OFFSET UNITYSDK_OFFSET(0x1A8BF9B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByDynamicValueDefined_TypeDefinitionIndex = 22076;

	class ByDynamicValueDefined : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::RPG::GameCore::DynamicString* DynamicKey; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYDYNAMICVALUEDEFINED__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_339D44C92E73E34F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByDynamicValueDefined*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByDynamicValueDefined*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYDYNAMICVALUEDEFINED_METHOD_4_339D44C92E73E34F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_F386CA00352A972E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByDynamicValueDefined* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByDynamicValueDefined*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYDYNAMICVALUEDEFINED_METHOD_4_F386CA00352A972E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_C3F1A8B9E2BC6238(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByDynamicValueDefined*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByDynamicValueDefined*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYDYNAMICVALUEDEFINED_METHOD_4_C3F1A8B9E2BC6238_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_8B0A6747C8E65176(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByDynamicValueDefined* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByDynamicValueDefined*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYDYNAMICVALUEDEFINED_METHOD_4_8B0A6747C8E65176_OFFSET))(a1, a2);
		}
	};
}
