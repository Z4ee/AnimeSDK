#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYSWITCHMASCOTCANSHOOTTARGET_METHOD_4_1740694434AD743F_OFFSET UNITYSDK_OFFSET(0x1CF5E590)
#define RPG_GAMECORE_BYSWITCHMASCOTCANSHOOTTARGET_METHOD_4_34C20FA81D0E2256_OFFSET UNITYSDK_OFFSET(0x1CF5E410)
#define RPG_GAMECORE_BYSWITCHMASCOTCANSHOOTTARGET_METHOD_4_7EA6035D060ABA92_OFFSET UNITYSDK_OFFSET(0x1CF5E5C0)
#define RPG_GAMECORE_BYSWITCHMASCOTCANSHOOTTARGET_METHOD_4_901F70760B847E95_OFFSET UNITYSDK_OFFSET(0x1CF5E450)
#define RPG_GAMECORE_BYSWITCHMASCOTCANSHOOTTARGET__CTOR_OFFSET UNITYSDK_OFFSET(0x1CF5E440)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BySwitchMascotCanShootTarget_TypeDefinitionIndex = 19940;

	class BySwitchMascotCanShootTarget : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYSWITCHMASCOTCANSHOOTTARGET__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_34C20FA81D0E2256(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::BySwitchMascotCanShootTarget*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::BySwitchMascotCanShootTarget*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYSWITCHMASCOTCANSHOOTTARGET_METHOD_4_34C20FA81D0E2256_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_901F70760B847E95(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::BySwitchMascotCanShootTarget* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::BySwitchMascotCanShootTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYSWITCHMASCOTCANSHOOTTARGET_METHOD_4_901F70760B847E95_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_1740694434AD743F(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::BySwitchMascotCanShootTarget*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::BySwitchMascotCanShootTarget*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYSWITCHMASCOTCANSHOOTTARGET_METHOD_4_1740694434AD743F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_7EA6035D060ABA92(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::BySwitchMascotCanShootTarget* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::BySwitchMascotCanShootTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYSWITCHMASCOTCANSHOOTTARGET_METHOD_4_7EA6035D060ABA92_OFFSET))(a1, a2);
		}
	};
}
