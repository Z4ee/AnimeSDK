#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
#include "unitysdk/RPG/GameCore/WeaknessFilterType.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class AttackDamageTypeConfig; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYHASSTANCEWEAK_METHOD_4_39F2C43437BBD43B_OFFSET UNITYSDK_OFFSET(0x1BBE2540)
#define RPG_GAMECORE_BYHASSTANCEWEAK_METHOD_4_7431B4B035B29329_OFFSET UNITYSDK_OFFSET(0x1BBE2880)
#define RPG_GAMECORE_BYHASSTANCEWEAK_METHOD_4_8E696EECA9B05778_OFFSET UNITYSDK_OFFSET(0x1BBE2820)
#define RPG_GAMECORE_BYHASSTANCEWEAK_METHOD_4_943EB40A231B8865_OFFSET UNITYSDK_OFFSET(0x1BBE25E0)
#define RPG_GAMECORE_BYHASSTANCEWEAK__CTOR_OFFSET UNITYSDK_OFFSET(0x1BBE25A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByHasStanceWeak_TypeDefinitionIndex = 22307;

	class ByHasStanceWeak : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::RPG::GameCore::AttackDamageTypeConfig* WeakType; // 0x28
		::System::Boolean OnlyDefault; // 0x30
		::RPG::GameCore::WeaknessFilterType WeaknessFilter; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHASSTANCEWEAK__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_39F2C43437BBD43B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByHasStanceWeak*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByHasStanceWeak*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHASSTANCEWEAK_METHOD_4_39F2C43437BBD43B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_943EB40A231B8865(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByHasStanceWeak* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByHasStanceWeak*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHASSTANCEWEAK_METHOD_4_943EB40A231B8865_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_8E696EECA9B05778(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByHasStanceWeak*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByHasStanceWeak*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHASSTANCEWEAK_METHOD_4_8E696EECA9B05778_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_7431B4B035B29329(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByHasStanceWeak* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByHasStanceWeak*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHASSTANCEWEAK_METHOD_4_7431B4B035B29329_OFFSET))(a1, a2);
		}
	};
}
