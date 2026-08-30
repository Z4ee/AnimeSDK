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

#define RPG_CLIENT_TRAVELSHIPPUZZLEBOARD_BROADCASTEVENT_OFFSET UNITYSDK_OFFSET(0x1B2BA320)
#define RPG_CLIENT_TRAVELSHIPPUZZLEBOARD_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1B2B9A00)
#define RPG_CLIENT_TRAVELSHIPPUZZLEBOARD_GET_ISTAKEOFF_OFFSET UNITYSDK_OFFSET(0x1B2B99E0)
#define RPG_CLIENT_TRAVELSHIPPUZZLEBOARD_INITPUZZLE_OFFSET UNITYSDK_OFFSET(0x1B2B8D60)
#define RPG_CLIENT_TRAVELSHIPPUZZLEBOARD_ISPUZZLEFINISH_OFFSET UNITYSDK_OFFSET(0x1B2BA260)
#define RPG_CLIENT_TRAVELSHIPPUZZLEBOARD_METHOD_6_06330CD58CB602B6_OFFSET UNITYSDK_OFFSET(0x1B2B9D10)
#define RPG_CLIENT_TRAVELSHIPPUZZLEBOARD_METHOD_6_0ABEB23FF62F8B8F_OFFSET UNITYSDK_OFFSET(0x1B2BAB50)
#define RPG_CLIENT_TRAVELSHIPPUZZLEBOARD_METHOD_6_1835459715B5D9D1_OFFSET UNITYSDK_OFFSET(0x1B2BA760)
#define RPG_CLIENT_TRAVELSHIPPUZZLEBOARD_METHOD_6_87318FF00D6BC7EB_OFFSET UNITYSDK_OFFSET(0x1B2B9260)
#define RPG_CLIENT_TRAVELSHIPPUZZLEBOARD_METHOD_6_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x1B2B9920)
#define RPG_CLIENT_TRAVELSHIPPUZZLEBOARD_METHOD_6_A1C7122184516C18_OFFSET UNITYSDK_OFFSET(0x1B2B9F70)
#define RPG_CLIENT_TRAVELSHIPPUZZLEBOARD_METHOD_6_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x1B2B9030)
#define RPG_CLIENT_TRAVELSHIPPUZZLEBOARD_METHOD_6_DFBAD309D61905C2_1_OFFSET UNITYSDK_OFFSET(0x1B2BAC90)
#define RPG_CLIENT_TRAVELSHIPPUZZLEBOARD_METHOD_6_DFBAD309D61905C2_OFFSET UNITYSDK_OFFSET(0x1B2BA2A0)
#define RPG_CLIENT_TRAVELSHIPPUZZLEBOARD_METHOD_6_F5ADBA366C2EA507_OFFSET UNITYSDK_OFFSET(0x1B2BAD20)
#define RPG_CLIENT_TRAVELSHIPPUZZLEBOARD_METHOD_6_FA0119DD445A672F_OFFSET UNITYSDK_OFFSET(0x1B2B9540)
#define RPG_CLIENT_TRAVELSHIPPUZZLEBOARD_ONDRAWGIZMOSSELECTED_OFFSET UNITYSDK_OFFSET(0x1B2BAA90)
#define RPG_CLIENT_TRAVELSHIPPUZZLEBOARD_ONDRAWGIZMOS_OFFSET UNITYSDK_OFFSET(0x1B2BAAF0)
#define RPG_CLIENT_TRAVELSHIPPUZZLEBOARD_ONRECEIVEEXIT_OFFSET UNITYSDK_OFFSET(0x1B2BA6C0)
#define RPG_CLIENT_TRAVELSHIPPUZZLEBOARD_STARTPUZZLE_OFFSET UNITYSDK_OFFSET(0x1B2B90D0)
#define RPG_CLIENT_TRAVELSHIPPUZZLEBOARD_SWITCHDRAWDEBUG_OFFSET UNITYSDK_OFFSET(0x1B2BA710)
#define RPG_CLIENT_TRAVELSHIPPUZZLEBOARD_UPDATE_OFFSET UNITYSDK_OFFSET(0x1B2BA3F0)
#define RPG_CLIENT_TRAVELSHIPPUZZLEBOARD__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B2BAEB0)
#define RPG_CLIENT_TRAVELSHIPPUZZLEBOARD__CTOR_OFFSET UNITYSDK_OFFSET(0x1B2BAE50)

namespace RPG::Client
{
	inline static constexpr unsigned int TravelShipPuzzleBoard_TypeDefinitionIndex = 68767;

	class TravelShipPuzzleBoard : public ::RPG::Client::Prop::PuzzleBoardBase
	{
	public:
		static ::System::String** StaticGet_FLOEGOFOCAA()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(TravelShipPuzzleBoard_TypeDefinitionIndex)->GetStaticField(0x5C5B0);
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
		::System::Boolean KPLNPJPDFAG; // 0x80
		::System::Int32 PFLIGKIGCAE; // 0x84
		::UnityEngine::Vector3 ACCDFNJMPEL; // 0x88
		::UnityEngine::Quaternion DJDPNLJPLEL; // 0x94
		::UnityEngine::Vector3 OIMMGKNHKOA; // 0xA4
		::UnityEngine::Quaternion HBAIICJGPGC; // 0xB0
		::System::Boolean BDAIEMOEFPD; // 0xC0
		::System::Boolean FAEODGGPGKB; // 0xC1
		::RPG::GameCore::GameEntity* JCCHOIPFHHD; // 0xC8
		::Class_1_6338FD15AFE99D89* CPIIOIPAAKK; // 0xD0
		::System::Single LKOFBHBBDKB; // 0xD8

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

		::System::Void Method_6_DFBAD309D61905C2(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAVELSHIPPUZZLEBOARD_METHOD_6_DFBAD309D61905C2_OFFSET))(this, a1);
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

		::System::Void Method_6_0ABEB23FF62F8B8F(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAVELSHIPPUZZLEBOARD_METHOD_6_0ABEB23FF62F8B8F_OFFSET))(this, a1);
		}

		::System::Void Method_6_DFBAD309D61905C2_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAVELSHIPPUZZLEBOARD_METHOD_6_DFBAD309D61905C2_1_OFFSET))(this, a1);
		}

		::System::Void Method_6_F5ADBA366C2EA507(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAVELSHIPPUZZLEBOARD_METHOD_6_F5ADBA366C2EA507_OFFSET))(this, a1);
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
	};
}
