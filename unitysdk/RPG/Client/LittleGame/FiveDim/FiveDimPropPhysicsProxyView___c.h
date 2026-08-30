#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::LittleGame::FiveDim { class FiveDimPropPhysicsProxyView; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }
namespace UnityEngine { class Collider; }

#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMPROPPHYSICSPROXYVIEW___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B1A8C00)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMPROPPHYSICSPROXYVIEW___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1B1A8C30)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMPROPPHYSICSPROXYVIEW___C___GUESTCOLLIDERENABLECLOSURE_B__16_0_OFFSET UNITYSDK_OFFSET(0x1B1A8C40)

namespace RPG::Client::LittleGame::FiveDim
{
	inline static constexpr unsigned int FiveDimPropPhysicsProxyView___c_TypeDefinitionIndex = 76735;

	class FiveDimPropPhysicsProxyView___c : public ::System::Object
	{
	public:
		static ::RPG::Client::LittleGame::FiveDim::FiveDimPropPhysicsProxyView___c** StaticGet___9()
		{
			return (::RPG::Client::LittleGame::FiveDim::FiveDimPropPhysicsProxyView___c**)Il2CppClass::FromTypeDefinitionIndex(FiveDimPropPhysicsProxyView___c_TypeDefinitionIndex)->GetStaticField(0x62160);
		}
		static ::System::Action_3<::RPG::Client::LittleGame::FiveDim::FiveDimPropPhysicsProxyView*, ::UnityEngine::Collider*, ::System::Boolean>** StaticGet___9__16_0()
		{
			return (::System::Action_3<::RPG::Client::LittleGame::FiveDim::FiveDimPropPhysicsProxyView*, ::UnityEngine::Collider*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(FiveDimPropPhysicsProxyView___c_TypeDefinitionIndex)->GetStaticField(0x62168);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMPROPPHYSICSPROXYVIEW___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMPROPPHYSICSPROXYVIEW___C__CTOR_OFFSET))(this);
		}

		::System::Void __GuestColliderEnableClosure_b__16_0(::RPG::Client::LittleGame::FiveDim::FiveDimPropPhysicsProxyView* a1, ::UnityEngine::Collider* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::FiveDim::FiveDimPropPhysicsProxyView*, ::UnityEngine::Collider*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMPROPPHYSICSPROXYVIEW___C___GUESTCOLLIDERENABLECLOSURE_B__16_0_OFFSET))(this, a1, a2, a3);
		}
	};
}
