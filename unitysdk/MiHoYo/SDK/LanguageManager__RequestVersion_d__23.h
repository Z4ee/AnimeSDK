#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class LanguageManager; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_LANGUAGEMANAGER__REQUESTVERSION_D__23_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x183566F0)
#define MIHOYO_SDK_LANGUAGEMANAGER__REQUESTVERSION_D__23_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x183567F0)
#define MIHOYO_SDK_LANGUAGEMANAGER__REQUESTVERSION_D__23_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x18356850)
#define MIHOYO_SDK_LANGUAGEMANAGER__REQUESTVERSION_D__23_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x18356800)
#define MIHOYO_SDK_LANGUAGEMANAGER__REQUESTVERSION_D__23_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x183566E0)
#define MIHOYO_SDK_LANGUAGEMANAGER__REQUESTVERSION_D__23__CTOR_OFFSET UNITYSDK_OFFSET(0x18356450)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int LanguageManager__RequestVersion_d__23_TypeDefinitionIndex = 8017;

	class LanguageManager__RequestVersion_d__23 : public ::System::Object
	{
	public:
		::System::Object* __2__current; // 0x10
		::MiHoYo::SDK::LanguageManager* __4__this; // 0x18
		::System::String* _url_5__1; // 0x20
		::System::Action* timeoutCallback; // 0x28
		::System::Action_1<::System::String*>* callback; // 0x30
		::System::Int32 __1__state; // 0x38

		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_LANGUAGEMANAGER__REQUESTVERSION_D__23__CTOR_OFFSET))(this, a1);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_LANGUAGEMANAGER__REQUESTVERSION_D__23_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_LANGUAGEMANAGER__REQUESTVERSION_D__23_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_LANGUAGEMANAGER__REQUESTVERSION_D__23_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_LANGUAGEMANAGER__REQUESTVERSION_D__23_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_LANGUAGEMANAGER__REQUESTVERSION_D__23_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
