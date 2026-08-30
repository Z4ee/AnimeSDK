#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CompareType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_ADVBYCOMPAREINVASIONLEVEL_METHOD_4_5083258C09AB39B9_OFFSET UNITYSDK_OFFSET(0x1D6AC2F0)
#define RPG_GAMECORE_ADVBYCOMPAREINVASIONLEVEL_METHOD_4_5904CD34AA565854_OFFSET UNITYSDK_OFFSET(0x1D6AC370)
#define RPG_GAMECORE_ADVBYCOMPAREINVASIONLEVEL_METHOD_4_97178439FE474582_OFFSET UNITYSDK_OFFSET(0x1D6AC0C0)
#define RPG_GAMECORE_ADVBYCOMPAREINVASIONLEVEL_METHOD_4_B035B44B44FE7E20_OFFSET UNITYSDK_OFFSET(0x1D6AC000)
#define RPG_GAMECORE_ADVBYCOMPAREINVASIONLEVEL__CTOR_OFFSET UNITYSDK_OFFSET(0x1D6AC080)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvByCompareInvasionLevel_TypeDefinitionIndex = 20020;

	class AdvByCompareInvasionLevel : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::RPG::GameCore::CompareType CompareType; // 0x28
		::RPG::GameCore::DynamicFloat* CompareValue; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVBYCOMPAREINVASIONLEVEL__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_B035B44B44FE7E20(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvByCompareInvasionLevel*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvByCompareInvasionLevel*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVBYCOMPAREINVASIONLEVEL_METHOD_4_B035B44B44FE7E20_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_97178439FE474582(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvByCompareInvasionLevel* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvByCompareInvasionLevel*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVBYCOMPAREINVASIONLEVEL_METHOD_4_97178439FE474582_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_5083258C09AB39B9(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdvByCompareInvasionLevel*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdvByCompareInvasionLevel*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVBYCOMPAREINVASIONLEVEL_METHOD_4_5083258C09AB39B9_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_5904CD34AA565854(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdvByCompareInvasionLevel* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdvByCompareInvasionLevel*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVBYCOMPAREINVASIONLEVEL_METHOD_4_5904CD34AA565854_OFFSET))(a1, a2);
		}
	};
}
