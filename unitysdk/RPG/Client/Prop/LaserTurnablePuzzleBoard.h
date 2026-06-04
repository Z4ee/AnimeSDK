#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/PuzzleBoardBase.h"

namespace RPG::Client::Prop { class LaserTurnablePuzzleRing; }
namespace RPG::Client::Prop { class LaserTurnablePuzzleSwitch; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class PropInitPuzzle; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_PROP_LASERTURNABLEPUZZLEBOARD_CANPUZZLEUNLOAD_OFFSET UNITYSDK_OFFSET(0xC588450)
#define RPG_CLIENT_PROP_LASERTURNABLEPUZZLEBOARD_GET_ISCOMPLETE_OFFSET UNITYSDK_OFFSET(0xC588490)
#define RPG_CLIENT_PROP_LASERTURNABLEPUZZLEBOARD_GOBACKINIT_OFFSET UNITYSDK_OFFSET(0xC587EC0)
#define RPG_CLIENT_PROP_LASERTURNABLEPUZZLEBOARD_INITPUZZLE_OFFSET UNITYSDK_OFFSET(0xC586910)
#define RPG_CLIENT_PROP_LASERTURNABLEPUZZLEBOARD_METHOD_6_33C1DB4C8E5800FD_OFFSET UNITYSDK_OFFSET(0xC587B80)
#define RPG_CLIENT_PROP_LASERTURNABLEPUZZLEBOARD_REFRESHLASERSTATUS_OFFSET UNITYSDK_OFFSET(0xC5879A0)
#define RPG_CLIENT_PROP_LASERTURNABLEPUZZLEBOARD_RESETPUZZLE_OFFSET UNITYSDK_OFFSET(0xC587B40)
#define RPG_CLIENT_PROP_LASERTURNABLEPUZZLEBOARD_ROTATERING_OFFSET UNITYSDK_OFFSET(0xC588120)
#define RPG_CLIENT_PROP_LASERTURNABLEPUZZLEBOARD_STARTPUZZLE_OFFSET UNITYSDK_OFFSET(0xC587B00)
#define RPG_CLIENT_PROP_LASERTURNABLEPUZZLEBOARD__CTOR_OFFSET UNITYSDK_OFFSET(0xC5884A0)
#define RPG_CLIENT_PROP_LASERTURNABLEPUZZLEBOARD___IFIXBASEPROXY_CANPUZZLEUNLOAD_OFFSET UNITYSDK_OFFSET(0xC588600)
#define RPG_CLIENT_PROP_LASERTURNABLEPUZZLEBOARD___IFIXBASEPROXY_INITPUZZLE_OFFSET UNITYSDK_OFFSET(0xC588530)
#define RPG_CLIENT_PROP_LASERTURNABLEPUZZLEBOARD___IFIXBASEPROXY_RESETPUZZLE_OFFSET UNITYSDK_OFFSET(0xC5885A0)
#define RPG_CLIENT_PROP_LASERTURNABLEPUZZLEBOARD___IFIXBASEPROXY_STARTPUZZLE_OFFSET UNITYSDK_OFFSET(0xC588540)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int LaserTurnablePuzzleBoard_TypeDefinitionIndex = 73183;

	class LaserTurnablePuzzleBoard : public ::RPG::Client::Prop::PuzzleBoardBase
	{
	public:
		::System::Collections::Generic::List_1<::System::Int32>* InitLaserDegree; // 0x48
		::RPG::Client::Prop::LaserTurnablePuzzleRing* OutterRing; // 0x50
		::System::String* PuzzleFinishTriggerCustomString; // 0x58
		::System::Single ClockWait; // 0x60
		::System::Collections::Generic::List_1<::RPG::Client::Prop::LaserTurnablePuzzleRing*>* Rings; // 0x68
		::System::Collections::Generic::List_1<::RPG::Client::Prop::LaserTurnablePuzzleSwitch*>* Switchs; // 0x70
		::System::Boolean Field_6_6; // 0x78

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_LASERTURNABLEPUZZLEBOARD__CTOR_OFFSET))(this);
		}

		::System::Void InitPuzzle(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::TaskContext* a2, ::RPG::GameCore::PropInitPuzzle* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PropInitPuzzle*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_LASERTURNABLEPUZZLEBOARD_INITPUZZLE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void StartPuzzle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_LASERTURNABLEPUZZLEBOARD_STARTPUZZLE_OFFSET))(this);
		}

		::System::Void ResetPuzzle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_LASERTURNABLEPUZZLEBOARD_RESETPUZZLE_OFFSET))(this);
		}

		::System::Void Method_6_33C1DB4C8E5800FD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_LASERTURNABLEPUZZLEBOARD_METHOD_6_33C1DB4C8E5800FD_OFFSET))(this);
		}

		::System::Void RefreshLaserStatus()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_LASERTURNABLEPUZZLEBOARD_REFRESHLASERSTATUS_OFFSET))(this);
		}

		::System::Void GoBackInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_LASERTURNABLEPUZZLEBOARD_GOBACKINIT_OFFSET))(this);
		}

		::System::Void RotateRing(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_LASERTURNABLEPUZZLEBOARD_ROTATERING_OFFSET))(this, a1);
		}

		::System::Boolean CanPuzzleUnload()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_LASERTURNABLEPUZZLEBOARD_CANPUZZLEUNLOAD_OFFSET))(this);
		}

		::System::Boolean get_IsComplete()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_LASERTURNABLEPUZZLEBOARD_GET_ISCOMPLETE_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_InitPuzzle(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::TaskContext* a2, ::RPG::GameCore::PropInitPuzzle* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PropInitPuzzle*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_LASERTURNABLEPUZZLEBOARD___IFIXBASEPROXY_INITPUZZLE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void __iFixBaseProxy_StartPuzzle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_LASERTURNABLEPUZZLEBOARD___IFIXBASEPROXY_STARTPUZZLE_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_ResetPuzzle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_LASERTURNABLEPUZZLEBOARD___IFIXBASEPROXY_RESETPUZZLE_OFFSET))(this);
		}

		::System::Boolean __iFixBaseProxy_CanPuzzleUnload()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_LASERTURNABLEPUZZLEBOARD___IFIXBASEPROXY_CANPUZZLEUNLOAD_OFFSET))(this);
		}
	};
}
