#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/PuzzleBoardBase.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_C187E3BA406EEF9F;
namespace RPG::Client { class TravelShipLevelConfigAsset; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class PropInitPuzzle; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_TRAVELSHIPPUZZLEBOARD_BROADCASTEVENT_OFFSET UNITYSDK_OFFSET(0xA626130)
#define RPG_CLIENT_TRAVELSHIPPUZZLEBOARD_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA625860)
#define RPG_CLIENT_TRAVELSHIPPUZZLEBOARD_GET_ISTAKEOFF_OFFSET UNITYSDK_OFFSET(0xA625840)
#define RPG_CLIENT_TRAVELSHIPPUZZLEBOARD_INITPUZZLE_OFFSET UNITYSDK_OFFSET(0xA624BF0)
#define RPG_CLIENT_TRAVELSHIPPUZZLEBOARD_ISPUZZLEFINISH_OFFSET UNITYSDK_OFFSET(0xA626070)
#define RPG_CLIENT_TRAVELSHIPPUZZLEBOARD_METHOD_6_06330CD58CB602B6_OFFSET UNITYSDK_OFFSET(0xA625B20)
#define RPG_CLIENT_TRAVELSHIPPUZZLEBOARD_METHOD_6_1835459715B5D9D1_OFFSET UNITYSDK_OFFSET(0xA626590)
#define RPG_CLIENT_TRAVELSHIPPUZZLEBOARD_METHOD_6_2439B52C953E2E46_OFFSET UNITYSDK_OFFSET(0xA625380)
#define RPG_CLIENT_TRAVELSHIPPUZZLEBOARD_METHOD_6_627E340394129EB2_1_OFFSET UNITYSDK_OFFSET(0xA626B60)
#define RPG_CLIENT_TRAVELSHIPPUZZLEBOARD_METHOD_6_627E340394129EB2_OFFSET UNITYSDK_OFFSET(0xA6260B0)
#define RPG_CLIENT_TRAVELSHIPPUZZLEBOARD_METHOD_6_87318FF00D6BC7EB_OFFSET UNITYSDK_OFFSET(0xA6250A0)
#define RPG_CLIENT_TRAVELSHIPPUZZLEBOARD_METHOD_6_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0xA625780)
#define RPG_CLIENT_TRAVELSHIPPUZZLEBOARD_METHOD_6_A1596F65A2679075_OFFSET UNITYSDK_OFFSET(0xA626BF0)
#define RPG_CLIENT_TRAVELSHIPPUZZLEBOARD_METHOD_6_A1C7122184516C18_OFFSET UNITYSDK_OFFSET(0xA625D80)
#define RPG_CLIENT_TRAVELSHIPPUZZLEBOARD_METHOD_6_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0xA624E70)
#define RPG_CLIENT_TRAVELSHIPPUZZLEBOARD_METHOD_6_E99C4967A0D3080D_OFFSET UNITYSDK_OFFSET(0xA6269E0)
#define RPG_CLIENT_TRAVELSHIPPUZZLEBOARD_ONDRAWGIZMOSSELECTED_OFFSET UNITYSDK_OFFSET(0xA6268C0)
#define RPG_CLIENT_TRAVELSHIPPUZZLEBOARD_ONDRAWGIZMOS_OFFSET UNITYSDK_OFFSET(0xA626950)
#define RPG_CLIENT_TRAVELSHIPPUZZLEBOARD_ONRECEIVEEXIT_OFFSET UNITYSDK_OFFSET(0xA6264F0)
#define RPG_CLIENT_TRAVELSHIPPUZZLEBOARD_STARTPUZZLE_OFFSET UNITYSDK_OFFSET(0xA624F10)
#define RPG_CLIENT_TRAVELSHIPPUZZLEBOARD_SWITCHDRAWDEBUG_OFFSET UNITYSDK_OFFSET(0xA626540)
#define RPG_CLIENT_TRAVELSHIPPUZZLEBOARD_UPDATE_OFFSET UNITYSDK_OFFSET(0xA626200)
#define RPG_CLIENT_TRAVELSHIPPUZZLEBOARD__CCTOR_OFFSET UNITYSDK_OFFSET(0xA626E20)
#define RPG_CLIENT_TRAVELSHIPPUZZLEBOARD__CTOR_OFFSET UNITYSDK_OFFSET(0xA626DC0)
#define RPG_CLIENT_TRAVELSHIPPUZZLEBOARD___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA626ED0)
#define RPG_CLIENT_TRAVELSHIPPUZZLEBOARD___IFIXBASEPROXY_INITPUZZLE_OFFSET UNITYSDK_OFFSET(0xA626E60)
#define RPG_CLIENT_TRAVELSHIPPUZZLEBOARD___IFIXBASEPROXY_ISPUZZLEFINISH_OFFSET UNITYSDK_OFFSET(0xA626EE0)
#define RPG_CLIENT_TRAVELSHIPPUZZLEBOARD___IFIXBASEPROXY_STARTPUZZLE_OFFSET UNITYSDK_OFFSET(0xA626E70)

namespace RPG::Client
{
	inline static constexpr unsigned int TravelShipPuzzleBoard_TypeDefinitionIndex = 56199;

	class TravelShipPuzzleBoard : public ::RPG::Client::Prop::PuzzleBoardBase
	{
	public:
		static ::System::String** StaticGet_Field_6_1()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(TravelShipPuzzleBoard_TypeDefinitionIndex)->GetStaticField(0x31870);
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
		::Class_1_C187E3BA406EEF9F* Field_6_19; // 0xD0
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

		::System::Void Method_6_627E340394129EB2(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAVELSHIPPUZZLEBOARD_METHOD_6_627E340394129EB2_OFFSET))(this, a1);
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

		::System::Void Method_6_E99C4967A0D3080D(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAVELSHIPPUZZLEBOARD_METHOD_6_E99C4967A0D3080D_OFFSET))(this, a1);
		}

		::System::Void Method_6_627E340394129EB2_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAVELSHIPPUZZLEBOARD_METHOD_6_627E340394129EB2_1_OFFSET))(this, a1);
		}

		::System::Void Method_6_A1596F65A2679075(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAVELSHIPPUZZLEBOARD_METHOD_6_A1596F65A2679075_OFFSET))(this, a1);
		}

		::System::Void Method_6_2439B52C953E2E46()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAVELSHIPPUZZLEBOARD_METHOD_6_2439B52C953E2E46_OFFSET))(this);
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

		::System::Void __iFixBaseProxy_InitPuzzle(::RPG::GameCore::GameEntity* P0, ::RPG::GameCore::TaskContext* P1, ::RPG::GameCore::PropInitPuzzle* P2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PropInitPuzzle*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAVELSHIPPUZZLEBOARD___IFIXBASEPROXY_INITPUZZLE_OFFSET))(this, P0, P1, P2);
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
