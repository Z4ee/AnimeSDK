#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CompareType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }
namespace System { class String; }

#define RPG_GAMECORE_ADVBYCOMPAREDYNAMICVALUE_METHOD_4_112143E8280FEAD6_OFFSET UNITYSDK_OFFSET(0x1D6AB180)
#define RPG_GAMECORE_ADVBYCOMPAREDYNAMICVALUE_METHOD_4_2D748CF15BCBE0FD_OFFSET UNITYSDK_OFFSET(0x1D6AAE70)
#define RPG_GAMECORE_ADVBYCOMPAREDYNAMICVALUE_METHOD_4_5D34C55E81BAC01B_OFFSET UNITYSDK_OFFSET(0x1D6AB1E0)
#define RPG_GAMECORE_ADVBYCOMPAREDYNAMICVALUE_METHOD_4_BDE3132BB23F6F61_OFFSET UNITYSDK_OFFSET(0x1D6AAF10)
#define RPG_GAMECORE_ADVBYCOMPAREDYNAMICVALUE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D6AAED0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvByCompareDynamicValue_TypeDefinitionIndex = 20013;

	class AdvByCompareDynamicValue : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::System::String* DynamicKey; // 0x28
		::RPG::GameCore::CompareType CompareType; // 0x30
		::RPG::GameCore::DynamicFloat* CompareValue; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVBYCOMPAREDYNAMICVALUE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_2D748CF15BCBE0FD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvByCompareDynamicValue*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvByCompareDynamicValue*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVBYCOMPAREDYNAMICVALUE_METHOD_4_2D748CF15BCBE0FD_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_BDE3132BB23F6F61(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvByCompareDynamicValue* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvByCompareDynamicValue*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVBYCOMPAREDYNAMICVALUE_METHOD_4_BDE3132BB23F6F61_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_112143E8280FEAD6(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdvByCompareDynamicValue*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdvByCompareDynamicValue*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVBYCOMPAREDYNAMICVALUE_METHOD_4_112143E8280FEAD6_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_5D34C55E81BAC01B(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdvByCompareDynamicValue* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdvByCompareDynamicValue*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVBYCOMPAREDYNAMICVALUE_METHOD_4_5D34C55E81BAC01B_OFFSET))(a1, a2);
		}
	};
}
