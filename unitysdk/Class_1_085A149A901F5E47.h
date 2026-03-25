#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_604;
class Class_1_933C07741192A471;
namespace RPG::Client::Promises { template <typename T> class IPromise_1; }
namespace RPG::Client::Promises { template <typename T> class Promise_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }

#define CLASS_1_085A149A901F5E47_GET_ISSTOPPED_OFFSET UNITYSDK_OFFSET(0x10BE9AB0)
#define CLASS_1_085A149A901F5E47_METHOD_1_30B62F5CDB9079BD_OFFSET UNITYSDK_OFFSET(0x10BE9C70)
#define CLASS_1_085A149A901F5E47_METHOD_1_899EC372DEC6EBDF_OFFSET UNITYSDK_OFFSET(0x10BE9D10)
#define CLASS_1_085A149A901F5E47_METHOD_1_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x10BE9C00)
#define CLASS_1_085A149A901F5E47_METHOD_1_D0F4F94C34321A18_OFFSET UNITYSDK_OFFSET(0x10BE9AD0)
#define CLASS_1_085A149A901F5E47_SET_ISSTOPPED_OFFSET UNITYSDK_OFFSET(0x10BE9AC0)
#define CLASS_1_085A149A901F5E47__CTOR_OFFSET UNITYSDK_OFFSET(0x10BE9ED0)
#define CLASS_1_085A149A901F5E47__TICK_B__11_0_OFFSET UNITYSDK_OFFSET(0x10BE9EE0)

inline static constexpr unsigned int Class_1_085A149A901F5E47_TypeDefinitionIndex = 63788;

class Class_1_085A149A901F5E47 : public ::System::Object
{
public:
	::System::Collections::Generic::Queue_1<::Class_0_16E4307DCC419505_604*>* Field_1_1; // 0x10
	::RPG::Client::Promises::Promise_1<::System::Boolean>* Field_1_4; // 0x18
	::Class_0_16E4307DCC419505_604* Field_1_2; // 0x20
	::Class_1_933C07741192A471* Field_1_0; // 0x28
	::System::Boolean _IsStopped_k__BackingField; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_085A149A901F5E47__CTOR_OFFSET))(this);
	}

	::System::Boolean get_IsStopped()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_085A149A901F5E47_GET_ISSTOPPED_OFFSET))(this);
	}

	::System::Void set_IsStopped(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_085A149A901F5E47_SET_ISSTOPPED_OFFSET))(this, value);
	}

	::RPG::Client::Promises::IPromise_1<::System::Boolean>* Method_1_D0F4F94C34321A18(::Class_1_933C07741192A471* a1, ::System::Collections::Generic::IEnumerable_1<::Class_0_16E4307DCC419505_604*>* a2)
	{
		return ((::RPG::Client::Promises::IPromise_1<::System::Boolean>*(*)(::PVOID, ::Class_1_933C07741192A471*, ::System::Collections::Generic::IEnumerable_1<::Class_0_16E4307DCC419505_604*>*))((::PBYTE)hIl2Cpp + CLASS_1_085A149A901F5E47_METHOD_1_D0F4F94C34321A18_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_085A149A901F5E47_METHOD_1_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_1_30B62F5CDB9079BD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_085A149A901F5E47_METHOD_1_30B62F5CDB9079BD_OFFSET))(this);
	}

	::System::Void Method_1_899EC372DEC6EBDF(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_085A149A901F5E47_METHOD_1_899EC372DEC6EBDF_OFFSET))(this, a1);
	}

	::System::Void _Tick_b__11_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_085A149A901F5E47__TICK_B__11_0_OFFSET))(this);
	}
};
