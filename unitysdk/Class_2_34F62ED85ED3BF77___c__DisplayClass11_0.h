#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_6C555725EE740F88;
class Class_2_D41426B74FA833B4;
namespace System { template <typename T> class Predicate_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_34F62ED85ED3BF77___C__DISPLAYCLASS11_0__CTOR_OFFSET UNITYSDK_OFFSET(0x15255F70)
#define CLASS_2_34F62ED85ED3BF77___C__DISPLAYCLASS11_0___DORELOADALL_B__0_OFFSET UNITYSDK_OFFSET(0x152563F0)

inline static constexpr unsigned int Class_2_34F62ED85ED3BF77___c__DisplayClass11_0_TypeDefinitionIndex = 71999;

class Class_2_34F62ED85ED3BF77___c__DisplayClass11_0 : public ::System::Object
{
public:
	::System::Predicate_1<::Class_2_D41426B74FA833B4*>* __9__0; // 0x10
	::System::Collections::Generic::List_1<::Class_1_6C555725EE740F88*>* dataList; // 0x18
	::System::Int32 i; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_34F62ED85ED3BF77___C__DISPLAYCLASS11_0__CTOR_OFFSET))(this);
	}

	::System::Boolean __DoReloadAll_b__0(::Class_2_D41426B74FA833B4* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_D41426B74FA833B4*))((::PBYTE)hIl2Cpp + CLASS_2_34F62ED85ED3BF77___C__DISPLAYCLASS11_0___DORELOADALL_B__0_OFFSET))(this, a1);
	}
};
