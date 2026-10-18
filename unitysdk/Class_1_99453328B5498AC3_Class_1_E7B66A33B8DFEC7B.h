#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_99453328B5498AC3_FollowStartBatchState.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_552;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_99453328B5498AC3_CLASS_1_E7B66A33B8DFEC7B__CTOR_OFFSET UNITYSDK_OFFSET(0xBCC0F00)

inline static constexpr unsigned int Class_1_99453328B5498AC3_Class_1_E7B66A33B8DFEC7B_TypeDefinitionIndex = 53513;

class Class_1_99453328B5498AC3_Class_1_E7B66A33B8DFEC7B : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_552*>* JDPIEDNMGBP; // 0x10
	::Class_1_99453328B5498AC3_FollowStartBatchState MEPFOEEGBEA; // 0x18
	::System::Single NMHHBMEHDIK; // 0x1C
	::System::Single HLMHCCCJFBA; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_99453328B5498AC3_CLASS_1_E7B66A33B8DFEC7B__CTOR_OFFSET))(this);
	}
};
