#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/FiveDimBaseEventActionService_1.h"
#include "unitysdk/RPG/Client/LittleGame/FourRotateVoxel/FourRotateVoxelGameSceneItemType.h"
#include "unitysdk/RPG/GameCore/FourRotateVoxelSceneItemType.h"
#include "unitysdk/Struct_2_4127FF4C06B070D3.h"

class Class_1_2CDF619C23140440;
class Class_2_B8E38BF47138A2E5;
class Class_3_912CC478F2B21832;
namespace RPG::GameCore { class FiveDimApplyPlayerInteractAction; }
namespace RPG::GameCore { class FiveDimAudioPostEventAction; }
namespace RPG::GameCore { class FiveDimBaseEventAction; }
namespace RPG::GameCore { class FiveDimBubbleTalkAction; }
namespace RPG::GameCore { class FiveDimClearPlayerVelocityAction; }
namespace RPG::GameCore { class FiveDimClientFinishMissionAction; }
namespace RPG::GameCore { class FiveDimFireAvatarEffectAction; }
namespace RPG::GameCore { class FiveDimFireEffectAction; }
namespace RPG::GameCore { class FiveDimKillAvatarEffectAction; }
namespace RPG::GameCore { class FiveDimMutePlayerInputAction; }
namespace RPG::GameCore { class FiveDimPlayUsePropAnimAction; }
namespace RPG::GameCore { class FiveDimRandomBubbleTalkAction; }
namespace RPG::GameCore { class FiveDimResetBillboardAction; }
namespace RPG::GameCore { class FiveDimSetAnimParamByRawLevelVarAction; }
namespace RPG::GameCore { class FiveDimSetAnimParamEventAction; }
namespace RPG::GameCore { class FiveDimSetBillboardAction; }
namespace RPG::GameCore { class FiveDimSetColliderVisibleAction; }
namespace RPG::GameCore { class FiveDimSetEntityVisibleAction; }
namespace RPG::GameCore { class FiveDimSetPlayerInteractEnableAction; }
namespace RPG::GameCore { class FiveDimSetRenderVisibleAction; }
namespace RPG::GameCore { class FiveDimSetRenderVisibleNeverDitherAction; }
namespace RPG::GameCore { class FiveDimStopBubbleTalkAction; }

#define CLASS_2_7E1DEB8F9D7E08B6_METHOD_2_6AB5BC32044676B0_OFFSET UNITYSDK_OFFSET(0x17282080)
#define CLASS_2_7E1DEB8F9D7E08B6_METHOD_2_F0A5DF5FA876756B_OFFSET UNITYSDK_OFFSET(0x17282170)
#define CLASS_2_7E1DEB8F9D7E08B6__CTOR_OFFSET UNITYSDK_OFFSET(0x172813B0)
#define CLASS_2_7E1DEB8F9D7E08B6__DISPOSE_OFFSET UNITYSDK_OFFSET(0x172815F0)
#define CLASS_2_7E1DEB8F9D7E08B6__DOACTION_10_OFFSET UNITYSDK_OFFSET(0x17283CC0)
#define CLASS_2_7E1DEB8F9D7E08B6__DOACTION_11_OFFSET UNITYSDK_OFFSET(0x17283D60)
#define CLASS_2_7E1DEB8F9D7E08B6__DOACTION_12_OFFSET UNITYSDK_OFFSET(0x17283F10)
#define CLASS_2_7E1DEB8F9D7E08B6__DOACTION_13_OFFSET UNITYSDK_OFFSET(0x17283FE0)
#define CLASS_2_7E1DEB8F9D7E08B6__DOACTION_14_OFFSET UNITYSDK_OFFSET(0x172841D0)
#define CLASS_2_7E1DEB8F9D7E08B6__DOACTION_15_OFFSET UNITYSDK_OFFSET(0x17284380)
#define CLASS_2_7E1DEB8F9D7E08B6__DOACTION_16_OFFSET UNITYSDK_OFFSET(0x17284440)
#define CLASS_2_7E1DEB8F9D7E08B6__DOACTION_17_OFFSET UNITYSDK_OFFSET(0x172844C0)
#define CLASS_2_7E1DEB8F9D7E08B6__DOACTION_18_OFFSET UNITYSDK_OFFSET(0x17284730)
#define CLASS_2_7E1DEB8F9D7E08B6__DOACTION_19_OFFSET UNITYSDK_OFFSET(0x172848F0)
#define CLASS_2_7E1DEB8F9D7E08B6__DOACTION_1_OFFSET UNITYSDK_OFFSET(0x172822E0)
#define CLASS_2_7E1DEB8F9D7E08B6__DOACTION_20_OFFSET UNITYSDK_OFFSET(0x17284AF0)
#define CLASS_2_7E1DEB8F9D7E08B6__DOACTION_2_OFFSET UNITYSDK_OFFSET(0x17282B00)
#define CLASS_2_7E1DEB8F9D7E08B6__DOACTION_3_OFFSET UNITYSDK_OFFSET(0x17282E10)
#define CLASS_2_7E1DEB8F9D7E08B6__DOACTION_4_OFFSET UNITYSDK_OFFSET(0x17283150)
#define CLASS_2_7E1DEB8F9D7E08B6__DOACTION_5_OFFSET UNITYSDK_OFFSET(0x172833E0)
#define CLASS_2_7E1DEB8F9D7E08B6__DOACTION_6_OFFSET UNITYSDK_OFFSET(0x172835F0)
#define CLASS_2_7E1DEB8F9D7E08B6__DOACTION_7_OFFSET UNITYSDK_OFFSET(0x17283780)
#define CLASS_2_7E1DEB8F9D7E08B6__DOACTION_8_OFFSET UNITYSDK_OFFSET(0x17283910)
#define CLASS_2_7E1DEB8F9D7E08B6__DOACTION_9_OFFSET UNITYSDK_OFFSET(0x172839E0)
#define CLASS_2_7E1DEB8F9D7E08B6__DOACTION_OFFSET UNITYSDK_OFFSET(0x17282250)
#define CLASS_2_7E1DEB8F9D7E08B6__INIT_OFFSET UNITYSDK_OFFSET(0x17281490)
#define CLASS_2_7E1DEB8F9D7E08B6__SOLVESUBCLASSACTION_OFFSET UNITYSDK_OFFSET(0x17281640)
#define CLASS_2_7E1DEB8F9D7E08B6___SOLVESUBCLASSACTION_B__3_0_OFFSET UNITYSDK_OFFSET(0x17284C30)

inline static constexpr unsigned int Class_2_7E1DEB8F9D7E08B6_TypeDefinitionIndex = 76225;

class Class_2_7E1DEB8F9D7E08B6 : public ::RPG::Client::LittleGame::FiveDim::FiveDimBaseEventActionService_1<::Class_2_B8E38BF47138A2E5*>
{
public:
	::Class_3_912CC478F2B21832* PDENFEFCAGN; // 0x68
	::Class_1_2CDF619C23140440* FKINCGODJEP; // 0x70

	::System::Void _ctor(::Class_1_2CDF619C23140440* a1, ::Class_3_912CC478F2B21832* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_2CDF619C23140440*, ::Class_3_912CC478F2B21832*))((::PBYTE)hIl2Cpp + CLASS_2_7E1DEB8F9D7E08B6__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void _Init()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7E1DEB8F9D7E08B6__INIT_OFFSET))(this);
	}

	::System::Void _Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7E1DEB8F9D7E08B6__DISPOSE_OFFSET))(this);
	}

	::System::Boolean _SolveSubClassAction(::Class_2_B8E38BF47138A2E5* a1, ::RPG::GameCore::FiveDimBaseEventAction* a2, ::Struct_2_4127FF4C06B070D3 a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_B8E38BF47138A2E5*, ::RPG::GameCore::FiveDimBaseEventAction*, ::Struct_2_4127FF4C06B070D3))((::PBYTE)hIl2Cpp + CLASS_2_7E1DEB8F9D7E08B6__SOLVESUBCLASSACTION_OFFSET))(this, a1, a2, a3);
	}

	::System::Void _DoAction(::Class_2_B8E38BF47138A2E5* a1, ::RPG::GameCore::FiveDimSetAnimParamEventAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B8E38BF47138A2E5*, ::RPG::GameCore::FiveDimSetAnimParamEventAction*))((::PBYTE)hIl2Cpp + CLASS_2_7E1DEB8F9D7E08B6__DOACTION_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_1(::Class_2_B8E38BF47138A2E5* a1, ::RPG::GameCore::FiveDimSetAnimParamByRawLevelVarAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B8E38BF47138A2E5*, ::RPG::GameCore::FiveDimSetAnimParamByRawLevelVarAction*))((::PBYTE)hIl2Cpp + CLASS_2_7E1DEB8F9D7E08B6__DOACTION_1_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_2(::Class_2_B8E38BF47138A2E5* a1, ::RPG::GameCore::FiveDimFireEffectAction* a2, ::Struct_2_4127FF4C06B070D3 a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B8E38BF47138A2E5*, ::RPG::GameCore::FiveDimFireEffectAction*, ::Struct_2_4127FF4C06B070D3))((::PBYTE)hIl2Cpp + CLASS_2_7E1DEB8F9D7E08B6__DOACTION_2_OFFSET))(this, a1, a2, a3);
	}

	::System::Void _DoAction_3(::Class_2_B8E38BF47138A2E5* a1, ::RPG::GameCore::FiveDimBubbleTalkAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B8E38BF47138A2E5*, ::RPG::GameCore::FiveDimBubbleTalkAction*))((::PBYTE)hIl2Cpp + CLASS_2_7E1DEB8F9D7E08B6__DOACTION_3_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_4(::Class_2_B8E38BF47138A2E5* a1, ::RPG::GameCore::FiveDimRandomBubbleTalkAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B8E38BF47138A2E5*, ::RPG::GameCore::FiveDimRandomBubbleTalkAction*))((::PBYTE)hIl2Cpp + CLASS_2_7E1DEB8F9D7E08B6__DOACTION_4_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_5(::Class_2_B8E38BF47138A2E5* a1, ::RPG::GameCore::FiveDimStopBubbleTalkAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B8E38BF47138A2E5*, ::RPG::GameCore::FiveDimStopBubbleTalkAction*))((::PBYTE)hIl2Cpp + CLASS_2_7E1DEB8F9D7E08B6__DOACTION_5_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_6(::Class_2_B8E38BF47138A2E5* a1, ::RPG::GameCore::FiveDimSetBillboardAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B8E38BF47138A2E5*, ::RPG::GameCore::FiveDimSetBillboardAction*))((::PBYTE)hIl2Cpp + CLASS_2_7E1DEB8F9D7E08B6__DOACTION_6_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_7(::Class_2_B8E38BF47138A2E5* a1, ::RPG::GameCore::FiveDimResetBillboardAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B8E38BF47138A2E5*, ::RPG::GameCore::FiveDimResetBillboardAction*))((::PBYTE)hIl2Cpp + CLASS_2_7E1DEB8F9D7E08B6__DOACTION_7_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_8(::Class_2_B8E38BF47138A2E5* a1, ::RPG::GameCore::FiveDimClientFinishMissionAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B8E38BF47138A2E5*, ::RPG::GameCore::FiveDimClientFinishMissionAction*))((::PBYTE)hIl2Cpp + CLASS_2_7E1DEB8F9D7E08B6__DOACTION_8_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_9(::Class_2_B8E38BF47138A2E5* a1, ::RPG::GameCore::FiveDimAudioPostEventAction* a2, ::Struct_2_4127FF4C06B070D3 a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B8E38BF47138A2E5*, ::RPG::GameCore::FiveDimAudioPostEventAction*, ::Struct_2_4127FF4C06B070D3))((::PBYTE)hIl2Cpp + CLASS_2_7E1DEB8F9D7E08B6__DOACTION_9_OFFSET))(this, a1, a2, a3);
	}

	::System::Void _DoAction_10(::Class_2_B8E38BF47138A2E5* a1, ::RPG::GameCore::FiveDimApplyPlayerInteractAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B8E38BF47138A2E5*, ::RPG::GameCore::FiveDimApplyPlayerInteractAction*))((::PBYTE)hIl2Cpp + CLASS_2_7E1DEB8F9D7E08B6__DOACTION_10_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_11(::Class_2_B8E38BF47138A2E5* a1, ::RPG::GameCore::FiveDimClearPlayerVelocityAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B8E38BF47138A2E5*, ::RPG::GameCore::FiveDimClearPlayerVelocityAction*))((::PBYTE)hIl2Cpp + CLASS_2_7E1DEB8F9D7E08B6__DOACTION_11_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_12(::Class_2_B8E38BF47138A2E5* a1, ::RPG::GameCore::FiveDimMutePlayerInputAction* a2, ::Struct_2_4127FF4C06B070D3 a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B8E38BF47138A2E5*, ::RPG::GameCore::FiveDimMutePlayerInputAction*, ::Struct_2_4127FF4C06B070D3))((::PBYTE)hIl2Cpp + CLASS_2_7E1DEB8F9D7E08B6__DOACTION_12_OFFSET))(this, a1, a2, a3);
	}

	::System::Void _DoAction_13(::Class_2_B8E38BF47138A2E5* a1, ::RPG::GameCore::FiveDimPlayUsePropAnimAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B8E38BF47138A2E5*, ::RPG::GameCore::FiveDimPlayUsePropAnimAction*))((::PBYTE)hIl2Cpp + CLASS_2_7E1DEB8F9D7E08B6__DOACTION_13_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_14(::Class_2_B8E38BF47138A2E5* a1, ::RPG::GameCore::FiveDimFireAvatarEffectAction* a2, ::Struct_2_4127FF4C06B070D3 a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B8E38BF47138A2E5*, ::RPG::GameCore::FiveDimFireAvatarEffectAction*, ::Struct_2_4127FF4C06B070D3))((::PBYTE)hIl2Cpp + CLASS_2_7E1DEB8F9D7E08B6__DOACTION_14_OFFSET))(this, a1, a2, a3);
	}

	::System::Void _DoAction_15(::Class_2_B8E38BF47138A2E5* a1, ::RPG::GameCore::FiveDimKillAvatarEffectAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B8E38BF47138A2E5*, ::RPG::GameCore::FiveDimKillAvatarEffectAction*))((::PBYTE)hIl2Cpp + CLASS_2_7E1DEB8F9D7E08B6__DOACTION_15_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_16(::Class_2_B8E38BF47138A2E5* a1, ::RPG::GameCore::FiveDimSetPlayerInteractEnableAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B8E38BF47138A2E5*, ::RPG::GameCore::FiveDimSetPlayerInteractEnableAction*))((::PBYTE)hIl2Cpp + CLASS_2_7E1DEB8F9D7E08B6__DOACTION_16_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_17(::Class_2_B8E38BF47138A2E5* a1, ::RPG::GameCore::FiveDimSetRenderVisibleAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B8E38BF47138A2E5*, ::RPG::GameCore::FiveDimSetRenderVisibleAction*))((::PBYTE)hIl2Cpp + CLASS_2_7E1DEB8F9D7E08B6__DOACTION_17_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_18(::Class_2_B8E38BF47138A2E5* a1, ::RPG::GameCore::FiveDimSetRenderVisibleNeverDitherAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B8E38BF47138A2E5*, ::RPG::GameCore::FiveDimSetRenderVisibleNeverDitherAction*))((::PBYTE)hIl2Cpp + CLASS_2_7E1DEB8F9D7E08B6__DOACTION_18_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_19(::Class_2_B8E38BF47138A2E5* a1, ::RPG::GameCore::FiveDimSetColliderVisibleAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B8E38BF47138A2E5*, ::RPG::GameCore::FiveDimSetColliderVisibleAction*))((::PBYTE)hIl2Cpp + CLASS_2_7E1DEB8F9D7E08B6__DOACTION_19_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_20(::Class_2_B8E38BF47138A2E5* a1, ::RPG::GameCore::FiveDimSetEntityVisibleAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B8E38BF47138A2E5*, ::RPG::GameCore::FiveDimSetEntityVisibleAction*))((::PBYTE)hIl2Cpp + CLASS_2_7E1DEB8F9D7E08B6__DOACTION_20_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_6AB5BC32044676B0(::Class_2_B8E38BF47138A2E5* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B8E38BF47138A2E5*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_7E1DEB8F9D7E08B6_METHOD_2_6AB5BC32044676B0_OFFSET))(this, a1, a2);
	}

	static ::System::Boolean Method_2_F0A5DF5FA876756B(::RPG::GameCore::FourRotateVoxelSceneItemType a1, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameSceneItemType& a2)
	{
		return ((::System::Boolean(*)(::RPG::GameCore::FourRotateVoxelSceneItemType, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameSceneItemType&))((::PBYTE)hIl2Cpp + CLASS_2_7E1DEB8F9D7E08B6_METHOD_2_F0A5DF5FA876756B_OFFSET))(a1, a2);
	}

	::System::Void __SolveSubClassAction_b__3_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7E1DEB8F9D7E08B6___SOLVESUBCLASSACTION_B__3_0_OFFSET))(this);
	}
};
