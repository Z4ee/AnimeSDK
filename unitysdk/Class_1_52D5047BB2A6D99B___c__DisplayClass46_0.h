#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

class Class_1_6B160DE28C891EFB;
class Class_2_293C6AF513403273;
namespace System { class String; }

#define CLASS_1_52D5047BB2A6D99B___C__DISPLAYCLASS46_0__CTOR_OFFSET UNITYSDK_OFFSET(0xB8D6B70)
#define CLASS_1_52D5047BB2A6D99B___C__DISPLAYCLASS46_0__GETINSTANCE_B__0_OFFSET UNITYSDK_OFFSET(0xB8D7060)
#define CLASS_1_52D5047BB2A6D99B___C__DISPLAYCLASS46_0__GETINSTANCE_B__1_OFFSET UNITYSDK_OFFSET(0xB8D70B0)

inline static constexpr unsigned int Class_1_52D5047BB2A6D99B___c__DisplayClass46_0_TypeDefinitionIndex = 64583;

class Class_1_52D5047BB2A6D99B___c__DisplayClass46_0 : public ::System::Object
{
public:
	::System::String* name; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_52D5047BB2A6D99B___C__DISPLAYCLASS46_0__CTOR_OFFSET))(this);
	}

	::System::Boolean _GetInstance_b__0(::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::Class_2_293C6AF513403273*> e)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::Class_2_293C6AF513403273*>))((::PBYTE)hIl2Cpp + CLASS_1_52D5047BB2A6D99B___C__DISPLAYCLASS46_0__GETINSTANCE_B__0_OFFSET))(this, e);
	}

	::System::Boolean _GetInstance_b__1(::Class_1_6B160DE28C891EFB* e)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_6B160DE28C891EFB*))((::PBYTE)hIl2Cpp + CLASS_1_52D5047BB2A6D99B___C__DISPLAYCLASS46_0__GETINSTANCE_B__1_OFFSET))(this, e);
	}
};
