#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class PropComponent; }

#define RPG_GAMECORE_PROPCOMPONENT__LOADPUZZLEAREA_D__17_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xB71AFE0)
#define RPG_GAMECORE_PROPCOMPONENT__LOADPUZZLEAREA_D__17_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xB71B180)
#define RPG_GAMECORE_PROPCOMPONENT__LOADPUZZLEAREA_D__17_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xB71B1E0)
#define RPG_GAMECORE_PROPCOMPONENT__LOADPUZZLEAREA_D__17_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0xB71B190)
#define RPG_GAMECORE_PROPCOMPONENT__LOADPUZZLEAREA_D__17_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB71AFD0)
#define RPG_GAMECORE_PROPCOMPONENT__LOADPUZZLEAREA_D__17__CTOR_OFFSET UNITYSDK_OFFSET(0xB70A1A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PropComponent__LoadPuzzleArea_d__17_TypeDefinitionIndex = 52878;

	class PropComponent__LoadPuzzleArea_d__17 : public ::System::Object
	{
	public:
		::System::Object* __2__current; // 0x10
		::RPG::GameCore::PropComponent* __4__this; // 0x18
		::System::Boolean asyncLoad; // 0x20
		::System::Single waitAnimTime; // 0x24
		::System::Int32 __1__state; // 0x28

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPCOMPONENT__LOADPUZZLEAREA_D__17__CTOR_OFFSET))(this, __1__state);
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
