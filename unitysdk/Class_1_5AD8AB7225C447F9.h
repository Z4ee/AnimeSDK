#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5AD8AB7225C447F9_BlobLabel.h"
#include "unitysdk/System/Object.h"

class Class_1_5AD8AB7225C447F9_Class_1_9843C9C3BF39A297;
namespace System::Collections::Generic { template <typename T1, typename T2> class SortedList_2; }
namespace System::Collections::Generic { template <typename T> class Stack_1; }

#define CLASS_1_5AD8AB7225C447F9_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1CB00700)
#define CLASS_1_5AD8AB7225C447F9_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1CB00BE0)
#define CLASS_1_5AD8AB7225C447F9_METHOD_1_0E0985FF5ECC14F7_OFFSET UNITYSDK_OFFSET(0x1CB00470)
#define CLASS_1_5AD8AB7225C447F9_METHOD_1_2E6946BE75101205_OFFSET UNITYSDK_OFFSET(0x1CB00140)
#define CLASS_1_5AD8AB7225C447F9_METHOD_1_63F65E35D6F2642F_OFFSET UNITYSDK_OFFSET(0x1CAFFFC0)
#define CLASS_1_5AD8AB7225C447F9_METHOD_1_DC239721EB25010C_OFFSET UNITYSDK_OFFSET(0x1CB002F0)
#define CLASS_1_5AD8AB7225C447F9_METHOD_1_F1B4DD8E53446553_OFFSET UNITYSDK_OFFSET(0x1CAFFD50)
#define CLASS_1_5AD8AB7225C447F9_METHOD_1_F8B73ECE7F883AC1_OFFSET UNITYSDK_OFFSET(0x1CB001A0)
#define CLASS_1_5AD8AB7225C447F9_METHOD_1_FB21470396A0C25B_1_OFFSET UNITYSDK_OFFSET(0x1CB00170)
#define CLASS_1_5AD8AB7225C447F9_METHOD_1_FB21470396A0C25B_OFFSET UNITYSDK_OFFSET(0x1CAFFF90)
#define CLASS_1_5AD8AB7225C447F9__CTOR_OFFSET UNITYSDK_OFFSET(0x1CB001F0)

inline static constexpr unsigned int Class_1_5AD8AB7225C447F9_TypeDefinitionIndex = 10351;

class Class_1_5AD8AB7225C447F9 : public ::System::Object
{
public:
	static ::Class_1_5AD8AB7225C447F9** StaticGet_EMLNOINPICJ()
	{
		return (::Class_1_5AD8AB7225C447F9**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5AD8AB7225C447F9_TypeDefinitionIndex)->GetStaticField(0x52FD0);
	}
	::System::Object* JGCBDJOOECG; // 0x10
	::System::Collections::Generic::SortedList_2<::System::Int32, ::System::Collections::Generic::Stack_1<::Class_1_5AD8AB7225C447F9_BlobLabel>*>* CBHEDBGKEIA; // 0x18
	::System::Collections::Generic::SortedList_2<::Class_1_5AD8AB7225C447F9_BlobLabel, ::Class_1_5AD8AB7225C447F9_Class_1_9843C9C3BF39A297*>* EHANLAGGIND; // 0x20
	::System::Int64 FAMBAAJIKDG; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5AD8AB7225C447F9__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::Stack_1<::Class_1_5AD8AB7225C447F9_BlobLabel>* Method_1_F1B4DD8E53446553(::System::Int32 a1)
	{
		return ((::System::Collections::Generic::Stack_1<::Class_1_5AD8AB7225C447F9_BlobLabel>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_5AD8AB7225C447F9_METHOD_1_F1B4DD8E53446553_OFFSET))(this, a1);
	}

	::Class_1_5AD8AB7225C447F9_BlobLabel Method_1_FB21470396A0C25B(::System::Int32 a1)
	{
		return ((::Class_1_5AD8AB7225C447F9_BlobLabel(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_5AD8AB7225C447F9_METHOD_1_FB21470396A0C25B_OFFSET))(this, a1);
	}

	::Class_1_5AD8AB7225C447F9_Class_1_9843C9C3BF39A297* Method_1_63F65E35D6F2642F(::System::Int32 a1)
	{
		return ((::Class_1_5AD8AB7225C447F9_Class_1_9843C9C3BF39A297*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_5AD8AB7225C447F9_METHOD_1_63F65E35D6F2642F_OFFSET))(this, a1);
	}

	::System::Void Method_1_2E6946BE75101205(::System::Int32 a1, ::Class_1_5AD8AB7225C447F9_BlobLabel a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::Class_1_5AD8AB7225C447F9_BlobLabel))((::PBYTE)hIl2Cpp + CLASS_1_5AD8AB7225C447F9_METHOD_1_2E6946BE75101205_OFFSET))(this, a1, a2);
	}

	::Class_1_5AD8AB7225C447F9_BlobLabel Method_1_FB21470396A0C25B_1(::System::Int32 a1)
	{
		return ((::Class_1_5AD8AB7225C447F9_BlobLabel(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_5AD8AB7225C447F9_METHOD_1_FB21470396A0C25B_1_OFFSET))(this, a1);
	}

	static ::Class_1_5AD8AB7225C447F9* Method_1_F8B73ECE7F883AC1()
	{
		return ((::Class_1_5AD8AB7225C447F9*(*)())((::PBYTE)hIl2Cpp + CLASS_1_5AD8AB7225C447F9_METHOD_1_F8B73ECE7F883AC1_OFFSET))();
	}

	::System::Byte* Method_1_DC239721EB25010C(::System::Int64 a1)
	{
		return ((::System::Byte*(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + CLASS_1_5AD8AB7225C447F9_METHOD_1_DC239721EB25010C_OFFSET))(this, a1);
	}

	::System::Void Method_1_0E0985FF5ECC14F7(::Class_1_5AD8AB7225C447F9_BlobLabel a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5AD8AB7225C447F9_BlobLabel))((::PBYTE)hIl2Cpp + CLASS_1_5AD8AB7225C447F9_METHOD_1_0E0985FF5ECC14F7_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5AD8AB7225C447F9_DISPOSE_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5AD8AB7225C447F9_FINALIZE_OFFSET))(this);
	}
};
