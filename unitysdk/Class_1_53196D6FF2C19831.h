#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_53196D6FF2C19831_Struct_2_BBD456EBC9087BC2_7.h"
#include "unitysdk/System/Object.h"

class Class_1_43BD383C98B4C0C5_165;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_53196D6FF2C19831__CTOR_OFFSET UNITYSDK_OFFSET(0x18B32B30)

inline static constexpr unsigned int Class_1_53196D6FF2C19831_TypeDefinitionIndex = 65412;

class Class_1_53196D6FF2C19831 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_53196D6FF2C19831_Struct_2_BBD456EBC9087BC2_7>* Field_1_0; // 0x10
	::System::Collections::Generic::List_1<::Class_1_43BD383C98B4C0C5_165*>* Field_1_1; // 0x18
	::System::Single Field_1_2; // 0x20
	::System::Int32 Field_1_3; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_53196D6FF2C19831__CTOR_OFFSET))(this);
	}
};
