#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

class Class_1_B7E341C5F1A6F199;
class Class_2_4D61A7A49E7F7878;
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define CLASS_3_682ADE37F45F3DA6_CLASS_3_B92141602368DE54_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x12E93D70)
#define CLASS_3_682ADE37F45F3DA6_CLASS_3_B92141602368DE54_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x12E93E00)
#define CLASS_3_682ADE37F45F3DA6_CLASS_3_B92141602368DE54_INVOKE_OFFSET UNITYSDK_OFFSET(0x12E93760)
#define CLASS_3_682ADE37F45F3DA6_CLASS_3_B92141602368DE54__CTOR_OFFSET UNITYSDK_OFFSET(0x12E93740)

inline static constexpr unsigned int Class_3_682ADE37F45F3DA6_Class_3_B92141602368DE54_TypeDefinitionIndex = 86846;

class Class_3_682ADE37F45F3DA6_Class_3_B92141602368DE54 : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_3_682ADE37F45F3DA6_CLASS_3_B92141602368DE54__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Invoke(::Class_2_4D61A7A49E7F7878* a1, ::System::Single a2, ::Class_1_B7E341C5F1A6F199* a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_4D61A7A49E7F7878*, ::System::Single, ::Class_1_B7E341C5F1A6F199*))((::PBYTE)hIl2Cpp + CLASS_3_682ADE37F45F3DA6_CLASS_3_B92141602368DE54_INVOKE_OFFSET))(this, a1, a2, a3);
	}

	::System::IAsyncResult* BeginInvoke(::Class_2_4D61A7A49E7F7878* a1, ::System::Single a2, ::Class_1_B7E341C5F1A6F199* a3, ::System::AsyncCallback* a4, ::System::Object* a5)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::Class_2_4D61A7A49E7F7878*, ::System::Single, ::Class_1_B7E341C5F1A6F199*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_3_682ADE37F45F3DA6_CLASS_3_B92141602368DE54_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Boolean EndInvoke(::System::IAsyncResult* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + CLASS_3_682ADE37F45F3DA6_CLASS_3_B92141602368DE54_ENDINVOKE_OFFSET))(this, a1);
	}
};
