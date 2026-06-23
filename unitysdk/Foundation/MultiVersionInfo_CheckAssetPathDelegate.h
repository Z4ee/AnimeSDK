#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MultiVer.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }

#define FOUNDATION_MULTIVERSIONINFO_CHECKASSETPATHDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1E1EDB00)
#define FOUNDATION_MULTIVERSIONINFO_CHECKASSETPATHDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1E1EDB80)
#define FOUNDATION_MULTIVERSIONINFO_CHECKASSETPATHDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1E1ED5A0)
#define FOUNDATION_MULTIVERSIONINFO_CHECKASSETPATHDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1E1ED580)

namespace Foundation
{
	inline static constexpr unsigned int MultiVersionInfo_CheckAssetPathDelegate_TypeDefinitionIndex = 7828;

	class MultiVersionInfo_CheckAssetPathDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + FOUNDATION_MULTIVERSIONINFO_CHECKASSETPATHDELEGATE__CTOR_OFFSET))(this, object, method);
		}

		::System::Boolean Invoke(::System::String* path, ::Foundation::MultiVer multiVerType)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::Foundation::MultiVer))((::PBYTE)hIl2Cpp + FOUNDATION_MULTIVERSIONINFO_CHECKASSETPATHDELEGATE_INVOKE_OFFSET))(this, path, multiVerType);
		}

		::System::IAsyncResult* BeginInvoke(::System::String* path, ::Foundation::MultiVer multiVerType, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::String*, ::Foundation::MultiVer, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + FOUNDATION_MULTIVERSIONINFO_CHECKASSETPATHDELEGATE_BEGININVOKE_OFFSET))(this, path, multiVerType, callback, object);
		}

		::System::Boolean EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + FOUNDATION_MULTIVERSIONINFO_CHECKASSETPATHDELEGATE_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
