#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYENTITYCREATED_METHOD_4_01173AA443286B0E_OFFSET UNITYSDK_OFFSET(0x19548920)
#define RPG_GAMECORE_BYENTITYCREATED_METHOD_4_5BC2A19574E10DBC_OFFSET UNITYSDK_OFFSET(0x19548B30)
#define RPG_GAMECORE_BYENTITYCREATED_METHOD_4_87C232EA572851E0_OFFSET UNITYSDK_OFFSET(0x19548850)
#define RPG_GAMECORE_BYENTITYCREATED_METHOD_4_E284F81434BCF8C3_OFFSET UNITYSDK_OFFSET(0x19548AB0)
#define RPG_GAMECORE_BYENTITYCREATED__CTOR_OFFSET UNITYSDK_OFFSET(0x195488D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByEntityCreated_TypeDefinitionIndex = 19583;

	class ByEntityCreated : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::Il2CppArray<::System::UInt32>* InstanceIDList; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYENTITYCREATED__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_87C232EA572851E0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByEntityCreated*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByEntityCreated*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYENTITYCREATED_METHOD_4_87C232EA572851E0_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_01173AA443286B0E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByEntityCreated* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByEntityCreated*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYENTITYCREATED_METHOD_4_01173AA443286B0E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_E284F81434BCF8C3(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByEntityCreated*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByEntityCreated*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYENTITYCREATED_METHOD_4_E284F81434BCF8C3_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_5BC2A19574E10DBC(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByEntityCreated* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByEntityCreated*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYENTITYCREATED_METHOD_4_5BC2A19574E10DBC_OFFSET))(a1, a2);
		}
	};
}
