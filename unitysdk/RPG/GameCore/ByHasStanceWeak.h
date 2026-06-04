#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
#include "unitysdk/RPG/GameCore/WeaknessFilterType.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class AttackDamageTypeConfig; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYHASSTANCEWEAK_METHOD_4_484EC735D65837F8_OFFSET UNITYSDK_OFFSET(0x19550C90)
#define RPG_GAMECORE_BYHASSTANCEWEAK_METHOD_4_67DCA455476C4803_OFFSET UNITYSDK_OFFSET(0x19550BF0)
#define RPG_GAMECORE_BYHASSTANCEWEAK_METHOD_4_943EB40A231B8865_OFFSET UNITYSDK_OFFSET(0x195509B0)
#define RPG_GAMECORE_BYHASSTANCEWEAK_METHOD_4_D6ECF76B9FF4C967_OFFSET UNITYSDK_OFFSET(0x19550890)
#define RPG_GAMECORE_BYHASSTANCEWEAK__CTOR_OFFSET UNITYSDK_OFFSET(0x19550930)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByHasStanceWeak_TypeDefinitionIndex = 21325;

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

		static ::System::Void Method_4_D6ECF76B9FF4C967(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByHasStanceWeak*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByHasStanceWeak*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHASSTANCEWEAK_METHOD_4_D6ECF76B9FF4C967_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_943EB40A231B8865(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByHasStanceWeak* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByHasStanceWeak*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHASSTANCEWEAK_METHOD_4_943EB40A231B8865_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_67DCA455476C4803(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByHasStanceWeak*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByHasStanceWeak*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHASSTANCEWEAK_METHOD_4_67DCA455476C4803_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_484EC735D65837F8(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByHasStanceWeak* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByHasStanceWeak*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHASSTANCEWEAK_METHOD_4_484EC735D65837F8_OFFSET))(a1, a2);
		}
	};
}
