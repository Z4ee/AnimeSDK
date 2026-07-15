#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define CLASS_3_CD04D3296DF4C842_6_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x15E68230)
#define CLASS_3_CD04D3296DF4C842_6_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x15E68260)
#define CLASS_3_CD04D3296DF4C842_6_INVOKE_OFFSET UNITYSDK_OFFSET(0x15E68220)
#define CLASS_3_CD04D3296DF4C842_6__CTOR_OFFSET UNITYSDK_OFFSET(0x15E681B0)

inline static constexpr unsigned int Class_3_CD04D3296DF4C842_6_TypeDefinitionIndex = 54808;

class Class_3_CD04D3296DF4C842_6 : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_3_CD04D3296DF4C842_6__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Invoke()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_CD04D3296DF4C842_6_INVOKE_OFFSET))(this);
	}

	::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* a1, ::System::Object* a2)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_3_CD04D3296DF4C842_6_BEGININVOKE_OFFSET))(this, a1, a2);
	}

	::System::Void EndInvoke(::System::IAsyncResult* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + CLASS_3_CD04D3296DF4C842_6_ENDINVOKE_OFFSET))(this, a1);
	}
};
