#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

class Class_1_8E541422F89D76B8;
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define CLASS_1_046D69BA9916A998_CLASS_3_4FF8BBC96790DA30_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x183513A0)
#define CLASS_1_046D69BA9916A998_CLASS_3_4FF8BBC96790DA30_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x18351400)
#define CLASS_1_046D69BA9916A998_CLASS_3_4FF8BBC96790DA30_INVOKE_OFFSET UNITYSDK_OFFSET(0x1834EAC0)
#define CLASS_1_046D69BA9916A998_CLASS_3_4FF8BBC96790DA30__CTOR_OFFSET UNITYSDK_OFFSET(0x18351380)

inline static constexpr unsigned int Class_1_046D69BA9916A998_Class_3_4FF8BBC96790DA30_TypeDefinitionIndex = 33946;

class Class_1_046D69BA9916A998_Class_3_4FF8BBC96790DA30 : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_1_046D69BA9916A998_CLASS_3_4FF8BBC96790DA30__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Invoke(::Class_1_8E541422F89D76B8* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_8E541422F89D76B8*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_046D69BA9916A998_CLASS_3_4FF8BBC96790DA30_INVOKE_OFFSET))(this, a1, a2);
	}

	::System::IAsyncResult* BeginInvoke(::Class_1_8E541422F89D76B8* a1, ::System::Boolean a2, ::System::AsyncCallback* a3, ::System::Object* a4)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::Class_1_8E541422F89D76B8*, ::System::Boolean, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_046D69BA9916A998_CLASS_3_4FF8BBC96790DA30_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void EndInvoke(::System::IAsyncResult* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + CLASS_1_046D69BA9916A998_CLASS_3_4FF8BBC96790DA30_ENDINVOKE_OFFSET))(this, a1);
	}
};
