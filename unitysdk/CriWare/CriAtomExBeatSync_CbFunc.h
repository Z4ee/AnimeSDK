#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CriWare/CriAtomExBeatSync_Info.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define CRIWARE_CRIATOMEXBEATSYNC_CBFUNC_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1CB974F0)
#define CRIWARE_CRIATOMEXBEATSYNC_CBFUNC_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1CB97560)
#define CRIWARE_CRIATOMEXBEATSYNC_CBFUNC_INVOKE_OFFSET UNITYSDK_OFFSET(0x1CB7A730)
#define CRIWARE_CRIATOMEXBEATSYNC_CBFUNC__CTOR_OFFSET UNITYSDK_OFFSET(0x1CB97480)

namespace CriWare
{
	inline static constexpr unsigned int CriAtomExBeatSync_CbFunc_TypeDefinitionIndex = 38705;

	class CriAtomExBeatSync_CbFunc : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXBEATSYNC_CBFUNC__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::CriWare::CriAtomExBeatSync_Info& a1)
		{
			return ((::System::Void(*)(::PVOID, ::CriWare::CriAtomExBeatSync_Info&))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXBEATSYNC_CBFUNC_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::CriWare::CriAtomExBeatSync_Info& a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::CriWare::CriAtomExBeatSync_Info&, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXBEATSYNC_CBFUNC_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void EndInvoke(::CriWare::CriAtomExBeatSync_Info& a1, ::System::IAsyncResult* a2)
		{
			return ((::System::Void(*)(::PVOID, ::CriWare::CriAtomExBeatSync_Info&, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXBEATSYNC_CBFUNC_ENDINVOKE_OFFSET))(this, a1, a2);
		}
	};
}
