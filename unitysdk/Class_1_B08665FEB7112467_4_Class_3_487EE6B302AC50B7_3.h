#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

class Class_1_5CAB9AA46D466E98;
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define CLASS_1_B08665FEB7112467_4_CLASS_3_487EE6B302AC50B7_3_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1336E9F0)
#define CLASS_1_B08665FEB7112467_4_CLASS_3_487EE6B302AC50B7_3_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1336EA20)
#define CLASS_1_B08665FEB7112467_4_CLASS_3_487EE6B302AC50B7_3_INVOKE_OFFSET UNITYSDK_OFFSET(0x1336E4F0)
#define CLASS_1_B08665FEB7112467_4_CLASS_3_487EE6B302AC50B7_3__CTOR_OFFSET UNITYSDK_OFFSET(0x1336E4D0)

inline static constexpr unsigned int Class_1_B08665FEB7112467_4_Class_3_487EE6B302AC50B7_3_TypeDefinitionIndex = 65212;

class Class_1_B08665FEB7112467_4_Class_3_487EE6B302AC50B7_3 : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_1_B08665FEB7112467_4_CLASS_3_487EE6B302AC50B7_3__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Invoke(::Class_1_5CAB9AA46D466E98* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5CAB9AA46D466E98*))((::PBYTE)hIl2Cpp + CLASS_1_B08665FEB7112467_4_CLASS_3_487EE6B302AC50B7_3_INVOKE_OFFSET))(this, a1);
	}

	::System::IAsyncResult* BeginInvoke(::Class_1_5CAB9AA46D466E98* a1, ::System::AsyncCallback* a2, ::System::Object* a3)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::Class_1_5CAB9AA46D466E98*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_B08665FEB7112467_4_CLASS_3_487EE6B302AC50B7_3_BEGININVOKE_OFFSET))(this, a1, a2, a3);
	}

	::System::Void EndInvoke(::System::IAsyncResult* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + CLASS_1_B08665FEB7112467_4_CLASS_3_487EE6B302AC50B7_3_ENDINVOKE_OFFSET))(this, a1);
	}
};
