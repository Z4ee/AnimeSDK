#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYISPROJECTILEHITTARGET_METHOD_4_1F12B8DFABA1E8DA_OFFSET UNITYSDK_OFFSET(0x1CF44450)
#define RPG_GAMECORE_BYISPROJECTILEHITTARGET_METHOD_4_59977953AECFA14E_OFFSET UNITYSDK_OFFSET(0x1CF442D0)
#define RPG_GAMECORE_BYISPROJECTILEHITTARGET_METHOD_4_961072AEF6F1F6B4_OFFSET UNITYSDK_OFFSET(0x1CF44480)
#define RPG_GAMECORE_BYISPROJECTILEHITTARGET_METHOD_4_D094DD9884C557DF_OFFSET UNITYSDK_OFFSET(0x1CF44290)
#define RPG_GAMECORE_BYISPROJECTILEHITTARGET__CTOR_OFFSET UNITYSDK_OFFSET(0x1CF442C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByIsProjectileHitTarget_TypeDefinitionIndex = 22752;

	class ByIsProjectileHitTarget : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISPROJECTILEHITTARGET__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_D094DD9884C557DF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsProjectileHitTarget*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsProjectileHitTarget*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISPROJECTILEHITTARGET_METHOD_4_D094DD9884C557DF_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_59977953AECFA14E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsProjectileHitTarget* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsProjectileHitTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISPROJECTILEHITTARGET_METHOD_4_59977953AECFA14E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_1F12B8DFABA1E8DA(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsProjectileHitTarget*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsProjectileHitTarget*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISPROJECTILEHITTARGET_METHOD_4_1F12B8DFABA1E8DA_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_961072AEF6F1F6B4(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsProjectileHitTarget* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsProjectileHitTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISPROJECTILEHITTARGET_METHOD_4_961072AEF6F1F6B4_OFFSET))(a1, a2);
		}
	};
}
