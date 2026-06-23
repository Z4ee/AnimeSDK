#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class Type; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define PARADOXNOTION_TYPECONVERTER_CUSTOMCONVERTER_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1D1F1A60)
#define PARADOXNOTION_TYPECONVERTER_CUSTOMCONVERTER_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1D1F1AA0)
#define PARADOXNOTION_TYPECONVERTER_CUSTOMCONVERTER_INVOKE_OFFSET UNITYSDK_OFFSET(0x1D1F1490)
#define PARADOXNOTION_TYPECONVERTER_CUSTOMCONVERTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1D1F1A40)

namespace ParadoxNotion
{
	inline static constexpr unsigned int TypeConverter_CustomConverter_TypeDefinitionIndex = 29612;

	class TypeConverter_CustomConverter : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + PARADOXNOTION_TYPECONVERTER_CUSTOMCONVERTER__CTOR_OFFSET))(this, object, method);
		}

		::System::Func_2<::System::Object*, ::System::Object*>* Invoke(::System::Type* fromType, ::System::Type* toType)
		{
			return ((::System::Func_2<::System::Object*, ::System::Object*>*(*)(::PVOID, ::System::Type*, ::System::Type*))((::PBYTE)hIl2Cpp + PARADOXNOTION_TYPECONVERTER_CUSTOMCONVERTER_INVOKE_OFFSET))(this, fromType, toType);
		}

		::System::IAsyncResult* BeginInvoke(::System::Type* fromType, ::System::Type* toType, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Type*, ::System::Type*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + PARADOXNOTION_TYPECONVERTER_CUSTOMCONVERTER_BEGININVOKE_OFFSET))(this, fromType, toType, callback, object);
		}

		::System::Func_2<::System::Object*, ::System::Object*>* EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Func_2<::System::Object*, ::System::Object*>*(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + PARADOXNOTION_TYPECONVERTER_CUSTOMCONVERTER_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
