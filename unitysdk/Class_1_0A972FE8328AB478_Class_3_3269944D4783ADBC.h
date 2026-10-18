#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_5A70B04B36C288E4.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System::Collections::Immutable { template <typename T> class IImmutableSet_1; }

#define CLASS_1_0A972FE8328AB478_CLASS_3_3269944D4783ADBC_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0xB4B11F0)
#define CLASS_1_0A972FE8328AB478_CLASS_3_3269944D4783ADBC_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0xB4B1230)
#define CLASS_1_0A972FE8328AB478_CLASS_3_3269944D4783ADBC_INVOKE_OFFSET UNITYSDK_OFFSET(0xB4AFC90)
#define CLASS_1_0A972FE8328AB478_CLASS_3_3269944D4783ADBC__CTOR_OFFSET UNITYSDK_OFFSET(0xB4B1100)

inline static constexpr unsigned int Class_1_0A972FE8328AB478_Class_3_3269944D4783ADBC_TypeDefinitionIndex = 79458;

class Class_1_0A972FE8328AB478_Class_3_3269944D4783ADBC : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_1_0A972FE8328AB478_CLASS_3_3269944D4783ADBC__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Invoke(::System::Collections::Immutable::IImmutableSet_1<::Struct_2_5A70B04B36C288E4>* a1, ::System::Collections::Immutable::IImmutableSet_1<::Struct_2_5A70B04B36C288E4>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Immutable::IImmutableSet_1<::Struct_2_5A70B04B36C288E4>*, ::System::Collections::Immutable::IImmutableSet_1<::Struct_2_5A70B04B36C288E4>*))((::PBYTE)hIl2Cpp + CLASS_1_0A972FE8328AB478_CLASS_3_3269944D4783ADBC_INVOKE_OFFSET))(this, a1, a2);
	}

	::System::IAsyncResult* BeginInvoke(::System::Collections::Immutable::IImmutableSet_1<::Struct_2_5A70B04B36C288E4>* a1, ::System::Collections::Immutable::IImmutableSet_1<::Struct_2_5A70B04B36C288E4>* a2, ::System::AsyncCallback* a3, ::System::Object* a4)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::System::Collections::Immutable::IImmutableSet_1<::Struct_2_5A70B04B36C288E4>*, ::System::Collections::Immutable::IImmutableSet_1<::Struct_2_5A70B04B36C288E4>*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_0A972FE8328AB478_CLASS_3_3269944D4783ADBC_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void EndInvoke(::System::IAsyncResult* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + CLASS_1_0A972FE8328AB478_CLASS_3_3269944D4783ADBC_ENDINVOKE_OFFSET))(this, a1);
	}
};
