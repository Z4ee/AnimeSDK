#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYPAMNORMALACTIONSWITCH_METHOD_4_9EED02718F45D745_OFFSET UNITYSDK_OFFSET(0x1CF55730)
#define RPG_GAMECORE_BYPAMNORMALACTIONSWITCH_METHOD_4_C378A24C434BA33C_OFFSET UNITYSDK_OFFSET(0x1CF55760)
#define RPG_GAMECORE_BYPAMNORMALACTIONSWITCH_METHOD_4_C671880CB07CD014_OFFSET UNITYSDK_OFFSET(0x1CF555B0)
#define RPG_GAMECORE_BYPAMNORMALACTIONSWITCH_METHOD_4_E71FC503138E632F_OFFSET UNITYSDK_OFFSET(0x1CF555F0)
#define RPG_GAMECORE_BYPAMNORMALACTIONSWITCH__CTOR_OFFSET UNITYSDK_OFFSET(0x1CF555E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByPamNormalActionSwitch_TypeDefinitionIndex = 19780;

	class ByPamNormalActionSwitch : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYPAMNORMALACTIONSWITCH__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_C671880CB07CD014(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByPamNormalActionSwitch*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByPamNormalActionSwitch*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYPAMNORMALACTIONSWITCH_METHOD_4_C671880CB07CD014_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_E71FC503138E632F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByPamNormalActionSwitch* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByPamNormalActionSwitch*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYPAMNORMALACTIONSWITCH_METHOD_4_E71FC503138E632F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_9EED02718F45D745(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByPamNormalActionSwitch*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByPamNormalActionSwitch*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYPAMNORMALACTIONSWITCH_METHOD_4_9EED02718F45D745_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_C378A24C434BA33C(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByPamNormalActionSwitch* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByPamNormalActionSwitch*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYPAMNORMALACTIONSWITCH_METHOD_4_C378A24C434BA33C_OFFSET))(a1, a2);
		}
	};
}
