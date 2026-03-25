#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightModule; }
namespace RPG::Client { class GridFightModule___c__DisplayClass212_0; }
namespace System { class Action; }
namespace UnityEngine::Networking { class UnityWebRequest; }

#define RPG_CLIENT_GRIDFIGHTMODULE___DOWNLOADCDNFILE_D__212_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x986A3A0)
#define RPG_CLIENT_GRIDFIGHTMODULE___DOWNLOADCDNFILE_D__212_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x986AA60)
#define RPG_CLIENT_GRIDFIGHTMODULE___DOWNLOADCDNFILE_D__212_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x986AAC0)
#define RPG_CLIENT_GRIDFIGHTMODULE___DOWNLOADCDNFILE_D__212_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x986AA70)
#define RPG_CLIENT_GRIDFIGHTMODULE___DOWNLOADCDNFILE_D__212_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x986A330)
#define RPG_CLIENT_GRIDFIGHTMODULE___DOWNLOADCDNFILE_D__212__CTOR_OFFSET UNITYSDK_OFFSET(0x9862670)
#define RPG_CLIENT_GRIDFIGHTMODULE___DOWNLOADCDNFILE_D__212___M__FINALLY1_OFFSET UNITYSDK_OFFSET(0x986A380)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightModule___DownloadCdnFile_d__212_TypeDefinitionIndex = 52674;

	class GridFightModule___DownloadCdnFile_d__212 : public ::System::Object
	{
	public:
		::RPG::Client::GridFightModule* __4__this; // 0x10
		::UnityEngine::Networking::UnityWebRequest* _request_5__2; // 0x18
		::System::Action* callback; // 0x20
		::RPG::Client::GridFightModule___c__DisplayClass212_0* __8__1; // 0x28
		::System::Object* __2__current; // 0x30
		::System::Int32 __1__state; // 0x38

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMODULE___DOWNLOADCDNFILE_D__212__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMODULE___DOWNLOADCDNFILE_D__212_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMODULE___DOWNLOADCDNFILE_D__212_MOVENEXT_OFFSET))(this);
		}

		::System::Void __m__Finally1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMODULE___DOWNLOADCDNFILE_D__212___M__FINALLY1_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMODULE___DOWNLOADCDNFILE_D__212_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMODULE___DOWNLOADCDNFILE_D__212_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMODULE___DOWNLOADCDNFILE_D__212_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
