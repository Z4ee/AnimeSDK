#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class RenderTestPageContext; }
namespace System { class String; }
namespace UnityEngine { class RenderTexture; }
namespace UnityEngine { class Texture2D; }

#define RPG_CLIENT_RENDERTESTPAGECONTEXT___TAKESINGLESCREENSHOT_D__59_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xDE63D70)
#define RPG_CLIENT_RENDERTESTPAGECONTEXT___TAKESINGLESCREENSHOT_D__59_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xDE64170)
#define RPG_CLIENT_RENDERTESTPAGECONTEXT___TAKESINGLESCREENSHOT_D__59_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xDE641D0)
#define RPG_CLIENT_RENDERTESTPAGECONTEXT___TAKESINGLESCREENSHOT_D__59_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0xDE64180)
#define RPG_CLIENT_RENDERTESTPAGECONTEXT___TAKESINGLESCREENSHOT_D__59_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xDE63D50)
#define RPG_CLIENT_RENDERTESTPAGECONTEXT___TAKESINGLESCREENSHOT_D__59__CTOR_OFFSET UNITYSDK_OFFSET(0xDE63310)

namespace RPG::Client
{
	inline static constexpr unsigned int RenderTestPageContext___TakeSingleScreenShot_d__59_TypeDefinitionIndex = 72785;

	class RenderTestPageContext___TakeSingleScreenShot_d__59 : public ::System::Object
	{
	public:
		::UnityEngine::Texture2D* _tex_5__4; // 0x10
		::System::Object* __2__current; // 0x18
		::System::String* FileName; // 0x20
		::UnityEngine::RenderTexture* _rt_5__2; // 0x28
		::RPG::Client::RenderTestPageContext* __4__this; // 0x30
		::UnityEngine::RenderTexture* _currentRT_5__3; // 0x38
		::System::String* FolderName; // 0x40
		::System::Int32 __1__state; // 0x48

		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RENDERTESTPAGECONTEXT___TAKESINGLESCREENSHOT_D__59__CTOR_OFFSET))(this, a1);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RENDERTESTPAGECONTEXT___TAKESINGLESCREENSHOT_D__59_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RENDERTESTPAGECONTEXT___TAKESINGLESCREENSHOT_D__59_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RENDERTESTPAGECONTEXT___TAKESINGLESCREENSHOT_D__59_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RENDERTESTPAGECONTEXT___TAKESINGLESCREENSHOT_D__59_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RENDERTESTPAGECONTEXT___TAKESINGLESCREENSHOT_D__59_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
