#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_1467;
class Class_0_16E4307DCC419505_1474;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_EC9B5CD490302054_METHOD_1_9BD5C37E5342DD57_OFFSET UNITYSDK_OFFSET(0xB599BC0)
#define CLASS_1_EC9B5CD490302054_METHOD_1_DC41317B0DC73C09_OFFSET UNITYSDK_OFFSET(0xB59A170)
#define CLASS_1_EC9B5CD490302054_METHOD_1_DC895FA58D58405E_OFFSET UNITYSDK_OFFSET(0xB59A0E0)
#define CLASS_1_EC9B5CD490302054__CTOR_OFFSET UNITYSDK_OFFSET(0xB59A720)

inline static constexpr unsigned int Class_1_EC9B5CD490302054_TypeDefinitionIndex = 79175;

class Class_1_EC9B5CD490302054 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_1467*>* EEMPAAFDLAP; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EC9B5CD490302054__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_9BD5C37E5342DD57(::Class_0_16E4307DCC419505_1467* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_1467*))((::PBYTE)hIl2Cpp + CLASS_1_EC9B5CD490302054_METHOD_1_9BD5C37E5342DD57_OFFSET))(this, a1);
	}

	::Class_0_16E4307DCC419505_1474* Method_1_DC895FA58D58405E()
	{
		return ((::Class_0_16E4307DCC419505_1474*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EC9B5CD490302054_METHOD_1_DC895FA58D58405E_OFFSET))(this);
	}

	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_0_16E4307DCC419505_1467*>* Method_1_DC41317B0DC73C09(::Il2CppArray<::Class_0_16E4307DCC419505_1467*>* a1)
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_0_16E4307DCC419505_1467*>*(*)(::Il2CppArray<::Class_0_16E4307DCC419505_1467*>*))((::PBYTE)hIl2Cpp + CLASS_1_EC9B5CD490302054_METHOD_1_DC41317B0DC73C09_OFFSET))(a1);
	}
};
