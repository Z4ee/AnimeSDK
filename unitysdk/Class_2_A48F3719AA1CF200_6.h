#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class IList_1; }

#define CLASS_2_A48F3719AA1CF200_6_METHOD_2_EBE2AAB1D76E90D3_OFFSET UNITYSDK_OFFSET(0x12134600)
#define CLASS_2_A48F3719AA1CF200_6__CTOR_OFFSET UNITYSDK_OFFSET(0x12134610)

inline static constexpr unsigned int Class_2_A48F3719AA1CF200_6_TypeDefinitionIndex = 50535;

class Class_2_A48F3719AA1CF200_6 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A48F3719AA1CF200_6__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::IList_1<::Class_1_5F51D4049EA87B7B*>* Method_2_EBE2AAB1D76E90D3()
	{
		return ((::System::Collections::Generic::IList_1<::Class_1_5F51D4049EA87B7B*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A48F3719AA1CF200_6_METHOD_2_EBE2AAB1D76E90D3_OFFSET))(this);
	}
};
