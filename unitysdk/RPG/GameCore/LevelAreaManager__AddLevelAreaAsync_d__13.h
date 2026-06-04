#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_278;
namespace RPG::GameCore { class LevelAreaManager; }
namespace System { class String; }

#define RPG_GAMECORE_LEVELAREAMANAGER__ADDLEVELAREAASYNC_D__13_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xCE38580)
#define RPG_GAMECORE_LEVELAREAMANAGER__ADDLEVELAREAASYNC_D__13_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_RPG_WORK_IASYNCWORKSTEPRESULT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xCE386A0)
#define RPG_GAMECORE_LEVELAREAMANAGER__ADDLEVELAREAASYNC_D__13_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xCE38700)
#define RPG_GAMECORE_LEVELAREAMANAGER__ADDLEVELAREAASYNC_D__13_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0xCE386B0)
#define RPG_GAMECORE_LEVELAREAMANAGER__ADDLEVELAREAASYNC_D__13_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xCE38570)
#define RPG_GAMECORE_LEVELAREAMANAGER__ADDLEVELAREAASYNC_D__13__CTOR_OFFSET UNITYSDK_OFFSET(0xCE347D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelAreaManager__AddLevelAreaAsync_d__13_TypeDefinitionIndex = 54048;

	class LevelAreaManager__AddLevelAreaAsync_d__13 : public ::System::Object
	{
	public:
		::System::String* ConfigPath; // 0x10
		::RPG::GameCore::LevelAreaManager* __4__this; // 0x18
		::Class_0_16E4307DCC419505_278* __2__current; // 0x20
		::System::Int32 __1__state; // 0x28

		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELAREAMANAGER__ADDLEVELAREAASYNC_D__13__CTOR_OFFSET))(this, a1);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELAREAMANAGER__ADDLEVELAREAASYNC_D__13_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELAREAMANAGER__ADDLEVELAREAASYNC_D__13_MOVENEXT_OFFSET))(this);
		}

		::Class_0_16E4307DCC419505_278* System_Collections_Generic_IEnumerator_RPG_Work_IAsyncWorkStepResult__get_Current()
		{
			return ((::Class_0_16E4307DCC419505_278*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELAREAMANAGER__ADDLEVELAREAASYNC_D__13_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_RPG_WORK_IASYNCWORKSTEPRESULT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELAREAMANAGER__ADDLEVELAREAASYNC_D__13_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELAREAMANAGER__ADDLEVELAREAASYNC_D__13_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
