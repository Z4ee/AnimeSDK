#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Proto { class RogueAdventureRoomGameplayWolfGunTarget; }

#define PROTO_ROGUEADVENTUREROOMGAMEPLAYWOLFGUNTARGET___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D9776A0)
#define PROTO_ROGUEADVENTUREROOMGAMEPLAYWOLFGUNTARGET___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1D9776E0)
#define PROTO_ROGUEADVENTUREROOMGAMEPLAYWOLFGUNTARGET___C___CCTOR_B__40_0_OFFSET UNITYSDK_OFFSET(0x1D9776F0)

namespace Proto
{
	inline static constexpr unsigned int RogueAdventureRoomGameplayWolfGunTarget___c_TypeDefinitionIndex = 32282;

	class RogueAdventureRoomGameplayWolfGunTarget___c : public ::System::Object
	{
	public:
		static ::Proto::RogueAdventureRoomGameplayWolfGunTarget___c** StaticGet___9()
		{
			return (::Proto::RogueAdventureRoomGameplayWolfGunTarget___c**)Il2CppClass::FromTypeDefinitionIndex(RogueAdventureRoomGameplayWolfGunTarget___c_TypeDefinitionIndex)->GetStaticField(0x5B510);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PROTO_ROGUEADVENTUREROOMGAMEPLAYWOLFGUNTARGET___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_ROGUEADVENTUREROOMGAMEPLAYWOLFGUNTARGET___C__CTOR_OFFSET))(this);
		}

		::Proto::RogueAdventureRoomGameplayWolfGunTarget* __cctor_b__40_0()
		{
			return ((::Proto::RogueAdventureRoomGameplayWolfGunTarget*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_ROGUEADVENTUREROOMGAMEPLAYWOLFGUNTARGET___C___CCTOR_B__40_0_OFFSET))(this);
		}
	};
}
