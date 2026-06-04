#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

class Class_1_0C8F8589C8105F3E;
class Class_1_70697F531F566942;
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_3_2ABCF3406BC373A4_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x18B827D0)
#define CLASS_3_2ABCF3406BC373A4_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x18B82860)
#define CLASS_3_2ABCF3406BC373A4_INVOKE_OFFSET UNITYSDK_OFFSET(0x18B827A0)
#define CLASS_3_2ABCF3406BC373A4__CTOR_OFFSET UNITYSDK_OFFSET(0x18B82730)

inline static constexpr unsigned int Class_3_2ABCF3406BC373A4_TypeDefinitionIndex = 34314;

class Class_3_2ABCF3406BC373A4 : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_3_2ABCF3406BC373A4__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Invoke(::System::UInt32 a1, ::Class_1_70697F531F566942* a2, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* a3, ::Class_1_0C8F8589C8105F3E* a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Class_1_70697F531F566942*, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>*, ::Class_1_0C8F8589C8105F3E*))((::PBYTE)hIl2Cpp + CLASS_3_2ABCF3406BC373A4_INVOKE_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::IAsyncResult* BeginInvoke(::System::UInt32 a1, ::Class_1_70697F531F566942* a2, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* a3, ::Class_1_0C8F8589C8105F3E* a4, ::System::AsyncCallback* a5, ::System::Object* a6)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::System::UInt32, ::Class_1_70697F531F566942*, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>*, ::Class_1_0C8F8589C8105F3E*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_3_2ABCF3406BC373A4_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Void EndInvoke(::System::IAsyncResult* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + CLASS_3_2ABCF3406BC373A4_ENDINVOKE_OFFSET))(this, a1);
	}
};
