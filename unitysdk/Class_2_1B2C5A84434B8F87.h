#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_290F18DE0106AF33.h"
#include "unitysdk/System/Nullable_1.h"

#define CLASS_2_1B2C5A84434B8F87_GET_CREATORID_OFFSET UNITYSDK_OFFSET(0x1CDF90D0)
#define CLASS_2_1B2C5A84434B8F87_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x1CDF90B0)
#define CLASS_2_1B2C5A84434B8F87_SET_CREATORID_OFFSET UNITYSDK_OFFSET(0x1CDF90E0)
#define CLASS_2_1B2C5A84434B8F87_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x1CDF90C0)
#define CLASS_2_1B2C5A84434B8F87__CTOR_OFFSET UNITYSDK_OFFSET(0x1CDF8F70)

inline static constexpr unsigned int Class_2_1B2C5A84434B8F87_TypeDefinitionIndex = 40356;

class Class_2_1B2C5A84434B8F87 : public ::Class_1_290F18DE0106AF33
{
public:
	::System::Nullable_1<::System::Int32> _CreatorID_k__BackingField; // 0x18
	::System::Single _Value_k__BackingField; // 0x20

	::System::Void _ctor(::System::Single a1, ::System::Nullable_1<::System::Int32> a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Nullable_1<::System::Int32>))((::PBYTE)hIl2Cpp + CLASS_2_1B2C5A84434B8F87__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Single get_Value()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1B2C5A84434B8F87_GET_VALUE_OFFSET))(this);
	}

	::System::Void set_Value(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_1B2C5A84434B8F87_SET_VALUE_OFFSET))(this, a1);
	}

	::System::Nullable_1<::System::Int32> get_CreatorID()
	{
		return ((::System::Nullable_1<::System::Int32>(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1B2C5A84434B8F87_GET_CREATORID_OFFSET))(this);
	}

	::System::Void set_CreatorID(::System::Nullable_1<::System::Int32> a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::System::Int32>))((::PBYTE)hIl2Cpp + CLASS_2_1B2C5A84434B8F87_SET_CREATORID_OFFSET))(this, a1);
	}
};
