#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CriWare/CriAtomExBeatSync_Info.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define CRIWARE_CRIATOMEXBEATSYNC_CBFUNC_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x12BDF680)
#define CRIWARE_CRIATOMEXBEATSYNC_CBFUNC_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x12BDF6F0)
#define CRIWARE_CRIATOMEXBEATSYNC_CBFUNC_INVOKE_OFFSET UNITYSDK_OFFSET(0x12BC62E0)
#define CRIWARE_CRIATOMEXBEATSYNC_CBFUNC__CTOR_OFFSET UNITYSDK_OFFSET(0x12BC6C30)

namespace CriWare
{
	inline static constexpr unsigned int CriAtomExBeatSync_CbFunc_TypeDefinitionIndex = 36747;

	class CriAtomExBeatSync_CbFunc : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXBEATSYNC_CBFUNC__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::CriWare::CriAtomExBeatSync_Info& info)
		{
			return ((::System::Void(*)(::PVOID, ::CriWare::CriAtomExBeatSync_Info&))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXBEATSYNC_CBFUNC_INVOKE_OFFSET))(this, info);
		}

		::System::IAsyncResult* BeginInvoke(::CriWare::CriAtomExBeatSync_Info& info, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::CriWare::CriAtomExBeatSync_Info&, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXBEATSYNC_CBFUNC_BEGININVOKE_OFFSET))(this, info, callback, object);
		}

		::System::Void EndInvoke(::CriWare::CriAtomExBeatSync_Info& info, ::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::CriWare::CriAtomExBeatSync_Info&, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXBEATSYNC_CBFUNC_ENDINVOKE_OFFSET))(this, info, result);
		}
	};
}
