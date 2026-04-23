#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightModule; }
namespace RPG::Client { class GridFightModule___c__DisplayClass221_0; }
namespace System { class Action; }
namespace UnityEngine::Networking { class UnityWebRequest; }

#define RPG_CLIENT_GRIDFIGHTMODULE___DOWNLOADCDNFILE_D__221_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xA50CA40)
#define RPG_CLIENT_GRIDFIGHTMODULE___DOWNLOADCDNFILE_D__221_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xA50D0F0)
#define RPG_CLIENT_GRIDFIGHTMODULE___DOWNLOADCDNFILE_D__221_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xA50D150)
#define RPG_CLIENT_GRIDFIGHTMODULE___DOWNLOADCDNFILE_D__221_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0xA50D100)
#define RPG_CLIENT_GRIDFIGHTMODULE___DOWNLOADCDNFILE_D__221_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA50C9D0)
#define RPG_CLIENT_GRIDFIGHTMODULE___DOWNLOADCDNFILE_D__221__CTOR_OFFSET UNITYSDK_OFFSET(0xA504480)
#define RPG_CLIENT_GRIDFIGHTMODULE___DOWNLOADCDNFILE_D__221___M__FINALLY1_OFFSET UNITYSDK_OFFSET(0xA50CA20)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightModule___DownloadCdnFile_d__221_TypeDefinitionIndex = 59728;

	class GridFightModule___DownloadCdnFile_d__221 : public ::System::Object
	{
	public:
		::RPG::Client::GridFightModule* __4__this; // 0x10
		::System::Object* __2__current; // 0x18
		::UnityEngine::Networking::UnityWebRequest* _request_5__2; // 0x20
		::System::Action* callback; // 0x28
		::RPG::Client::GridFightModule___c__DisplayClass221_0* __8__1; // 0x30
		::System::Int32 __1__state; // 0x38

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMODULE___DOWNLOADCDNFILE_D__221__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMODULE___DOWNLOADCDNFILE_D__221_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMODULE___DOWNLOADCDNFILE_D__221_MOVENEXT_OFFSET))(this);
		}

		::System::Void __m__Finally1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMODULE___DOWNLOADCDNFILE_D__221___M__FINALLY1_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMODULE___DOWNLOADCDNFILE_D__221_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMODULE___DOWNLOADCDNFILE_D__221_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMODULE___DOWNLOADCDNFILE_D__221_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
