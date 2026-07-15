#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define CLASS_3_CD04D3296DF4C842_15_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x14E51D00)
#define CLASS_3_CD04D3296DF4C842_15_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x14E51D30)
#define CLASS_3_CD04D3296DF4C842_15_INVOKE_OFFSET UNITYSDK_OFFSET(0x14E51CF0)
#define CLASS_3_CD04D3296DF4C842_15__CTOR_OFFSET UNITYSDK_OFFSET(0x14E51C80)

inline static constexpr unsigned int Class_3_CD04D3296DF4C842_15_TypeDefinitionIndex = 75878;

class Class_3_CD04D3296DF4C842_15 : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_3_CD04D3296DF4C842_15__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Invoke()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_CD04D3296DF4C842_15_INVOKE_OFFSET))(this);
	}

	::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* a1, ::System::Object* a2)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_3_CD04D3296DF4C842_15_BEGININVOKE_OFFSET))(this, a1, a2);
	}

	::System::Boolean EndInvoke(::System::IAsyncResult* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + CLASS_3_CD04D3296DF4C842_15_ENDINVOKE_OFFSET))(this, a1);
	}
};
