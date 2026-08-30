#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MonoPlayerAttachmentPlugin_LightFade; }

#define RPG_CLIENT_MONOPLAYERATTACHMENTPLUGIN_LIGHTFADE___FADEOUT_D__8_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xD856EF0)
#define RPG_CLIENT_MONOPLAYERATTACHMENTPLUGIN_LIGHTFADE___FADEOUT_D__8_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xD857110)
#define RPG_CLIENT_MONOPLAYERATTACHMENTPLUGIN_LIGHTFADE___FADEOUT_D__8_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xD857170)
#define RPG_CLIENT_MONOPLAYERATTACHMENTPLUGIN_LIGHTFADE___FADEOUT_D__8_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0xD857120)
#define RPG_CLIENT_MONOPLAYERATTACHMENTPLUGIN_LIGHTFADE___FADEOUT_D__8_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xD856EE0)
#define RPG_CLIENT_MONOPLAYERATTACHMENTPLUGIN_LIGHTFADE___FADEOUT_D__8__CTOR_OFFSET UNITYSDK_OFFSET(0xD856EC0)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoPlayerAttachmentPlugin_LightFade___FadeOut_d__8_TypeDefinitionIndex = 60283;

	class MonoPlayerAttachmentPlugin_LightFade___FadeOut_d__8 : public ::System::Object
	{
	public:
		::System::Object* __2__current; // 0x10
		::RPG::Client::MonoPlayerAttachmentPlugin_LightFade* __4__this; // 0x18
		::System::Single _speed_5__3; // 0x20
		::System::Single _value_5__2; // 0x24
		::System::Int32 __1__state; // 0x28

		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPLAYERATTACHMENTPLUGIN_LIGHTFADE___FADEOUT_D__8__CTOR_OFFSET))(this, a1);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPLAYERATTACHMENTPLUGIN_LIGHTFADE___FADEOUT_D__8_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPLAYERATTACHMENTPLUGIN_LIGHTFADE___FADEOUT_D__8_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPLAYERATTACHMENTPLUGIN_LIGHTFADE___FADEOUT_D__8_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPLAYERATTACHMENTPLUGIN_LIGHTFADE___FADEOUT_D__8_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPLAYERATTACHMENTPLUGIN_LIGHTFADE___FADEOUT_D__8_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
