#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_40264A1FD04B14F7_Enum_3_FC86C70BBFB452C1.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define CLASS_1_40264A1FD04B14F7_CLASS_3_2D1227F5927B6054_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0xF94B180)
#define CLASS_1_40264A1FD04B14F7_CLASS_3_2D1227F5927B6054_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0xF94B230)
#define CLASS_1_40264A1FD04B14F7_CLASS_3_2D1227F5927B6054_INVOKE_OFFSET UNITYSDK_OFFSET(0xF94ADF0)
#define CLASS_1_40264A1FD04B14F7_CLASS_3_2D1227F5927B6054__CTOR_OFFSET UNITYSDK_OFFSET(0xF94ADE0)

inline static constexpr unsigned int Class_1_40264A1FD04B14F7_Class_3_2D1227F5927B6054_TypeDefinitionIndex = 59027;

class Class_1_40264A1FD04B14F7_Class_3_2D1227F5927B6054 : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_1_40264A1FD04B14F7_CLASS_3_2D1227F5927B6054__CTOR_OFFSET))(this, a1, a2);
	}

	::Class_1_40264A1FD04B14F7_Enum_3_FC86C70BBFB452C1 Invoke(::System::Int32 a1, ::System::Int32& a2, ::System::Int32& a3)
	{
		return ((::Class_1_40264A1FD04B14F7_Enum_3_FC86C70BBFB452C1(*)(::PVOID, ::System::Int32, ::System::Int32&, ::System::Int32&))((::PBYTE)hIl2Cpp + CLASS_1_40264A1FD04B14F7_CLASS_3_2D1227F5927B6054_INVOKE_OFFSET))(this, a1, a2, a3);
	}

	::System::IAsyncResult* BeginInvoke(::System::Int32 a1, ::System::Int32& a2, ::System::Int32& a3, ::System::AsyncCallback* a4, ::System::Object* a5)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::System::Int32, ::System::Int32&, ::System::Int32&, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_40264A1FD04B14F7_CLASS_3_2D1227F5927B6054_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::Class_1_40264A1FD04B14F7_Enum_3_FC86C70BBFB452C1 EndInvoke(::System::Int32& a1, ::System::Int32& a2, ::System::IAsyncResult* a3)
	{
		return ((::Class_1_40264A1FD04B14F7_Enum_3_FC86C70BBFB452C1(*)(::PVOID, ::System::Int32&, ::System::Int32&, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + CLASS_1_40264A1FD04B14F7_CLASS_3_2D1227F5927B6054_ENDINVOKE_OFFSET))(this, a1, a2, a3);
	}
};
