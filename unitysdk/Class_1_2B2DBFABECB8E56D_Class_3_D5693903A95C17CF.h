#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define CLASS_1_2B2DBFABECB8E56D_CLASS_3_D5693903A95C17CF_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x16F60780)
#define CLASS_1_2B2DBFABECB8E56D_CLASS_3_D5693903A95C17CF_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x16F60830)
#define CLASS_1_2B2DBFABECB8E56D_CLASS_3_D5693903A95C17CF_INVOKE_OFFSET UNITYSDK_OFFSET(0x16F60400)
#define CLASS_1_2B2DBFABECB8E56D_CLASS_3_D5693903A95C17CF__CTOR_OFFSET UNITYSDK_OFFSET(0x16F603E0)

inline static constexpr unsigned int Class_1_2B2DBFABECB8E56D_Class_3_D5693903A95C17CF_TypeDefinitionIndex = 68850;

class Class_1_2B2DBFABECB8E56D_Class_3_D5693903A95C17CF : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_1_2B2DBFABECB8E56D_CLASS_3_D5693903A95C17CF__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Single Invoke(::System::Single a1, ::System::Single a2, ::System::Single a3)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_2B2DBFABECB8E56D_CLASS_3_D5693903A95C17CF_INVOKE_OFFSET))(this, a1, a2, a3);
	}

	::System::IAsyncResult* BeginInvoke(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::AsyncCallback* a4, ::System::Object* a5)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_2B2DBFABECB8E56D_CLASS_3_D5693903A95C17CF_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Single EndInvoke(::System::IAsyncResult* a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + CLASS_1_2B2DBFABECB8E56D_CLASS_3_D5693903A95C17CF_ENDINVOKE_OFFSET))(this, a1);
	}
};
