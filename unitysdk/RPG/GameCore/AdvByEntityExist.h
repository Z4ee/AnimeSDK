#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_ADVBYENTITYEXIST_METHOD_4_20E8DC7EA9F048B3_OFFSET UNITYSDK_OFFSET(0x19419FE0)
#define RPG_GAMECORE_ADVBYENTITYEXIST_METHOD_4_75ED997B58287AB0_OFFSET UNITYSDK_OFFSET(0x19419D90)
#define RPG_GAMECORE_ADVBYENTITYEXIST_METHOD_4_9C28652AF0061B1E_OFFSET UNITYSDK_OFFSET(0x19419E60)
#define RPG_GAMECORE_ADVBYENTITYEXIST_METHOD_4_CFB32E323BD00592_OFFSET UNITYSDK_OFFSET(0x1941A060)
#define RPG_GAMECORE_ADVBYENTITYEXIST__CTOR_OFFSET UNITYSDK_OFFSET(0x19419E10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvByEntityExist_TypeDefinitionIndex = 21018;

	class AdvByEntityExist : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVBYENTITYEXIST__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_75ED997B58287AB0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvByEntityExist*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvByEntityExist*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVBYENTITYEXIST_METHOD_4_75ED997B58287AB0_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_9C28652AF0061B1E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvByEntityExist* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvByEntityExist*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVBYENTITYEXIST_METHOD_4_9C28652AF0061B1E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_20E8DC7EA9F048B3(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdvByEntityExist*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdvByEntityExist*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVBYENTITYEXIST_METHOD_4_20E8DC7EA9F048B3_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_CFB32E323BD00592(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdvByEntityExist* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdvByEntityExist*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVBYENTITYEXIST_METHOD_4_CFB32E323BD00592_OFFSET))(a1, a2);
		}
	};
}
