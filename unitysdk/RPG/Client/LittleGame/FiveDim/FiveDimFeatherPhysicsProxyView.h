#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/FiveDimPropPhysicsProxyView.h"

class Class_1_47EE63CB5C4DC8FC_5;
namespace Entitas { class IContext; }
namespace Entitas { class IEntity; }
namespace System { class String; }
namespace UnityEngine { class CapsuleCollider; }
namespace UnityEngine { class Collider; }

#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMFEATHERPHYSICSPROXYVIEW_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xD4DD9A0)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMFEATHERPHYSICSPROXYVIEW_METHOD_8_45FED451D133E002_OFFSET UNITYSDK_OFFSET(0xD4DDCF0)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMFEATHERPHYSICSPROXYVIEW_METHOD_8_66F42CE2EDA79734_OFFSET UNITYSDK_OFFSET(0xD4DD730)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMFEATHERPHYSICSPROXYVIEW_METHOD_8_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0xD4DDB10)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMFEATHERPHYSICSPROXYVIEW_METHOD_8_C6C00AC7D323B1B0_OFFSET UNITYSDK_OFFSET(0xD4DDB80)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMFEATHERPHYSICSPROXYVIEW_RELEASE_OFFSET UNITYSDK_OFFSET(0xD4DDA20)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMFEATHERPHYSICSPROXYVIEW__CTOR_OFFSET UNITYSDK_OFFSET(0xD4DDDA0)

namespace RPG::Client::LittleGame::FiveDim
{
	inline static constexpr unsigned int FiveDimFeatherPhysicsProxyView_TypeDefinitionIndex = 76728;

	class FiveDimFeatherPhysicsProxyView : public ::RPG::Client::LittleGame::FiveDim::FiveDimPropPhysicsProxyView
	{
	public:
		::UnityEngine::CapsuleCollider* KDPFKMCHCEF; // 0x230

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMFEATHERPHYSICSPROXYVIEW__CTOR_OFFSET))(this);
		}

		::System::Void Method_8_66F42CE2EDA79734()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMFEATHERPHYSICSPROXYVIEW_METHOD_8_66F42CE2EDA79734_OFFSET))(this);
		}

		::System::Void Initialize(::Entitas::IContext* a1, ::Class_1_47EE63CB5C4DC8FC_5* a2, ::Entitas::IEntity* a3)
		{
			return ((::System::Void(*)(::PVOID, ::Entitas::IContext*, ::Class_1_47EE63CB5C4DC8FC_5*, ::Entitas::IEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMFEATHERPHYSICSPROXYVIEW_INITIALIZE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Release(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMFEATHERPHYSICSPROXYVIEW_RELEASE_OFFSET))(this, a1);
		}

		::System::Void Method_8_C6C00AC7D323B1B0(::UnityEngine::Collider* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMFEATHERPHYSICSPROXYVIEW_METHOD_8_C6C00AC7D323B1B0_OFFSET))(this, a1);
		}

		::System::Void Method_8_45FED451D133E002(::UnityEngine::Collider* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMFEATHERPHYSICSPROXYVIEW_METHOD_8_45FED451D133E002_OFFSET))(this, a1);
		}

		::System::Void Method_8_9681042564541CD6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMFEATHERPHYSICSPROXYVIEW_METHOD_8_9681042564541CD6_OFFSET))(this);
		}
	};
}
