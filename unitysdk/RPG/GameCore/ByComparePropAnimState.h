#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }
namespace System { class String; }

#define RPG_GAMECORE_BYCOMPAREPROPANIMSTATE_METHOD_4_2DAC096B4DD86DF5_OFFSET UNITYSDK_OFFSET(0x19CFEE40)
#define RPG_GAMECORE_BYCOMPAREPROPANIMSTATE_METHOD_4_438EE335EE4BFADB_OFFSET UNITYSDK_OFFSET(0x19CFEDC0)
#define RPG_GAMECORE_BYCOMPAREPROPANIMSTATE_METHOD_4_9717C8451459CCBA_OFFSET UNITYSDK_OFFSET(0x19CFF050)
#define RPG_GAMECORE_BYCOMPAREPROPANIMSTATE_METHOD_4_BE7F8B4014E01C57_OFFSET UNITYSDK_OFFSET(0x19CFF000)
#define RPG_GAMECORE_BYCOMPAREPROPANIMSTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x19CFEE10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByComparePropAnimState_TypeDefinitionIndex = 21151;

	class ByComparePropAnimState : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::String* State; // 0x20
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREPROPANIMSTATE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_438EE335EE4BFADB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByComparePropAnimState*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByComparePropAnimState*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREPROPANIMSTATE_METHOD_4_438EE335EE4BFADB_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_2DAC096B4DD86DF5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByComparePropAnimState* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByComparePropAnimState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREPROPANIMSTATE_METHOD_4_2DAC096B4DD86DF5_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_BE7F8B4014E01C57(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByComparePropAnimState*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByComparePropAnimState*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREPROPANIMSTATE_METHOD_4_BE7F8B4014E01C57_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_9717C8451459CCBA(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByComparePropAnimState* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByComparePropAnimState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREPROPANIMSTATE_METHOD_4_9717C8451459CCBA_OFFSET))(a1, a2);
		}
	};
}
