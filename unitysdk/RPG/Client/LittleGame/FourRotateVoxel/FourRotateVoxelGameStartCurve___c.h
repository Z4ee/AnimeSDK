#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TriggerEffectCallbackParams.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MonoEffect; }
namespace System { template <typename T1, typename T2> class Action_2; }

#define RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMESTARTCURVE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B1C4ED0)
#define RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMESTARTCURVE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1B1C4F10)
#define RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMESTARTCURVE___C___SOLVELIQUIDEFFECT_B__39_0_OFFSET UNITYSDK_OFFSET(0x1B1C4F20)

namespace RPG::Client::LittleGame::FourRotateVoxel
{
	inline static constexpr unsigned int FourRotateVoxelGameStartCurve___c_TypeDefinitionIndex = 76365;

	class FourRotateVoxelGameStartCurve___c : public ::System::Object
	{
	public:
		static ::System::Action_2<::RPG::Client::MonoEffect*, ::RPG::Client::TriggerEffectCallbackParams>** StaticGet___9__39_0()
		{
			return (::System::Action_2<::RPG::Client::MonoEffect*, ::RPG::Client::TriggerEffectCallbackParams>**)Il2CppClass::FromTypeDefinitionIndex(FourRotateVoxelGameStartCurve___c_TypeDefinitionIndex)->GetStaticField(0x62C20);
		}
		static ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameStartCurve___c** StaticGet___9()
		{
			return (::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameStartCurve___c**)Il2CppClass::FromTypeDefinitionIndex(FourRotateVoxelGameStartCurve___c_TypeDefinitionIndex)->GetStaticField(0x62C28);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMESTARTCURVE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMESTARTCURVE___C__CTOR_OFFSET))(this);
		}

		::System::Void __SolveLiquidEffect_b__39_0(::RPG::Client::MonoEffect* a1, ::RPG::Client::TriggerEffectCallbackParams a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffect*, ::RPG::Client::TriggerEffectCallbackParams))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMESTARTCURVE___C___SOLVELIQUIDEFFECT_B__39_0_OFFSET))(this, a1, a2);
		}
	};
}
