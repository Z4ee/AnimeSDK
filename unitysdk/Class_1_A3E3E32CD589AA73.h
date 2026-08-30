#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_F52539D238DC1365_1.h"
#include "unitysdk/System/Object.h"

class Class_2_7EA45D2647F35CDD;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_A3E3E32CD589AA73__CTOR_OFFSET UNITYSDK_OFFSET(0x15812880)

inline static constexpr unsigned int Class_1_A3E3E32CD589AA73_TypeDefinitionIndex = 79263;

class Class_1_A3E3E32CD589AA73 : public ::System::Object
{
public:
	::Class_2_7EA45D2647F35CDD* ELIMDKMMGBO; // 0x10
	::System::Collections::Generic::List_1<::Struct_2_F52539D238DC1365_1>* LCAPAJEHGAI; // 0x18

	::System::Void _ctor(::Class_2_7EA45D2647F35CDD* a1, ::System::Collections::Generic::List_1<::Struct_2_F52539D238DC1365_1>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_7EA45D2647F35CDD*, ::System::Collections::Generic::List_1<::Struct_2_F52539D238DC1365_1>*))((::PBYTE)hIl2Cpp + CLASS_1_A3E3E32CD589AA73__CTOR_OFFSET))(this, a1, a2);
	}
};
