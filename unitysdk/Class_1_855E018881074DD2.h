#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_0348183E3473943B.h"
#include "unitysdk/System/Object.h"

class Class_1_0272D5A0C4F089B0;
class Class_1_38C460910E5AC181;
class Class_2_569DE47525C5FD32;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_855E018881074DD2__CTOR_OFFSET UNITYSDK_OFFSET(0x165F1300)

inline static constexpr unsigned int Class_1_855E018881074DD2_TypeDefinitionIndex = 28508;

class Class_1_855E018881074DD2 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* Field_1_2; // 0x10
	::System::Collections::Generic::List_1<::System::Int32>* Field_1_1; // 0x18
	::Class_1_0272D5A0C4F089B0* Field_1_6; // 0x20
	::System::Collections::Generic::Dictionary_2<::Struct_2_0348183E3473943B, ::System::Single>* Field_1_3; // 0x28
	::Class_2_569DE47525C5FD32* Field_1_0; // 0x30
	::System::Collections::Generic::Dictionary_2<::Struct_2_0348183E3473943B, ::Class_1_38C460910E5AC181*>* Field_1_4; // 0x38
	::System::Boolean Field_1_7; // 0x40
	::System::Int32 Field_1_5; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_855E018881074DD2__CTOR_OFFSET))(this);
	}
};
