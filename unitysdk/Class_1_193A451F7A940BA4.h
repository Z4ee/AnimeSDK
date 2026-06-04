#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_019938BC9C50B169_1.h"
#include "unitysdk/Struct_2_019938BC9C50B169_2.h"
#include "unitysdk/System/Object.h"

class Class_1_6869ECCA5B46F302_2;
class Class_1_96BF5776DE2FE31B;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_193A451F7A940BA4_METHOD_1_08873F717ACBF329_OFFSET UNITYSDK_OFFSET(0xA66F2A0)
#define CLASS_1_193A451F7A940BA4_METHOD_1_1608B66EA33C52C0_OFFSET UNITYSDK_OFFSET(0xA66F250)
#define CLASS_1_193A451F7A940BA4_METHOD_1_4207E90804512D1E_OFFSET UNITYSDK_OFFSET(0xA66EEA0)
#define CLASS_1_193A451F7A940BA4_METHOD_1_51BBA01F511E6107_OFFSET UNITYSDK_OFFSET(0xA66EB20)
#define CLASS_1_193A451F7A940BA4_METHOD_1_54AB35B46BF1675F_OFFSET UNITYSDK_OFFSET(0xA66EF30)
#define CLASS_1_193A451F7A940BA4_METHOD_1_5F50FF039B90738B_OFFSET UNITYSDK_OFFSET(0xA66F100)
#define CLASS_1_193A451F7A940BA4_METHOD_1_847A61D99D3E7A39_OFFSET UNITYSDK_OFFSET(0xA66F190)
#define CLASS_1_193A451F7A940BA4_METHOD_1_A53669AFC2CAB8AE_OFFSET UNITYSDK_OFFSET(0xA66EFC0)
#define CLASS_1_193A451F7A940BA4_METHOD_1_C409EC373E6784B4_OFFSET UNITYSDK_OFFSET(0xA66F060)
#define CLASS_1_193A451F7A940BA4__CTOR_OFFSET UNITYSDK_OFFSET(0xA66EA30)

inline static constexpr unsigned int Class_1_193A451F7A940BA4_TypeDefinitionIndex = 58626;

class Class_1_193A451F7A940BA4 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::Struct_2_019938BC9C50B169_2, ::Class_1_96BF5776DE2FE31B*>* Field_1_0; // 0x10
	::Class_1_6869ECCA5B46F302_2* Field_1_1; // 0x18
	::System::Collections::Generic::Dictionary_2<::Struct_2_019938BC9C50B169_1, ::System::Collections::Generic::List_1<::Class_1_96BF5776DE2FE31B*>*>* Field_1_2; // 0x20

	::System::Void _ctor(::Class_1_6869ECCA5B46F302_2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_6869ECCA5B46F302_2*))((::PBYTE)hIl2Cpp + CLASS_1_193A451F7A940BA4__CTOR_OFFSET))(this, a1);
	}

	::System::Collections::Generic::IEnumerable_1<::Class_1_96BF5776DE2FE31B*>* Method_1_4207E90804512D1E()
	{
		return ((::System::Collections::Generic::IEnumerable_1<::Class_1_96BF5776DE2FE31B*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_193A451F7A940BA4_METHOD_1_4207E90804512D1E_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerable_1<::Class_1_96BF5776DE2FE31B*>* Method_1_54AB35B46BF1675F(::Struct_2_019938BC9C50B169_1 a1)
	{
		return ((::System::Collections::Generic::IEnumerable_1<::Class_1_96BF5776DE2FE31B*>*(*)(::PVOID, ::Struct_2_019938BC9C50B169_1))((::PBYTE)hIl2Cpp + CLASS_1_193A451F7A940BA4_METHOD_1_54AB35B46BF1675F_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_A53669AFC2CAB8AE(::Struct_2_019938BC9C50B169_2& a1, ::Class_1_96BF5776DE2FE31B*& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_019938BC9C50B169_2&, ::Class_1_96BF5776DE2FE31B*&))((::PBYTE)hIl2Cpp + CLASS_1_193A451F7A940BA4_METHOD_1_A53669AFC2CAB8AE_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_1_C409EC373E6784B4(::Struct_2_019938BC9C50B169_1& a1)
	{
		return ((::System::Int32(*)(::PVOID, ::Struct_2_019938BC9C50B169_1&))((::PBYTE)hIl2Cpp + CLASS_1_193A451F7A940BA4_METHOD_1_C409EC373E6784B4_OFFSET))(this, a1);
	}

	::System::Collections::Generic::IReadOnlyList_1<::Class_1_96BF5776DE2FE31B*>* Method_1_5F50FF039B90738B(::Struct_2_019938BC9C50B169_1& a1)
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::Class_1_96BF5776DE2FE31B*>*(*)(::PVOID, ::Struct_2_019938BC9C50B169_1&))((::PBYTE)hIl2Cpp + CLASS_1_193A451F7A940BA4_METHOD_1_5F50FF039B90738B_OFFSET))(this, a1);
	}

	::System::Void Method_1_51BBA01F511E6107()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_193A451F7A940BA4_METHOD_1_51BBA01F511E6107_OFFSET))(this);
	}

	::System::Boolean Method_1_847A61D99D3E7A39(::Struct_2_019938BC9C50B169_2& a1, ::Class_1_96BF5776DE2FE31B*& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_019938BC9C50B169_2&, ::Class_1_96BF5776DE2FE31B*&))((::PBYTE)hIl2Cpp + CLASS_1_193A451F7A940BA4_METHOD_1_847A61D99D3E7A39_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_1_1608B66EA33C52C0(::Struct_2_019938BC9C50B169_1& a1)
	{
		return ((::System::Int32(*)(::PVOID, ::Struct_2_019938BC9C50B169_1&))((::PBYTE)hIl2Cpp + CLASS_1_193A451F7A940BA4_METHOD_1_1608B66EA33C52C0_OFFSET))(this, a1);
	}

	::System::Collections::Generic::IReadOnlyList_1<::Class_1_96BF5776DE2FE31B*>* Method_1_08873F717ACBF329(::Struct_2_019938BC9C50B169_1& a1)
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::Class_1_96BF5776DE2FE31B*>*(*)(::PVOID, ::Struct_2_019938BC9C50B169_1&))((::PBYTE)hIl2Cpp + CLASS_1_193A451F7A940BA4_METHOD_1_08873F717ACBF329_OFFSET))(this, a1);
	}
};
