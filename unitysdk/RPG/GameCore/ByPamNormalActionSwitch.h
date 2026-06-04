#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYPAMNORMALACTIONSWITCH_METHOD_4_5D4766A23BCC3200_OFFSET UNITYSDK_OFFSET(0x19578840)
#define RPG_GAMECORE_BYPAMNORMALACTIONSWITCH_METHOD_4_7BDD93835A513158_OFFSET UNITYSDK_OFFSET(0x195787C0)
#define RPG_GAMECORE_BYPAMNORMALACTIONSWITCH_METHOD_4_E71FC503138E632F_OFFSET UNITYSDK_OFFSET(0x19578680)
#define RPG_GAMECORE_BYPAMNORMALACTIONSWITCH_METHOD_4_FDB6515367220805_OFFSET UNITYSDK_OFFSET(0x195785B0)
#define RPG_GAMECORE_BYPAMNORMALACTIONSWITCH__CTOR_OFFSET UNITYSDK_OFFSET(0x19578630)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByPamNormalActionSwitch_TypeDefinitionIndex = 18889;

	class ByPamNormalActionSwitch : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYPAMNORMALACTIONSWITCH__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_FDB6515367220805(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByPamNormalActionSwitch*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByPamNormalActionSwitch*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYPAMNORMALACTIONSWITCH_METHOD_4_FDB6515367220805_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_E71FC503138E632F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByPamNormalActionSwitch* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByPamNormalActionSwitch*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYPAMNORMALACTIONSWITCH_METHOD_4_E71FC503138E632F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_7BDD93835A513158(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByPamNormalActionSwitch*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByPamNormalActionSwitch*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYPAMNORMALACTIONSWITCH_METHOD_4_7BDD93835A513158_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_5D4766A23BCC3200(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByPamNormalActionSwitch* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByPamNormalActionSwitch*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYPAMNORMALACTIONSWITCH_METHOD_4_5D4766A23BCC3200_OFFSET))(a1, a2);
		}
	};
}
