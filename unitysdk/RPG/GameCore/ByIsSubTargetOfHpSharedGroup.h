#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYISSUBTARGETOFHPSHAREDGROUP_METHOD_4_0D7054043E9DE45B_OFFSET UNITYSDK_OFFSET(0x1CF4A0F0)
#define RPG_GAMECORE_BYISSUBTARGETOFHPSHAREDGROUP_METHOD_4_50E51B83B687E0A1_OFFSET UNITYSDK_OFFSET(0x1CF49F70)
#define RPG_GAMECORE_BYISSUBTARGETOFHPSHAREDGROUP_METHOD_4_5A13321B4A62253D_OFFSET UNITYSDK_OFFSET(0x1CF4A120)
#define RPG_GAMECORE_BYISSUBTARGETOFHPSHAREDGROUP_METHOD_4_9357453AA16553A4_OFFSET UNITYSDK_OFFSET(0x1CF49F30)
#define RPG_GAMECORE_BYISSUBTARGETOFHPSHAREDGROUP__CTOR_OFFSET UNITYSDK_OFFSET(0x1CF49F60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByIsSubTargetOfHpSharedGroup_TypeDefinitionIndex = 23262;

	class ByIsSubTargetOfHpSharedGroup : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISSUBTARGETOFHPSHAREDGROUP__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_9357453AA16553A4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsSubTargetOfHpSharedGroup*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsSubTargetOfHpSharedGroup*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISSUBTARGETOFHPSHAREDGROUP_METHOD_4_9357453AA16553A4_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_50E51B83B687E0A1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsSubTargetOfHpSharedGroup* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsSubTargetOfHpSharedGroup*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISSUBTARGETOFHPSHAREDGROUP_METHOD_4_50E51B83B687E0A1_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_0D7054043E9DE45B(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsSubTargetOfHpSharedGroup*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsSubTargetOfHpSharedGroup*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISSUBTARGETOFHPSHAREDGROUP_METHOD_4_0D7054043E9DE45B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_5A13321B4A62253D(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsSubTargetOfHpSharedGroup* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsSubTargetOfHpSharedGroup*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISSUBTARGETOFHPSHAREDGROUP_METHOD_4_5A13321B4A62253D_OFFSET))(a1, a2);
		}
	};
}
