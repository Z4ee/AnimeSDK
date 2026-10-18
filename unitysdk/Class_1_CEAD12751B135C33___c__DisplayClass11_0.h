#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_08228315FBA10BA4_1;
class Class_1_9D181CBD7BFDBFD7;
class Class_1_CEAD12751B135C33;
class Class_1_DD57899CB8704013;
namespace RPG::Client::Promises { template <typename T> class IPromise_1; }

#define CLASS_1_CEAD12751B135C33___C__DISPLAYCLASS11_0__CTOR_OFFSET UNITYSDK_OFFSET(0xB90DE20)
#define CLASS_1_CEAD12751B135C33___C__DISPLAYCLASS11_0__SUBMITORDER_B__0_OFFSET UNITYSDK_OFFSET(0xB90F790)

inline static constexpr unsigned int Class_1_CEAD12751B135C33___c__DisplayClass11_0_TypeDefinitionIndex = 80249;

class Class_1_CEAD12751B135C33___c__DisplayClass11_0 : public ::System::Object
{
public:
	::Class_1_CEAD12751B135C33* __4__this; // 0x10
	::Class_1_DD57899CB8704013* productStats; // 0x18
	::System::UInt32 orderID; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CEAD12751B135C33___C__DISPLAYCLASS11_0__CTOR_OFFSET))(this);
	}

	::RPG::Client::Promises::IPromise_1<::Class_1_08228315FBA10BA4_1*>* _SubmitOrder_b__0(::Class_1_9D181CBD7BFDBFD7* a1)
	{
		return ((::RPG::Client::Promises::IPromise_1<::Class_1_08228315FBA10BA4_1*>*(*)(::PVOID, ::Class_1_9D181CBD7BFDBFD7*))((::PBYTE)hIl2Cpp + CLASS_1_CEAD12751B135C33___C__DISPLAYCLASS11_0__SUBMITORDER_B__0_OFFSET))(this, a1);
	}
};
