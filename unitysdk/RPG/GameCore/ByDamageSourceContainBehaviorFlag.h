#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ModifierBehaviorFlag.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYDAMAGESOURCECONTAINBEHAVIORFLAG_METHOD_4_1180DEB38A693A22_OFFSET UNITYSDK_OFFSET(0x195458E0)
#define RPG_GAMECORE_BYDAMAGESOURCECONTAINBEHAVIORFLAG_METHOD_4_4B5C72D1644C12AD_OFFSET UNITYSDK_OFFSET(0x19545750)
#define RPG_GAMECORE_BYDAMAGESOURCECONTAINBEHAVIORFLAG_METHOD_4_6260DB2F79A4C6CA_OFFSET UNITYSDK_OFFSET(0x195459B0)
#define RPG_GAMECORE_BYDAMAGESOURCECONTAINBEHAVIORFLAG_METHOD_4_DA7E06D5DB27C18B_OFFSET UNITYSDK_OFFSET(0x195456D0)
#define RPG_GAMECORE_BYDAMAGESOURCECONTAINBEHAVIORFLAG__CTOR_OFFSET UNITYSDK_OFFSET(0x19545960)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByDamageSourceContainBehaviorFlag_TypeDefinitionIndex = 22037;

	class ByDamageSourceContainBehaviorFlag : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::ModifierBehaviorFlag>* BehaviorFlags; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYDAMAGESOURCECONTAINBEHAVIORFLAG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_DA7E06D5DB27C18B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByDamageSourceContainBehaviorFlag*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByDamageSourceContainBehaviorFlag*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYDAMAGESOURCECONTAINBEHAVIORFLAG_METHOD_4_DA7E06D5DB27C18B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_4B5C72D1644C12AD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByDamageSourceContainBehaviorFlag* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByDamageSourceContainBehaviorFlag*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYDAMAGESOURCECONTAINBEHAVIORFLAG_METHOD_4_4B5C72D1644C12AD_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_1180DEB38A693A22(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByDamageSourceContainBehaviorFlag*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByDamageSourceContainBehaviorFlag*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYDAMAGESOURCECONTAINBEHAVIORFLAG_METHOD_4_1180DEB38A693A22_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_6260DB2F79A4C6CA(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByDamageSourceContainBehaviorFlag* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByDamageSourceContainBehaviorFlag*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYDAMAGESOURCECONTAINBEHAVIORFLAG_METHOD_4_6260DB2F79A4C6CA_OFFSET))(a1, a2);
		}
	};
}
