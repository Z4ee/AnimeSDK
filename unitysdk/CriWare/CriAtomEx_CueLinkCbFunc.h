#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CriWare/CriAtomEx_CueLinkInfo.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define CRIWARE_CRIATOMEX_CUELINKCBFUNC_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1E67A030)
#define CRIWARE_CRIATOMEX_CUELINKCBFUNC_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1E67A0A0)
#define CRIWARE_CRIATOMEX_CUELINKCBFUNC_INVOKE_OFFSET UNITYSDK_OFFSET(0x1E679CF0)
#define CRIWARE_CRIATOMEX_CUELINKCBFUNC__CTOR_OFFSET UNITYSDK_OFFSET(0x1E679CD0)

namespace CriWare
{
	inline static constexpr unsigned int CriAtomEx_CueLinkCbFunc_TypeDefinitionIndex = 34268;

	class CriAtomEx_CueLinkCbFunc : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX_CUELINKCBFUNC__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::CriWare::CriAtomEx_CueLinkInfo& info)
		{
			return ((::System::Void(*)(::PVOID, ::CriWare::CriAtomEx_CueLinkInfo&))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX_CUELINKCBFUNC_INVOKE_OFFSET))(this, info);
		}

		::System::IAsyncResult* BeginInvoke(::CriWare::CriAtomEx_CueLinkInfo& info, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::CriWare::CriAtomEx_CueLinkInfo&, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX_CUELINKCBFUNC_BEGININVOKE_OFFSET))(this, info, callback, object);
		}

		::System::Void EndInvoke(::CriWare::CriAtomEx_CueLinkInfo& info, ::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::CriWare::CriAtomEx_CueLinkInfo&, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX_CUELINKCBFUNC_ENDINVOKE_OFFSET))(this, info, result);
		}
	};
}
