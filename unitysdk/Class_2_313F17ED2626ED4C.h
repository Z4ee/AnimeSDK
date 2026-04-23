#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_54897FD7051CEF6A.h"
#include "unitysdk/System/Nullable_1.h"

#define CLASS_2_313F17ED2626ED4C_GET_CREATORID_OFFSET UNITYSDK_OFFSET(0x17E63F60)
#define CLASS_2_313F17ED2626ED4C_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x17E63F40)
#define CLASS_2_313F17ED2626ED4C_SET_CREATORID_OFFSET UNITYSDK_OFFSET(0x17E63F70)
#define CLASS_2_313F17ED2626ED4C_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x17E63F50)
#define CLASS_2_313F17ED2626ED4C__CTOR_OFFSET UNITYSDK_OFFSET(0x17E63F10)

inline static constexpr unsigned int Class_2_313F17ED2626ED4C_TypeDefinitionIndex = 37938;

class Class_2_313F17ED2626ED4C : public ::Class_1_54897FD7051CEF6A
{
public:
	::System::Nullable_1<::System::Int32> _CreatorID_k__BackingField; // 0x18
	::System::Single _Value_k__BackingField; // 0x20

	::System::Void _ctor(::System::Single a1, ::System::Nullable_1<::System::Int32> a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Nullable_1<::System::Int32>))((::PBYTE)hIl2Cpp + CLASS_2_313F17ED2626ED4C__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Single get_Value()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_313F17ED2626ED4C_GET_VALUE_OFFSET))(this);
	}

	::System::Void set_Value(::System::Single value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_313F17ED2626ED4C_SET_VALUE_OFFSET))(this, value);
	}

	::System::Nullable_1<::System::Int32> get_CreatorID()
	{
		return ((::System::Nullable_1<::System::Int32>(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_313F17ED2626ED4C_GET_CREATORID_OFFSET))(this);
	}

	::System::Void set_CreatorID(::System::Nullable_1<::System::Int32> value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::System::Int32>))((::PBYTE)hIl2Cpp + CLASS_2_313F17ED2626ED4C_SET_CREATORID_OFFSET))(this, value);
	}
};
