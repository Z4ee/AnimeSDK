#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/FiveDimPropPhysicsProxyView.h"

class Class_1_47EE63CB5C4DC8FC_5;
namespace Entitas { class IContext; }
namespace Entitas { class IEntity; }
namespace System { class String; }
namespace UnityEngine { class Collision; }

#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMGECKOPHYSICSPROXYVIEW_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x189F4580)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMGECKOPHYSICSPROXYVIEW_METHOD_8_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0x189F46A0)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMGECKOPHYSICSPROXYVIEW_METHOD_8_85377D41FEE05B66_OFFSET UNITYSDK_OFFSET(0x189F4370)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMGECKOPHYSICSPROXYVIEW_METHOD_8_BC7ACE02BFE5C18D_OFFSET UNITYSDK_OFFSET(0x189F47A0)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMGECKOPHYSICSPROXYVIEW_RELEASE_OFFSET UNITYSDK_OFFSET(0x189F4600)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMGECKOPHYSICSPROXYVIEW__CTOR_OFFSET UNITYSDK_OFFSET(0x189F48D0)

namespace RPG::Client::LittleGame::FiveDim
{
	inline static constexpr unsigned int FiveDimGeckoPhysicsProxyView_TypeDefinitionIndex = 73254;

	class FiveDimGeckoPhysicsProxyView : public ::RPG::Client::LittleGame::FiveDim::FiveDimPropPhysicsProxyView
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMGECKOPHYSICSPROXYVIEW__CTOR_OFFSET))(this);
		}

		::System::Void Method_8_85377D41FEE05B66()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMGECKOPHYSICSPROXYVIEW_METHOD_8_85377D41FEE05B66_OFFSET))(this);
		}

		::System::Void Initialize(::Entitas::IContext* a1, ::Class_1_47EE63CB5C4DC8FC_5* a2, ::Entitas::IEntity* a3)
		{
			return ((::System::Void(*)(::PVOID, ::Entitas::IContext*, ::Class_1_47EE63CB5C4DC8FC_5*, ::Entitas::IEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMGECKOPHYSICSPROXYVIEW_INITIALIZE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Release(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMGECKOPHYSICSPROXYVIEW_RELEASE_OFFSET))(this, a1);
		}

		::System::Void Method_8_BC7ACE02BFE5C18D(::UnityEngine::Collision* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collision*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMGECKOPHYSICSPROXYVIEW_METHOD_8_BC7ACE02BFE5C18D_OFFSET))(this, a1);
		}

		::System::Void Method_8_33ACA6CB2ABC73F7()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMGECKOPHYSICSPROXYVIEW_METHOD_8_33ACA6CB2ABC73F7_OFFSET))(this);
		}
	};
}
