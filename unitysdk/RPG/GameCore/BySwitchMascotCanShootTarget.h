#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYSWITCHMASCOTCANSHOOTTARGET_METHOD_4_7DB873051A90E30E_OFFSET UNITYSDK_OFFSET(0x195D8060)
#define RPG_GAMECORE_BYSWITCHMASCOTCANSHOOTTARGET_METHOD_4_9015E94BF1A4AED6_OFFSET UNITYSDK_OFFSET(0x195D80E0)
#define RPG_GAMECORE_BYSWITCHMASCOTCANSHOOTTARGET_METHOD_4_901F70760B847E95_OFFSET UNITYSDK_OFFSET(0x195D7F20)
#define RPG_GAMECORE_BYSWITCHMASCOTCANSHOOTTARGET_METHOD_4_DE19627887B8FDBF_OFFSET UNITYSDK_OFFSET(0x195D7E50)
#define RPG_GAMECORE_BYSWITCHMASCOTCANSHOOTTARGET__CTOR_OFFSET UNITYSDK_OFFSET(0x195D7ED0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BySwitchMascotCanShootTarget_TypeDefinitionIndex = 19044;

	class BySwitchMascotCanShootTarget : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYSWITCHMASCOTCANSHOOTTARGET__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_DE19627887B8FDBF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::BySwitchMascotCanShootTarget*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::BySwitchMascotCanShootTarget*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYSWITCHMASCOTCANSHOOTTARGET_METHOD_4_DE19627887B8FDBF_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_901F70760B847E95(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::BySwitchMascotCanShootTarget* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::BySwitchMascotCanShootTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYSWITCHMASCOTCANSHOOTTARGET_METHOD_4_901F70760B847E95_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_7DB873051A90E30E(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::BySwitchMascotCanShootTarget*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::BySwitchMascotCanShootTarget*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYSWITCHMASCOTCANSHOOTTARGET_METHOD_4_7DB873051A90E30E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_9015E94BF1A4AED6(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::BySwitchMascotCanShootTarget* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::BySwitchMascotCanShootTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYSWITCHMASCOTCANSHOOTTARGET_METHOD_4_9015E94BF1A4AED6_OFFSET))(a1, a2);
		}
	};
}
