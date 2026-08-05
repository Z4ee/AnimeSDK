#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

class Class_1_5CAB9AA46D466E98;
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define CLASS_1_B08665FEB7112467_3_CLASS_3_B4CDC1CE1D4B231B_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x19F79EB0)
#define CLASS_1_B08665FEB7112467_3_CLASS_3_B4CDC1CE1D4B231B_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x19F79F30)
#define CLASS_1_B08665FEB7112467_3_CLASS_3_B4CDC1CE1D4B231B_INVOKE_OFFSET UNITYSDK_OFFSET(0x19F79930)
#define CLASS_1_B08665FEB7112467_3_CLASS_3_B4CDC1CE1D4B231B__CTOR_OFFSET UNITYSDK_OFFSET(0x19F79910)

inline static constexpr unsigned int Class_1_B08665FEB7112467_3_Class_3_B4CDC1CE1D4B231B_TypeDefinitionIndex = 50505;

class Class_1_B08665FEB7112467_3_Class_3_B4CDC1CE1D4B231B : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_1_B08665FEB7112467_3_CLASS_3_B4CDC1CE1D4B231B__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Invoke(::Class_1_5CAB9AA46D466E98* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5CAB9AA46D466E98*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_B08665FEB7112467_3_CLASS_3_B4CDC1CE1D4B231B_INVOKE_OFFSET))(this, a1, a2);
	}

	::System::IAsyncResult* BeginInvoke(::Class_1_5CAB9AA46D466E98* a1, ::System::Int32 a2, ::System::AsyncCallback* a3, ::System::Object* a4)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::Class_1_5CAB9AA46D466E98*, ::System::Int32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_B08665FEB7112467_3_CLASS_3_B4CDC1CE1D4B231B_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void EndInvoke(::System::IAsyncResult* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + CLASS_1_B08665FEB7112467_3_CLASS_3_B4CDC1CE1D4B231B_ENDINVOKE_OFFSET))(this, a1);
	}
};
