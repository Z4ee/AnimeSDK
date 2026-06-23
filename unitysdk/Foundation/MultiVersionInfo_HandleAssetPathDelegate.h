#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MultiVer.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }

#define FOUNDATION_MULTIVERSIONINFO_HANDLEASSETPATHDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1DCC37D0)
#define FOUNDATION_MULTIVERSIONINFO_HANDLEASSETPATHDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1DCC3850)
#define FOUNDATION_MULTIVERSIONINFO_HANDLEASSETPATHDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1DCC3280)
#define FOUNDATION_MULTIVERSIONINFO_HANDLEASSETPATHDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1DCC3260)

namespace Foundation
{
	inline static constexpr unsigned int MultiVersionInfo_HandleAssetPathDelegate_TypeDefinitionIndex = 7826;

	class MultiVersionInfo_HandleAssetPathDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + FOUNDATION_MULTIVERSIONINFO_HANDLEASSETPATHDELEGATE__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::String* path, ::Foundation::MultiVer multiVerType)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::Foundation::MultiVer))((::PBYTE)hIl2Cpp + FOUNDATION_MULTIVERSIONINFO_HANDLEASSETPATHDELEGATE_INVOKE_OFFSET))(this, path, multiVerType);
		}

		::System::IAsyncResult* BeginInvoke(::System::String* path, ::Foundation::MultiVer multiVerType, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::String*, ::Foundation::MultiVer, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + FOUNDATION_MULTIVERSIONINFO_HANDLEASSETPATHDELEGATE_BEGININVOKE_OFFSET))(this, path, multiVerType, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + FOUNDATION_MULTIVERSIONINFO_HANDLEASSETPATHDELEGATE_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
