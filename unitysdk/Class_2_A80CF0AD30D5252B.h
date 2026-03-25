#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/FiveDimBaseEventActionService_1.h"
#include "unitysdk/Struct_2_4127FF4C06B070D3.h"

class Class_1_867B6CE75953535A_1;
class Class_2_0C58AD91B0F4D809;
class Class_3_D6E9A038FA23103A;
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
namespace RPG::GameCore { class FiveDimSetAnimParamEventAction; }
namespace RPG::GameCore { class FiveDimSetBillboardAction; }
namespace RPG::GameCore { class FiveDimSetPlayerInteractEnableAction; }
namespace RPG::GameCore { class FiveDimStopBubbleTalkAction; }

#define CLASS_2_A80CF0AD30D5252B__CTOR_OFFSET UNITYSDK_OFFSET(0x8794370)
#define CLASS_2_A80CF0AD30D5252B__DISPOSE_OFFSET UNITYSDK_OFFSET(0x87944D0)
#define CLASS_2_A80CF0AD30D5252B__DOACTION_10_OFFSET UNITYSDK_OFFSET(0x87958A0)
#define CLASS_2_A80CF0AD30D5252B__DOACTION_11_OFFSET UNITYSDK_OFFSET(0x8795A50)
#define CLASS_2_A80CF0AD30D5252B__DOACTION_12_OFFSET UNITYSDK_OFFSET(0x8795AF0)
#define CLASS_2_A80CF0AD30D5252B__DOACTION_13_OFFSET UNITYSDK_OFFSET(0x8795CF0)
#define CLASS_2_A80CF0AD30D5252B__DOACTION_14_OFFSET UNITYSDK_OFFSET(0x8795EC0)
#define CLASS_2_A80CF0AD30D5252B__DOACTION_15_OFFSET UNITYSDK_OFFSET(0x8795F80)
#define CLASS_2_A80CF0AD30D5252B__DOACTION_1_OFFSET UNITYSDK_OFFSET(0x8794790)
#define CLASS_2_A80CF0AD30D5252B__DOACTION_2_OFFSET UNITYSDK_OFFSET(0x8794AE0)
#define CLASS_2_A80CF0AD30D5252B__DOACTION_3_OFFSET UNITYSDK_OFFSET(0x8794D30)
#define CLASS_2_A80CF0AD30D5252B__DOACTION_4_OFFSET UNITYSDK_OFFSET(0x8794F20)
#define CLASS_2_A80CF0AD30D5252B__DOACTION_5_OFFSET UNITYSDK_OFFSET(0x8795070)
#define CLASS_2_A80CF0AD30D5252B__DOACTION_6_OFFSET UNITYSDK_OFFSET(0x8795280)
#define CLASS_2_A80CF0AD30D5252B__DOACTION_7_OFFSET UNITYSDK_OFFSET(0x8795490)
#define CLASS_2_A80CF0AD30D5252B__DOACTION_8_OFFSET UNITYSDK_OFFSET(0x8795560)
#define CLASS_2_A80CF0AD30D5252B__DOACTION_9_OFFSET UNITYSDK_OFFSET(0x8795800)
#define CLASS_2_A80CF0AD30D5252B__DOACTION_OFFSET UNITYSDK_OFFSET(0x8794700)
#define CLASS_2_A80CF0AD30D5252B__INIT_OFFSET UNITYSDK_OFFSET(0x87943E0)
#define CLASS_2_A80CF0AD30D5252B__SOLVESUBCLASSACTION_OFFSET UNITYSDK_OFFSET(0x8794520)
#define CLASS_2_A80CF0AD30D5252B___IFIXBASEPROXY__INIT_OFFSET UNITYSDK_OFFSET(0x8796000)

inline static constexpr unsigned int Class_2_A80CF0AD30D5252B_TypeDefinitionIndex = 62448;

class Class_2_A80CF0AD30D5252B : public ::RPG::Client::LittleGame::FiveDim::FiveDimBaseEventActionService_1<::Class_2_0C58AD91B0F4D809*>
{
public:
	::Class_3_D6E9A038FA23103A* Field_2_1; // 0x50
	::Class_1_867B6CE75953535A_1* Field_2_0; // 0x58

	::System::Void _ctor(::Class_1_867B6CE75953535A_1* a1, ::Class_3_D6E9A038FA23103A* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_867B6CE75953535A_1*, ::Class_3_D6E9A038FA23103A*))((::PBYTE)hIl2Cpp + CLASS_2_A80CF0AD30D5252B__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void _Init()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A80CF0AD30D5252B__INIT_OFFSET))(this);
	}

	::System::Void _Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A80CF0AD30D5252B__DISPOSE_OFFSET))(this);
	}

	::System::Boolean _SolveSubClassAction(::Class_2_0C58AD91B0F4D809* a1, ::RPG::GameCore::FiveDimBaseEventAction* a2, ::Struct_2_4127FF4C06B070D3 a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_0C58AD91B0F4D809*, ::RPG::GameCore::FiveDimBaseEventAction*, ::Struct_2_4127FF4C06B070D3))((::PBYTE)hIl2Cpp + CLASS_2_A80CF0AD30D5252B__SOLVESUBCLASSACTION_OFFSET))(this, a1, a2, a3);
	}

	::System::Void _DoAction(::Class_2_0C58AD91B0F4D809* a1, ::RPG::GameCore::FiveDimSetAnimParamEventAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_0C58AD91B0F4D809*, ::RPG::GameCore::FiveDimSetAnimParamEventAction*))((::PBYTE)hIl2Cpp + CLASS_2_A80CF0AD30D5252B__DOACTION_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_1(::Class_2_0C58AD91B0F4D809* a1, ::RPG::GameCore::FiveDimFireEffectAction* a2, ::Struct_2_4127FF4C06B070D3 a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_0C58AD91B0F4D809*, ::RPG::GameCore::FiveDimFireEffectAction*, ::Struct_2_4127FF4C06B070D3))((::PBYTE)hIl2Cpp + CLASS_2_A80CF0AD30D5252B__DOACTION_1_OFFSET))(this, a1, a2, a3);
	}

	::System::Void _DoAction_2(::Class_2_0C58AD91B0F4D809* a1, ::RPG::GameCore::FiveDimBubbleTalkAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_0C58AD91B0F4D809*, ::RPG::GameCore::FiveDimBubbleTalkAction*))((::PBYTE)hIl2Cpp + CLASS_2_A80CF0AD30D5252B__DOACTION_2_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_3(::Class_2_0C58AD91B0F4D809* a1, ::RPG::GameCore::FiveDimRandomBubbleTalkAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_0C58AD91B0F4D809*, ::RPG::GameCore::FiveDimRandomBubbleTalkAction*))((::PBYTE)hIl2Cpp + CLASS_2_A80CF0AD30D5252B__DOACTION_3_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_4(::Class_2_0C58AD91B0F4D809* a1, ::RPG::GameCore::FiveDimStopBubbleTalkAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_0C58AD91B0F4D809*, ::RPG::GameCore::FiveDimStopBubbleTalkAction*))((::PBYTE)hIl2Cpp + CLASS_2_A80CF0AD30D5252B__DOACTION_4_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_5(::Class_2_0C58AD91B0F4D809* a1, ::RPG::GameCore::FiveDimSetBillboardAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_0C58AD91B0F4D809*, ::RPG::GameCore::FiveDimSetBillboardAction*))((::PBYTE)hIl2Cpp + CLASS_2_A80CF0AD30D5252B__DOACTION_5_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_6(::Class_2_0C58AD91B0F4D809* a1, ::RPG::GameCore::FiveDimResetBillboardAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_0C58AD91B0F4D809*, ::RPG::GameCore::FiveDimResetBillboardAction*))((::PBYTE)hIl2Cpp + CLASS_2_A80CF0AD30D5252B__DOACTION_6_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_7(::Class_2_0C58AD91B0F4D809* a1, ::RPG::GameCore::FiveDimClientFinishMissionAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_0C58AD91B0F4D809*, ::RPG::GameCore::FiveDimClientFinishMissionAction*))((::PBYTE)hIl2Cpp + CLASS_2_A80CF0AD30D5252B__DOACTION_7_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_8(::Class_2_0C58AD91B0F4D809* a1, ::RPG::GameCore::FiveDimAudioPostEventAction* a2, ::Struct_2_4127FF4C06B070D3 a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_0C58AD91B0F4D809*, ::RPG::GameCore::FiveDimAudioPostEventAction*, ::Struct_2_4127FF4C06B070D3))((::PBYTE)hIl2Cpp + CLASS_2_A80CF0AD30D5252B__DOACTION_8_OFFSET))(this, a1, a2, a3);
	}

	::System::Void _DoAction_9(::Class_2_0C58AD91B0F4D809* a1, ::RPG::GameCore::FiveDimApplyPlayerInteractAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_0C58AD91B0F4D809*, ::RPG::GameCore::FiveDimApplyPlayerInteractAction*))((::PBYTE)hIl2Cpp + CLASS_2_A80CF0AD30D5252B__DOACTION_9_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_10(::Class_2_0C58AD91B0F4D809* a1, ::RPG::GameCore::FiveDimClearPlayerVelocityAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_0C58AD91B0F4D809*, ::RPG::GameCore::FiveDimClearPlayerVelocityAction*))((::PBYTE)hIl2Cpp + CLASS_2_A80CF0AD30D5252B__DOACTION_10_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_11(::Class_2_0C58AD91B0F4D809* a1, ::RPG::GameCore::FiveDimMutePlayerInputAction* a2, ::Struct_2_4127FF4C06B070D3 a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_0C58AD91B0F4D809*, ::RPG::GameCore::FiveDimMutePlayerInputAction*, ::Struct_2_4127FF4C06B070D3))((::PBYTE)hIl2Cpp + CLASS_2_A80CF0AD30D5252B__DOACTION_11_OFFSET))(this, a1, a2, a3);
	}

	::System::Void _DoAction_12(::Class_2_0C58AD91B0F4D809* a1, ::RPG::GameCore::FiveDimPlayUsePropAnimAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_0C58AD91B0F4D809*, ::RPG::GameCore::FiveDimPlayUsePropAnimAction*))((::PBYTE)hIl2Cpp + CLASS_2_A80CF0AD30D5252B__DOACTION_12_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_13(::Class_2_0C58AD91B0F4D809* a1, ::RPG::GameCore::FiveDimFireAvatarEffectAction* a2, ::Struct_2_4127FF4C06B070D3 a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_0C58AD91B0F4D809*, ::RPG::GameCore::FiveDimFireAvatarEffectAction*, ::Struct_2_4127FF4C06B070D3))((::PBYTE)hIl2Cpp + CLASS_2_A80CF0AD30D5252B__DOACTION_13_OFFSET))(this, a1, a2, a3);
	}

	::System::Void _DoAction_14(::Class_2_0C58AD91B0F4D809* a1, ::RPG::GameCore::FiveDimKillAvatarEffectAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_0C58AD91B0F4D809*, ::RPG::GameCore::FiveDimKillAvatarEffectAction*))((::PBYTE)hIl2Cpp + CLASS_2_A80CF0AD30D5252B__DOACTION_14_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_15(::Class_2_0C58AD91B0F4D809* a1, ::RPG::GameCore::FiveDimSetPlayerInteractEnableAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_0C58AD91B0F4D809*, ::RPG::GameCore::FiveDimSetPlayerInteractEnableAction*))((::PBYTE)hIl2Cpp + CLASS_2_A80CF0AD30D5252B__DOACTION_15_OFFSET))(this, a1, a2);
	}

	::System::Void __iFixBaseProxy__Init()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A80CF0AD30D5252B___IFIXBASEPROXY__INIT_OFFSET))(this);
	}
};
