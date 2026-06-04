#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightModule; }
namespace RPG::Client { class GridFightModule___c__DisplayClass211_0; }
namespace System { class Action; }
namespace UnityEngine::Networking { class UnityWebRequest; }

#define RPG_CLIENT_GRIDFIGHTMODULE___DOWNLOADCDNFILE_D__211_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xBBB3850)
#define RPG_CLIENT_GRIDFIGHTMODULE___DOWNLOADCDNFILE_D__211_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xBBB3F30)
#define RPG_CLIENT_GRIDFIGHTMODULE___DOWNLOADCDNFILE_D__211_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xBBB3F90)
#define RPG_CLIENT_GRIDFIGHTMODULE___DOWNLOADCDNFILE_D__211_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0xBBB3F40)
#define RPG_CLIENT_GRIDFIGHTMODULE___DOWNLOADCDNFILE_D__211_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBBB37E0)
#define RPG_CLIENT_GRIDFIGHTMODULE___DOWNLOADCDNFILE_D__211__CTOR_OFFSET UNITYSDK_OFFSET(0xBBB37D0)
#define RPG_CLIENT_GRIDFIGHTMODULE___DOWNLOADCDNFILE_D__211___M__FINALLY1_OFFSET UNITYSDK_OFFSET(0xBBB3830)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightModule___DownloadCdnFile_d__211_TypeDefinitionIndex = 60663;

	class GridFightModule___DownloadCdnFile_d__211 : public ::System::Object
	{
	public:
		::UnityEngine::Networking::UnityWebRequest* _request_5__2; // 0x10
		::RPG::Client::GridFightModule* __4__this; // 0x18
		::System::Object* __2__current; // 0x20
		::System::Action* callback; // 0x28
		::RPG::Client::GridFightModule___c__DisplayClass211_0* __8__1; // 0x30
		::System::Int32 __1__state; // 0x38

		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMODULE___DOWNLOADCDNFILE_D__211__CTOR_OFFSET))(this, a1);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMODULE___DOWNLOADCDNFILE_D__211_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMODULE___DOWNLOADCDNFILE_D__211_MOVENEXT_OFFSET))(this);
		}

		::System::Void __m__Finally1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMODULE___DOWNLOADCDNFILE_D__211___M__FINALLY1_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMODULE___DOWNLOADCDNFILE_D__211_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMODULE___DOWNLOADCDNFILE_D__211_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMODULE___DOWNLOADCDNFILE_D__211_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
