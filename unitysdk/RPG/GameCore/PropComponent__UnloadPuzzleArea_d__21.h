#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class PropComponent; }

#define RPG_GAMECORE_PROPCOMPONENT__UNLOADPUZZLEAREA_D__21_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xCE87DA0)
#define RPG_GAMECORE_PROPCOMPONENT__UNLOADPUZZLEAREA_D__21_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xCE87DF0)
#define RPG_GAMECORE_PROPCOMPONENT__UNLOADPUZZLEAREA_D__21_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xCE87E50)
#define RPG_GAMECORE_PROPCOMPONENT__UNLOADPUZZLEAREA_D__21_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0xCE87E00)
#define RPG_GAMECORE_PROPCOMPONENT__UNLOADPUZZLEAREA_D__21_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xCE87D90)
#define RPG_GAMECORE_PROPCOMPONENT__UNLOADPUZZLEAREA_D__21__CTOR_OFFSET UNITYSDK_OFFSET(0xCE76580)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PropComponent__UnloadPuzzleArea_d__21_TypeDefinitionIndex = 53588;

	class PropComponent__UnloadPuzzleArea_d__21 : public ::System::Object
	{
	public:
		::System::Object* __2__current; // 0x10
		::RPG::GameCore::PropComponent* __4__this; // 0x18
		::System::Int32 __1__state; // 0x20

		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPCOMPONENT__UNLOADPUZZLEAREA_D__21__CTOR_OFFSET))(this, a1);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPCOMPONENT__UNLOADPUZZLEAREA_D__21_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPCOMPONENT__UNLOADPUZZLEAREA_D__21_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPCOMPONENT__UNLOADPUZZLEAREA_D__21_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPCOMPONENT__UNLOADPUZZLEAREA_D__21_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPCOMPONENT__UNLOADPUZZLEAREA_D__21_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
