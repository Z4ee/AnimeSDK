#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_D86F0E84B4529D28.h"
#include "unitysdk/System/Nullable_1.h"

#define CLASS_2_313F17ED2626ED4C_GET_CREATORID_OFFSET UNITYSDK_OFFSET(0x18E44570)
#define CLASS_2_313F17ED2626ED4C_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x18E44550)
#define CLASS_2_313F17ED2626ED4C_SET_CREATORID_OFFSET UNITYSDK_OFFSET(0x18E44580)
#define CLASS_2_313F17ED2626ED4C_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x18E44560)
#define CLASS_2_313F17ED2626ED4C__CTOR_OFFSET UNITYSDK_OFFSET(0x18E44520)

inline static constexpr unsigned int Class_2_313F17ED2626ED4C_TypeDefinitionIndex = 38675;

class Class_2_313F17ED2626ED4C : public ::Class_1_D86F0E84B4529D28
{
public:
	::System::Single _Value_k__BackingField; // 0x18
	::System::Nullable_1<::System::Int32> _CreatorID_k__BackingField; // 0x1C

	::System::Void _ctor(::System::Single a1, ::System::Nullable_1<::System::Int32> a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Nullable_1<::System::Int32>))((::PBYTE)hIl2Cpp + CLASS_2_313F17ED2626ED4C__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Single get_Value()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_313F17ED2626ED4C_GET_VALUE_OFFSET))(this);
	}

	::System::Void set_Value(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_313F17ED2626ED4C_SET_VALUE_OFFSET))(this, a1);
	}

	::System::Nullable_1<::System::Int32> get_CreatorID()
	{
		return ((::System::Nullable_1<::System::Int32>(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_313F17ED2626ED4C_GET_CREATORID_OFFSET))(this);
	}

	::System::Void set_CreatorID(::System::Nullable_1<::System::Int32> a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::System::Int32>))((::PBYTE)hIl2Cpp + CLASS_2_313F17ED2626ED4C_SET_CREATORID_OFFSET))(this, a1);
	}
};
