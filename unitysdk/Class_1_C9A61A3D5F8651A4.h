#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_EF860E4BE665C11B;
class Class_3_67D706E7FA9802D7;
class Class_3_DB4CE4A742A69D50_5;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_1_C9A61A3D5F8651A4_METHOD_1_A5D821D1458998A7_OFFSET UNITYSDK_OFFSET(0x14E424F0)
#define CLASS_1_C9A61A3D5F8651A4_METHOD_1_DB8E8E75B685B975_OFFSET UNITYSDK_OFFSET(0x14E42DA0)
#define CLASS_1_C9A61A3D5F8651A4_METHOD_1_F5E011FAC512A7AF_OFFSET UNITYSDK_OFFSET(0x14E41EB0)
#define CLASS_1_C9A61A3D5F8651A4__CTOR_OFFSET UNITYSDK_OFFSET(0x14E417F0)

inline static constexpr unsigned int Class_1_C9A61A3D5F8651A4_TypeDefinitionIndex = 63744;

class Class_1_C9A61A3D5F8651A4 : public ::System::Object
{
public:
	::System::Collections::Generic::HashSet_1<::System::UInt32>* Field_1_2; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_EF860E4BE665C11B*>* Field_1_4; // 0x18
	::System::Collections::Generic::HashSet_1<::System::UInt32>* Field_1_3; // 0x20
	::System::Collections::Generic::HashSet_1<::System::UInt32>* Field_1_0; // 0x28
	::System::Collections::Generic::HashSet_1<::System::UInt32>* Field_1_1; // 0x30

	::System::Void _ctor(::Class_3_DB4CE4A742A69D50_5* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_DB4CE4A742A69D50_5*))((::PBYTE)hIl2Cpp + CLASS_1_C9A61A3D5F8651A4__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_F5E011FAC512A7AF(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_C9A61A3D5F8651A4_METHOD_1_F5E011FAC512A7AF_OFFSET))(this, a1);
	}

	::System::Void Method_1_A5D821D1458998A7(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_C9A61A3D5F8651A4_METHOD_1_A5D821D1458998A7_OFFSET))(this, a1);
	}

	::System::Void Method_1_DB8E8E75B685B975(::Class_3_67D706E7FA9802D7* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_67D706E7FA9802D7*))((::PBYTE)hIl2Cpp + CLASS_1_C9A61A3D5F8651A4_METHOD_1_DB8E8E75B685B975_OFFSET))(this, a1);
	}
};
