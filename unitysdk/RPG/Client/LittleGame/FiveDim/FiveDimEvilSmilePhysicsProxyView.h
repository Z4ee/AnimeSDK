#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/FiveDimPropPhysicsProxyView.h"

class Class_1_47EE63CB5C4DC8FC_5;
namespace Entitas { class IContext; }
namespace Entitas { class IEntity; }
namespace System { class String; }
namespace UnityEngine { class Collider; }

#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMEVILSMILEPHYSICSPROXYVIEW_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x189EC530)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMEVILSMILEPHYSICSPROXYVIEW_METHOD_8_57701CC7C974B644_OFFSET UNITYSDK_OFFSET(0x189EC640)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMEVILSMILEPHYSICSPROXYVIEW_METHOD_8_5A124CAF1E48B74F_OFFSET UNITYSDK_OFFSET(0x189EC330)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMEVILSMILEPHYSICSPROXYVIEW_METHOD_8_74E6C35ADFC4C4B2_OFFSET UNITYSDK_OFFSET(0x189EC810)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMEVILSMILEPHYSICSPROXYVIEW_RELEASE_OFFSET UNITYSDK_OFFSET(0x189EC5B0)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMEVILSMILEPHYSICSPROXYVIEW__CTOR_OFFSET UNITYSDK_OFFSET(0x189EC930)

namespace RPG::Client::LittleGame::FiveDim
{
	inline static constexpr unsigned int FiveDimEvilSmilePhysicsProxyView_TypeDefinitionIndex = 73250;

	class FiveDimEvilSmilePhysicsProxyView : public ::RPG::Client::LittleGame::FiveDim::FiveDimPropPhysicsProxyView
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMEVILSMILEPHYSICSPROXYVIEW__CTOR_OFFSET))(this);
		}

		::System::Void Method_8_5A124CAF1E48B74F()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMEVILSMILEPHYSICSPROXYVIEW_METHOD_8_5A124CAF1E48B74F_OFFSET))(this);
		}

		::System::Void Initialize(::Entitas::IContext* a1, ::Class_1_47EE63CB5C4DC8FC_5* a2, ::Entitas::IEntity* a3)
		{
			return ((::System::Void(*)(::PVOID, ::Entitas::IContext*, ::Class_1_47EE63CB5C4DC8FC_5*, ::Entitas::IEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMEVILSMILEPHYSICSPROXYVIEW_INITIALIZE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Release(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMEVILSMILEPHYSICSPROXYVIEW_RELEASE_OFFSET))(this, a1);
		}

		::System::Void Method_8_57701CC7C974B644(::UnityEngine::Collider* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMEVILSMILEPHYSICSPROXYVIEW_METHOD_8_57701CC7C974B644_OFFSET))(this, a1);
		}

		::System::Void Method_8_74E6C35ADFC4C4B2(::UnityEngine::Collider* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMEVILSMILEPHYSICSPROXYVIEW_METHOD_8_74E6C35ADFC4C4B2_OFFSET))(this, a1);
		}
	};
}
