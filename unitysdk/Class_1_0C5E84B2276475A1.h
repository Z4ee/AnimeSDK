#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_5_B435EF21ED19656E_Struct_2_1EDF73368A7D903B.h"
#include "unitysdk/System/Object.h"

class Class_3_025FF4981524A424_2;
class Class_3_4EE04B418903C4E1_95;
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_0C5E84B2276475A1__CTOR_OFFSET UNITYSDK_OFFSET(0x160C9B50)

inline static constexpr unsigned int Class_1_0C5E84B2276475A1_TypeDefinitionIndex = 40873;

class Class_1_0C5E84B2276475A1 : public ::System::Object
{
public:
	::System::Action_1<::Class_3_4EE04B418903C4E1_95*>* Field_1_3; // 0x10
	::System::Action_1<::Class_3_025FF4981524A424_2*>* Field_1_4; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* Field_1_2; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::Class_5_B435EF21ED19656E_Struct_2_1EDF73368A7D903B>*>* Field_1_1; // 0x28
	::System::Int32 Field_1_5; // 0x30
	::System::Int32 Field_1_0; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0C5E84B2276475A1__CTOR_OFFSET))(this);
	}
};
