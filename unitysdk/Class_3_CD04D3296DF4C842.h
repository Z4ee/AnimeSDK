#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define CLASS_3_CD04D3296DF4C842_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1B9DC860)
#define CLASS_3_CD04D3296DF4C842_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1B9DC890)
#define CLASS_3_CD04D3296DF4C842_INVOKE_OFFSET UNITYSDK_OFFSET(0x1B9DA2A0)
#define CLASS_3_CD04D3296DF4C842__CTOR_OFFSET UNITYSDK_OFFSET(0x1B9DC850)

inline static constexpr unsigned int Class_3_CD04D3296DF4C842_TypeDefinitionIndex = 26198;

class Class_3_CD04D3296DF4C842 : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_3_CD04D3296DF4C842__CTOR_OFFSET))(this, a1, a2);
	}

	::System::UInt64 Invoke()
	{
		return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_CD04D3296DF4C842_INVOKE_OFFSET))(this);
	}

	::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* a1, ::System::Object* a2)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_3_CD04D3296DF4C842_BEGININVOKE_OFFSET))(this, a1, a2);
	}

	::System::UInt64 EndInvoke(::System::IAsyncResult* a1)
	{
		return ((::System::UInt64(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + CLASS_3_CD04D3296DF4C842_ENDINVOKE_OFFSET))(this, a1);
	}
};
