#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class IUI3DController; }
namespace RPG::Client { class UI3DControllerConfig; }
namespace RPG::Client { class UIController; }

#define RPG_CLIENT_UI3DTRANSITION___C__DISPLAYCLASS1_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1B13A590)
#define RPG_CLIENT_UI3DTRANSITION___C__DISPLAYCLASS1_0__EXECUTESHOW_B__0_OFFSET UNITYSDK_OFFSET(0x1B13B360)
#define RPG_CLIENT_UI3DTRANSITION___C__DISPLAYCLASS1_0__EXECUTESHOW_B__1_OFFSET UNITYSDK_OFFSET(0x1B13B380)
#define RPG_CLIENT_UI3DTRANSITION___C__DISPLAYCLASS1_0__EXECUTESHOW_B__2_OFFSET UNITYSDK_OFFSET(0x1B13B3E0)

namespace RPG::Client
{
	inline static constexpr unsigned int UI3DTransition___c__DisplayClass1_0_TypeDefinitionIndex = 72925;

	class UI3DTransition___c__DisplayClass1_0 : public ::System::Object
	{
	public:
		::RPG::Client::UIController* to2d; // 0x10
		::RPG::Client::UIController* from2d; // 0x18
		::RPG::Client::UI3DControllerConfig* toConfig; // 0x20
		::RPG::Client::IUI3DController* from3d; // 0x28
		::RPG::Client::IUI3DController* to3d; // 0x30
		::System::Boolean ui2dViewSet; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DTRANSITION___C__DISPLAYCLASS1_0__CTOR_OFFSET))(this);
		}

		::System::Void _ExecuteShow_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DTRANSITION___C__DISPLAYCLASS1_0__EXECUTESHOW_B__0_OFFSET))(this);
		}

		::System::Void _ExecuteShow_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DTRANSITION___C__DISPLAYCLASS1_0__EXECUTESHOW_B__1_OFFSET))(this);
		}

		::System::Void _ExecuteShow_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DTRANSITION___C__DISPLAYCLASS1_0__EXECUTESHOW_B__2_OFFSET))(this);
		}
	};
}
