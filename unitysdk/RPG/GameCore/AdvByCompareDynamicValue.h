#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CompareType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_ADVBYCOMPAREDYNAMICVALUE_METHOD_4_2D748CF15BCBE0FD_OFFSET UNITYSDK_OFFSET(0x18647AD0)
#define RPG_GAMECORE_ADVBYCOMPAREDYNAMICVALUE_METHOD_4_BDE3132BB23F6F61_OFFSET UNITYSDK_OFFSET(0x18647BF0)
#define RPG_GAMECORE_ADVBYCOMPAREDYNAMICVALUE__CTOR_OFFSET UNITYSDK_OFFSET(0x18647B70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvByCompareDynamicValue_TypeDefinitionIndex = 19186;

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
	};
}
