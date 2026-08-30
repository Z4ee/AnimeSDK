#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightModule; }
namespace RPG::Client { class GridFightModule___c__DisplayClass212_0; }
namespace System { class Action; }
namespace UnityEngine::Networking { class UnityWebRequest; }

#define RPG_CLIENT_GRIDFIGHTMODULE___DOWNLOADCDNFILE_D__212_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1BC4AA20)
#define RPG_CLIENT_GRIDFIGHTMODULE___DOWNLOADCDNFILE_D__212_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1BC4B120)
#define RPG_CLIENT_GRIDFIGHTMODULE___DOWNLOADCDNFILE_D__212_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1BC4B180)
#define RPG_CLIENT_GRIDFIGHTMODULE___DOWNLOADCDNFILE_D__212_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1BC4B130)
#define RPG_CLIENT_GRIDFIGHTMODULE___DOWNLOADCDNFILE_D__212_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1BC4A9C0)
#define RPG_CLIENT_GRIDFIGHTMODULE___DOWNLOADCDNFILE_D__212__CTOR_OFFSET UNITYSDK_OFFSET(0x1BC41490)
#define RPG_CLIENT_GRIDFIGHTMODULE___DOWNLOADCDNFILE_D__212___M__FINALLY1_OFFSET UNITYSDK_OFFSET(0x1BC4AA00)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightModule___DownloadCdnFile_d__212_TypeDefinitionIndex = 64937;

	class GridFightModule___DownloadCdnFile_d__212 : public ::System::Object
	{
	public:
		::System::Object* __2__current; // 0x10
		::System::Action* callback; // 0x18
		::RPG::Client::GridFightModule___c__DisplayClass212_0* __8__1; // 0x20
		::UnityEngine::Networking::UnityWebRequest* _request_5__2; // 0x28
		::RPG::Client::GridFightModule* __4__this; // 0x30
		::System::Int32 __1__state; // 0x38

		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMODULE___DOWNLOADCDNFILE_D__212__CTOR_OFFSET))(this, a1);
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
