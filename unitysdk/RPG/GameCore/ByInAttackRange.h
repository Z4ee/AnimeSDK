#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYINATTACKRANGE_METHOD_4_06C81865ACFA862D_OFFSET UNITYSDK_OFFSET(0x1A8D1590)
#define RPG_GAMECORE_BYINATTACKRANGE_METHOD_4_3111899144208336_OFFSET UNITYSDK_OFFSET(0x1A8D1260)
#define RPG_GAMECORE_BYINATTACKRANGE_METHOD_4_6271A56AB7F12775_OFFSET UNITYSDK_OFFSET(0x1A8D1520)
#define RPG_GAMECORE_BYINATTACKRANGE_METHOD_4_A5B2595ECEB880D5_OFFSET UNITYSDK_OFFSET(0x1A8D11A0)
#define RPG_GAMECORE_BYINATTACKRANGE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A8D1210)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByInAttackRange_TypeDefinitionIndex = 19259;

	class ByInAttackRange : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* Target; // 0x20
		::System::Boolean OverrideCharacterData; // 0x28
		::System::Single OverrideAttackRange; // 0x2C
		::System::Single OverrideAttackAngle; // 0x30
		::System::Boolean ConsiderObstacle; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYINATTACKRANGE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_A5B2595ECEB880D5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByInAttackRange*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByInAttackRange*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYINATTACKRANGE_METHOD_4_A5B2595ECEB880D5_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_3111899144208336(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByInAttackRange* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByInAttackRange*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYINATTACKRANGE_METHOD_4_3111899144208336_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_6271A56AB7F12775(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByInAttackRange*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByInAttackRange*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYINATTACKRANGE_METHOD_4_6271A56AB7F12775_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_06C81865ACFA862D(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByInAttackRange* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByInAttackRange*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYINATTACKRANGE_METHOD_4_06C81865ACFA862D_OFFSET))(a1, a2);
		}
	};
}
