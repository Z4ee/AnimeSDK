#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RtBattleCameraMode.h"
#include "unitysdk/RPG/GameCore/RtBattleCharacterCameraTag.h"
#include "unitysdk/RPG/GameCore/TeamType.h"
#include "unitysdk/RPG/MVector3.h"
#include "unitysdk/System/Object.h"

class Class_1_0DDCBF910E1BEABC;
class Class_1_24C7DBE81C8DCCB7;
class Class_1_D24B2C72F7F86BD6;
class Class_2_F3B643C4D5BD11F2;
class Class_3_07C3C4D2990C49EE;
namespace RPG::Client { class CameraDataAndFlags; }
namespace RPG::Client { class CameraModuleConfigCollection; }
namespace RPG::Client { class PipelineCameraEngine; }
namespace RPG::Client { class PipelineCameraGlobalConfig; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class GameWorld; }
namespace RPG::GameCore { class RtBattleCharacterCameraConfig; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_B764839958E176CC_METHOD_1_02278F2D9B884143_OFFSET UNITYSDK_OFFSET(0x13922B20)
#define CLASS_1_B764839958E176CC_METHOD_1_076BA8EE415D1B56_OFFSET UNITYSDK_OFFSET(0x13922020)
#define CLASS_1_B764839958E176CC_METHOD_1_081E84DBAB5CA72B_OFFSET UNITYSDK_OFFSET(0x13922090)
#define CLASS_1_B764839958E176CC_METHOD_1_0A1DFABE8AF8A258_OFFSET UNITYSDK_OFFSET(0x13922240)
#define CLASS_1_B764839958E176CC_METHOD_1_1E27A7B84BD57C4A_OFFSET UNITYSDK_OFFSET(0x138F54F0)
#define CLASS_1_B764839958E176CC_METHOD_1_22633D83790C76DB_OFFSET UNITYSDK_OFFSET(0x13920590)
#define CLASS_1_B764839958E176CC_METHOD_1_25CD86BF8626C8D9_OFFSET UNITYSDK_OFFSET(0x13921D90)
#define CLASS_1_B764839958E176CC_METHOD_1_2B85C1969225764F_OFFSET UNITYSDK_OFFSET(0x13920C00)
#define CLASS_1_B764839958E176CC_METHOD_1_2F921991964C01B8_OFFSET UNITYSDK_OFFSET(0x1391F540)
#define CLASS_1_B764839958E176CC_METHOD_1_311DDAC730F6D367_OFFSET UNITYSDK_OFFSET(0x1391FF20)
#define CLASS_1_B764839958E176CC_METHOD_1_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0x1391FD60)
#define CLASS_1_B764839958E176CC_METHOD_1_3B59FF842335F9D6_OFFSET UNITYSDK_OFFSET(0x1391FE10)
#define CLASS_1_B764839958E176CC_METHOD_1_56C46243AEA2C868_OFFSET UNITYSDK_OFFSET(0x13922100)
#define CLASS_1_B764839958E176CC_METHOD_1_58723AF19337DFD2_OFFSET UNITYSDK_OFFSET(0x139227A0)
#define CLASS_1_B764839958E176CC_METHOD_1_60C0D8A8D118ED10_OFFSET UNITYSDK_OFFSET(0x139206E0)
#define CLASS_1_B764839958E176CC_METHOD_1_7149F443D1543A6A_OFFSET UNITYSDK_OFFSET(0x13920360)
#define CLASS_1_B764839958E176CC_METHOD_1_76CD9B9D1269FA90_OFFSET UNITYSDK_OFFSET(0x13921ED0)
#define CLASS_1_B764839958E176CC_METHOD_1_88DFD67617E05BA5_OFFSET UNITYSDK_OFFSET(0x139226B0)
#define CLASS_1_B764839958E176CC_METHOD_1_ACA133530085D272_OFFSET UNITYSDK_OFFSET(0x1391F7D0)
#define CLASS_1_B764839958E176CC_METHOD_1_B1445E8504415D4D_1_OFFSET UNITYSDK_OFFSET(0x13922DF0)
#define CLASS_1_B764839958E176CC_METHOD_1_B1445E8504415D4D_OFFSET UNITYSDK_OFFSET(0x13922DE0)
#define CLASS_1_B764839958E176CC_METHOD_1_B9EC3F44C1BFC5EF_OFFSET UNITYSDK_OFFSET(0x13922D80)
#define CLASS_1_B764839958E176CC_METHOD_1_D52FC720F38CB2AD_OFFSET UNITYSDK_OFFSET(0x1391FB00)
#define CLASS_1_B764839958E176CC_METHOD_1_DEB7D04EE9D67260_OFFSET UNITYSDK_OFFSET(0x13921A20)
#define CLASS_1_B764839958E176CC_METHOD_1_EC170F7AEE5B1341_OFFSET UNITYSDK_OFFSET(0x139204B0)
#define CLASS_1_B764839958E176CC_METHOD_1_ECE73786C4A09D6D_OFFSET UNITYSDK_OFFSET(0x139229C0)
#define CLASS_1_B764839958E176CC_METHOD_1_EEA7A4F84FFA2BFD_OFFSET UNITYSDK_OFFSET(0x13922E00)
#define CLASS_1_B764839958E176CC_METHOD_1_F0BBC30688BB5EE2_OFFSET UNITYSDK_OFFSET(0x1391FFF0)
#define CLASS_1_B764839958E176CC_ONPLUGININIT_OFFSET UNITYSDK_OFFSET(0x1391F900)
#define CLASS_1_B764839958E176CC_ONPLUGINUNINIT_OFFSET UNITYSDK_OFFSET(0x1391FA30)
#define CLASS_1_B764839958E176CC_TICK_OFFSET UNITYSDK_OFFSET(0x13920430)
#define CLASS_1_B764839958E176CC__CTOR_OFFSET UNITYSDK_OFFSET(0x13922E10)

inline static constexpr unsigned int Class_1_B764839958E176CC_TypeDefinitionIndex = 50771;

class Class_1_B764839958E176CC : public ::System::Object
{
public:
	::Class_3_07C3C4D2990C49EE* Field_1_0; // 0x10
	::RPG::GameCore::GameWorld* Field_1_1; // 0x18
	::Class_1_D24B2C72F7F86BD6* Field_1_2; // 0x20
	::Class_1_24C7DBE81C8DCCB7* Field_1_3; // 0x28
	::RPG::GameCore::TaskContext* Field_1_4; // 0x30
	::Class_2_F3B643C4D5BD11F2* Field_1_5; // 0x38
	::System::Action_1<::RPG::GameCore::GameEntity*>* Field_1_6; // 0x40
	::RPG::GameCore::RtBattleCharacterCameraConfig* Field_1_7; // 0x48
	::RPG::GameCore::GameEntity* Field_1_8; // 0x50
	::RPG::GameCore::GameEntity* Field_1_9; // 0x58
	::System::Action_1<::Class_2_F3B643C4D5BD11F2*>* Field_1_10; // 0x60
	::RPG::GameCore::GameEntity* Field_1_11; // 0x68
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::GameEntity*, ::Class_1_0DDCBF910E1BEABC*>* Field_1_12; // 0x70
	::RPG::GameCore::RtBattleCameraMode Field_1_13; // 0x78
	::System::Single Field_1_14; // 0x7C
	::System::Boolean Field_1_15; // 0x80

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B764839958E176CC__CTOR_OFFSET))(this);
	}

	::RPG::GameCore::RtBattleCharacterCameraConfig* Method_1_2F921991964C01B8(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::RtBattleCharacterCameraTag a2, ::RPG::GameCore::TaskContext*& a3)
	{
		return ((::RPG::GameCore::RtBattleCharacterCameraConfig*(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::RtBattleCharacterCameraTag, ::RPG::GameCore::TaskContext*&))((::PBYTE)hIl2Cpp + CLASS_1_B764839958E176CC_METHOD_1_2F921991964C01B8_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_ACA133530085D272(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_B764839958E176CC_METHOD_1_ACA133530085D272_OFFSET))(this, a1);
	}

	::System::Void OnPluginInit(::RPG::GameCore::GameWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameWorld*))((::PBYTE)hIl2Cpp + CLASS_1_B764839958E176CC_ONPLUGININIT_OFFSET))(this, a1);
	}

	::System::Void OnPluginUninit()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B764839958E176CC_ONPLUGINUNINIT_OFFSET))(this);
	}

	::System::Void Method_1_D52FC720F38CB2AD(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::GameEntity* a2, ::System::String* a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::GameEntity*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_B764839958E176CC_METHOD_1_D52FC720F38CB2AD_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_7149F443D1543A6A(::RPG::GameCore::RtBattleCameraMode a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RtBattleCameraMode))((::PBYTE)hIl2Cpp + CLASS_1_B764839958E176CC_METHOD_1_7149F443D1543A6A_OFFSET))(this, a1);
	}

	::System::Void Method_1_1E27A7B84BD57C4A(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_B764839958E176CC_METHOD_1_1E27A7B84BD57C4A_OFFSET))(this, a1);
	}

	::System::Void Method_1_EC170F7AEE5B1341(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::RtBattleCharacterCameraTag a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::RtBattleCharacterCameraTag))((::PBYTE)hIl2Cpp + CLASS_1_B764839958E176CC_METHOD_1_EC170F7AEE5B1341_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_60C0D8A8D118ED10(::RPG::Client::CameraDataAndFlags* a1, ::RPG::Client::PipelineCameraEngine* a2, ::RPG::Client::PipelineCameraGlobalConfig* a3, ::RPG::Client::CameraModuleConfigCollection* a4)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::CameraDataAndFlags*, ::RPG::Client::PipelineCameraEngine*, ::RPG::Client::PipelineCameraGlobalConfig*, ::RPG::Client::CameraModuleConfigCollection*))((::PBYTE)hIl2Cpp + CLASS_1_B764839958E176CC_METHOD_1_60C0D8A8D118ED10_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_B764839958E176CC_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_1_DEB7D04EE9D67260(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_B764839958E176CC_METHOD_1_DEB7D04EE9D67260_OFFSET))(this, a1);
	}

	::System::Void Method_1_76CD9B9D1269FA90(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_B764839958E176CC_METHOD_1_76CD9B9D1269FA90_OFFSET))(this, a1);
	}

	::System::Void Method_1_311DDAC730F6D367(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_B764839958E176CC_METHOD_1_311DDAC730F6D367_OFFSET))(this, a1);
	}

	::System::Void Method_1_3B59FF842335F9D6(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_B764839958E176CC_METHOD_1_3B59FF842335F9D6_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_56C46243AEA2C868(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_B764839958E176CC_METHOD_1_56C46243AEA2C868_OFFSET))(this, a1);
	}

	::System::Void Method_1_0A1DFABE8AF8A258(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_B764839958E176CC_METHOD_1_0A1DFABE8AF8A258_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_33ACA6CB2ABC73F7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B764839958E176CC_METHOD_1_33ACA6CB2ABC73F7_OFFSET))(this);
	}

	::System::Void Method_1_F0BBC30688BB5EE2(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::GameEntity* a2, ::System::String* a3, ::System::Boolean a4)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::GameEntity*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_B764839958E176CC_METHOD_1_F0BBC30688BB5EE2_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Boolean Method_1_58723AF19337DFD2()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B764839958E176CC_METHOD_1_58723AF19337DFD2_OFFSET))(this);
	}

	::System::Boolean Method_1_081E84DBAB5CA72B()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B764839958E176CC_METHOD_1_081E84DBAB5CA72B_OFFSET))(this);
	}

	::System::Void Method_1_25CD86BF8626C8D9(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_B764839958E176CC_METHOD_1_25CD86BF8626C8D9_OFFSET))(this, a1);
	}

	::System::Void Method_1_22633D83790C76DB(::RPG::GameCore::RtBattleCharacterCameraTag a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RtBattleCharacterCameraTag))((::PBYTE)hIl2Cpp + CLASS_1_B764839958E176CC_METHOD_1_22633D83790C76DB_OFFSET))(this, a1);
	}

	::RPG::GameCore::RtBattleCharacterCameraConfig* Method_1_076BA8EE415D1B56(::RPG::GameCore::GameEntity* a1)
	{
		return ((::RPG::GameCore::RtBattleCharacterCameraConfig*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_B764839958E176CC_METHOD_1_076BA8EE415D1B56_OFFSET))(this, a1);
	}

	::RPG::GameCore::RtBattleCharacterCameraTag Method_1_ECE73786C4A09D6D(::RPG::GameCore::GameEntity* a1)
	{
		return ((::RPG::GameCore::RtBattleCharacterCameraTag(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_B764839958E176CC_METHOD_1_ECE73786C4A09D6D_OFFSET))(this, a1);
	}

	::System::Void Method_1_2B85C1969225764F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B764839958E176CC_METHOD_1_2B85C1969225764F_OFFSET))(this);
	}

	::System::Boolean Method_1_02278F2D9B884143(::RPG::GameCore::TeamType a1, ::RPG::MVector3& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::TeamType, ::RPG::MVector3&))((::PBYTE)hIl2Cpp + CLASS_1_B764839958E176CC_METHOD_1_02278F2D9B884143_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_88DFD67617E05BA5(::Class_2_F3B643C4D5BD11F2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_F3B643C4D5BD11F2*))((::PBYTE)hIl2Cpp + CLASS_1_B764839958E176CC_METHOD_1_88DFD67617E05BA5_OFFSET))(this, a1);
	}

	::System::Void Method_1_B9EC3F44C1BFC5EF(::Class_2_F3B643C4D5BD11F2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_F3B643C4D5BD11F2*))((::PBYTE)hIl2Cpp + CLASS_1_B764839958E176CC_METHOD_1_B9EC3F44C1BFC5EF_OFFSET))(this, a1);
	}

	::RPG::GameCore::GameEntity* Method_1_B1445E8504415D4D()
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B764839958E176CC_METHOD_1_B1445E8504415D4D_OFFSET))(this);
	}

	::RPG::GameCore::GameEntity* Method_1_B1445E8504415D4D_1()
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B764839958E176CC_METHOD_1_B1445E8504415D4D_1_OFFSET))(this);
	}

	::RPG::GameCore::RtBattleCameraMode Method_1_EEA7A4F84FFA2BFD()
	{
		return ((::RPG::GameCore::RtBattleCameraMode(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B764839958E176CC_METHOD_1_EEA7A4F84FFA2BFD_OFFSET))(this);
	}
};
