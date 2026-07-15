#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CriWare/CriAtomEx_CueLinkInfo.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define CRIWARE_CRIATOMEX_CUELINKCBFUNC_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1AEEA740)
#define CRIWARE_CRIATOMEX_CUELINKCBFUNC_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1AEEA7B0)
#define CRIWARE_CRIATOMEX_CUELINKCBFUNC_INVOKE_OFFSET UNITYSDK_OFFSET(0x1AEE4180)
#define CRIWARE_CRIATOMEX_CUELINKCBFUNC__CTOR_OFFSET UNITYSDK_OFFSET(0x1AEEA6D0)

namespace CriWare
{
	inline static constexpr unsigned int CriAtomEx_CueLinkCbFunc_TypeDefinitionIndex = 37825;

	class CriAtomEx_CueLinkCbFunc : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX_CUELINKCBFUNC__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::CriWare::CriAtomEx_CueLinkInfo& a1)
		{
			return ((::System::Void(*)(::PVOID, ::CriWare::CriAtomEx_CueLinkInfo&))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX_CUELINKCBFUNC_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::CriWare::CriAtomEx_CueLinkInfo& a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::CriWare::CriAtomEx_CueLinkInfo&, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX_CUELINKCBFUNC_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void EndInvoke(::CriWare::CriAtomEx_CueLinkInfo& a1, ::System::IAsyncResult* a2)
		{
			return ((::System::Void(*)(::PVOID, ::CriWare::CriAtomEx_CueLinkInfo&, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX_CUELINKCBFUNC_ENDINVOKE_OFFSET))(this, a1, a2);
		}
	};
}
