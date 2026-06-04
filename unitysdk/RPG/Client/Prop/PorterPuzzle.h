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

#define RPG_CLIENT_PROP_PORTERPUZZLE_CARRY_OFFSET UNITYSDK_OFFSET(0xC5EC730)
#define RPG_CLIENT_PROP_PORTERPUZZLE_CHECKGAMEFINISH_OFFSET UNITYSDK_OFFSET(0xC5EDFE0)
#define RPG_CLIENT_PROP_PORTERPUZZLE_DISPOSEPUZZLE_OFFSET UNITYSDK_OFFSET(0xC5ED960)
#define RPG_CLIENT_PROP_PORTERPUZZLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC5ED620)
#define RPG_CLIENT_PROP_PORTERPUZZLE_INITPUZZLE_OFFSET UNITYSDK_OFFSET(0xC5ED260)
#define RPG_CLIENT_PROP_PORTERPUZZLE_INIT_OFFSET UNITYSDK_OFFSET(0xC5ED2E0)
#define RPG_CLIENT_PROP_PORTERPUZZLE_ISCARRAYITEM_OFFSET UNITYSDK_OFFSET(0xC5ECD10)
#define RPG_CLIENT_PROP_PORTERPUZZLE_ISPUZZLEFINISH_OFFSET UNITYSDK_OFFSET(0xC5ED490)
#define RPG_CLIENT_PROP_PORTERPUZZLE_METHOD_6_17720D0625823D9A_OFFSET UNITYSDK_OFFSET(0xC5ED4E0)
#define RPG_CLIENT_PROP_PORTERPUZZLE_METHOD_6_2ADDC85169A509AB_OFFSET UNITYSDK_OFFSET(0xC5EE040)
#define RPG_CLIENT_PROP_PORTERPUZZLE_PUTON_OFFSET UNITYSDK_OFFSET(0xC5EDD90)
#define RPG_CLIENT_PROP_PORTERPUZZLE_STARTPUZZLE_OFFSET UNITYSDK_OFFSET(0xC5ED430)
#define RPG_CLIENT_PROP_PORTERPUZZLE_UPDATE_OFFSET UNITYSDK_OFFSET(0xC5EC920)
#define RPG_CLIENT_PROP_PORTERPUZZLE__CTOR_OFFSET UNITYSDK_OFFSET(0xC5EE300)
#define RPG_CLIENT_PROP_PORTERPUZZLE___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC5EE3D0)
#define RPG_CLIENT_PROP_PORTERPUZZLE___IFIXBASEPROXY_INITPUZZLE_OFFSET UNITYSDK_OFFSET(0xC5EE310)
#define RPG_CLIENT_PROP_PORTERPUZZLE___IFIXBASEPROXY_ISPUZZLEFINISH_OFFSET UNITYSDK_OFFSET(0xC5EE360)
#define RPG_CLIENT_PROP_PORTERPUZZLE___IFIXBASEPROXY_STARTPUZZLE_OFFSET UNITYSDK_OFFSET(0xC5EE320)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int PorterPuzzle_TypeDefinitionIndex = 73295;

	class PorterPuzzle : public ::RPG::Client::Prop::PuzzleBoardBase
	{
	public:
		::Il2CppArray<::RPG::Client::Prop::PorterItem*>* PorterItems; // 0x48
		::Il2CppArray<::RPG::Client::Prop::PorterTarget*>* PorterTargets; // 0x50
		::Il2CppArray<::RPG::Client::Prop::PorterTargetGroup*>* PorterGroups; // 0x58
		::RPG::Client::Prop::PorterPuzzleMode PuzzleMode; // 0x60
		::System::Boolean IsPuzzleStart; // 0x64
		::RPG::Client::Prop::PorterItem* Field_6_5; // 0x68

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

		::System::Void Method_6_2ADDC85169A509AB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PORTERPUZZLE_METHOD_6_2ADDC85169A509AB_OFFSET))(this);
		}

		::System::Boolean Method_6_17720D0625823D9A()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PORTERPUZZLE_METHOD_6_17720D0625823D9A_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_InitPuzzle(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::TaskContext* a2, ::RPG::GameCore::PropInitPuzzle* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PropInitPuzzle*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PORTERPUZZLE___IFIXBASEPROXY_INITPUZZLE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void __iFixBaseProxy_StartPuzzle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PORTERPUZZLE___IFIXBASEPROXY_STARTPUZZLE_OFFSET))(this);
		}

		::System::Boolean __iFixBaseProxy_IsPuzzleFinish()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PORTERPUZZLE___IFIXBASEPROXY_ISPUZZLEFINISH_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PORTERPUZZLE___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
		}
	};
}
