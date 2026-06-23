#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MOLEMOLE_UIROLESELECTPAGECONTEXT_ONHANDLEROLESELECT_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x15F3B8C0)
#define MOLEMOLE_UIROLESELECTPAGECONTEXT_ONHANDLEROLESELECT_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x15F3B8F0)
#define MOLEMOLE_UIROLESELECTPAGECONTEXT_ONHANDLEROLESELECT_INVOKE_OFFSET UNITYSDK_OFFSET(0x15F3B3C0)
#define MOLEMOLE_UIROLESELECTPAGECONTEXT_ONHANDLEROLESELECT__CTOR_OFFSET UNITYSDK_OFFSET(0x15F3B3A0)

namespace MoleMole
{
	inline static constexpr unsigned int UIRoleSelectPageContext_OnHandleRoleSelect_TypeDefinitionIndex = 46015;

	class UIRoleSelectPageContext_OnHandleRoleSelect : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTEXT_ONHANDLEROLESELECT__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::Object* data)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTEXT_ONHANDLEROLESELECT_INVOKE_OFFSET))(this, data);
		}

		::System::IAsyncResult* BeginInvoke(::System::Object* data, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Object*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTEXT_ONHANDLEROLESELECT_BEGININVOKE_OFFSET))(this, data, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTEXT_ONHANDLEROLESELECT_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
