#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/OpticalIllusionDire.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Prop { class OpticalIllusionPuzzleBoard; }
namespace RPG::Client::Prop { class OpticalIllusionPuzzleItem; }

#define RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD___STARTMOVEACTION_D__74_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xAE75D60)
#define RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD___STARTMOVEACTION_D__74_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xAE760C0)
#define RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD___STARTMOVEACTION_D__74_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xAE76120)
#define RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD___STARTMOVEACTION_D__74_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0xAE760D0)
#define RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD___STARTMOVEACTION_D__74_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xAE75D50)
#define RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD___STARTMOVEACTION_D__74__CTOR_OFFSET UNITYSDK_OFFSET(0xAE6C5F0)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int OpticalIllusionPuzzleBoard___StartMoveAction_d__74_TypeDefinitionIndex = 72207;

	class OpticalIllusionPuzzleBoard___StartMoveAction_d__74 : public ::System::Object
	{
	public:
		::System::Object* __2__current; // 0x10
		::RPG::Client::Prop::OpticalIllusionPuzzleItem* item; // 0x18
		::RPG::Client::Prop::OpticalIllusionPuzzleBoard* __4__this; // 0x20
		::RPG::Client::Prop::OpticalIllusionDire dire; // 0x28
		::System::Single distance; // 0x2C
		::System::Single speed; // 0x30
		::System::Int32 __1__state; // 0x34

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD___STARTMOVEACTION_D__74__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD___STARTMOVEACTION_D__74_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD___STARTMOVEACTION_D__74_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD___STARTMOVEACTION_D__74_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD___STARTMOVEACTION_D__74_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD___STARTMOVEACTION_D__74_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
