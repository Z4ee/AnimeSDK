#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class RegionTranslationManager; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_REGIONTRANSLATIONMANAGER__REQUESTREMOTETRANSLATION_D__19_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1710EF10)
#define MIHOYO_SDK_REGIONTRANSLATIONMANAGER__REQUESTREMOTETRANSLATION_D__19_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1710F150)
#define MIHOYO_SDK_REGIONTRANSLATIONMANAGER__REQUESTREMOTETRANSLATION_D__19_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1710F1B0)
#define MIHOYO_SDK_REGIONTRANSLATIONMANAGER__REQUESTREMOTETRANSLATION_D__19_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1710F160)
#define MIHOYO_SDK_REGIONTRANSLATIONMANAGER__REQUESTREMOTETRANSLATION_D__19_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1710EF00)
#define MIHOYO_SDK_REGIONTRANSLATIONMANAGER__REQUESTREMOTETRANSLATION_D__19__CTOR_OFFSET UNITYSDK_OFFSET(0x1710EE00)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int RegionTranslationManager__RequestRemoteTranslation_d__19_TypeDefinitionIndex = 7914;

	class RegionTranslationManager__RequestRemoteTranslation_d__19 : public ::System::Object
	{
	public:
		::System::String* language; // 0x10
		::System::Action* timeoutCallback; // 0x18
		::System::Action_1<::System::String*>* callback; // 0x20
		::System::Object* __2__current; // 0x28
		::System::String* _url_5__1; // 0x30
		::MiHoYo::SDK::RegionTranslationManager* __4__this; // 0x38
		::System::Int32 __1__state; // 0x40

		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REGIONTRANSLATIONMANAGER__REQUESTREMOTETRANSLATION_D__19__CTOR_OFFSET))(this, a1);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REGIONTRANSLATIONMANAGER__REQUESTREMOTETRANSLATION_D__19_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REGIONTRANSLATIONMANAGER__REQUESTREMOTETRANSLATION_D__19_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REGIONTRANSLATIONMANAGER__REQUESTREMOTETRANSLATION_D__19_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REGIONTRANSLATIONMANAGER__REQUESTREMOTETRANSLATION_D__19_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REGIONTRANSLATIONMANAGER__REQUESTREMOTETRANSLATION_D__19_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
