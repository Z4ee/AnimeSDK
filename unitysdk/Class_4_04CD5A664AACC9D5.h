#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_627DF5C40DDAA45B.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_4_04CD5A664AACC9D5_METHOD_4_832295EC279E5994_1_OFFSET UNITYSDK_OFFSET(0x14B76300)
#define CLASS_4_04CD5A664AACC9D5_METHOD_4_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x14B762F0)
#define CLASS_4_04CD5A664AACC9D5_ONENABLE_OFFSET UNITYSDK_OFFSET(0x14B75D40)
#define CLASS_4_04CD5A664AACC9D5_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x14B76130)
#define CLASS_4_04CD5A664AACC9D5__CTOR_OFFSET UNITYSDK_OFFSET(0x14B761D0)

inline static constexpr unsigned int Class_4_04CD5A664AACC9D5_TypeDefinitionIndex = 50235;

class Class_4_04CD5A664AACC9D5 : public ::Class_3_627DF5C40DDAA45B<::Class_4_04CD5A664AACC9D5*>
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* Field_4_0; // 0x30
	::System::Int32 Field_4_2; // 0x38
	::System::Int32 Field_4_1; // 0x3C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_04CD5A664AACC9D5__CTOR_OFFSET))(this);
	}

	::System::Void OnEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_04CD5A664AACC9D5_ONENABLE_OFFSET))(this);
	}

	::System::Void OnRecycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_04CD5A664AACC9D5_ONRECYCLE_OFFSET))(this);
	}

	::System::Void Method_4_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_04CD5A664AACC9D5_METHOD_4_832295EC279E5994_OFFSET))(this);
	}

	::System::Void Method_4_832295EC279E5994_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_04CD5A664AACC9D5_METHOD_4_832295EC279E5994_1_OFFSET))(this);
	}
};
