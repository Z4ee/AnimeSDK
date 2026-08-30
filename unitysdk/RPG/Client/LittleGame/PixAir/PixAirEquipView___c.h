#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TriggerEffectCallbackParams.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MonoEffect; }
namespace System { template <typename T1, typename T2> class Action_2; }

#define RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIREQUIPVIEW___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xD546620)
#define RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIREQUIPVIEW___C__CTOR_OFFSET UNITYSDK_OFFSET(0xD546660)
#define RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIREQUIPVIEW___C___FIREEFFECT_B__10_0_OFFSET UNITYSDK_OFFSET(0xD546670)

namespace RPG::Client::LittleGame::PixAir
{
	inline static constexpr unsigned int PixAirEquipView___c_TypeDefinitionIndex = 76849;

	class PixAirEquipView___c : public ::System::Object
	{
	public:
		static ::System::Action_2<::RPG::Client::MonoEffect*, ::RPG::Client::TriggerEffectCallbackParams>** StaticGet___9__10_0()
		{
			return (::System::Action_2<::RPG::Client::MonoEffect*, ::RPG::Client::TriggerEffectCallbackParams>**)Il2CppClass::FromTypeDefinitionIndex(PixAirEquipView___c_TypeDefinitionIndex)->GetStaticField(0x64420);
		}
		static ::RPG::Client::LittleGame::PixAir::PixAirEquipView___c** StaticGet___9()
		{
			return (::RPG::Client::LittleGame::PixAir::PixAirEquipView___c**)Il2CppClass::FromTypeDefinitionIndex(PixAirEquipView___c_TypeDefinitionIndex)->GetStaticField(0x64428);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIREQUIPVIEW___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIREQUIPVIEW___C__CTOR_OFFSET))(this);
		}

		::System::Void __FireEffect_b__10_0(::RPG::Client::MonoEffect* a1, ::RPG::Client::TriggerEffectCallbackParams a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffect*, ::RPG::Client::TriggerEffectCallbackParams))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIREQUIPVIEW___C___FIREEFFECT_B__10_0_OFFSET))(this, a1, a2);
		}
	};
}
