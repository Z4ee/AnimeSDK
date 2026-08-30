#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/PorterPuzzleMode.h"
#include "unitysdk/RPG/Client/Prop/PuzzleBoardBase.h"

namespace RPG::Client::Prop { class PorterItem; }
namespace RPG::Client::Prop { class PorterTarget; }
namespace RPG::Client::Prop { class PorterTargetGroup; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class PropInitPuzzle; }
namespace RPG::GameCore { class TaskContext; }

#define RPG_CLIENT_PROP_PORTERPUZZLE_CARRY_OFFSET UNITYSDK_OFFSET(0x16635AA0)
#define RPG_CLIENT_PROP_PORTERPUZZLE_CHECKGAMEFINISH_OFFSET UNITYSDK_OFFSET(0x16637280)
#define RPG_CLIENT_PROP_PORTERPUZZLE_DISPOSEPUZZLE_OFFSET UNITYSDK_OFFSET(0x16636C00)
#define RPG_CLIENT_PROP_PORTERPUZZLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x166368C0)
#define RPG_CLIENT_PROP_PORTERPUZZLE_INITPUZZLE_OFFSET UNITYSDK_OFFSET(0x166364C0)
#define RPG_CLIENT_PROP_PORTERPUZZLE_INIT_OFFSET UNITYSDK_OFFSET(0x16636540)
#define RPG_CLIENT_PROP_PORTERPUZZLE_ISCARRAYITEM_OFFSET UNITYSDK_OFFSET(0x16636080)
#define RPG_CLIENT_PROP_PORTERPUZZLE_ISPUZZLEFINISH_OFFSET UNITYSDK_OFFSET(0x16636730)
#define RPG_CLIENT_PROP_PORTERPUZZLE_METHOD_6_17720D0625823D9A_OFFSET UNITYSDK_OFFSET(0x16636780)
#define RPG_CLIENT_PROP_PORTERPUZZLE_METHOD_6_EBAF10BBA97B82DD_OFFSET UNITYSDK_OFFSET(0x166372E0)
#define RPG_CLIENT_PROP_PORTERPUZZLE_PUTON_OFFSET UNITYSDK_OFFSET(0x16637030)
#define RPG_CLIENT_PROP_PORTERPUZZLE_STARTPUZZLE_OFFSET UNITYSDK_OFFSET(0x16636690)
#define RPG_CLIENT_PROP_PORTERPUZZLE_UPDATE_OFFSET UNITYSDK_OFFSET(0x16635C90)
#define RPG_CLIENT_PROP_PORTERPUZZLE__CTOR_OFFSET UNITYSDK_OFFSET(0x166375A0)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int PorterPuzzle_TypeDefinitionIndex = 78305;

	class PorterPuzzle : public ::RPG::Client::Prop::PuzzleBoardBase
	{
	public:
		::Il2CppArray<::RPG::Client::Prop::PorterItem*>* PorterItems; // 0x48
		::Il2CppArray<::RPG::Client::Prop::PorterTarget*>* PorterTargets; // 0x50
		::Il2CppArray<::RPG::Client::Prop::PorterTargetGroup*>* PorterGroups; // 0x58
		::RPG::Client::Prop::PorterPuzzleMode PuzzleMode; // 0x60
		::System::Boolean IsPuzzleStart; // 0x64
		::RPG::Client::Prop::PorterItem* NFABMEDJIDO; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PORTERPUZZLE__CTOR_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PORTERPUZZLE_UPDATE_OFFSET))(this);
		}

		::System::Void InitPuzzle(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::TaskContext* a2, ::RPG::GameCore::PropInitPuzzle* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PropInitPuzzle*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PORTERPUZZLE_INITPUZZLE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void StartPuzzle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PORTERPUZZLE_STARTPUZZLE_OFFSET))(this);
		}

		::System::Boolean IsPuzzleFinish()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PORTERPUZZLE_ISPUZZLEFINISH_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PORTERPUZZLE_DISPOSE_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PORTERPUZZLE_INIT_OFFSET))(this);
		}

		::System::Void DisposePuzzle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PORTERPUZZLE_DISPOSEPUZZLE_OFFSET))(this);
		}

		::System::Void Carry(::RPG::Client::Prop::PorterItem* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::PorterItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PORTERPUZZLE_CARRY_OFFSET))(this, a1);
		}

		::System::Void PutOn(::RPG::Client::Prop::PorterTarget* a1, ::RPG::Client::Prop::PorterItem* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::PorterTarget*, ::RPG::Client::Prop::PorterItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PORTERPUZZLE_PUTON_OFFSET))(this, a1, a2);
		}

		::System::Boolean IsCarrayItem()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PORTERPUZZLE_ISCARRAYITEM_OFFSET))(this);
		}

		::System::Void CheckGameFinish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PORTERPUZZLE_CHECKGAMEFINISH_OFFSET))(this);
		}

		::System::Void Method_6_EBAF10BBA97B82DD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PORTERPUZZLE_METHOD_6_EBAF10BBA97B82DD_OFFSET))(this);
		}

		::System::Boolean Method_6_17720D0625823D9A()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PORTERPUZZLE_METHOD_6_17720D0625823D9A_OFFSET))(this);
		}
	};
}
