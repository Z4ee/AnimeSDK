#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_919;
class Class_1_933C07741192A471;
namespace RPG::Client::Promises { template <typename T> class IPromise_1; }
namespace RPG::Client::Promises { template <typename T> class Promise_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }

#define CLASS_1_085A149A901F5E47_GET_ISSTOPPED_OFFSET UNITYSDK_OFFSET(0xBC826A0)
#define CLASS_1_085A149A901F5E47_METHOD_1_6F7271C62F1FE776_OFFSET UNITYSDK_OFFSET(0xBC82900)
#define CLASS_1_085A149A901F5E47_METHOD_1_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0xBC827F0)
#define CLASS_1_085A149A901F5E47_METHOD_1_97889423B3D78768_OFFSET UNITYSDK_OFFSET(0xBC82860)
#define CLASS_1_085A149A901F5E47_METHOD_1_D0F4F94C34321A18_OFFSET UNITYSDK_OFFSET(0xBC826C0)
#define CLASS_1_085A149A901F5E47_SET_ISSTOPPED_OFFSET UNITYSDK_OFFSET(0xBC826B0)
#define CLASS_1_085A149A901F5E47__CTOR_OFFSET UNITYSDK_OFFSET(0xBC82B30)
#define CLASS_1_085A149A901F5E47__TICK_B__11_0_OFFSET UNITYSDK_OFFSET(0xBC82B40)

inline static constexpr unsigned int Class_1_085A149A901F5E47_TypeDefinitionIndex = 78339;

class Class_1_085A149A901F5E47 : public ::System::Object
{
public:
	::System::Collections::Generic::Queue_1<::Class_0_16E4307DCC419505_919*>* OJFECHILFHG; // 0x10
	::Class_1_933C07741192A471* NIHJGJMOEGB; // 0x18
	::Class_0_16E4307DCC419505_919* MLAEBDBIGLD; // 0x20
	::RPG::Client::Promises::Promise_1<::System::Boolean>* HDKMCJLGOFI; // 0x28
	::System::Boolean _IsStopped_k__BackingField; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_085A149A901F5E47__CTOR_OFFSET))(this);
	}

	::System::Boolean get_IsStopped()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_085A149A901F5E47_GET_ISSTOPPED_OFFSET))(this);
	}

	::System::Void set_IsStopped(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_085A149A901F5E47_SET_ISSTOPPED_OFFSET))(this, a1);
	}

	::RPG::Client::Promises::IPromise_1<::System::Boolean>* Method_1_D0F4F94C34321A18(::Class_1_933C07741192A471* a1, ::System::Collections::Generic::IEnumerable_1<::Class_0_16E4307DCC419505_919*>* a2)
	{
		return ((::RPG::Client::Promises::IPromise_1<::System::Boolean>*(*)(::PVOID, ::Class_1_933C07741192A471*, ::System::Collections::Generic::IEnumerable_1<::Class_0_16E4307DCC419505_919*>*))((::PBYTE)hIl2Cpp + CLASS_1_085A149A901F5E47_METHOD_1_D0F4F94C34321A18_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_085A149A901F5E47_METHOD_1_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_1_97889423B3D78768()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_085A149A901F5E47_METHOD_1_97889423B3D78768_OFFSET))(this);
	}

	::System::Void Method_1_6F7271C62F1FE776(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_085A149A901F5E47_METHOD_1_6F7271C62F1FE776_OFFSET))(this, a1);
	}

	::System::Void _Tick_b__11_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_085A149A901F5E47__TICK_B__11_0_OFFSET))(this);
	}
};
