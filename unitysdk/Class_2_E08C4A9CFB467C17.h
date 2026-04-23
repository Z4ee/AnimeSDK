#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_43BD383C98B4C0C5_100.h"
#include "unitysdk/Struct_2_23A3535C3AD26D5F.h"
#include "unitysdk/System/Nullable_1.h"

class Class_0_16E4307DCC419505_309;
class Class_1_4D2DA7CD2E59DEF1;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class SortedSet_1; }
namespace System::Threading { class Thread; }

#define CLASS_2_E08C4A9CFB467C17_METHOD_2_1B5EA57073D93292_OFFSET UNITYSDK_OFFSET(0x11773320)
#define CLASS_2_E08C4A9CFB467C17_METHOD_2_2AADBECF6EA7766C_OFFSET UNITYSDK_OFFSET(0x11772A70)
#define CLASS_2_E08C4A9CFB467C17_METHOD_2_2F82B9B0DCC1692F_OFFSET UNITYSDK_OFFSET(0x11772770)
#define CLASS_2_E08C4A9CFB467C17_METHOD_2_367B9590522079D1_OFFSET UNITYSDK_OFFSET(0x11772420)
#define CLASS_2_E08C4A9CFB467C17_METHOD_2_5022DB1DC5AA8CB4_OFFSET UNITYSDK_OFFSET(0x117739F0)
#define CLASS_2_E08C4A9CFB467C17_METHOD_2_62A86C71F921C8D5_OFFSET UNITYSDK_OFFSET(0x117737F0)
#define CLASS_2_E08C4A9CFB467C17_METHOD_2_735EE20B25F86BF4_OFFSET UNITYSDK_OFFSET(0x117723D0)
#define CLASS_2_E08C4A9CFB467C17_METHOD_2_87FCDF93B445EB7E_OFFSET UNITYSDK_OFFSET(0x11773840)
#define CLASS_2_E08C4A9CFB467C17_METHOD_2_BB8BB3DD382BB6A2_OFFSET UNITYSDK_OFFSET(0x11773620)
#define CLASS_2_E08C4A9CFB467C17_METHOD_2_BBA874825C7E21EB_1_OFFSET UNITYSDK_OFFSET(0x11773770)
#define CLASS_2_E08C4A9CFB467C17_METHOD_2_BBA874825C7E21EB_OFFSET UNITYSDK_OFFSET(0x117736F0)
#define CLASS_2_E08C4A9CFB467C17_METHOD_2_DF452AE1DF6D1110_OFFSET UNITYSDK_OFFSET(0x11773500)
#define CLASS_2_E08C4A9CFB467C17__CTOR_OFFSET UNITYSDK_OFFSET(0x11772210)

inline static constexpr unsigned int Class_2_E08C4A9CFB467C17_TypeDefinitionIndex = 45571;

class Class_2_E08C4A9CFB467C17 : public ::Class_1_43BD383C98B4C0C5_100
{
public:
	::System::Collections::Generic::List_1<::Class_1_4D2DA7CD2E59DEF1*>* Field_2_2; // 0x10
	::System::Collections::Generic::HashSet_1<::Class_1_4D2DA7CD2E59DEF1*>* Field_2_0; // 0x18
	::System::Threading::Thread* Field_2_6; // 0x20
	::System::Collections::Generic::Dictionary_2<::Struct_2_23A3535C3AD26D5F, ::Class_1_4D2DA7CD2E59DEF1*>* Field_2_5; // 0x28
	::System::Collections::Generic::SortedSet_1<::Class_1_4D2DA7CD2E59DEF1*>* Field_2_1; // 0x30
	::System::Single Field_2_3; // 0x38
	::System::Single Field_2_4; // 0x3C
	::System::Boolean Field_2_7; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E08C4A9CFB467C17__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_735EE20B25F86BF4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E08C4A9CFB467C17_METHOD_2_735EE20B25F86BF4_OFFSET))(this);
	}

	::System::Boolean Method_2_2F82B9B0DCC1692F(::Struct_2_23A3535C3AD26D5F a1, ::Struct_2_23A3535C3AD26D5F a2, ::System::Single a3, ::System::Single a4, ::Class_0_16E4307DCC419505_309* a5)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_23A3535C3AD26D5F, ::Struct_2_23A3535C3AD26D5F, ::System::Single, ::System::Single, ::Class_0_16E4307DCC419505_309*))((::PBYTE)hIl2Cpp + CLASS_2_E08C4A9CFB467C17_METHOD_2_2F82B9B0DCC1692F_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Collections::Generic::IEnumerator_1<::System::Nullable_1<::System::Boolean>>* Method_2_DF452AE1DF6D1110(::Struct_2_23A3535C3AD26D5F a1, ::Struct_2_23A3535C3AD26D5F a2, ::System::Single a3, ::System::Single a4, ::Class_0_16E4307DCC419505_309* a5)
	{
		return ((::System::Collections::Generic::IEnumerator_1<::System::Nullable_1<::System::Boolean>>*(*)(::PVOID, ::Struct_2_23A3535C3AD26D5F, ::Struct_2_23A3535C3AD26D5F, ::System::Single, ::System::Single, ::Class_0_16E4307DCC419505_309*))((::PBYTE)hIl2Cpp + CLASS_2_E08C4A9CFB467C17_METHOD_2_DF452AE1DF6D1110_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Boolean Method_2_2AADBECF6EA7766C(::Struct_2_23A3535C3AD26D5F a1, ::Struct_2_23A3535C3AD26D5F a2, ::System::Single a3, ::System::Single a4, ::Class_0_16E4307DCC419505_309* a5)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_23A3535C3AD26D5F, ::Struct_2_23A3535C3AD26D5F, ::System::Single, ::System::Single, ::Class_0_16E4307DCC419505_309*))((::PBYTE)hIl2Cpp + CLASS_2_E08C4A9CFB467C17_METHOD_2_2AADBECF6EA7766C_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_2_367B9590522079D1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E08C4A9CFB467C17_METHOD_2_367B9590522079D1_OFFSET))(this);
	}

	::Class_1_4D2DA7CD2E59DEF1* Method_2_1B5EA57073D93292(::Struct_2_23A3535C3AD26D5F a1)
	{
		return ((::Class_1_4D2DA7CD2E59DEF1*(*)(::PVOID, ::Struct_2_23A3535C3AD26D5F))((::PBYTE)hIl2Cpp + CLASS_2_E08C4A9CFB467C17_METHOD_2_1B5EA57073D93292_OFFSET))(this, a1);
	}

	::System::Single Method_2_BB8BB3DD382BB6A2(::Class_1_4D2DA7CD2E59DEF1* a1, ::Class_1_4D2DA7CD2E59DEF1* a2)
	{
		return ((::System::Single(*)(::PVOID, ::Class_1_4D2DA7CD2E59DEF1*, ::Class_1_4D2DA7CD2E59DEF1*))((::PBYTE)hIl2Cpp + CLASS_2_E08C4A9CFB467C17_METHOD_2_BB8BB3DD382BB6A2_OFFSET))(this, a1, a2);
	}

	::System::Single Method_2_BBA874825C7E21EB(::Class_1_4D2DA7CD2E59DEF1* a1, ::Class_1_4D2DA7CD2E59DEF1* a2)
	{
		return ((::System::Single(*)(::PVOID, ::Class_1_4D2DA7CD2E59DEF1*, ::Class_1_4D2DA7CD2E59DEF1*))((::PBYTE)hIl2Cpp + CLASS_2_E08C4A9CFB467C17_METHOD_2_BBA874825C7E21EB_OFFSET))(this, a1, a2);
	}

	::System::Single Method_2_BBA874825C7E21EB_1(::Class_1_4D2DA7CD2E59DEF1* a1, ::Class_1_4D2DA7CD2E59DEF1* a2)
	{
		return ((::System::Single(*)(::PVOID, ::Class_1_4D2DA7CD2E59DEF1*, ::Class_1_4D2DA7CD2E59DEF1*))((::PBYTE)hIl2Cpp + CLASS_2_E08C4A9CFB467C17_METHOD_2_BBA874825C7E21EB_1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_62A86C71F921C8D5(::Class_1_4D2DA7CD2E59DEF1* a1, ::Class_0_16E4307DCC419505_309* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_4D2DA7CD2E59DEF1*, ::Class_0_16E4307DCC419505_309*))((::PBYTE)hIl2Cpp + CLASS_2_E08C4A9CFB467C17_METHOD_2_62A86C71F921C8D5_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_87FCDF93B445EB7E(::Class_1_4D2DA7CD2E59DEF1* a1, ::Class_1_4D2DA7CD2E59DEF1* a2, ::Class_1_4D2DA7CD2E59DEF1* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_4D2DA7CD2E59DEF1*, ::Class_1_4D2DA7CD2E59DEF1*, ::Class_1_4D2DA7CD2E59DEF1*))((::PBYTE)hIl2Cpp + CLASS_2_E08C4A9CFB467C17_METHOD_2_87FCDF93B445EB7E_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_5022DB1DC5AA8CB4(::Class_1_4D2DA7CD2E59DEF1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_4D2DA7CD2E59DEF1*))((::PBYTE)hIl2Cpp + CLASS_2_E08C4A9CFB467C17_METHOD_2_5022DB1DC5AA8CB4_OFFSET))(this, a1);
	}
};
