#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TriggerEffectCallbackParams.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MonoEffect; }
namespace RPG::Client::LittleGame::FourRotateVoxel { class FourRotateVoxelGameStartCurve_Class_1_CFEC17D7952BD0DC; }
namespace RPG::Client::LittleGame::FourRotateVoxel { class FourRotateVoxelGameStartCurve___c__DisplayClass37_0; }
namespace System { template <typename T1, typename T2> class Action_2; }

#define RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMESTARTCURVE___C__DISPLAYCLASS37_1__CTOR_OFFSET UNITYSDK_OFFSET(0x9A257A0)
#define RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMESTARTCURVE___C__DISPLAYCLASS37_1___SPRAYLIQUIDTOBRICK2D_B__0_OFFSET UNITYSDK_OFFSET(0x9A268B0)
#define RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMESTARTCURVE___C__DISPLAYCLASS37_1___SPRAYLIQUIDTOBRICK2D_B__1_OFFSET UNITYSDK_OFFSET(0x9A26A90)

namespace RPG::Client::LittleGame::FourRotateVoxel
{
	inline static constexpr unsigned int FourRotateVoxelGameStartCurve___c__DisplayClass37_1_TypeDefinitionIndex = 62543;

	class FourRotateVoxelGameStartCurve___c__DisplayClass37_1 : public ::System::Object
	{
	public:
		::System::Action_2<::RPG::Client::MonoEffect*, ::RPG::Client::TriggerEffectCallbackParams>* __9__1; // 0x10
		::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameStartCurve_Class_1_CFEC17D7952BD0DC* colorLiquidEffectData; // 0x18
		::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameStartCurve___c__DisplayClass37_0* CS___8__locals1; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMESTARTCURVE___C__DISPLAYCLASS37_1__CTOR_OFFSET))(this);
		}

		::System::Void __SprayLiquidToBrick2D_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMESTARTCURVE___C__DISPLAYCLASS37_1___SPRAYLIQUIDTOBRICK2D_B__0_OFFSET))(this);
		}

		::System::Void __SprayLiquidToBrick2D_b__1(::RPG::Client::MonoEffect* effect, ::RPG::Client::TriggerEffectCallbackParams callbackParams)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffect*, ::RPG::Client::TriggerEffectCallbackParams))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMESTARTCURVE___C__DISPLAYCLASS37_1___SPRAYLIQUIDTOBRICK2D_B__1_OFFSET))(this, effect, callbackParams);
		}
	};
}
