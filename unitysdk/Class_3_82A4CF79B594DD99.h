#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

class Class_1_0C8F8589C8105F3E;
class Class_1_CFC41C1E202F76CF;
class Class_1_FF872820A2FF123B;
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define CLASS_3_82A4CF79B594DD99_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x18B38F60)
#define CLASS_3_82A4CF79B594DD99_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x18B38FA0)
#define CLASS_3_82A4CF79B594DD99_INVOKE_OFFSET UNITYSDK_OFFSET(0x18B38F40)
#define CLASS_3_82A4CF79B594DD99__CTOR_OFFSET UNITYSDK_OFFSET(0x18B38E50)

inline static constexpr unsigned int Class_3_82A4CF79B594DD99_TypeDefinitionIndex = 34299;

class Class_3_82A4CF79B594DD99 : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_3_82A4CF79B594DD99__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Invoke(::Class_1_FF872820A2FF123B* a1, ::Class_1_CFC41C1E202F76CF* a2, ::Class_1_0C8F8589C8105F3E* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_FF872820A2FF123B*, ::Class_1_CFC41C1E202F76CF*, ::Class_1_0C8F8589C8105F3E*))((::PBYTE)hIl2Cpp + CLASS_3_82A4CF79B594DD99_INVOKE_OFFSET))(this, a1, a2, a3);
	}

	::System::IAsyncResult* BeginInvoke(::Class_1_FF872820A2FF123B* a1, ::Class_1_CFC41C1E202F76CF* a2, ::Class_1_0C8F8589C8105F3E* a3, ::System::AsyncCallback* a4, ::System::Object* a5)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::Class_1_FF872820A2FF123B*, ::Class_1_CFC41C1E202F76CF*, ::Class_1_0C8F8589C8105F3E*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_3_82A4CF79B594DD99_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void EndInvoke(::System::IAsyncResult* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + CLASS_3_82A4CF79B594DD99_ENDINVOKE_OFFSET))(this, a1);
	}
};
