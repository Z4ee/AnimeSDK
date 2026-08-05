#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_C9EAEB75332026AC.h"
#include "unitysdk/Class_3_5B503B74E510E6BC_Struct_2_FD8E1D4014EE315F.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_5B503B74E510E6BC_METHOD_3_7A199944DBBFDD7B_OFFSET UNITYSDK_OFFSET(0x16A26190)
#define CLASS_3_5B503B74E510E6BC__CTOR_OFFSET UNITYSDK_OFFSET(0x16A26180)

inline static constexpr unsigned int Class_3_5B503B74E510E6BC_TypeDefinitionIndex = 14786;

class Class_3_5B503B74E510E6BC : public ::Class_2_C9EAEB75332026AC
{
public:
	::System::Collections::Generic::List_1<::Class_3_5B503B74E510E6BC_Struct_2_FD8E1D4014EE315F>* Field_3_0; // 0x20
	::System::Byte Field_3_1; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5B503B74E510E6BC__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Class_3_5B503B74E510E6BC_Struct_2_FD8E1D4014EE315F>* Method_3_7A199944DBBFDD7B()
	{
		return ((::System::Collections::Generic::List_1<::Class_3_5B503B74E510E6BC_Struct_2_FD8E1D4014EE315F>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5B503B74E510E6BC_METHOD_3_7A199944DBBFDD7B_OFFSET))(this);
	}
};
