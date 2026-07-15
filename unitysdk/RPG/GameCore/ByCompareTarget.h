#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AliveStateMask.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCOMPARETARGET_METHOD_4_3115995BD6F90BC1_OFFSET UNITYSDK_OFFSET(0x1A8AC320)
#define RPG_GAMECORE_BYCOMPARETARGET_METHOD_4_46A5B7F5E62E1A3C_OFFSET UNITYSDK_OFFSET(0x1A8AC110)
#define RPG_GAMECORE_BYCOMPARETARGET_METHOD_4_56E315A081C27697_OFFSET UNITYSDK_OFFSET(0x1A8AC360)
#define RPG_GAMECORE_BYCOMPARETARGET_METHOD_4_BE2F6FD71DCB54F1_OFFSET UNITYSDK_OFFSET(0x1A8AC0C0)
#define RPG_GAMECORE_BYCOMPARETARGET__CTOR_OFFSET UNITYSDK_OFFSET(0x1A8AC100)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareTarget_TypeDefinitionIndex = 22187;

	class ByCompareTarget : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::RPG::GameCore::TargetEvaluator* CompareType; // 0x28
		::RPG::GameCore::AliveStateMask AliveStateMask; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARETARGET__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_BE2F6FD71DCB54F1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareTarget*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareTarget*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARETARGET_METHOD_4_BE2F6FD71DCB54F1_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_46A5B7F5E62E1A3C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareTarget* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARETARGET_METHOD_4_46A5B7F5E62E1A3C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_3115995BD6F90BC1(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareTarget*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareTarget*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARETARGET_METHOD_4_3115995BD6F90BC1_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_56E315A081C27697(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareTarget* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARETARGET_METHOD_4_56E315A081C27697_OFFSET))(a1, a2);
		}
	};
}
