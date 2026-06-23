#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_487B0A55987654E6.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define CLASS_1_6AD752F48D4AA57E_CLASS_3_2D1227F5927B6054_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x140F2F40)
#define CLASS_1_6AD752F48D4AA57E_CLASS_3_2D1227F5927B6054_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x140F2FF0)
#define CLASS_1_6AD752F48D4AA57E_CLASS_3_2D1227F5927B6054_INVOKE_OFFSET UNITYSDK_OFFSET(0x140F2BB0)
#define CLASS_1_6AD752F48D4AA57E_CLASS_3_2D1227F5927B6054__CTOR_OFFSET UNITYSDK_OFFSET(0x140F2B90)

inline static constexpr unsigned int Class_1_6AD752F48D4AA57E_Class_3_2D1227F5927B6054_TypeDefinitionIndex = 50546;

class Class_1_6AD752F48D4AA57E_Class_3_2D1227F5927B6054 : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_1_6AD752F48D4AA57E_CLASS_3_2D1227F5927B6054__CTOR_OFFSET))(this, a1, a2);
	}

	::Enum_3_487B0A55987654E6 Invoke(::System::Int32 a1, ::System::Int32& a2, ::System::Int32& a3)
	{
		return ((::Enum_3_487B0A55987654E6(*)(::PVOID, ::System::Int32, ::System::Int32&, ::System::Int32&))((::PBYTE)hIl2Cpp + CLASS_1_6AD752F48D4AA57E_CLASS_3_2D1227F5927B6054_INVOKE_OFFSET))(this, a1, a2, a3);
	}

	::System::IAsyncResult* BeginInvoke(::System::Int32 a1, ::System::Int32& a2, ::System::Int32& a3, ::System::AsyncCallback* a4, ::System::Object* a5)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::System::Int32, ::System::Int32&, ::System::Int32&, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_6AD752F48D4AA57E_CLASS_3_2D1227F5927B6054_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::Enum_3_487B0A55987654E6 EndInvoke(::System::Int32& a1, ::System::Int32& a2, ::System::IAsyncResult* a3)
	{
		return ((::Enum_3_487B0A55987654E6(*)(::PVOID, ::System::Int32&, ::System::Int32&, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + CLASS_1_6AD752F48D4AA57E_CLASS_3_2D1227F5927B6054_ENDINVOKE_OFFSET))(this, a1, a2, a3);
	}
};
