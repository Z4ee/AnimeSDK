#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class RegionTranslationManager; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_REGIONTRANSLATIONMANAGER__REQUESTREMOTEVERSION_D__18_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1CD16890)
#define MIHOYO_SDK_REGIONTRANSLATIONMANAGER__REQUESTREMOTEVERSION_D__18_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1CD16A00)
#define MIHOYO_SDK_REGIONTRANSLATIONMANAGER__REQUESTREMOTEVERSION_D__18_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1CD16A60)
#define MIHOYO_SDK_REGIONTRANSLATIONMANAGER__REQUESTREMOTEVERSION_D__18_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1CD16A10)
#define MIHOYO_SDK_REGIONTRANSLATIONMANAGER__REQUESTREMOTEVERSION_D__18_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1CD16880)
#define MIHOYO_SDK_REGIONTRANSLATIONMANAGER__REQUESTREMOTEVERSION_D__18__CTOR_OFFSET UNITYSDK_OFFSET(0x1CD16870)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int RegionTranslationManager__RequestRemoteVersion_d__18_TypeDefinitionIndex = 20070;

	class RegionTranslationManager__RequestRemoteVersion_d__18 : public ::System::Object
	{
	public:
		::System::Action* timeoutCallback; // 0x10
		::MiHoYo::SDK::RegionTranslationManager* __4__this; // 0x18
		::System::String* _url_5__1; // 0x20
		::System::Action_1<::System::String*>* callback; // 0x28
		::System::Object* __2__current; // 0x30
		::System::Int32 __1__state; // 0x38

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REGIONTRANSLATIONMANAGER__REQUESTREMOTEVERSION_D__18__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REGIONTRANSLATIONMANAGER__REQUESTREMOTEVERSION_D__18_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REGIONTRANSLATIONMANAGER__REQUESTREMOTEVERSION_D__18_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REGIONTRANSLATIONMANAGER__REQUESTREMOTEVERSION_D__18_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REGIONTRANSLATIONMANAGER__REQUESTREMOTEVERSION_D__18_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REGIONTRANSLATIONMANAGER__REQUESTREMOTEVERSION_D__18_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
