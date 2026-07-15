#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_7AAAC9B25C84E6E4.h"

namespace System { class String; }

#define CLASS_2_5EDDF4105BC5B7B4_GET_DELTAHP_X1000_OFFSET UNITYSDK_OFFSET(0x16AA6850)
#define CLASS_2_5EDDF4105BC5B7B4_METHOD_2_322A16B644C16228_OFFSET UNITYSDK_OFFSET(0x16AA67A0)
#define CLASS_2_5EDDF4105BC5B7B4_SET_DELTAHP_X1000_OFFSET UNITYSDK_OFFSET(0x16AA6860)
#define CLASS_2_5EDDF4105BC5B7B4__CTOR_OFFSET UNITYSDK_OFFSET(0x16AA6830)

inline static constexpr unsigned int Class_2_5EDDF4105BC5B7B4_TypeDefinitionIndex = 56365;

class Class_2_5EDDF4105BC5B7B4 : public ::Class_1_7AAAC9B25C84E6E4
{
public:
	::System::Int32 _DeltaHp_x1000_k__BackingField; // 0x10

	::System::Void _ctor(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_5EDDF4105BC5B7B4__CTOR_OFFSET))(this, a1);
	}

	static ::System::String* Method_2_322A16B644C16228(::System::Int32 a1)
	{
		return ((::System::String*(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_5EDDF4105BC5B7B4_METHOD_2_322A16B644C16228_OFFSET))(a1);
	}

	::System::Int32 get_DeltaHp_x1000()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5EDDF4105BC5B7B4_GET_DELTAHP_X1000_OFFSET))(this);
	}

	::System::Void set_DeltaHp_x1000(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_5EDDF4105BC5B7B4_SET_DELTAHP_X1000_OFFSET))(this, a1);
	}
};
