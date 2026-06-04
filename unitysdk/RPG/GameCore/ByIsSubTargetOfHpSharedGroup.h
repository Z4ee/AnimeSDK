#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYISSUBTARGETOFHPSHAREDGROUP_METHOD_4_50E51B83B687E0A1_OFFSET UNITYSDK_OFFSET(0x1956ED30)
#define RPG_GAMECORE_BYISSUBTARGETOFHPSHAREDGROUP_METHOD_4_B761AC2587B5C5FE_OFFSET UNITYSDK_OFFSET(0x1956EEB0)
#define RPG_GAMECORE_BYISSUBTARGETOFHPSHAREDGROUP_METHOD_4_E9372FDE8BB9F017_OFFSET UNITYSDK_OFFSET(0x1956EC60)
#define RPG_GAMECORE_BYISSUBTARGETOFHPSHAREDGROUP_METHOD_4_FAAA1F250DADD8EB_OFFSET UNITYSDK_OFFSET(0x1956EF30)
#define RPG_GAMECORE_BYISSUBTARGETOFHPSHAREDGROUP__CTOR_OFFSET UNITYSDK_OFFSET(0x1956ECE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByIsSubTargetOfHpSharedGroup_TypeDefinitionIndex = 22245;

	class ByIsSubTargetOfHpSharedGroup : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISSUBTARGETOFHPSHAREDGROUP__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_E9372FDE8BB9F017(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsSubTargetOfHpSharedGroup*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsSubTargetOfHpSharedGroup*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISSUBTARGETOFHPSHAREDGROUP_METHOD_4_E9372FDE8BB9F017_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_50E51B83B687E0A1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsSubTargetOfHpSharedGroup* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsSubTargetOfHpSharedGroup*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISSUBTARGETOFHPSHAREDGROUP_METHOD_4_50E51B83B687E0A1_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_B761AC2587B5C5FE(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsSubTargetOfHpSharedGroup*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsSubTargetOfHpSharedGroup*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISSUBTARGETOFHPSHAREDGROUP_METHOD_4_B761AC2587B5C5FE_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_FAAA1F250DADD8EB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsSubTargetOfHpSharedGroup* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsSubTargetOfHpSharedGroup*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISSUBTARGETOFHPSHAREDGROUP_METHOD_4_FAAA1F250DADD8EB_OFFSET))(a1, a2);
		}
	};
}
