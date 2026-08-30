#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_53196D6FF2C19831_Struct_2_BBD456EBC9087BC2_10.h"
#include "unitysdk/System/Object.h"

class Class_1_43BD383C98B4C0C5_179;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_53196D6FF2C19831__CTOR_OFFSET UNITYSDK_OFFSET(0x19FA66C0)

inline static constexpr unsigned int Class_1_53196D6FF2C19831_TypeDefinitionIndex = 68426;

class Class_1_53196D6FF2C19831 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_53196D6FF2C19831_Struct_2_BBD456EBC9087BC2_10>* GBNCJLDBLIN; // 0x10
	::System::Collections::Generic::List_1<::Class_1_43BD383C98B4C0C5_179*>* LMGGAKNONIB; // 0x18
	::System::Single BLJMHKKFOJG; // 0x20
	::System::Int32 GMDBHJKEAEI; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_53196D6FF2C19831__CTOR_OFFSET))(this);
	}
};
