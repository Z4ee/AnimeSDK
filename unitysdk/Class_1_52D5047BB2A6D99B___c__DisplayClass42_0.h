#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

class Class_2_293C6AF513403273;
namespace System { class String; }

#define CLASS_1_52D5047BB2A6D99B___C__DISPLAYCLASS42_0__CTOR_OFFSET UNITYSDK_OFFSET(0x96E9A10)
#define CLASS_1_52D5047BB2A6D99B___C__DISPLAYCLASS42_0__GETASYNCOPERATION_B__0_OFFSET UNITYSDK_OFFSET(0x96EAAA0)

inline static constexpr unsigned int Class_1_52D5047BB2A6D99B___c__DisplayClass42_0_TypeDefinitionIndex = 72629;

class Class_1_52D5047BB2A6D99B___c__DisplayClass42_0 : public ::System::Object
{
public:
	::System::String* name; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_52D5047BB2A6D99B___C__DISPLAYCLASS42_0__CTOR_OFFSET))(this);
	}

	::System::Boolean _GetAsyncOperation_b__0(::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::Class_2_293C6AF513403273*> e)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::Class_2_293C6AF513403273*>))((::PBYTE)hIl2Cpp + CLASS_1_52D5047BB2A6D99B___C__DISPLAYCLASS42_0__GETASYNCOPERATION_B__0_OFFSET))(this, e);
	}
};
