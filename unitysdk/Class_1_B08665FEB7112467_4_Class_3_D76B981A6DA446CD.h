#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_D2BBBB758B896E04_3.h"
#include "unitysdk/System/MulticastDelegate.h"

class Class_1_5CAB9AA46D466E98;
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define CLASS_1_B08665FEB7112467_4_CLASS_3_D76B981A6DA446CD_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x14F3D2D0)
#define CLASS_1_B08665FEB7112467_4_CLASS_3_D76B981A6DA446CD_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x14F3D370)
#define CLASS_1_B08665FEB7112467_4_CLASS_3_D76B981A6DA446CD_INVOKE_OFFSET UNITYSDK_OFFSET(0x14F3CD30)
#define CLASS_1_B08665FEB7112467_4_CLASS_3_D76B981A6DA446CD__CTOR_OFFSET UNITYSDK_OFFSET(0x14F3CD10)

inline static constexpr unsigned int Class_1_B08665FEB7112467_4_Class_3_D76B981A6DA446CD_TypeDefinitionIndex = 65209;

class Class_1_B08665FEB7112467_4_Class_3_D76B981A6DA446CD : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_1_B08665FEB7112467_4_CLASS_3_D76B981A6DA446CD__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Invoke(::Class_1_5CAB9AA46D466E98* a1, ::System::Int32 a2, ::Enum_3_D2BBBB758B896E04_3 a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5CAB9AA46D466E98*, ::System::Int32, ::Enum_3_D2BBBB758B896E04_3))((::PBYTE)hIl2Cpp + CLASS_1_B08665FEB7112467_4_CLASS_3_D76B981A6DA446CD_INVOKE_OFFSET))(this, a1, a2, a3);
	}

	::System::IAsyncResult* BeginInvoke(::Class_1_5CAB9AA46D466E98* a1, ::System::Int32 a2, ::Enum_3_D2BBBB758B896E04_3 a3, ::System::AsyncCallback* a4, ::System::Object* a5)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::Class_1_5CAB9AA46D466E98*, ::System::Int32, ::Enum_3_D2BBBB758B896E04_3, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_B08665FEB7112467_4_CLASS_3_D76B981A6DA446CD_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void EndInvoke(::System::IAsyncResult* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + CLASS_1_B08665FEB7112467_4_CLASS_3_D76B981A6DA446CD_ENDINVOKE_OFFSET))(this, a1);
	}
};
