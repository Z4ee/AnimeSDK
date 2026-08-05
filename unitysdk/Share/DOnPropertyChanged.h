#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Share/EPropertyType.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace Share { class CChangedPropertyInfo; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define SHARE_DONPROPERTYCHANGED_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1C3802C0)
#define SHARE_DONPROPERTYCHANGED_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1C3802F0)
#define SHARE_DONPROPERTYCHANGED_INVOKE_OFFSET UNITYSDK_OFFSET(0x1C37FDA0)
#define SHARE_DONPROPERTYCHANGED__CTOR_OFFSET UNITYSDK_OFFSET(0x1C37FD80)

namespace Share
{
	inline static constexpr unsigned int DOnPropertyChanged_TypeDefinitionIndex = 8995;

	class DOnPropertyChanged : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + SHARE_DONPROPERTYCHANGED__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::Collections::Generic::Dictionary_2<::Share::EPropertyType, ::Share::CChangedPropertyInfo*>* oChanged)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::Share::EPropertyType, ::Share::CChangedPropertyInfo*>*))((::PBYTE)hIl2Cpp + SHARE_DONPROPERTYCHANGED_INVOKE_OFFSET))(this, oChanged);
		}

		::System::IAsyncResult* BeginInvoke(::System::Collections::Generic::Dictionary_2<::Share::EPropertyType, ::Share::CChangedPropertyInfo*>* oChanged, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::Share::EPropertyType, ::Share::CChangedPropertyInfo*>*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SHARE_DONPROPERTYCHANGED_BEGININVOKE_OFFSET))(this, oChanged, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SHARE_DONPROPERTYCHANGED_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
