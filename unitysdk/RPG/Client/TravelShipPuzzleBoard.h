#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/PuzzleBoardBase.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_6338FD15AFE99D89;
namespace RPG::Client { class TravelShipLevelConfigAsset; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class PropInitPuzzle; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_TRAVELSHIPPUZZLEBOARD_BROADCASTEVENT_OFFSET UNITYSDK_OFFSET(0xCAD96F0)
#define RPG_CLIENT_TRAVELSHIPPUZZLEBOARD_DISPOSE_OFFSET UNITYSDK_OFFSET(0xCAD8DD0)
#define RPG_CLIENT_TRAVELSHIPPUZZLEBOARD_GET_ISTAKEOFF_OFFSET UNITYSDK_OFFSET(0xCAD8DB0)
#define RPG_CLIENT_TRAVELSHIPPUZZLEBOARD_INITPUZZLE_OFFSET UNITYSDK_OFFSET(0xCAD8120)
#define RPG_CLIENT_TRAVELSHIPPUZZLEBOARD_ISPUZZLEFINISH_OFFSET UNITYSDK_OFFSET(0xCAD9630)
#define RPG_CLIENT_TRAVELSHIPPUZZLEBOARD_METHOD_6_06330CD58CB602B6_OFFSET UNITYSDK_OFFSET(0xCAD90E0)
#define RPG_CLIENT_TRAVELSHIPPUZZLEBOARD_METHOD_6_1835459715B5D9D1_OFFSET UNITYSDK_OFFSET(0xCAD9B50)
#define RPG_CLIENT_TRAVELSHIPPUZZLEBOARD_METHOD_6_582E9EA2229B8034_OFFSET UNITYSDK_OFFSET(0xCAD9FA0)
#define RPG_CLIENT_TRAVELSHIPPUZZLEBOARD_METHOD_6_6D98D150BB0EC9A0_OFFSET UNITYSDK_OFFSET(0xCADA110)
#define RPG_CLIENT_TRAVELSHIPPUZZLEBOARD_METHOD_6_87318FF00D6BC7EB_OFFSET UNITYSDK_OFFSET(0xCAD8620)
#define RPG_CLIENT_TRAVELSHIPPUZZLEBOARD_METHOD_6_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0xCAD8CF0)
#define RPG_CLIENT_TRAVELSHIPPUZZLEBOARD_METHOD_6_8EC3255570F308C5_OFFSET UNITYSDK_OFFSET(0xCADA1A0)
#define RPG_CLIENT_TRAVELSHIPPUZZLEBOARD_METHOD_6_A1C7122184516C18_OFFSET UNITYSDK_OFFSET(0xCAD9340)
#define RPG_CLIENT_TRAVELSHIPPUZZLEBOARD_METHOD_6_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0xCAD83F0)
#define RPG_CLIENT_TRAVELSHIPPUZZLEBOARD_METHOD_6_B7D5C3ADADFC6767_OFFSET UNITYSDK_OFFSET(0xCAD9670)
#define RPG_CLIENT_TRAVELSHIPPUZZLEBOARD_METHOD_6_FA0119DD445A672F_OFFSET UNITYSDK_OFFSET(0xCAD8900)
#define RPG_CLIENT_TRAVELSHIPPUZZLEBOARD_ONDRAWGIZMOSSELECTED_OFFSET UNITYSDK_OFFSET(0xCAD9E80)
#define RPG_CLIENT_TRAVELSHIPPUZZLEBOARD_ONDRAWGIZMOS_OFFSET UNITYSDK_OFFSET(0xCAD9F10)
#define RPG_CLIENT_TRAVELSHIPPUZZLEBOARD_ONRECEIVEEXIT_OFFSET UNITYSDK_OFFSET(0xCAD9AB0)
#define RPG_CLIENT_TRAVELSHIPPUZZLEBOARD_STARTPUZZLE_OFFSET UNITYSDK_OFFSET(0xCAD8490)
#define RPG_CLIENT_TRAVELSHIPPUZZLEBOARD_SWITCHDRAWDEBUG_OFFSET UNITYSDK_OFFSET(0xCAD9B00)
#define RPG_CLIENT_TRAVELSHIPPUZZLEBOARD_UPDATE_OFFSET UNITYSDK_OFFSET(0xCAD97C0)
#define RPG_CLIENT_TRAVELSHIPPUZZLEBOARD__CCTOR_OFFSET UNITYSDK_OFFSET(0xCADA3D0)
#define RPG_CLIENT_TRAVELSHIPPUZZLEBOARD__CTOR_OFFSET UNITYSDK_OFFSET(0xCADA370)
#define RPG_CLIENT_TRAVELSHIPPUZZLEBOARD___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xCADA480)
#define RPG_CLIENT_TRAVELSHIPPUZZLEBOARD___IFIXBASEPROXY_INITPUZZLE_OFFSET UNITYSDK_OFFSET(0xCADA410)
#define RPG_CLIENT_TRAVELSHIPPUZZLEBOARD___IFIXBASEPROXY_ISPUZZLEFINISH_OFFSET UNITYSDK_OFFSET(0xCADA490)
#define RPG_CLIENT_TRAVELSHIPPUZZLEBOARD___IFIXBASEPROXY_STARTPUZZLE_OFFSET UNITYSDK_OFFSET(0xCADA420)

namespace RPG::Client
{
	inline static constexpr unsigned int TravelShipPuzzleBoard_TypeDefinitionIndex = 64359;

	class TravelShipPuzzleBoard : public ::RPG::Client::Prop::PuzzleBoardBase
	{
	public:
		static ::System::String** StaticGet_Field_6_0()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(TravelShipPuzzleBoard_TypeDefinitionIndex)->GetStaticField(0x591C0);
		}
		// static const ::System::UInt32 AvatarID = 0x9089; // 0x0
		::UnityEngine::Transform* SwitchTravelShipOrigin; // 0x48
		::System::Single NavigationPointStepUpHeight; // 0x50
		::System::Single TakeOffDuration; // 0x54
		::UnityEngine::AnimationCurve* TakeOffHeightCurve; // 0x58
		::System::String* TakeOffEventName; // 0x60
		::System::String* ExitEventName; // 0x68
		::System::String* PlayerTeleportEventName; // 0x70
		::Il2CppArray<::RPG::Client::TravelShipLevelConfigAsset*>* ConfigAssets; // 0x78
		::System::Boolean Field_6_10; // 0x80
		::System::Int32 Field_6_11; // 0x84
		::UnityEngine::Vector3 Field_6_12; // 0x88
		::UnityEngine::Quaternion Field_6_13; // 0x94
		::UnityEngine::Vector3 Field_6_14; // 0xA4
		::UnityEngine::Quaternion Field_6_15; // 0xB0
		::System::Boolean Field_6_16; // 0xC0
		::System::Boolean Field_6_17; // 0xC1
		::RPG::GameCore::GameEntity* Field_6_18; // 0xC8
		::Class_1_6338FD15AFE99D89* Field_6_19; // 0xD0
		::System::Single Field_6_20; // 0xD8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAVELSHIPPUZZLEBOARD__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAVELSHIPPUZZLEBOARD__CCTOR_OFFSET))();
		}

		::System::Void InitPuzzle(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::TaskContext* a2, ::RPG::GameCore::PropInitPuzzle* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PropInitPuzzle*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAVELSHIPPUZZLEBOARD_INITPUZZLE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void StartPuzzle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAVELSHIPPUZZLEBOARD_STARTPUZZLE_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAVELSHIPPUZZLEBOARD_DISPOSE_OFFSET))(this);
		}

		::System::Boolean IsPuzzleFinish()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAVELSHIPPUZZLEBOARD_ISPUZZLEFINISH_OFFSET))(this);
		}

		::System::Void Method_6_B7D5C3ADADFC6767(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAVELSHIPPUZZLEBOARD_METHOD_6_B7D5C3ADADFC6767_OFFSET))(this, a1);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAVELSHIPPUZZLEBOARD_UPDATE_OFFSET))(this);
		}

		::System::Void OnReceiveExit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAVELSHIPPUZZLEBOARD_ONRECEIVEEXIT_OFFSET))(this);
		}

		::System::Void BroadcastEvent(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAVELSHIPPUZZLEBOARD_BROADCASTEVENT_OFFSET))(this, a1);
		}

		::System::Void SwitchDrawDebug()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAVELSHIPPUZZLEBOARD_SWITCHDRAWDEBUG_OFFSET))(this);
		}

		::System::Void Method_6_87318FF00D6BC7EB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAVELSHIPPUZZLEBOARD_METHOD_6_87318FF00D6BC7EB_OFFSET))(this);
		}

		::System::Void Method_6_A1C7122184516C18()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAVELSHIPPUZZLEBOARD_METHOD_6_A1C7122184516C18_OFFSET))(this);
		}

		::System::Void Method_6_1835459715B5D9D1(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAVELSHIPPUZZLEBOARD_METHOD_6_1835459715B5D9D1_OFFSET))(this, a1);
		}

		::System::Void OnDrawGizmosSelected()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAVELSHIPPUZZLEBOARD_ONDRAWGIZMOSSELECTED_OFFSET))(this);
		}

		::System::Void OnDrawGizmos()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAVELSHIPPUZZLEBOARD_ONDRAWGIZMOS_OFFSET))(this);
		}

		::System::Void Method_6_582E9EA2229B8034(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAVELSHIPPUZZLEBOARD_METHOD_6_582E9EA2229B8034_OFFSET))(this, a1);
		}

		::System::Void Method_6_6D98D150BB0EC9A0(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAVELSHIPPUZZLEBOARD_METHOD_6_6D98D150BB0EC9A0_OFFSET))(this, a1);
		}

		::System::Void Method_6_8EC3255570F308C5(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAVELSHIPPUZZLEBOARD_METHOD_6_8EC3255570F308C5_OFFSET))(this, a1);
		}

		::System::Void Method_6_FA0119DD445A672F()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAVELSHIPPUZZLEBOARD_METHOD_6_FA0119DD445A672F_OFFSET))(this);
		}

		::System::Void Method_6_06330CD58CB602B6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAVELSHIPPUZZLEBOARD_METHOD_6_06330CD58CB602B6_OFFSET))(this);
		}

		::System::Void Method_6_89D1F247B9D324EE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAVELSHIPPUZZLEBOARD_METHOD_6_89D1F247B9D324EE_OFFSET))(this);
		}

		::System::Void Method_6_B1936CE4DA97AA45()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAVELSHIPPUZZLEBOARD_METHOD_6_B1936CE4DA97AA45_OFFSET))(this);
		}

		::System::Boolean get_IsTakeOff()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAVELSHIPPUZZLEBOARD_GET_ISTAKEOFF_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_InitPuzzle(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::TaskContext* a2, ::RPG::GameCore::PropInitPuzzle* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PropInitPuzzle*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAVELSHIPPUZZLEBOARD___IFIXBASEPROXY_INITPUZZLE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void __iFixBaseProxy_StartPuzzle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAVELSHIPPUZZLEBOARD___IFIXBASEPROXY_STARTPUZZLE_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAVELSHIPPUZZLEBOARD___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
		}

		::System::Boolean __iFixBaseProxy_IsPuzzleFinish()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAVELSHIPPUZZLEBOARD___IFIXBASEPROXY_ISPUZZLEFINISH_OFFSET))(this);
		}
	};
}
