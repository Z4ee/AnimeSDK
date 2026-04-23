#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_1B7044A592B17773_8;
namespace System { template <typename T> class Predicate_1; }

#define CLASS_3_79E0DC8295557BAC___C__DISPLAYCLASS1_0__CTOR_OFFSET UNITYSDK_OFFSET(0xD346C00)
#define CLASS_3_79E0DC8295557BAC___C__DISPLAYCLASS1_0__SETDEFAULTCONTENTID_B__0_OFFSET UNITYSDK_OFFSET(0xD347680)

inline static constexpr unsigned int Class_3_79E0DC8295557BAC___c__DisplayClass1_0_TypeDefinitionIndex = 68400;

class Class_3_79E0DC8295557BAC___c__DisplayClass1_0 : public ::System::Object
{
public:
	::System::Predicate_1<::Class_1_1B7044A592B17773_8*>* __9__0; // 0x10
	::System::UInt32 defaultContentID; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_79E0DC8295557BAC___C__DISPLAYCLASS1_0__CTOR_OFFSET))(this);
	}

	::System::Boolean _SetDefaultContentID_b__0(::Class_1_1B7044A592B17773_8* x)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_1B7044A592B17773_8*))((::PBYTE)hIl2Cpp + CLASS_3_79E0DC8295557BAC___C__DISPLAYCLASS1_0__SETDEFAULTCONTENTID_B__0_OFFSET))(this, x);
	}
};
