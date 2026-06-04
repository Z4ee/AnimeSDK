#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class Class_0_16E4307DCC419505_401;
namespace RPG::Client::Prop { class RubikCubePuzzleBrickData; }
namespace RPG::Client::Prop { class RubikCubePuzzleCube; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_PROP_RUBIKCUBEPUZZLEBRICK_COPYFROM_OFFSET UNITYSDK_OFFSET(0xC60E7F0)
#define RPG_CLIENT_PROP_RUBIKCUBEPUZZLEBRICK_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC60E5C0)
#define RPG_CLIENT_PROP_RUBIKCUBEPUZZLEBRICK_INITBRICK_OFFSET UNITYSDK_OFFSET(0xC60E6C0)
#define RPG_CLIENT_PROP_RUBIKCUBEPUZZLEBRICK_ISTATUM_OFFSET UNITYSDK_OFFSET(0xC60EDB0)
#define RPG_CLIENT_PROP_RUBIKCUBEPUZZLEBRICK_LOGICROTATETATUMX_OFFSET UNITYSDK_OFFSET(0xC60EF70)
#define RPG_CLIENT_PROP_RUBIKCUBEPUZZLEBRICK_LOGICROTATETATUMY_OFFSET UNITYSDK_OFFSET(0xC60F010)
#define RPG_CLIENT_PROP_RUBIKCUBEPUZZLEBRICK_LOGICROTATETATUMZ_OFFSET UNITYSDK_OFFSET(0xC60F0B0)
#define RPG_CLIENT_PROP_RUBIKCUBEPUZZLEBRICK_ONTRIGGERDISSOLVE_OFFSET UNITYSDK_OFFSET(0xC60EBB0)
#define RPG_CLIENT_PROP_RUBIKCUBEPUZZLEBRICK_REFRESHSTATUS_OFFSET UNITYSDK_OFFSET(0xC60EB30)
#define RPG_CLIENT_PROP_RUBIKCUBEPUZZLEBRICK_SETSELECT_OFFSET UNITYSDK_OFFSET(0xC60EE20)
#define RPG_CLIENT_PROP_RUBIKCUBEPUZZLEBRICK__CTOR_OFFSET UNITYSDK_OFFSET(0xC60F150)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int RubikCubePuzzleBrick_TypeDefinitionIndex = 73338;

	class RubikCubePuzzleBrick : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Int32 Status; // 0x18
		::UnityEngine::GameObject* NormalRoot; // 0x20
		::UnityEngine::GameObject* EmptyRoot; // 0x28
		::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* TatumObj; // 0x30
		::Il2CppArray<::System::Boolean>* TatumStatus; // 0x38
		::System::Boolean TatumUp; // 0x40
		::System::Boolean TatumDown; // 0x41
		::System::Boolean TatumFront; // 0x42
		::System::Boolean TatumBack; // 0x43
		::System::Boolean TatumLeft; // 0x44
		::System::Boolean TatumRight; // 0x45
		::System::String* TriggerDissolveCustomString; // 0x48
		::RPG::GameCore::GameEntity* Field_5_12; // 0x50
		::RPG::Client::Prop::RubikCubePuzzleCube* Field_5_13; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_RUBIKCUBEPUZZLEBRICK__CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_RUBIKCUBEPUZZLEBRICK_DISPOSE_OFFSET))(this);
		}

		::System::Void InitBrick(::RPG::GameCore::GameEntity* a1, ::RPG::Client::Prop::RubikCubePuzzleCube* a2, ::RPG::Client::Prop::RubikCubePuzzleBrickData* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::Client::Prop::RubikCubePuzzleCube*, ::RPG::Client::Prop::RubikCubePuzzleBrickData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_RUBIKCUBEPUZZLEBRICK_INITBRICK_OFFSET))(this, a1, a2, a3);
		}

		::System::Void CopyFrom(::RPG::Client::Prop::RubikCubePuzzleBrickData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::RubikCubePuzzleBrickData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_RUBIKCUBEPUZZLEBRICK_COPYFROM_OFFSET))(this, a1);
		}

		::System::Void OnTriggerDissolve(::Class_0_16E4307DCC419505_401* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_401*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_RUBIKCUBEPUZZLEBRICK_ONTRIGGERDISSOLVE_OFFSET))(this, a1);
		}

		::System::Boolean IsTatum()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_RUBIKCUBEPUZZLEBRICK_ISTATUM_OFFSET))(this);
		}

		::System::Void RefreshStatus()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_RUBIKCUBEPUZZLEBRICK_REFRESHSTATUS_OFFSET))(this);
		}

		::System::Void SetSelect(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_RUBIKCUBEPUZZLEBRICK_SETSELECT_OFFSET))(this, a1);
		}

		::System::Void LogicRotateTatumX(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_RUBIKCUBEPUZZLEBRICK_LOGICROTATETATUMX_OFFSET))(this, a1);
		}

		::System::Void LogicRotateTatumY(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_RUBIKCUBEPUZZLEBRICK_LOGICROTATETATUMY_OFFSET))(this, a1);
		}

		::System::Void LogicRotateTatumZ(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_RUBIKCUBEPUZZLEBRICK_LOGICROTATETATUMZ_OFFSET))(this, a1);
		}
	};
}
