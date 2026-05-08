#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_C4F720DE4FCB69E6_Enum_3_ADACC7DF2BF629B6.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/Foundation/ViewObject/BaseViewObjectComponent_1.h"
#include "unitysdk/Foundation/ViewObject/Subsystem/GroupStateChangeListenEntry.h"

class Class_1_3BC6FFBFA6077E08;
class Class_3_07AAFA6F7F79BEB3;
class Class_3_30235BB967CBDA73_2;
class Class_3_DC08402B6B015D0F;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_C4F720DE4FCB69E6_METHOD_2_05235FB3471F9F27_OFFSET UNITYSDK_OFFSET(0x128864D0)
#define CLASS_2_C4F720DE4FCB69E6_METHOD_2_0730C606445351F4_1_OFFSET UNITYSDK_OFFSET(0x12887380)
#define CLASS_2_C4F720DE4FCB69E6_METHOD_2_0730C606445351F4_OFFSET UNITYSDK_OFFSET(0x128870F0)
#define CLASS_2_C4F720DE4FCB69E6_METHOD_2_24F2F2155F96138F_OFFSET UNITYSDK_OFFSET(0x12886910)
#define CLASS_2_C4F720DE4FCB69E6_METHOD_2_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x12888500)
#define CLASS_2_C4F720DE4FCB69E6_METHOD_2_5983FBEDBD9B6833_OFFSET UNITYSDK_OFFSET(0x12887630)
#define CLASS_2_C4F720DE4FCB69E6_METHOD_2_832295EC279E5994_1_OFFSET UNITYSDK_OFFSET(0x12887620)
#define CLASS_2_C4F720DE4FCB69E6_METHOD_2_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x12887610)
#define CLASS_2_C4F720DE4FCB69E6_METHOD_2_AEEAC3E3FC92548B_OFFSET UNITYSDK_OFFSET(0x128863C0)
#define CLASS_2_C4F720DE4FCB69E6_METHOD_2_BBA49FAB086F388D_OFFSET UNITYSDK_OFFSET(0x12885FB0)
#define CLASS_2_C4F720DE4FCB69E6_METHOD_2_D20F0346E07E9C37_OFFSET UNITYSDK_OFFSET(0x12888550)
#define CLASS_2_C4F720DE4FCB69E6_METHOD_2_FE4FFF99CBDC5C59_OFFSET UNITYSDK_OFFSET(0x12888460)
#define CLASS_2_C4F720DE4FCB69E6_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x12885F60)
#define CLASS_2_C4F720DE4FCB69E6_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x12886180)
#define CLASS_2_C4F720DE4FCB69E6__CTOR_OFFSET UNITYSDK_OFFSET(0x128862D0)

inline static constexpr unsigned int Class_2_C4F720DE4FCB69E6_TypeDefinitionIndex = 42316;

class Class_2_C4F720DE4FCB69E6 : public ::Foundation::ViewObject::BaseViewObjectComponent_1<::Class_2_C4F720DE4FCB69E6*>
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* Field_2_1; // 0x20
	::System::Collections::Generic::List_1<::Foundation::ViewObject::Subsystem::GroupStateChangeListenEntry>* Field_2_2; // 0x28
	::System::Collections::Generic::List_1<::Class_1_3BC6FFBFA6077E08*>* Field_2_3; // 0x30
	::Class_2_C4F720DE4FCB69E6_Enum_3_ADACC7DF2BF629B6 Field_2_0; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C4F720DE4FCB69E6__CTOR_OFFSET))(this);
	}

	::System::Void OnDisable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C4F720DE4FCB69E6_ONDISABLE_OFFSET))(this);
	}

	::System::Void OnRecycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C4F720DE4FCB69E6_ONRECYCLE_OFFSET))(this);
	}

	::System::Boolean Method_2_AEEAC3E3FC92548B(::System::String* a1, ::System::Int32& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Int32&))((::PBYTE)hIl2Cpp + CLASS_2_C4F720DE4FCB69E6_METHOD_2_AEEAC3E3FC92548B_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_BBA49FAB086F388D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C4F720DE4FCB69E6_METHOD_2_BBA49FAB086F388D_OFFSET))(this);
	}

	::System::Void Method_2_05235FB3471F9F27(::Class_1_3BC6FFBFA6077E08* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_3BC6FFBFA6077E08*))((::PBYTE)hIl2Cpp + CLASS_2_C4F720DE4FCB69E6_METHOD_2_05235FB3471F9F27_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_24F2F2155F96138F(::System::String* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_C4F720DE4FCB69E6_METHOD_2_24F2F2155F96138F_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_0730C606445351F4(::Class_3_30235BB967CBDA73_2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_30235BB967CBDA73_2*))((::PBYTE)hIl2Cpp + CLASS_2_C4F720DE4FCB69E6_METHOD_2_0730C606445351F4_OFFSET))(this, a1);
	}

	::System::Void Method_2_0730C606445351F4_1(::Class_3_07AAFA6F7F79BEB3* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_07AAFA6F7F79BEB3*))((::PBYTE)hIl2Cpp + CLASS_2_C4F720DE4FCB69E6_METHOD_2_0730C606445351F4_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C4F720DE4FCB69E6_METHOD_2_832295EC279E5994_OFFSET))(this);
	}

	::System::Void Method_2_832295EC279E5994_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C4F720DE4FCB69E6_METHOD_2_832295EC279E5994_1_OFFSET))(this);
	}

	::System::Void Method_2_5983FBEDBD9B6833(::System::Collections::Generic::IList_1<::Class_3_DC08402B6B015D0F*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::Class_3_DC08402B6B015D0F*>*))((::PBYTE)hIl2Cpp + CLASS_2_C4F720DE4FCB69E6_METHOD_2_5983FBEDBD9B6833_OFFSET))(this, a1);
	}

	::Cysharp::Threading::Tasks::UniTask Method_2_FE4FFF99CBDC5C59()
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C4F720DE4FCB69E6_METHOD_2_FE4FFF99CBDC5C59_OFFSET))(this);
	}

	::System::Boolean Method_2_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C4F720DE4FCB69E6_METHOD_2_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Void Method_2_D20F0346E07E9C37(::Class_1_3BC6FFBFA6077E08* a1, ::System::Int32 a2, ::System::UInt32 a3, ::System::String* a4, ::System::Int32 a5)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_3BC6FFBFA6077E08*, ::System::Int32, ::System::UInt32, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_C4F720DE4FCB69E6_METHOD_2_D20F0346E07E9C37_OFFSET))(this, a1, a2, a3, a4, a5);
	}
};
