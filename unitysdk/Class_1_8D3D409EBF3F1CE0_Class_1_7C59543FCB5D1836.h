#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7291C38274750BA2_3;
namespace RPG::Client::Promises { template <typename T> class Promise_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_8D3D409EBF3F1CE0_CLASS_1_7C59543FCB5D1836_GET_PROMISE_OFFSET UNITYSDK_OFFSET(0xBE57070)
#define CLASS_1_8D3D409EBF3F1CE0_CLASS_1_7C59543FCB5D1836_GET_QUERYLIST_OFFSET UNITYSDK_OFFSET(0xBE57050)
#define CLASS_1_8D3D409EBF3F1CE0_CLASS_1_7C59543FCB5D1836_SET_PROMISE_OFFSET UNITYSDK_OFFSET(0xBE57080)
#define CLASS_1_8D3D409EBF3F1CE0_CLASS_1_7C59543FCB5D1836_SET_QUERYLIST_OFFSET UNITYSDK_OFFSET(0xBE57060)
#define CLASS_1_8D3D409EBF3F1CE0_CLASS_1_7C59543FCB5D1836__CTOR_OFFSET UNITYSDK_OFFSET(0xBE568E0)

inline static constexpr unsigned int Class_1_8D3D409EBF3F1CE0_Class_1_7C59543FCB5D1836_TypeDefinitionIndex = 66746;

class Class_1_8D3D409EBF3F1CE0_Class_1_7C59543FCB5D1836 : public ::System::Object
{
public:
	::RPG::Client::Promises::Promise_1<::System::Collections::Generic::List_1<::Class_1_7291C38274750BA2_3*>*>* _Promise_k__BackingField; // 0x10
	::System::Collections::Generic::List_1<::Class_1_7291C38274750BA2_3*>* _QueryList_k__BackingField; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8D3D409EBF3F1CE0_CLASS_1_7C59543FCB5D1836__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Class_1_7291C38274750BA2_3*>* get_QueryList()
	{
		return ((::System::Collections::Generic::List_1<::Class_1_7291C38274750BA2_3*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8D3D409EBF3F1CE0_CLASS_1_7C59543FCB5D1836_GET_QUERYLIST_OFFSET))(this);
	}

	::System::Void set_QueryList(::System::Collections::Generic::List_1<::Class_1_7291C38274750BA2_3*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_7291C38274750BA2_3*>*))((::PBYTE)hIl2Cpp + CLASS_1_8D3D409EBF3F1CE0_CLASS_1_7C59543FCB5D1836_SET_QUERYLIST_OFFSET))(this, a1);
	}

	::RPG::Client::Promises::Promise_1<::System::Collections::Generic::List_1<::Class_1_7291C38274750BA2_3*>*>* get_Promise()
	{
		return ((::RPG::Client::Promises::Promise_1<::System::Collections::Generic::List_1<::Class_1_7291C38274750BA2_3*>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8D3D409EBF3F1CE0_CLASS_1_7C59543FCB5D1836_GET_PROMISE_OFFSET))(this);
	}

	::System::Void set_Promise(::RPG::Client::Promises::Promise_1<::System::Collections::Generic::List_1<::Class_1_7291C38274750BA2_3*>*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::Promises::Promise_1<::System::Collections::Generic::List_1<::Class_1_7291C38274750BA2_3*>*>*))((::PBYTE)hIl2Cpp + CLASS_1_8D3D409EBF3F1CE0_CLASS_1_7C59543FCB5D1836_SET_PROMISE_OFFSET))(this, a1);
	}
};
