#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_59F097A1369BF5AE.h"
#include "unitysdk/System/Object.h"

class Class_2_542A772D07AFD4EA;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_B6BD64DF575CD84C__CTOR_OFFSET UNITYSDK_OFFSET(0x19461090)

inline static constexpr unsigned int Class_1_B6BD64DF575CD84C_TypeDefinitionIndex = 62217;

class Class_1_B6BD64DF575CD84C : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::String*>* Field_1_0; // 0x10
	::System::String* Field_1_2; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>* Field_1_1; // 0x20
	::Enum_3_59F097A1369BF5AE Field_1_3; // 0x28
	::System::Single Field_1_6; // 0x2C
	::System::Single Field_1_7; // 0x30

	::System::Void _ctor(::Class_2_542A772D07AFD4EA* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_542A772D07AFD4EA*))((::PBYTE)hIl2Cpp + CLASS_1_B6BD64DF575CD84C__CTOR_OFFSET))(this, a1);
	}
};
