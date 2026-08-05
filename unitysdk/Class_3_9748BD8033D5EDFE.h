#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_C9EAEB75332026AC.h"
#include "unitysdk/Class_3_9748BD8033D5EDFE_Struct_2_BBD456EBC9087BC2.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_9748BD8033D5EDFE_METHOD_3_105027724C406FD2_OFFSET UNITYSDK_OFFSET(0x14BCFF70)
#define CLASS_3_9748BD8033D5EDFE__CTOR_OFFSET UNITYSDK_OFFSET(0x14BCFF60)

inline static constexpr unsigned int Class_3_9748BD8033D5EDFE_TypeDefinitionIndex = 12147;

class Class_3_9748BD8033D5EDFE : public ::Class_2_C9EAEB75332026AC
{
public:
	::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Class_3_9748BD8033D5EDFE_Struct_2_BBD456EBC9087BC2>*>* Field_3_0; // 0x20
	::System::Byte Field_3_1; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9748BD8033D5EDFE__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Class_3_9748BD8033D5EDFE_Struct_2_BBD456EBC9087BC2>*>* Method_3_105027724C406FD2()
	{
		return ((::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Class_3_9748BD8033D5EDFE_Struct_2_BBD456EBC9087BC2>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9748BD8033D5EDFE_METHOD_3_105027724C406FD2_OFFSET))(this);
	}
};
