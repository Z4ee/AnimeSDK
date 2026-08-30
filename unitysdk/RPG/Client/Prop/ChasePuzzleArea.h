#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/ChasePuzzleArea_AreaTriggerInfo.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class Class_0_16E4307DCC419505_612;
namespace RPG::Client::Prop { class ChasePuzzleBoard; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }

#define RPG_CLIENT_PROP_CHASEPUZZLEAREA_DISABLE_OFFSET UNITYSDK_OFFSET(0x189CAC30)
#define RPG_CLIENT_PROP_CHASEPUZZLEAREA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x189CAA70)
#define RPG_CLIENT_PROP_CHASEPUZZLEAREA_ENABLE_OFFSET UNITYSDK_OFFSET(0x189CAAC0)
#define RPG_CLIENT_PROP_CHASEPUZZLEAREA_INIT_OFFSET UNITYSDK_OFFSET(0x189CA6B0)
#define RPG_CLIENT_PROP_CHASEPUZZLEAREA_METHOD_5_5D9E900D04946B98_OFFSET UNITYSDK_OFFSET(0x189CA890)
#define RPG_CLIENT_PROP_CHASEPUZZLEAREA_METHOD_5_92C4EECBB004EECB_OFFSET UNITYSDK_OFFSET(0x189CAD40)
#define RPG_CLIENT_PROP_CHASEPUZZLEAREA_REGISTERTRIGGERS_OFFSET UNITYSDK_OFFSET(0x189CA700)
#define RPG_CLIENT_PROP_CHASEPUZZLEAREA_UNREGISTERTRIGGERS_OFFSET UNITYSDK_OFFSET(0x189CA9C0)
#define RPG_CLIENT_PROP_CHASEPUZZLEAREA__CTOR_OFFSET UNITYSDK_OFFSET(0x189CB3A0)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int ChasePuzzleArea_TypeDefinitionIndex = 77749;

	class ChasePuzzleArea : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::String* uniqueName; // 0x18
		::System::String* levelAreaAnchorName; // 0x20
		::Il2CppArray<::RPG::Client::Prop::ChasePuzzleArea_AreaTriggerInfo>* triggerInfos; // 0x28
		::RPG::Client::Prop::ChasePuzzleBoard* MIPPNCGOJNM; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHASEPUZZLEAREA__CTOR_OFFSET))(this);
		}

		::System::Void Init(::RPG::Client::Prop::ChasePuzzleBoard* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::ChasePuzzleBoard*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHASEPUZZLEAREA_INIT_OFFSET))(this, a1);
		}

		::System::Void RegisterTriggers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHASEPUZZLEAREA_REGISTERTRIGGERS_OFFSET))(this);
		}

		::System::Void UnregisterTriggers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHASEPUZZLEAREA_UNREGISTERTRIGGERS_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHASEPUZZLEAREA_DISPOSE_OFFSET))(this);
		}

		::System::Void Enable(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHASEPUZZLEAREA_ENABLE_OFFSET))(this, a1);
		}

		::System::Void Disable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHASEPUZZLEAREA_DISABLE_OFFSET))(this);
		}

		::Class_0_16E4307DCC419505_612* Method_5_5D9E900D04946B98(::System::Int32 a1)
		{
			return ((::Class_0_16E4307DCC419505_612*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHASEPUZZLEAREA_METHOD_5_5D9E900D04946B98_OFFSET))(this, a1);
		}

		::System::Void Method_5_92C4EECBB004EECB(::RPG::GameCore::GameEntity* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHASEPUZZLEAREA_METHOD_5_92C4EECBB004EECB_OFFSET))(this, a1, a2);
		}
	};
}
