#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class LanguageManager; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_LANGUAGEMANAGER__REQUESTLANGUAGE_D__24_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x15F24DE0)
#define MIHOYO_SDK_LANGUAGEMANAGER__REQUESTLANGUAGE_D__24_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x15F24F30)
#define MIHOYO_SDK_LANGUAGEMANAGER__REQUESTLANGUAGE_D__24_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x15F24F90)
#define MIHOYO_SDK_LANGUAGEMANAGER__REQUESTLANGUAGE_D__24_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x15F24F40)
#define MIHOYO_SDK_LANGUAGEMANAGER__REQUESTLANGUAGE_D__24_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15F24DD0)
#define MIHOYO_SDK_LANGUAGEMANAGER__REQUESTLANGUAGE_D__24__CTOR_OFFSET UNITYSDK_OFFSET(0x15F24D20)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int LanguageManager__RequestLanguage_d__24_TypeDefinitionIndex = 7072;

	class LanguageManager__RequestLanguage_d__24 : public ::System::Object
	{
	public:
		::System::Action* timeoutCallback; // 0x10
		::System::Action_1<::System::String*>* callback; // 0x18
		::System::String* _url_5__1; // 0x20
		::MiHoYo::SDK::LanguageManager* __4__this; // 0x28
		::System::Object* __2__current; // 0x30
		::System::Int32 __1__state; // 0x38

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_LANGUAGEMANAGER__REQUESTLANGUAGE_D__24__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_LANGUAGEMANAGER__REQUESTLANGUAGE_D__24_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_LANGUAGEMANAGER__REQUESTLANGUAGE_D__24_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_LANGUAGEMANAGER__REQUESTLANGUAGE_D__24_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_LANGUAGEMANAGER__REQUESTLANGUAGE_D__24_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_LANGUAGEMANAGER__REQUESTLANGUAGE_D__24_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
