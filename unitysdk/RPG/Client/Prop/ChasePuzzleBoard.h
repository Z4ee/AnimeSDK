#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/ChaseNPCInfo.h"
#include "unitysdk/RPG/Client/Prop/PuzzleBoardBase.h"

namespace RPG::Client::Prop { class ChasePuzzleArea; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class PropInitPuzzle; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_PROP_CHASEPUZZLEBOARD_DISPOSE_OFFSET UNITYSDK_OFFSET(0xADAC4A0)
#define RPG_CLIENT_PROP_CHASEPUZZLEBOARD_INITPUZZLE_OFFSET UNITYSDK_OFFSET(0xADABDF0)
#define RPG_CLIENT_PROP_CHASEPUZZLEBOARD_METHOD_6_3CE8A1831DA14AB7_OFFSET UNITYSDK_OFFSET(0xADAC110)
#define RPG_CLIENT_PROP_CHASEPUZZLEBOARD_METHOD_6_B09E78EE7EE4F8FA_OFFSET UNITYSDK_OFFSET(0xADAC1E0)
#define RPG_CLIENT_PROP_CHASEPUZZLEBOARD_METHOD_6_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xADAC450)
#define RPG_CLIENT_PROP_CHASEPUZZLEBOARD_METHOD_6_D06F23B2919326F8_OFFSET UNITYSDK_OFFSET(0xADAC5E0)
#define RPG_CLIENT_PROP_CHASEPUZZLEBOARD_RESETPUZZLE_OFFSET UNITYSDK_OFFSET(0xADAC320)
#define RPG_CLIENT_PROP_CHASEPUZZLEBOARD_STARTPUZZLE_OFFSET UNITYSDK_OFFSET(0xADAC000)
#define RPG_CLIENT_PROP_CHASEPUZZLEBOARD_TRIGGERRUNAWAY_OFFSET UNITYSDK_OFFSET(0xADAB7F0)
#define RPG_CLIENT_PROP_CHASEPUZZLEBOARD__CTOR_OFFSET UNITYSDK_OFFSET(0xADAC700)
#define RPG_CLIENT_PROP_CHASEPUZZLEBOARD___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xADAC7E0)
#define RPG_CLIENT_PROP_CHASEPUZZLEBOARD___IFIXBASEPROXY_INITPUZZLE_OFFSET UNITYSDK_OFFSET(0xADAC710)
#define RPG_CLIENT_PROP_CHASEPUZZLEBOARD___IFIXBASEPROXY_RESETPUZZLE_OFFSET UNITYSDK_OFFSET(0xADAC780)
#define RPG_CLIENT_PROP_CHASEPUZZLEBOARD___IFIXBASEPROXY_STARTPUZZLE_OFFSET UNITYSDK_OFFSET(0xADAC720)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int ChasePuzzleBoard_TypeDefinitionIndex = 71721;

	class ChasePuzzleBoard : public ::RPG::Client::Prop::PuzzleBoardBase
	{
	public:
		::System::UInt32 groupID; // 0x48
		::RPG::Client::Prop::ChaseNPCInfo mainNPCInfo; // 0x50
		::System::String* initAreaName; // 0x60
		::UnityEngine::Transform* initAnchor; // 0x68
		::System::String* triggerRunAwayString; // 0x70
		::System::String* triggerChasedString; // 0x78
		::System::String* customStringKey; // 0x80
		::System::String* cameraPointKeyName; // 0x88
		::System::String* navigationPointKeyName; // 0x90
		::System::String* faceToPointKeyName; // 0x98
		::RPG::GameCore::GameEntity* Field_6_10; // 0xA0
		::RPG::Client::Prop::ChasePuzzleArea* Field_6_11; // 0xA8
		::Il2CppArray<::RPG::Client::Prop::ChasePuzzleArea*>* Field_6_12; // 0xB0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHASEPUZZLEBOARD__CTOR_OFFSET))(this);
		}

		::System::Void InitPuzzle(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::TaskContext* a2, ::RPG::GameCore::PropInitPuzzle* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PropInitPuzzle*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHASEPUZZLEBOARD_INITPUZZLE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void StartPuzzle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHASEPUZZLEBOARD_STARTPUZZLE_OFFSET))(this);
		}

		::System::Void ResetPuzzle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHASEPUZZLEBOARD_RESETPUZZLE_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHASEPUZZLEBOARD_DISPOSE_OFFSET))(this);
		}

		::System::Void TriggerRunAway(::System::String* a1, ::System::String* a2, ::System::String* a3, ::System::String* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHASEPUZZLEBOARD_TRIGGERRUNAWAY_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Method_6_B09E78EE7EE4F8FA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHASEPUZZLEBOARD_METHOD_6_B09E78EE7EE4F8FA_OFFSET))(this);
		}

		::System::Void Method_6_CA373AA1C7054598()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHASEPUZZLEBOARD_METHOD_6_CA373AA1C7054598_OFFSET))(this);
		}

		::System::Void Method_6_3CE8A1831DA14AB7(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHASEPUZZLEBOARD_METHOD_6_3CE8A1831DA14AB7_OFFSET))(this, a1, a2);
		}

		::RPG::Client::Prop::ChasePuzzleArea* Method_6_D06F23B2919326F8(::System::String* a1)
		{
			return ((::RPG::Client::Prop::ChasePuzzleArea*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHASEPUZZLEBOARD_METHOD_6_D06F23B2919326F8_OFFSET))(this, a1);
		}

		::System::Void __iFixBaseProxy_InitPuzzle(::RPG::GameCore::GameEntity* P0, ::RPG::GameCore::TaskContext* P1, ::RPG::GameCore::PropInitPuzzle* P2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PropInitPuzzle*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHASEPUZZLEBOARD___IFIXBASEPROXY_INITPUZZLE_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __iFixBaseProxy_StartPuzzle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHASEPUZZLEBOARD___IFIXBASEPROXY_STARTPUZZLE_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_ResetPuzzle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHASEPUZZLEBOARD___IFIXBASEPROXY_RESETPUZZLE_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHASEPUZZLEBOARD___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
		}
	};
}
