#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_11;
class Class_1_2181504E881DDEE4;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_A7165A858F83C5DB_CLASS_1_365CA8B6C8A161ED_METHOD_1_278516176191B221_OFFSET UNITYSDK_OFFSET(0xDE9C4D0)
#define CLASS_2_A7165A858F83C5DB_CLASS_1_365CA8B6C8A161ED__CTOR_OFFSET UNITYSDK_OFFSET(0xDE9C4C0)

inline static constexpr unsigned int Class_2_A7165A858F83C5DB_Class_1_365CA8B6C8A161ED_TypeDefinitionIndex = 50093;

class Class_2_A7165A858F83C5DB_Class_1_365CA8B6C8A161ED : public ::System::Object
{
public:
	::System::Action* Field_1_1; // 0x10
	::System::Collections::Generic::List_1<::Class_1_2181504E881DDEE4*>* Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A7165A858F83C5DB_CLASS_1_365CA8B6C8A161ED__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_278516176191B221(::Class_0_16E4307DCC419505_11* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_11*))((::PBYTE)hIl2Cpp + CLASS_2_A7165A858F83C5DB_CLASS_1_365CA8B6C8A161ED_METHOD_1_278516176191B221_OFFSET))(this, a1);
	}
};
