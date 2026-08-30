#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class PropComponent; }

#define RPG_GAMECORE_PROPCOMPONENT__LOADPUZZLEAREA_D__17_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xE6D6CA0)
#define RPG_GAMECORE_PROPCOMPONENT__LOADPUZZLEAREA_D__17_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xE6D7060)
#define RPG_GAMECORE_PROPCOMPONENT__LOADPUZZLEAREA_D__17_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xE6D70C0)
#define RPG_GAMECORE_PROPCOMPONENT__LOADPUZZLEAREA_D__17_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0xE6D7070)
#define RPG_GAMECORE_PROPCOMPONENT__LOADPUZZLEAREA_D__17_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xE6D6C90)
#define RPG_GAMECORE_PROPCOMPONENT__LOADPUZZLEAREA_D__17__CTOR_OFFSET UNITYSDK_OFFSET(0xE6C40F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PropComponent__LoadPuzzleArea_d__17_TypeDefinitionIndex = 57527;

	class PropComponent__LoadPuzzleArea_d__17 : public ::System::Object
	{
	public:
		::RPG::GameCore::PropComponent* __4__this; // 0x10
		::System::Object* __2__current; // 0x18
		::System::Boolean asyncLoad; // 0x20
		::System::Single waitAnimTime; // 0x24
		::System::Int32 __1__state; // 0x28

		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPCOMPONENT__LOADPUZZLEAREA_D__17__CTOR_OFFSET))(this, a1);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPCOMPONENT__LOADPUZZLEAREA_D__17_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPCOMPONENT__LOADPUZZLEAREA_D__17_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPCOMPONENT__LOADPUZZLEAREA_D__17_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPCOMPONENT__LOADPUZZLEAREA_D__17_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPCOMPONENT__LOADPUZZLEAREA_D__17_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
