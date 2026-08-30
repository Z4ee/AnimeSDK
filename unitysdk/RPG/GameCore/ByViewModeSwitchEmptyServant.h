#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
#include "unitysdk/RPG/GameCore/ViewModeSwitchType.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYVIEWMODESWITCHEMPTYSERVANT_METHOD_4_6F16FADC165AB03E_OFFSET UNITYSDK_OFFSET(0x1CF699B0)
#define RPG_GAMECORE_BYVIEWMODESWITCHEMPTYSERVANT_METHOD_4_8E5405B7E73B7FE2_OFFSET UNITYSDK_OFFSET(0x1CF697C0)
#define RPG_GAMECORE_BYVIEWMODESWITCHEMPTYSERVANT_METHOD_4_900B5B20E4D94A5B_OFFSET UNITYSDK_OFFSET(0x1CF69800)
#define RPG_GAMECORE_BYVIEWMODESWITCHEMPTYSERVANT_METHOD_4_D9D2D4B1067C6871_OFFSET UNITYSDK_OFFSET(0x1CF69980)
#define RPG_GAMECORE_BYVIEWMODESWITCHEMPTYSERVANT__CTOR_OFFSET UNITYSDK_OFFSET(0x1CF697F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByViewModeSwitchEmptyServant_TypeDefinitionIndex = 22663;

	class ByViewModeSwitchEmptyServant : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::ViewModeSwitchType SwitchType; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYVIEWMODESWITCHEMPTYSERVANT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_8E5405B7E73B7FE2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByViewModeSwitchEmptyServant*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByViewModeSwitchEmptyServant*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYVIEWMODESWITCHEMPTYSERVANT_METHOD_4_8E5405B7E73B7FE2_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_900B5B20E4D94A5B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByViewModeSwitchEmptyServant* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByViewModeSwitchEmptyServant*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYVIEWMODESWITCHEMPTYSERVANT_METHOD_4_900B5B20E4D94A5B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_D9D2D4B1067C6871(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByViewModeSwitchEmptyServant*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByViewModeSwitchEmptyServant*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYVIEWMODESWITCHEMPTYSERVANT_METHOD_4_D9D2D4B1067C6871_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_6F16FADC165AB03E(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByViewModeSwitchEmptyServant* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByViewModeSwitchEmptyServant*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYVIEWMODESWITCHEMPTYSERVANT_METHOD_4_6F16FADC165AB03E_OFFSET))(a1, a2);
		}
	};
}
