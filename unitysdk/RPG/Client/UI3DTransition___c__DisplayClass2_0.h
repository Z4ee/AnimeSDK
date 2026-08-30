#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class IUI3DController; }
namespace RPG::Client { class UI3DControllerConfig; }
namespace RPG::Client { class UIController; }

#define RPG_CLIENT_UI3DTRANSITION___C__DISPLAYCLASS2_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1B13AA40)
#define RPG_CLIENT_UI3DTRANSITION___C__DISPLAYCLASS2_0__EXECUTEEXIT_B__0_OFFSET UNITYSDK_OFFSET(0x1B13B560)

namespace RPG::Client
{
	inline static constexpr unsigned int UI3DTransition___c__DisplayClass2_0_TypeDefinitionIndex = 72926;

	class UI3DTransition___c__DisplayClass2_0 : public ::System::Object
	{
	public:
		::RPG::Client::IUI3DController* from3d; // 0x10
		::RPG::Client::IUI3DController* to3d; // 0x18
		::RPG::Client::UIController* from2d; // 0x20
		::RPG::Client::UIController* to2d; // 0x28
		::RPG::Client::UI3DControllerConfig* fromConfig; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DTRANSITION___C__DISPLAYCLASS2_0__CTOR_OFFSET))(this);
		}

		::System::Void _ExecuteExit_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DTRANSITION___C__DISPLAYCLASS2_0__EXECUTEEXIT_B__0_OFFSET))(this);
		}
	};
}
