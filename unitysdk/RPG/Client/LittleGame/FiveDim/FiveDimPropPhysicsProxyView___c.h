#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::LittleGame::FiveDim { class FiveDimPropPhysicsProxyView; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }
namespace UnityEngine { class Collider; }

#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMPROPPHYSICSPROXYVIEW___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x9A0F050)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMPROPPHYSICSPROXYVIEW___C__CTOR_OFFSET UNITYSDK_OFFSET(0x9A0F080)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMPROPPHYSICSPROXYVIEW___C___GUESTCOLLIDERENABLECLOSURE_B__16_0_OFFSET UNITYSDK_OFFSET(0x9A0F090)

namespace RPG::Client::LittleGame::FiveDim
{
	inline static constexpr unsigned int FiveDimPropPhysicsProxyView___c_TypeDefinitionIndex = 62873;

	class FiveDimPropPhysicsProxyView___c : public ::System::Object
	{
	public:
		static ::RPG::Client::LittleGame::FiveDim::FiveDimPropPhysicsProxyView___c** StaticGet___9()
		{
			return (::RPG::Client::LittleGame::FiveDim::FiveDimPropPhysicsProxyView___c**)Il2CppClass::FromTypeDefinitionIndex(FiveDimPropPhysicsProxyView___c_TypeDefinitionIndex)->GetStaticField(0x251C0);
		}
		static ::System::Action_3<::RPG::Client::LittleGame::FiveDim::FiveDimPropPhysicsProxyView*, ::UnityEngine::Collider*, ::System::Boolean>** StaticGet___9__16_0()
		{
			return (::System::Action_3<::RPG::Client::LittleGame::FiveDim::FiveDimPropPhysicsProxyView*, ::UnityEngine::Collider*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(FiveDimPropPhysicsProxyView___c_TypeDefinitionIndex)->GetStaticField(0x251C8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMPROPPHYSICSPROXYVIEW___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMPROPPHYSICSPROXYVIEW___C__CTOR_OFFSET))(this);
		}

		::System::Void __GuestColliderEnableClosure_b__16_0(::RPG::Client::LittleGame::FiveDim::FiveDimPropPhysicsProxyView* self, ::UnityEngine::Collider* col, ::System::Boolean enable)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::FiveDim::FiveDimPropPhysicsProxyView*, ::UnityEngine::Collider*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMPROPPHYSICSPROXYVIEW___C___GUESTCOLLIDERENABLECLOSURE_B__16_0_OFFSET))(this, self, col, enable);
		}
	};
}
