#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_F52539D238DC1365_1.h"
#include "unitysdk/System/Object.h"

class Class_2_7EA45D2647F35CDD;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_A3E3E32CD589AA73__CTOR_OFFSET UNITYSDK_OFFSET(0x169C42F0)

inline static constexpr unsigned int Class_1_A3E3E32CD589AA73_TypeDefinitionIndex = 75630;

class Class_1_A3E3E32CD589AA73 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Struct_2_F52539D238DC1365_1>* Field_1_0; // 0x10
	::Class_2_7EA45D2647F35CDD* Field_1_1; // 0x18

	::System::Void _ctor(::Class_2_7EA45D2647F35CDD* a1, ::System::Collections::Generic::List_1<::Struct_2_F52539D238DC1365_1>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_7EA45D2647F35CDD*, ::System::Collections::Generic::List_1<::Struct_2_F52539D238DC1365_1>*))((::PBYTE)hIl2Cpp + CLASS_1_A3E3E32CD589AA73__CTOR_OFFSET))(this, a1, a2);
	}
};
