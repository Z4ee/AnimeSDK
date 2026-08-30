#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/PuzzleBoardBase.h"
#include "unitysdk/RPG/GameCore/ESwitchHandGestureType.h"

class Class_2_5668A5419A7BEAB2;
namespace RPG::GameCore { class GameEntity; }
namespace System { class Object; }
namespace System { class String; }

#define RPG_CLIENT_SWITCHHANDPUZZLEBOARD_DISPOSE_OFFSET UNITYSDK_OFFSET(0xE11B0F0)
#define RPG_CLIENT_SWITCHHANDPUZZLEBOARD_ISPUZZLEFINISH_OFFSET UNITYSDK_OFFSET(0xE11B1A0)
#define RPG_CLIENT_SWITCHHANDPUZZLEBOARD_METHOD_6_0584B4481E699952_OFFSET UNITYSDK_OFFSET(0xE11C630)
#define RPG_CLIENT_SWITCHHANDPUZZLEBOARD_METHOD_6_508D4DD02D3DB74E_1_OFFSET UNITYSDK_OFFSET(0xE11AF20)
#define RPG_CLIENT_SWITCHHANDPUZZLEBOARD_METHOD_6_508D4DD02D3DB74E_OFFSET UNITYSDK_OFFSET(0xE11ACA0)
#define RPG_CLIENT_SWITCHHANDPUZZLEBOARD_METHOD_6_8C945585B4A8C17B_OFFSET UNITYSDK_OFFSET(0xE11C580)
#define RPG_CLIENT_SWITCHHANDPUZZLEBOARD_ONERAVISIBLESTATECHANGED_OFFSET UNITYSDK_OFFSET(0xE11BDA0)
#define RPG_CLIENT_SWITCHHANDPUZZLEBOARD_ONGAMERESET_OFFSET UNITYSDK_OFFSET(0xE11C470)
#define RPG_CLIENT_SWITCHHANDPUZZLEBOARD_ONGESTURETYPESWITCHFROM_OFFSET UNITYSDK_OFFSET(0xE11B1E0)
#define RPG_CLIENT_SWITCHHANDPUZZLEBOARD_ONGESTURETYPESWITCHTO_OFFSET UNITYSDK_OFFSET(0xE11B390)
#define RPG_CLIENT_SWITCHHANDPUZZLEBOARD_ONLIFTGESTUREEXIT_OFFSET UNITYSDK_OFFSET(0xE11BED0)
#define RPG_CLIENT_SWITCHHANDPUZZLEBOARD_ONPLAYERTELEPORT_OFFSET UNITYSDK_OFFSET(0xE11C080)
#define RPG_CLIENT_SWITCHHANDPUZZLEBOARD_ONPLAYERTRIGGERPULLBACK_OFFSET UNITYSDK_OFFSET(0xE11C360)
#define RPG_CLIENT_SWITCHHANDPUZZLEBOARD_ONROCKETGESTUREFIRE_OFFSET UNITYSDK_OFFSET(0xE11B6F0)
#define RPG_CLIENT_SWITCHHANDPUZZLEBOARD_ONROCKETGESTURELAUNCH_OFFSET UNITYSDK_OFFSET(0xE11B540)
#define RPG_CLIENT_SWITCHHANDPUZZLEBOARD_ONROCKETGESTUREPUNCHED_OFFSET UNITYSDK_OFFSET(0xE11BA50)
#define RPG_CLIENT_SWITCHHANDPUZZLEBOARD_ONROCKETGESTUREPUNCHHIT_OFFSET UNITYSDK_OFFSET(0xE11BC00)
#define RPG_CLIENT_SWITCHHANDPUZZLEBOARD_ONROCKETGESTURESTOP_OFFSET UNITYSDK_OFFSET(0xE11B8A0)
#define RPG_CLIENT_SWITCHHANDPUZZLEBOARD_ONROCKETPUNCHHITSTUB_OFFSET UNITYSDK_OFFSET(0xE11C1B0)
#define RPG_CLIENT_SWITCHHANDPUZZLEBOARD_RESETPUZZLE_OFFSET UNITYSDK_OFFSET(0xE11AE70)
#define RPG_CLIENT_SWITCHHANDPUZZLEBOARD_STARTPUZZLE_OFFSET UNITYSDK_OFFSET(0xE11AB70)
#define RPG_CLIENT_SWITCHHANDPUZZLEBOARD__CCTOR_OFFSET UNITYSDK_OFFSET(0xE11C7A0)
#define RPG_CLIENT_SWITCHHANDPUZZLEBOARD__CTOR_OFFSET UNITYSDK_OFFSET(0xE11C720)

namespace RPG::Client
{
	inline static constexpr unsigned int SwitchHandPuzzleBoard_TypeDefinitionIndex = 68753;

	class SwitchHandPuzzleBoard : public ::RPG::Client::Prop::PuzzleBoardBase
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_GestureTypeToString()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(SwitchHandPuzzleBoard_TypeDefinitionIndex)->GetStaticField(0x349E0);
		}
		::System::UInt32 puzzleID; // 0x48
		::System::String* customStr_ExitGame; // 0x50
		::System::String* customStr_SwitchGestureTo; // 0x58
		::System::String* customStr_SwitchGestureFrom; // 0x60
		::System::String* customStr_SwitchGesture; // 0x68
		::System::String* customStr_EraVisibleChange; // 0x70
		::System::String* customStr_RocketPunchHit; // 0x78
		::Class_2_5668A5419A7BEAB2* EHOLJJNAMAG; // 0x80

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWITCHHANDPUZZLEBOARD__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_SWITCHHANDPUZZLEBOARD__CCTOR_OFFSET))();
		}

		::System::Void StartPuzzle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWITCHHANDPUZZLEBOARD_STARTPUZZLE_OFFSET))(this);
		}

		::System::Void ResetPuzzle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWITCHHANDPUZZLEBOARD_RESETPUZZLE_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWITCHHANDPUZZLEBOARD_DISPOSE_OFFSET))(this);
		}

		::System::Boolean IsPuzzleFinish()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWITCHHANDPUZZLEBOARD_ISPUZZLEFINISH_OFFSET))(this);
		}

		::System::Void OnGestureTypeSwitchFrom(::RPG::GameCore::ESwitchHandGestureType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ESwitchHandGestureType))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWITCHHANDPUZZLEBOARD_ONGESTURETYPESWITCHFROM_OFFSET))(this, a1);
		}

		::System::Void OnGestureTypeSwitchTo(::RPG::GameCore::ESwitchHandGestureType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ESwitchHandGestureType))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWITCHHANDPUZZLEBOARD_ONGESTURETYPESWITCHTO_OFFSET))(this, a1);
		}

		::System::Void OnRocketGestureLaunch()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWITCHHANDPUZZLEBOARD_ONROCKETGESTURELAUNCH_OFFSET))(this);
		}

		::System::Void OnRocketGestureFire()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWITCHHANDPUZZLEBOARD_ONROCKETGESTUREFIRE_OFFSET))(this);
		}

		::System::Void OnRocketGestureStop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWITCHHANDPUZZLEBOARD_ONROCKETGESTURESTOP_OFFSET))(this);
		}

		::System::Void OnRocketGesturePunched()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWITCHHANDPUZZLEBOARD_ONROCKETGESTUREPUNCHED_OFFSET))(this);
		}

		::System::Void OnRocketGesturePunchHit(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWITCHHANDPUZZLEBOARD_ONROCKETGESTUREPUNCHHIT_OFFSET))(this, a1);
		}

		::System::Void OnEraVisibleStateChanged(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWITCHHANDPUZZLEBOARD_ONERAVISIBLESTATECHANGED_OFFSET))(this, a1);
		}

		::System::Void OnLiftGestureExit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWITCHHANDPUZZLEBOARD_ONLIFTGESTUREEXIT_OFFSET))(this);
		}

		::System::Void OnPlayerTeleport()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWITCHHANDPUZZLEBOARD_ONPLAYERTELEPORT_OFFSET))(this);
		}

		::System::Void OnRocketPunchHitStub()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWITCHHANDPUZZLEBOARD_ONROCKETPUNCHHITSTUB_OFFSET))(this);
		}

		::System::Void OnPlayerTriggerPullBack()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWITCHHANDPUZZLEBOARD_ONPLAYERTRIGGERPULLBACK_OFFSET))(this);
		}

		::System::Void OnGameReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWITCHHANDPUZZLEBOARD_ONGAMERESET_OFFSET))(this);
		}

		::System::Void Method_6_508D4DD02D3DB74E()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWITCHHANDPUZZLEBOARD_METHOD_6_508D4DD02D3DB74E_OFFSET))(this);
		}

		::System::Void Method_6_508D4DD02D3DB74E_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWITCHHANDPUZZLEBOARD_METHOD_6_508D4DD02D3DB74E_1_OFFSET))(this);
		}

		::System::Void Method_6_8C945585B4A8C17B()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWITCHHANDPUZZLEBOARD_METHOD_6_8C945585B4A8C17B_OFFSET))(this);
		}

		::System::Void Method_6_0584B4481E699952(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWITCHHANDPUZZLEBOARD_METHOD_6_0584B4481E699952_OFFSET))(this, a1);
		}
	};
}
