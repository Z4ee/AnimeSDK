#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }
namespace System { class String; }

#define RPG_GAMECORE_BYCOMPAREPROPANIMSTATE_METHOD_4_2DAC096B4DD86DF5_OFFSET UNITYSDK_OFFSET(0x19527F70)
#define RPG_GAMECORE_BYCOMPAREPROPANIMSTATE_METHOD_4_C94FF5F5C7AFDBBE_OFFSET UNITYSDK_OFFSET(0x19527DD0)
#define RPG_GAMECORE_BYCOMPAREPROPANIMSTATE_METHOD_4_CA5780F6C5CCB415_OFFSET UNITYSDK_OFFSET(0x19528210)
#define RPG_GAMECORE_BYCOMPAREPROPANIMSTATE_METHOD_4_FB2F3B6573B0F3EA_OFFSET UNITYSDK_OFFSET(0x19528130)
#define RPG_GAMECORE_BYCOMPAREPROPANIMSTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x19527EB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByComparePropAnimState_TypeDefinitionIndex = 20736;

	class ByComparePropAnimState : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::String* State; // 0x20
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREPROPANIMSTATE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_C94FF5F5C7AFDBBE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByComparePropAnimState*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByComparePropAnimState*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREPROPANIMSTATE_METHOD_4_C94FF5F5C7AFDBBE_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_2DAC096B4DD86DF5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByComparePropAnimState* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByComparePropAnimState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREPROPANIMSTATE_METHOD_4_2DAC096B4DD86DF5_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_FB2F3B6573B0F3EA(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByComparePropAnimState*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByComparePropAnimState*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREPROPANIMSTATE_METHOD_4_FB2F3B6573B0F3EA_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_CA5780F6C5CCB415(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByComparePropAnimState* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByComparePropAnimState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREPROPANIMSTATE_METHOD_4_CA5780F6C5CCB415_OFFSET))(a1, a2);
		}
	};
}
