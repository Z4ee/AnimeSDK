#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_03687BAE461D2A08;
class Class_1_0534849F53467236;
class Class_1_730A101C592B37EC;
class Class_1_7807B2B04302CD7B_3;
class Class_3_A7F1CBF026E489C4;
class Class_3_A7F1CBF026E489C4_3;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_60C2C67C6C9FD40D_METHOD_1_10CE3AEE57BD55F1_OFFSET UNITYSDK_OFFSET(0x150D3F70)
#define CLASS_1_60C2C67C6C9FD40D_METHOD_1_283DA224BE06DA9F_OFFSET UNITYSDK_OFFSET(0x150D3B10)
#define CLASS_1_60C2C67C6C9FD40D_METHOD_1_2B4F361982534E13_OFFSET UNITYSDK_OFFSET(0x150D4770)
#define CLASS_1_60C2C67C6C9FD40D_METHOD_1_EE0137E8EED79B71_1_OFFSET UNITYSDK_OFFSET(0x150D4650)
#define CLASS_1_60C2C67C6C9FD40D_METHOD_1_EE0137E8EED79B71_2_OFFSET UNITYSDK_OFFSET(0x150D4D00)
#define CLASS_1_60C2C67C6C9FD40D_METHOD_1_EE0137E8EED79B71_OFFSET UNITYSDK_OFFSET(0x150D39F0)
#define CLASS_1_60C2C67C6C9FD40D__CTOR_OFFSET UNITYSDK_OFFSET(0x150D3800)

inline static constexpr unsigned int Class_1_60C2C67C6C9FD40D_TypeDefinitionIndex = 41322;

class Class_1_60C2C67C6C9FD40D : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_730A101C592B37EC*>* Field_1_1; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_7807B2B04302CD7B_3*>* Field_1_3; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_0534849F53467236*>* Field_1_2; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_03687BAE461D2A08*>* Field_1_0; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_60C2C67C6C9FD40D__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_EE0137E8EED79B71(::System::Int32 a1, ::Class_1_03687BAE461D2A08*& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::Class_1_03687BAE461D2A08*&))((::PBYTE)hIl2Cpp + CLASS_1_60C2C67C6C9FD40D_METHOD_1_EE0137E8EED79B71_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_283DA224BE06DA9F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_60C2C67C6C9FD40D_METHOD_1_283DA224BE06DA9F_OFFSET))(this);
	}

	::System::Void Method_1_10CE3AEE57BD55F1(::Class_3_A7F1CBF026E489C4_3* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_A7F1CBF026E489C4_3*))((::PBYTE)hIl2Cpp + CLASS_1_60C2C67C6C9FD40D_METHOD_1_10CE3AEE57BD55F1_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_EE0137E8EED79B71_1(::System::Int32 a1, ::Class_1_0534849F53467236*& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::Class_1_0534849F53467236*&))((::PBYTE)hIl2Cpp + CLASS_1_60C2C67C6C9FD40D_METHOD_1_EE0137E8EED79B71_1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_2B4F361982534E13(::Class_3_A7F1CBF026E489C4* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_A7F1CBF026E489C4*))((::PBYTE)hIl2Cpp + CLASS_1_60C2C67C6C9FD40D_METHOD_1_2B4F361982534E13_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_EE0137E8EED79B71_2(::System::Int32 a1, ::Class_1_7807B2B04302CD7B_3*& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::Class_1_7807B2B04302CD7B_3*&))((::PBYTE)hIl2Cpp + CLASS_1_60C2C67C6C9FD40D_METHOD_1_EE0137E8EED79B71_2_OFFSET))(this, a1, a2);
	}
};
