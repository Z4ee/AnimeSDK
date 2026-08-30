#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

class Class_1_0C8F8589C8105F3E;
class Class_1_CFC41C1E202F76CF;
class Class_1_FF872820A2FF123B;
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define CLASS_3_EB3A38E60C647F98_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1C083FD0)
#define CLASS_3_EB3A38E60C647F98_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1C084020)
#define CLASS_3_EB3A38E60C647F98_INVOKE_OFFSET UNITYSDK_OFFSET(0x1C083FA0)
#define CLASS_3_EB3A38E60C647F98__CTOR_OFFSET UNITYSDK_OFFSET(0x1C083EB0)

inline static constexpr unsigned int Class_3_EB3A38E60C647F98_TypeDefinitionIndex = 35556;

class Class_3_EB3A38E60C647F98 : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_3_EB3A38E60C647F98__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Invoke(::Class_1_FF872820A2FF123B* a1, ::Class_1_0C8F8589C8105F3E* a2, ::Class_1_CFC41C1E202F76CF* a3, ::Class_1_0C8F8589C8105F3E* a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_FF872820A2FF123B*, ::Class_1_0C8F8589C8105F3E*, ::Class_1_CFC41C1E202F76CF*, ::Class_1_0C8F8589C8105F3E*))((::PBYTE)hIl2Cpp + CLASS_3_EB3A38E60C647F98_INVOKE_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::IAsyncResult* BeginInvoke(::Class_1_FF872820A2FF123B* a1, ::Class_1_0C8F8589C8105F3E* a2, ::Class_1_CFC41C1E202F76CF* a3, ::Class_1_0C8F8589C8105F3E* a4, ::System::AsyncCallback* a5, ::System::Object* a6)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::Class_1_FF872820A2FF123B*, ::Class_1_0C8F8589C8105F3E*, ::Class_1_CFC41C1E202F76CF*, ::Class_1_0C8F8589C8105F3E*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_3_EB3A38E60C647F98_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Void EndInvoke(::System::IAsyncResult* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + CLASS_3_EB3A38E60C647F98_ENDINVOKE_OFFSET))(this, a1);
	}
};
