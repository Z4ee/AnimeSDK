#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

class Class_1_0A5E7D3D44B7B761;
class Class_1_43BD383C98B4C0C5_9;
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_F6C4C44754A545F8_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1DEF8F50)
#define CLASS_3_F6C4C44754A545F8_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1DEF8F90)
#define CLASS_3_F6C4C44754A545F8_INVOKE_OFFSET UNITYSDK_OFFSET(0x1DEF89C0)
#define CLASS_3_F6C4C44754A545F8__CTOR_OFFSET UNITYSDK_OFFSET(0x1DEF89A0)

inline static constexpr unsigned int Class_3_F6C4C44754A545F8_TypeDefinitionIndex = 28673;

class Class_3_F6C4C44754A545F8 : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_3_F6C4C44754A545F8__CTOR_OFFSET))(this, a1, a2);
	}

	::Class_1_0A5E7D3D44B7B761* Invoke(::Class_1_43BD383C98B4C0C5_9* a1, ::System::Collections::Generic::List_1<::Class_1_0A5E7D3D44B7B761*>* a2)
	{
		return ((::Class_1_0A5E7D3D44B7B761*(*)(::PVOID, ::Class_1_43BD383C98B4C0C5_9*, ::System::Collections::Generic::List_1<::Class_1_0A5E7D3D44B7B761*>*))((::PBYTE)hIl2Cpp + CLASS_3_F6C4C44754A545F8_INVOKE_OFFSET))(this, a1, a2);
	}

	::System::IAsyncResult* BeginInvoke(::Class_1_43BD383C98B4C0C5_9* a1, ::System::Collections::Generic::List_1<::Class_1_0A5E7D3D44B7B761*>* a2, ::System::AsyncCallback* a3, ::System::Object* a4)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::Class_1_43BD383C98B4C0C5_9*, ::System::Collections::Generic::List_1<::Class_1_0A5E7D3D44B7B761*>*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_3_F6C4C44754A545F8_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4);
	}

	::Class_1_0A5E7D3D44B7B761* EndInvoke(::System::IAsyncResult* a1)
	{
		return ((::Class_1_0A5E7D3D44B7B761*(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + CLASS_3_F6C4C44754A545F8_ENDINVOKE_OFFSET))(this, a1);
	}
};
