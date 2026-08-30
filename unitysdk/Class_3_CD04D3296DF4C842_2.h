#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define CLASS_3_CD04D3296DF4C842_2_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1C0B03D0)
#define CLASS_3_CD04D3296DF4C842_2_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1C0B0400)
#define CLASS_3_CD04D3296DF4C842_2_INVOKE_OFFSET UNITYSDK_OFFSET(0x1C0B03C0)
#define CLASS_3_CD04D3296DF4C842_2__CTOR_OFFSET UNITYSDK_OFFSET(0x1C0B0350)

inline static constexpr unsigned int Class_3_CD04D3296DF4C842_2_TypeDefinitionIndex = 36624;

class Class_3_CD04D3296DF4C842_2 : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_3_CD04D3296DF4C842_2__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Invoke()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_CD04D3296DF4C842_2_INVOKE_OFFSET))(this);
	}

	::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* a1, ::System::Object* a2)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_3_CD04D3296DF4C842_2_BEGININVOKE_OFFSET))(this, a1, a2);
	}

	::System::Boolean EndInvoke(::System::IAsyncResult* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + CLASS_3_CD04D3296DF4C842_2_ENDINVOKE_OFFSET))(this, a1);
	}
};
