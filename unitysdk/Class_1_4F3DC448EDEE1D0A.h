#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_4F3DC448EDEE1D0A_Struct_2_A04296399100074C.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_1_E3019CE6003C7D3C;
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_4F3DC448EDEE1D0A_DISPOSE_OFFSET UNITYSDK_OFFSET(0x13802C60)
#define CLASS_1_4F3DC448EDEE1D0A_METHOD_1_09ABBA5088B6E51D_OFFSET UNITYSDK_OFFSET(0x13803180)
#define CLASS_1_4F3DC448EDEE1D0A_METHOD_1_43EE3FCF0FBC04F6_OFFSET UNITYSDK_OFFSET(0x13803460)
#define CLASS_1_4F3DC448EDEE1D0A_METHOD_1_5022DB1DC5AA8CB4_OFFSET UNITYSDK_OFFSET(0x138030C0)
#define CLASS_1_4F3DC448EDEE1D0A_METHOD_1_C8D77F6D0E7B5D14_OFFSET UNITYSDK_OFFSET(0x13802E70)
#define CLASS_1_4F3DC448EDEE1D0A__CTOR_OFFSET UNITYSDK_OFFSET(0x138030B0)

inline static constexpr unsigned int Class_1_4F3DC448EDEE1D0A_TypeDefinitionIndex = 40795;

class Class_1_4F3DC448EDEE1D0A : public ::System::Object
{
public:
	::Class_1_E3019CE6003C7D3C* Field_1_2; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::Class_1_4F3DC448EDEE1D0A_Struct_2_A04296399100074C>*>* Field_1_0; // 0x18
	::System::Collections::Generic::HashSet_1<::System::Int32>* Field_1_1; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4F3DC448EDEE1D0A__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4F3DC448EDEE1D0A_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_C8D77F6D0E7B5D14(::System::Int32 a1, ::Il2CppArray<::System::ValueTuple_2<::System::String*, ::System::Func_2<::System::Threading::CancellationToken, ::Cysharp::Threading::Tasks::UniTask>*>>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::Il2CppArray<::System::ValueTuple_2<::System::String*, ::System::Func_2<::System::Threading::CancellationToken, ::Cysharp::Threading::Tasks::UniTask>*>>*))((::PBYTE)hIl2Cpp + CLASS_1_4F3DC448EDEE1D0A_METHOD_1_C8D77F6D0E7B5D14_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_5022DB1DC5AA8CB4(::Class_1_E3019CE6003C7D3C* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E3019CE6003C7D3C*))((::PBYTE)hIl2Cpp + CLASS_1_4F3DC448EDEE1D0A_METHOD_1_5022DB1DC5AA8CB4_OFFSET))(this, a1);
	}

	::System::Void Method_1_09ABBA5088B6E51D(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_4F3DC448EDEE1D0A_METHOD_1_09ABBA5088B6E51D_OFFSET))(this, a1);
	}

	::System::Void Method_1_43EE3FCF0FBC04F6(::System::Action_1<::System::Int32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_1_4F3DC448EDEE1D0A_METHOD_1_43EE3FCF0FBC04F6_OFFSET))(this, a1);
	}
};
