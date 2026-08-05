#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

class Class_1_5CAB9AA46D466E98;
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define CLASS_1_B08665FEB7112467_3_CLASS_3_487EE6B302AC50B7_2_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x129724B0)
#define CLASS_1_B08665FEB7112467_3_CLASS_3_487EE6B302AC50B7_2_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x129724E0)
#define CLASS_1_B08665FEB7112467_3_CLASS_3_487EE6B302AC50B7_2_INVOKE_OFFSET UNITYSDK_OFFSET(0x12971F90)
#define CLASS_1_B08665FEB7112467_3_CLASS_3_487EE6B302AC50B7_2__CTOR_OFFSET UNITYSDK_OFFSET(0x12971F70)

inline static constexpr unsigned int Class_1_B08665FEB7112467_3_Class_3_487EE6B302AC50B7_2_TypeDefinitionIndex = 50503;

class Class_1_B08665FEB7112467_3_Class_3_487EE6B302AC50B7_2 : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_1_B08665FEB7112467_3_CLASS_3_487EE6B302AC50B7_2__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Invoke(::Class_1_5CAB9AA46D466E98* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5CAB9AA46D466E98*))((::PBYTE)hIl2Cpp + CLASS_1_B08665FEB7112467_3_CLASS_3_487EE6B302AC50B7_2_INVOKE_OFFSET))(this, a1);
	}

	::System::IAsyncResult* BeginInvoke(::Class_1_5CAB9AA46D466E98* a1, ::System::AsyncCallback* a2, ::System::Object* a3)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::Class_1_5CAB9AA46D466E98*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_B08665FEB7112467_3_CLASS_3_487EE6B302AC50B7_2_BEGININVOKE_OFFSET))(this, a1, a2, a3);
	}

	::System::Void EndInvoke(::System::IAsyncResult* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + CLASS_1_B08665FEB7112467_3_CLASS_3_487EE6B302AC50B7_2_ENDINVOKE_OFFSET))(this, a1);
	}
};
