#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace QWER { class CPropertyModule; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define QWER_DONPROPERTYMODULECHANGED_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1C533F60)
#define QWER_DONPROPERTYMODULECHANGED_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1C533FE0)
#define QWER_DONPROPERTYMODULECHANGED_INVOKE_OFFSET UNITYSDK_OFFSET(0x1C532FA0)
#define QWER_DONPROPERTYMODULECHANGED__CTOR_OFFSET UNITYSDK_OFFSET(0x1C533590)

namespace QWER
{
	inline static constexpr unsigned int DOnPropertyModuleChanged_TypeDefinitionIndex = 9677;

	class DOnPropertyModuleChanged : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + QWER_DONPROPERTYMODULECHANGED__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::QWER::CPropertyModule* oPropertyModule, ::System::Byte btPropertyTag)
		{
			return ((::System::Void(*)(::PVOID, ::QWER::CPropertyModule*, ::System::Byte))((::PBYTE)hIl2Cpp + QWER_DONPROPERTYMODULECHANGED_INVOKE_OFFSET))(this, oPropertyModule, btPropertyTag);
		}

		::System::IAsyncResult* BeginInvoke(::QWER::CPropertyModule* oPropertyModule, ::System::Byte btPropertyTag, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::QWER::CPropertyModule*, ::System::Byte, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + QWER_DONPROPERTYMODULECHANGED_BEGININVOKE_OFFSET))(this, oPropertyModule, btPropertyTag, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + QWER_DONPROPERTYMODULECHANGED_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
