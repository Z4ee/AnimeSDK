#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/SQLite/SQLiteOpenFlags.h"
#include "unitysdk/System/Object.h"

class Class_1_BB71217EB90C2935_Class_1_F47A22A7CA41A21A;
namespace SQLite { class SQLiteConnection; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_BB71217EB90C2935_DISPOSE_OFFSET UNITYSDK_OFFSET(0x132879E0)
#define CLASS_1_BB71217EB90C2935_METHOD_1_78727EAD8F885AEE_OFFSET UNITYSDK_OFFSET(0x13287A40)
#define CLASS_1_BB71217EB90C2935_METHOD_1_C3FB08A38AC3B65C_OFFSET UNITYSDK_OFFSET(0x13287BC0)
#define CLASS_1_BB71217EB90C2935__CTOR_OFFSET UNITYSDK_OFFSET(0x13287810)

inline static constexpr unsigned int Class_1_BB71217EB90C2935_TypeDefinitionIndex = 44288;

class Class_1_BB71217EB90C2935 : public ::System::Object
{
public:
	::SQLite::SQLiteConnection* Field_1_0; // 0x10

	::System::Void _ctor(::System::String* a1, ::SQLite::SQLiteOpenFlags a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::SQLite::SQLiteOpenFlags))((::PBYTE)hIl2Cpp + CLASS_1_BB71217EB90C2935__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BB71217EB90C2935_DISPOSE_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Class_1_BB71217EB90C2935_Class_1_F47A22A7CA41A21A*>* Method_1_78727EAD8F885AEE(::System::UInt64 a1)
	{
		return ((::System::Collections::Generic::List_1<::Class_1_BB71217EB90C2935_Class_1_F47A22A7CA41A21A*>*(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + CLASS_1_BB71217EB90C2935_METHOD_1_78727EAD8F885AEE_OFFSET))(this, a1);
	}

	::System::Void Method_1_C3FB08A38AC3B65C(::System::Collections::Generic::IEnumerable_1<::Class_1_BB71217EB90C2935_Class_1_F47A22A7CA41A21A*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::Class_1_BB71217EB90C2935_Class_1_F47A22A7CA41A21A*>*))((::PBYTE)hIl2Cpp + CLASS_1_BB71217EB90C2935_METHOD_1_C3FB08A38AC3B65C_OFFSET))(this, a1);
	}
};
