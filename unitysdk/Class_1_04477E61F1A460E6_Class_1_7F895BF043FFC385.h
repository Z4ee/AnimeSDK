#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_046D7E7D73E44996;
namespace RPG::Client::Promises { template <typename T> class Promise_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_04477E61F1A460E6_CLASS_1_7F895BF043FFC385_GET_PROMISE_OFFSET UNITYSDK_OFFSET(0xAA3F090)
#define CLASS_1_04477E61F1A460E6_CLASS_1_7F895BF043FFC385_GET_QUERYLIST_OFFSET UNITYSDK_OFFSET(0xAA3F070)
#define CLASS_1_04477E61F1A460E6_CLASS_1_7F895BF043FFC385_SET_PROMISE_OFFSET UNITYSDK_OFFSET(0xAA3F0A0)
#define CLASS_1_04477E61F1A460E6_CLASS_1_7F895BF043FFC385_SET_QUERYLIST_OFFSET UNITYSDK_OFFSET(0xAA3F080)
#define CLASS_1_04477E61F1A460E6_CLASS_1_7F895BF043FFC385__CTOR_OFFSET UNITYSDK_OFFSET(0xAA3E9D0)

inline static constexpr unsigned int Class_1_04477E61F1A460E6_Class_1_7F895BF043FFC385_TypeDefinitionIndex = 61462;

class Class_1_04477E61F1A460E6_Class_1_7F895BF043FFC385 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_046D7E7D73E44996*>* _QueryList_k__BackingField; // 0x10
	::RPG::Client::Promises::Promise_1<::System::Collections::Generic::List_1<::Class_1_046D7E7D73E44996*>*>* _Promise_k__BackingField; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_04477E61F1A460E6_CLASS_1_7F895BF043FFC385__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Class_1_046D7E7D73E44996*>* get_QueryList()
	{
		return ((::System::Collections::Generic::List_1<::Class_1_046D7E7D73E44996*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_04477E61F1A460E6_CLASS_1_7F895BF043FFC385_GET_QUERYLIST_OFFSET))(this);
	}

	::System::Void set_QueryList(::System::Collections::Generic::List_1<::Class_1_046D7E7D73E44996*>* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_046D7E7D73E44996*>*))((::PBYTE)hIl2Cpp + CLASS_1_04477E61F1A460E6_CLASS_1_7F895BF043FFC385_SET_QUERYLIST_OFFSET))(this, value);
	}

	::RPG::Client::Promises::Promise_1<::System::Collections::Generic::List_1<::Class_1_046D7E7D73E44996*>*>* get_Promise()
	{
		return ((::RPG::Client::Promises::Promise_1<::System::Collections::Generic::List_1<::Class_1_046D7E7D73E44996*>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_04477E61F1A460E6_CLASS_1_7F895BF043FFC385_GET_PROMISE_OFFSET))(this);
	}

	::System::Void set_Promise(::RPG::Client::Promises::Promise_1<::System::Collections::Generic::List_1<::Class_1_046D7E7D73E44996*>*>* value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::Promises::Promise_1<::System::Collections::Generic::List_1<::Class_1_046D7E7D73E44996*>*>*))((::PBYTE)hIl2Cpp + CLASS_1_04477E61F1A460E6_CLASS_1_7F895BF043FFC385_SET_PROMISE_OFFSET))(this, value);
	}
};
