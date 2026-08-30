#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class IUI3DController; }
namespace RPG::Client { class UI3DControllerConfig; }

#define RPG_CLIENT_UI3DTRANSITION___C__DISPLAYCLASS3_0__CTOR_OFFSET UNITYSDK_OFFSET(0xE3285A0)
#define RPG_CLIENT_UI3DTRANSITION___C__DISPLAYCLASS3_0__EXECUTESHOW_B__0_OFFSET UNITYSDK_OFFSET(0xE329420)

namespace RPG::Client
{
	inline static constexpr unsigned int UI3DTransition___c__DisplayClass3_0_TypeDefinitionIndex = 72928;

	class UI3DTransition___c__DisplayClass3_0 : public ::System::Object
	{
	public:
		::RPG::Client::UI3DControllerConfig* toConfig; // 0x10
		::RPG::Client::IUI3DController* to3d; // 0x18
		::RPG::Client::IUI3DController* from3d; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DTRANSITION___C__DISPLAYCLASS3_0__CTOR_OFFSET))(this);
		}

		::System::Void _ExecuteShow_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DTRANSITION___C__DISPLAYCLASS3_0__EXECUTESHOW_B__0_OFFSET))(this);
		}
	};
}
