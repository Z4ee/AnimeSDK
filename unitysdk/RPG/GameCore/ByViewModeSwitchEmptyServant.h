#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
#include "unitysdk/RPG/GameCore/ViewModeSwitchType.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYVIEWMODESWITCHEMPTYSERVANT_METHOD_4_345D6517B6810B78_OFFSET UNITYSDK_OFFSET(0x195E07A0)
#define RPG_GAMECORE_BYVIEWMODESWITCHEMPTYSERVANT_METHOD_4_5C04628112243711_OFFSET UNITYSDK_OFFSET(0x195E0820)
#define RPG_GAMECORE_BYVIEWMODESWITCHEMPTYSERVANT_METHOD_4_7325FC452131FD85_OFFSET UNITYSDK_OFFSET(0x195E0550)
#define RPG_GAMECORE_BYVIEWMODESWITCHEMPTYSERVANT_METHOD_4_900B5B20E4D94A5B_OFFSET UNITYSDK_OFFSET(0x195E0620)
#define RPG_GAMECORE_BYVIEWMODESWITCHEMPTYSERVANT__CTOR_OFFSET UNITYSDK_OFFSET(0x195E05D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByViewModeSwitchEmptyServant_TypeDefinitionIndex = 21667;

	class ByViewModeSwitchEmptyServant : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::ViewModeSwitchType SwitchType; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYVIEWMODESWITCHEMPTYSERVANT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_7325FC452131FD85(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByViewModeSwitchEmptyServant*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByViewModeSwitchEmptyServant*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYVIEWMODESWITCHEMPTYSERVANT_METHOD_4_7325FC452131FD85_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_900B5B20E4D94A5B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByViewModeSwitchEmptyServant* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByViewModeSwitchEmptyServant*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYVIEWMODESWITCHEMPTYSERVANT_METHOD_4_900B5B20E4D94A5B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_345D6517B6810B78(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByViewModeSwitchEmptyServant*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByViewModeSwitchEmptyServant*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYVIEWMODESWITCHEMPTYSERVANT_METHOD_4_345D6517B6810B78_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_5C04628112243711(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByViewModeSwitchEmptyServant* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByViewModeSwitchEmptyServant*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYVIEWMODESWITCHEMPTYSERVANT_METHOD_4_5C04628112243711_OFFSET))(a1, a2);
		}
	};
}
