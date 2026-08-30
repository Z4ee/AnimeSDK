#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_413ABC1894817F1B.h"

namespace System { class Version; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_F97FE440D98CDCDB_METHOD_2_0D90FBA0C4C4A31C_OFFSET UNITYSDK_OFFSET(0x185ED310)
#define CLASS_2_F97FE440D98CDCDB_METHOD_2_50ACAD848A03DC2D_OFFSET UNITYSDK_OFFSET(0x185ED280)
#define CLASS_2_F97FE440D98CDCDB__CTOR_OFFSET UNITYSDK_OFFSET(0x185ED890)

inline static constexpr unsigned int Class_2_F97FE440D98CDCDB_TypeDefinitionIndex = 80867;

class Class_2_F97FE440D98CDCDB : public ::Class_1_413ABC1894817F1B
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F97FE440D98CDCDB__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_50ACAD848A03DC2D(::System::Collections::Generic::List_1<::System::Version*>* a1, ::Il2CppArray<::Il2CppArray<::System::Int32>*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Version*>*, ::Il2CppArray<::Il2CppArray<::System::Int32>*>*))((::PBYTE)hIl2Cpp + CLASS_2_F97FE440D98CDCDB_METHOD_2_50ACAD848A03DC2D_OFFSET))(this, a1, a2);
	}

	::Il2CppArray<::System::Int32>* Method_2_0D90FBA0C4C4A31C(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_F97FE440D98CDCDB_METHOD_2_0D90FBA0C4C4A31C_OFFSET))(this, a1, a2);
	}
};
