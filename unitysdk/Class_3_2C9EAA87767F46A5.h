#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F3F43255EC92B83B.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_C47576BEFCFAD595;
class Class_1_F2EADB0CA33C76B0;
class Class_2_55373297DA27393D;
class Class_2_DE1F9F8297133D40;
class ParkourCameraController;
namespace Cinemachine { class CinemachineVirtualCamera; }
namespace RPG::Client::ParkourGame { class MonoParkourCharacter; }
namespace RPG::Client::ParkourGame { class MonoParkourItem; }
namespace RPG::Client::ParkourGame { class ParkourSkillConfig; }
namespace RPG::Client::ParkourGame { class ParkourSkillConfig_Fire; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class GameObject; }

#define CLASS_3_2C9EAA87767F46A5_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15FA3850)
#define CLASS_3_2C9EAA87767F46A5_GET_BALLID_OFFSET UNITYSDK_OFFSET(0x15FA8FF0)
#define CLASS_3_2C9EAA87767F46A5_GET_BOOMCOUNT_OFFSET UNITYSDK_OFFSET(0x15FA9070)
#define CLASS_3_2C9EAA87767F46A5_GET_BOOMHITCOUNT_OFFSET UNITYSDK_OFFSET(0x15FA8F50)
#define CLASS_3_2C9EAA87767F46A5_GET_CROSSROADINFOVIEWDISTANCE_OFFSET UNITYSDK_OFFSET(0x15FA9030)
#define CLASS_3_2C9EAA87767F46A5_GET_CROSSROADINFOVIEWHEIGHT_OFFSET UNITYSDK_OFFSET(0x15FA9040)
#define CLASS_3_2C9EAA87767F46A5_GET_DEFAULTENGINEMAXSPEED_OFFSET UNITYSDK_OFFSET(0x15FA9010)
#define CLASS_3_2C9EAA87767F46A5_GET_HITBOOMCOUNT_OFFSET UNITYSDK_OFFSET(0x15FA9050)
#define CLASS_3_2C9EAA87767F46A5_GET_OBSTACLEHITCOUNT_OFFSET UNITYSDK_OFFSET(0x15FA8F30)
#define CLASS_3_2C9EAA87767F46A5_GET_OTHERCHARACTERHITCOUNT_OFFSET UNITYSDK_OFFSET(0x15FA8F70)
#define CLASS_3_2C9EAA87767F46A5_GET_POWERENGINEMAXSPEED_OFFSET UNITYSDK_OFFSET(0x15FA9020)
#define CLASS_3_2C9EAA87767F46A5_GET_SKILLITEMGETCOUNT_OFFSET UNITYSDK_OFFSET(0x15FA8F10)
#define CLASS_3_2C9EAA87767F46A5_GET_SKILLUSECOUNT_OFFSET UNITYSDK_OFFSET(0x15FA8ED0)
#define CLASS_3_2C9EAA87767F46A5_GET_SPEEDITEMGETCOUNT_OFFSET UNITYSDK_OFFSET(0x15FA8EF0)
#define CLASS_3_2C9EAA87767F46A5_GET_SPEEDUPUSECOUNT_OFFSET UNITYSDK_OFFSET(0x15FA8EB0)
#define CLASS_3_2C9EAA87767F46A5_GET_SUPERSTARRECOVERYCOUNT_OFFSET UNITYSDK_OFFSET(0x15FA8F90)
#define CLASS_3_2C9EAA87767F46A5_GET_TRIGGERACCELERATIONCOUNT_OFFSET UNITYSDK_OFFSET(0x15FA8FB0)
#define CLASS_3_2C9EAA87767F46A5_GET_TRIGGERDECELERATIONCOUNT_OFFSET UNITYSDK_OFFSET(0x15FA8FD0)
#define CLASS_3_2C9EAA87767F46A5_METHOD_3_063899AC8D04895A_OFFSET UNITYSDK_OFFSET(0x15FA7D20)
#define CLASS_3_2C9EAA87767F46A5_METHOD_3_0B6C3969A0985ADD_OFFSET UNITYSDK_OFFSET(0x15FA4F60)
#define CLASS_3_2C9EAA87767F46A5_METHOD_3_0B7E3489D2C0938B_OFFSET UNITYSDK_OFFSET(0x15FA3A10)
#define CLASS_3_2C9EAA87767F46A5_METHOD_3_134E6E401444EB62_OFFSET UNITYSDK_OFFSET(0x15FA8B60)
#define CLASS_3_2C9EAA87767F46A5_METHOD_3_1682247A40B81983_OFFSET UNITYSDK_OFFSET(0x15FA66F0)
#define CLASS_3_2C9EAA87767F46A5_METHOD_3_22383CF1A190BE79_OFFSET UNITYSDK_OFFSET(0x15FA7E10)
#define CLASS_3_2C9EAA87767F46A5_METHOD_3_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x15FA9000)
#define CLASS_3_2C9EAA87767F46A5_METHOD_3_361C06486F56B4E7_OFFSET UNITYSDK_OFFSET(0x15FA4BF0)
#define CLASS_3_2C9EAA87767F46A5_METHOD_3_36D8543FC20E22FB_OFFSET UNITYSDK_OFFSET(0x15FA55D0)
#define CLASS_3_2C9EAA87767F46A5_METHOD_3_41A074549EF25F63_OFFSET UNITYSDK_OFFSET(0x15FA4970)
#define CLASS_3_2C9EAA87767F46A5_METHOD_3_43291C01F07B7295_OFFSET UNITYSDK_OFFSET(0x15FA5A80)
#define CLASS_3_2C9EAA87767F46A5_METHOD_3_50131F4CF014469C_OFFSET UNITYSDK_OFFSET(0x15FA3E70)
#define CLASS_3_2C9EAA87767F46A5_METHOD_3_51CFFE2AF748ECD7_OFFSET UNITYSDK_OFFSET(0x15FA7A50)
#define CLASS_3_2C9EAA87767F46A5_METHOD_3_568E2DFCDC397B64_OFFSET UNITYSDK_OFFSET(0x15FA4AB0)
#define CLASS_3_2C9EAA87767F46A5_METHOD_3_5939EE110A8ACAD9_OFFSET UNITYSDK_OFFSET(0x15FA88E0)
#define CLASS_3_2C9EAA87767F46A5_METHOD_3_6423291ED13007B8_OFFSET UNITYSDK_OFFSET(0x15FA8CD0)
#define CLASS_3_2C9EAA87767F46A5_METHOD_3_6A0EBEECA245A27C_OFFSET UNITYSDK_OFFSET(0x15FA7220)
#define CLASS_3_2C9EAA87767F46A5_METHOD_3_72D6AD0F841EB149_OFFSET UNITYSDK_OFFSET(0x15FA8C70)
#define CLASS_3_2C9EAA87767F46A5_METHOD_3_781F04FFB00F4D63_OFFSET UNITYSDK_OFFSET(0x15FA5910)
#define CLASS_3_2C9EAA87767F46A5_METHOD_3_805C56F44231AEF9_OFFSET UNITYSDK_OFFSET(0x15FA5040)
#define CLASS_3_2C9EAA87767F46A5_METHOD_3_8C1FB0C6AEFFB54E_OFFSET UNITYSDK_OFFSET(0x15FA3B30)
#define CLASS_3_2C9EAA87767F46A5_METHOD_3_8C704EC832EDEFC8_OFFSET UNITYSDK_OFFSET(0x15FA3D60)
#define CLASS_3_2C9EAA87767F46A5_METHOD_3_9AB55F553C4AC6E8_OFFSET UNITYSDK_OFFSET(0x15FA3640)
#define CLASS_3_2C9EAA87767F46A5_METHOD_3_A1C464B05BB7A5C1_OFFSET UNITYSDK_OFFSET(0x15FA90A0)
#define CLASS_3_2C9EAA87767F46A5_METHOD_3_A536C0A3C82A1588_OFFSET UNITYSDK_OFFSET(0x15FA5D80)
#define CLASS_3_2C9EAA87767F46A5_METHOD_3_B597570DAD5B5F84_OFFSET UNITYSDK_OFFSET(0x15FA59D0)
#define CLASS_3_2C9EAA87767F46A5_METHOD_3_B9EC3F44C1BFC5EF_OFFSET UNITYSDK_OFFSET(0x15FA84F0)
#define CLASS_3_2C9EAA87767F46A5_METHOD_3_D35B60AE823B8CC1_OFFSET UNITYSDK_OFFSET(0x15FA4020)
#define CLASS_3_2C9EAA87767F46A5_METHOD_3_D68547FF19A170E2_OFFSET UNITYSDK_OFFSET(0x15FA4540)
#define CLASS_3_2C9EAA87767F46A5_METHOD_3_D7B7C909A67BD350_1_OFFSET UNITYSDK_OFFSET(0x15FA8780)
#define CLASS_3_2C9EAA87767F46A5_METHOD_3_D7B7C909A67BD350_OFFSET UNITYSDK_OFFSET(0x15FA8A00)
#define CLASS_3_2C9EAA87767F46A5_METHOD_3_D91A0BC1F20994FA_OFFSET UNITYSDK_OFFSET(0x15FA8670)
#define CLASS_3_2C9EAA87767F46A5_METHOD_3_DEDD31AF6F4E4818_OFFSET UNITYSDK_OFFSET(0x15FA3F70)
#define CLASS_3_2C9EAA87767F46A5_METHOD_3_E7EF6BC52B28648C_OFFSET UNITYSDK_OFFSET(0x15FA8570)
#define CLASS_3_2C9EAA87767F46A5_METHOD_3_EDFD49C942C75D6C_OFFSET UNITYSDK_OFFSET(0x15FA34E0)
#define CLASS_3_2C9EAA87767F46A5_METHOD_3_F011FE82F2197681_OFFSET UNITYSDK_OFFSET(0x15FA9090)
#define CLASS_3_2C9EAA87767F46A5_METHOD_3_F02B5B383D593A70_OFFSET UNITYSDK_OFFSET(0x15FA7C10)
#define CLASS_3_2C9EAA87767F46A5_SET_BOOMCOUNT_OFFSET UNITYSDK_OFFSET(0x15FA9080)
#define CLASS_3_2C9EAA87767F46A5_SET_BOOMHITCOUNT_OFFSET UNITYSDK_OFFSET(0x15FA8F60)
#define CLASS_3_2C9EAA87767F46A5_SET_HITBOOMCOUNT_OFFSET UNITYSDK_OFFSET(0x15FA9060)
#define CLASS_3_2C9EAA87767F46A5_SET_OBSTACLEHITCOUNT_OFFSET UNITYSDK_OFFSET(0x15FA8F40)
#define CLASS_3_2C9EAA87767F46A5_SET_OTHERCHARACTERHITCOUNT_OFFSET UNITYSDK_OFFSET(0x15FA8F80)
#define CLASS_3_2C9EAA87767F46A5_SET_SKILLITEMGETCOUNT_OFFSET UNITYSDK_OFFSET(0x15FA8F20)
#define CLASS_3_2C9EAA87767F46A5_SET_SKILLUSECOUNT_OFFSET UNITYSDK_OFFSET(0x15FA8EE0)
#define CLASS_3_2C9EAA87767F46A5_SET_SPEEDITEMGETCOUNT_OFFSET UNITYSDK_OFFSET(0x15FA8F00)
#define CLASS_3_2C9EAA87767F46A5_SET_SPEEDUPUSECOUNT_OFFSET UNITYSDK_OFFSET(0x15FA8EC0)
#define CLASS_3_2C9EAA87767F46A5_SET_SUPERSTARRECOVERYCOUNT_OFFSET UNITYSDK_OFFSET(0x15FA8FA0)
#define CLASS_3_2C9EAA87767F46A5_SET_TRIGGERACCELERATIONCOUNT_OFFSET UNITYSDK_OFFSET(0x15FA8FC0)
#define CLASS_3_2C9EAA87767F46A5_SET_TRIGGERDECELERATIONCOUNT_OFFSET UNITYSDK_OFFSET(0x15FA8FE0)
#define CLASS_3_2C9EAA87767F46A5__CTOR_OFFSET UNITYSDK_OFFSET(0x15FA2F40)
#define CLASS_3_2C9EAA87767F46A5__PLAYENTERCAMERA_B__8_0_OFFSET UNITYSDK_OFFSET(0x15FA9270)

inline static constexpr unsigned int Class_3_2C9EAA87767F46A5_TypeDefinitionIndex = 70818;

class Class_3_2C9EAA87767F46A5 : public ::Class_2_F3F43255EC92B83B
{
public:
	// static const ::System::Single Field_3_0; // 0x0
	// static const ::System::Int32 Field_3_1 = 0x3E7; // 0x0
	// static const ::System::Single Field_3_2; // 0x0
	// static const ::System::Int32 Field_3_3 = 0x1; // 0x0
	// static const ::System::Single Field_3_4; // 0x0
	::UnityEngine::Animator* Field_3_5; // 0x108
	::UnityEngine::GameObject* Field_3_6; // 0x110
	::ParkourCameraController* Field_3_7; // 0x118
	::Cinemachine::CinemachineVirtualCamera* Field_3_8; // 0x120
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* Field_3_9; // 0x128
	::System::Action_1<::System::UInt32>* Field_3_10; // 0x130
	::System::Single _CrossroadInfoViewHeight_k__BackingField; // 0x138
	::UnityEngine::Vector3 Field_3_12; // 0x13C
	::System::UInt32 _BoomCount_k__BackingField; // 0x148
	::System::Single Field_3_14; // 0x14C
	::System::UInt32 _OtherCharacterHitCount_k__BackingField; // 0x150
	::System::Int32 Field_3_16; // 0x154
	::System::UInt32 _BallID_k__BackingField; // 0x158
	::System::UInt32 _BoomHitCount_k__BackingField; // 0x15C
	::System::UInt32 _HitBoomCount_k__BackingField; // 0x160
	::System::UInt32 _SkillItemGetCount_k__BackingField; // 0x164
	::System::UInt32 _SpeedUpUseCount_k__BackingField; // 0x168
	::System::UInt32 _ObstacleHitCount_k__BackingField; // 0x16C
	::System::Single Field_3_23; // 0x170
	::System::Single _PowerEngineMaxSpeed_k__BackingField; // 0x174
	::System::UInt32 _SpeedItemGetCount_k__BackingField; // 0x178
	::System::Nullable_1<::System::Single> Field_3_26; // 0x17C
	::System::Single _DefaultEngineMaxSpeed_k__BackingField; // 0x184
	::UnityEngine::Vector3 Field_3_28; // 0x188
	::System::Int32 Field_3_29; // 0x194
	::System::UInt32 _TriggerDecelerationCount_k__BackingField; // 0x198
	::System::UInt32 _SuperStarRecoveryCount_k__BackingField; // 0x19C
	::System::Single _CrossroadInfoViewDistance_k__BackingField; // 0x1A0
	::System::UInt32 _TriggerAccelerationCount_k__BackingField; // 0x1A4
	::System::UInt32 _SkillUseCount_k__BackingField; // 0x1A8

	::System::Void _ctor(::System::Int32 a1, ::System::UInt32 a2, ::RPG::Client::ParkourGame::MonoParkourCharacter* a3, ::Class_1_C47576BEFCFAD595* a4, ::UnityEngine::GameObject* a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::UInt32, ::RPG::Client::ParkourGame::MonoParkourCharacter*, ::Class_1_C47576BEFCFAD595*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_3_2C9EAA87767F46A5__CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2C9EAA87767F46A5_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_3_8C1FB0C6AEFFB54E(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_2C9EAA87767F46A5_METHOD_3_8C1FB0C6AEFFB54E_OFFSET))(this, a1);
	}

	::System::Void Method_3_0B7E3489D2C0938B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2C9EAA87767F46A5_METHOD_3_0B7E3489D2C0938B_OFFSET))(this);
	}

	::System::Void Method_3_8C704EC832EDEFC8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2C9EAA87767F46A5_METHOD_3_8C704EC832EDEFC8_OFFSET))(this);
	}

	::System::Void Method_3_50131F4CF014469C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2C9EAA87767F46A5_METHOD_3_50131F4CF014469C_OFFSET))(this);
	}

	::System::Void Method_3_41A074549EF25F63()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2C9EAA87767F46A5_METHOD_3_41A074549EF25F63_OFFSET))(this);
	}

	::System::Void Method_3_568E2DFCDC397B64()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2C9EAA87767F46A5_METHOD_3_568E2DFCDC397B64_OFFSET))(this);
	}

	::System::Void Method_3_0B6C3969A0985ADD(::System::Single a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_2C9EAA87767F46A5_METHOD_3_0B6C3969A0985ADD_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_805C56F44231AEF9()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2C9EAA87767F46A5_METHOD_3_805C56F44231AEF9_OFFSET))(this);
	}

	::System::Void Method_3_36D8543FC20E22FB(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_3_2C9EAA87767F46A5_METHOD_3_36D8543FC20E22FB_OFFSET))(this, a1);
	}

	::System::Void Method_3_781F04FFB00F4D63(::RPG::Client::ParkourGame::ParkourSkillConfig_Fire* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ParkourGame::ParkourSkillConfig_Fire*))((::PBYTE)hIl2Cpp + CLASS_3_2C9EAA87767F46A5_METHOD_3_781F04FFB00F4D63_OFFSET))(this, a1);
	}

	::Class_2_DE1F9F8297133D40* Method_3_B597570DAD5B5F84(::RPG::Client::ParkourGame::ParkourSkillConfig* a1)
	{
		return ((::Class_2_DE1F9F8297133D40*(*)(::PVOID, ::RPG::Client::ParkourGame::ParkourSkillConfig*))((::PBYTE)hIl2Cpp + CLASS_3_2C9EAA87767F46A5_METHOD_3_B597570DAD5B5F84_OFFSET))(this, a1);
	}

	::Class_1_F2EADB0CA33C76B0* Method_3_43291C01F07B7295(::RPG::Client::ParkourGame::ParkourSkillConfig* a1)
	{
		return ((::Class_1_F2EADB0CA33C76B0*(*)(::PVOID, ::RPG::Client::ParkourGame::ParkourSkillConfig*))((::PBYTE)hIl2Cpp + CLASS_3_2C9EAA87767F46A5_METHOD_3_43291C01F07B7295_OFFSET))(this, a1);
	}

	::System::Void Method_3_A536C0A3C82A1588(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_2C9EAA87767F46A5_METHOD_3_A536C0A3C82A1588_OFFSET))(this, a1);
	}

	::System::Void Method_3_1682247A40B81983(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_2C9EAA87767F46A5_METHOD_3_1682247A40B81983_OFFSET))(this, a1);
	}

	::System::Void Method_3_F02B5B383D593A70(::Class_2_55373297DA27393D* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_55373297DA27393D*))((::PBYTE)hIl2Cpp + CLASS_3_2C9EAA87767F46A5_METHOD_3_F02B5B383D593A70_OFFSET))(this, a1);
	}

	::System::Void Method_3_063899AC8D04895A(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_2C9EAA87767F46A5_METHOD_3_063899AC8D04895A_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_22383CF1A190BE79(::RPG::Client::ParkourGame::MonoParkourItem* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ParkourGame::MonoParkourItem*))((::PBYTE)hIl2Cpp + CLASS_3_2C9EAA87767F46A5_METHOD_3_22383CF1A190BE79_OFFSET))(this, a1);
	}

	::System::Void Method_3_B9EC3F44C1BFC5EF(::Class_2_F3F43255EC92B83B* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_F3F43255EC92B83B*))((::PBYTE)hIl2Cpp + CLASS_3_2C9EAA87767F46A5_METHOD_3_B9EC3F44C1BFC5EF_OFFSET))(this, a1);
	}

	::System::Void Method_3_6A0EBEECA245A27C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2C9EAA87767F46A5_METHOD_3_6A0EBEECA245A27C_OFFSET))(this);
	}

	::System::Void Method_3_361C06486F56B4E7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2C9EAA87767F46A5_METHOD_3_361C06486F56B4E7_OFFSET))(this);
	}

	::System::Void Method_3_E7EF6BC52B28648C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2C9EAA87767F46A5_METHOD_3_E7EF6BC52B28648C_OFFSET))(this);
	}

	::System::Void Method_3_D35B60AE823B8CC1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2C9EAA87767F46A5_METHOD_3_D35B60AE823B8CC1_OFFSET))(this);
	}

	::System::Void Method_3_D91A0BC1F20994FA(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_3_2C9EAA87767F46A5_METHOD_3_D91A0BC1F20994FA_OFFSET))(this, a1);
	}

	::System::Void Method_3_D68547FF19A170E2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2C9EAA87767F46A5_METHOD_3_D68547FF19A170E2_OFFSET))(this);
	}

	::System::Void Method_3_5939EE110A8ACAD9(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_3_2C9EAA87767F46A5_METHOD_3_5939EE110A8ACAD9_OFFSET))(this, a1);
	}

	::System::Void Method_3_134E6E401444EB62(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_3_2C9EAA87767F46A5_METHOD_3_134E6E401444EB62_OFFSET))(this, a1);
	}

	::System::Void Method_3_72D6AD0F841EB149(::System::Int32 a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_2C9EAA87767F46A5_METHOD_3_72D6AD0F841EB149_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_EDFD49C942C75D6C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2C9EAA87767F46A5_METHOD_3_EDFD49C942C75D6C_OFFSET))(this);
	}

	::System::Void Method_3_6423291ED13007B8(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_2C9EAA87767F46A5_METHOD_3_6423291ED13007B8_OFFSET))(this, a1);
	}

	::System::Void Method_3_51CFFE2AF748ECD7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2C9EAA87767F46A5_METHOD_3_51CFFE2AF748ECD7_OFFSET))(this);
	}

	::System::Void Method_3_9AB55F553C4AC6E8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2C9EAA87767F46A5_METHOD_3_9AB55F553C4AC6E8_OFFSET))(this);
	}

	::System::UInt32 get_SpeedUpUseCount()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2C9EAA87767F46A5_GET_SPEEDUPUSECOUNT_OFFSET))(this);
	}

	::System::Void set_SpeedUpUseCount(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_2C9EAA87767F46A5_SET_SPEEDUPUSECOUNT_OFFSET))(this, a1);
	}

	::System::UInt32 get_SkillUseCount()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2C9EAA87767F46A5_GET_SKILLUSECOUNT_OFFSET))(this);
	}

	::System::Void set_SkillUseCount(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_2C9EAA87767F46A5_SET_SKILLUSECOUNT_OFFSET))(this, a1);
	}

	::System::UInt32 get_SpeedItemGetCount()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2C9EAA87767F46A5_GET_SPEEDITEMGETCOUNT_OFFSET))(this);
	}

	::System::Void set_SpeedItemGetCount(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_2C9EAA87767F46A5_SET_SPEEDITEMGETCOUNT_OFFSET))(this, a1);
	}

	::System::UInt32 get_SkillItemGetCount()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2C9EAA87767F46A5_GET_SKILLITEMGETCOUNT_OFFSET))(this);
	}

	::System::Void set_SkillItemGetCount(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_2C9EAA87767F46A5_SET_SKILLITEMGETCOUNT_OFFSET))(this, a1);
	}

	::System::UInt32 get_ObstacleHitCount()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2C9EAA87767F46A5_GET_OBSTACLEHITCOUNT_OFFSET))(this);
	}

	::System::Void set_ObstacleHitCount(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_2C9EAA87767F46A5_SET_OBSTACLEHITCOUNT_OFFSET))(this, a1);
	}

	::System::UInt32 get_BoomHitCount()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2C9EAA87767F46A5_GET_BOOMHITCOUNT_OFFSET))(this);
	}

	::System::Void set_BoomHitCount(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_2C9EAA87767F46A5_SET_BOOMHITCOUNT_OFFSET))(this, a1);
	}

	::System::UInt32 get_OtherCharacterHitCount()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2C9EAA87767F46A5_GET_OTHERCHARACTERHITCOUNT_OFFSET))(this);
	}

	::System::Void set_OtherCharacterHitCount(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_2C9EAA87767F46A5_SET_OTHERCHARACTERHITCOUNT_OFFSET))(this, a1);
	}

	::System::UInt32 get_SuperStarRecoveryCount()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2C9EAA87767F46A5_GET_SUPERSTARRECOVERYCOUNT_OFFSET))(this);
	}

	::System::Void set_SuperStarRecoveryCount(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_2C9EAA87767F46A5_SET_SUPERSTARRECOVERYCOUNT_OFFSET))(this, a1);
	}

	::System::UInt32 get_TriggerAccelerationCount()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2C9EAA87767F46A5_GET_TRIGGERACCELERATIONCOUNT_OFFSET))(this);
	}

	::System::Void set_TriggerAccelerationCount(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_2C9EAA87767F46A5_SET_TRIGGERACCELERATIONCOUNT_OFFSET))(this, a1);
	}

	::System::UInt32 get_TriggerDecelerationCount()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2C9EAA87767F46A5_GET_TRIGGERDECELERATIONCOUNT_OFFSET))(this);
	}

	::System::Void set_TriggerDecelerationCount(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_2C9EAA87767F46A5_SET_TRIGGERDECELERATIONCOUNT_OFFSET))(this, a1);
	}

	::System::UInt32 get_BallID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2C9EAA87767F46A5_GET_BALLID_OFFSET))(this);
	}

	::Class_1_C47576BEFCFAD595* Method_3_24748FC20F375725()
	{
		return ((::Class_1_C47576BEFCFAD595*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2C9EAA87767F46A5_METHOD_3_24748FC20F375725_OFFSET))(this);
	}

	::System::Single get_DefaultEngineMaxSpeed()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2C9EAA87767F46A5_GET_DEFAULTENGINEMAXSPEED_OFFSET))(this);
	}

	::System::Single get_PowerEngineMaxSpeed()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2C9EAA87767F46A5_GET_POWERENGINEMAXSPEED_OFFSET))(this);
	}

	::System::Single get_CrossroadInfoViewDistance()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2C9EAA87767F46A5_GET_CROSSROADINFOVIEWDISTANCE_OFFSET))(this);
	}

	::System::Single get_CrossroadInfoViewHeight()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2C9EAA87767F46A5_GET_CROSSROADINFOVIEWHEIGHT_OFFSET))(this);
	}

	::System::UInt32 get_HitBoomCount()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2C9EAA87767F46A5_GET_HITBOOMCOUNT_OFFSET))(this);
	}

	::System::Void set_HitBoomCount(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_2C9EAA87767F46A5_SET_HITBOOMCOUNT_OFFSET))(this, a1);
	}

	::System::UInt32 get_BoomCount()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2C9EAA87767F46A5_GET_BOOMCOUNT_OFFSET))(this);
	}

	::System::Void set_BoomCount(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_2C9EAA87767F46A5_SET_BOOMCOUNT_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_D7B7C909A67BD350()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2C9EAA87767F46A5_METHOD_3_D7B7C909A67BD350_OFFSET))(this);
	}

	::System::Boolean Method_3_D7B7C909A67BD350_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2C9EAA87767F46A5_METHOD_3_D7B7C909A67BD350_1_OFFSET))(this);
	}

	::Class_2_DE1F9F8297133D40* Method_3_DEDD31AF6F4E4818()
	{
		return ((::Class_2_DE1F9F8297133D40*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2C9EAA87767F46A5_METHOD_3_DEDD31AF6F4E4818_OFFSET))(this);
	}

	::Cinemachine::CinemachineVirtualCamera* Method_3_F011FE82F2197681()
	{
		return ((::Cinemachine::CinemachineVirtualCamera*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2C9EAA87767F46A5_METHOD_3_F011FE82F2197681_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_3_A1C464B05BB7A5C1()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2C9EAA87767F46A5_METHOD_3_A1C464B05BB7A5C1_OFFSET))(this);
	}

	::System::Void _PlayEnterCamera_b__8_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2C9EAA87767F46A5__PLAYENTERCAMERA_B__8_0_OFFSET))(this);
	}
};
