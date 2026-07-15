#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_7AAAC9B25C84E6E4.h"

namespace System { class String; }

#define CLASS_2_5DC409333800B026_GET_DAMAGECOUNTER_OFFSET UNITYSDK_OFFSET(0x1470D3C0)
#define CLASS_2_5DC409333800B026_GET_ISACTIVE_OFFSET UNITYSDK_OFFSET(0x1470D3E0)
#define CLASS_2_5DC409333800B026_GET_RATIO_OFFSET UNITYSDK_OFFSET(0x1470D400)
#define CLASS_2_5DC409333800B026_METHOD_2_94528F5E7FF6D047_OFFSET UNITYSDK_OFFSET(0x1470CFD0)
#define CLASS_2_5DC409333800B026_SET_DAMAGECOUNTER_OFFSET UNITYSDK_OFFSET(0x1470D3D0)
#define CLASS_2_5DC409333800B026_SET_ISACTIVE_OFFSET UNITYSDK_OFFSET(0x1470D3F0)
#define CLASS_2_5DC409333800B026_SET_RATIO_OFFSET UNITYSDK_OFFSET(0x1470D410)
#define CLASS_2_5DC409333800B026__CTOR_OFFSET UNITYSDK_OFFSET(0x1470D2D0)

inline static constexpr unsigned int Class_2_5DC409333800B026_TypeDefinitionIndex = 56361;

class Class_2_5DC409333800B026 : public ::Class_1_7AAAC9B25C84E6E4
{
public:
	::System::Boolean _IsActive_k__BackingField; // 0x10
	::System::UInt32 _DamageCounter_k__BackingField; // 0x14
	::System::Single _Ratio_k__BackingField; // 0x18

	::System::Void _ctor(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_5DC409333800B026__CTOR_OFFSET))(this, a1);
	}

	static ::System::String* Method_2_94528F5E7FF6D047(::System::UInt32 a1, ::System::Boolean a2, ::System::Single a3)
	{
		return ((::System::String*(*)(::System::UInt32, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_5DC409333800B026_METHOD_2_94528F5E7FF6D047_OFFSET))(a1, a2, a3);
	}

	::System::UInt32 get_DamageCounter()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5DC409333800B026_GET_DAMAGECOUNTER_OFFSET))(this);
	}

	::System::Void set_DamageCounter(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_5DC409333800B026_SET_DAMAGECOUNTER_OFFSET))(this, a1);
	}

	::System::Boolean get_IsActive()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5DC409333800B026_GET_ISACTIVE_OFFSET))(this);
	}

	::System::Void set_IsActive(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_5DC409333800B026_SET_ISACTIVE_OFFSET))(this, a1);
	}

	::System::Single get_Ratio()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5DC409333800B026_GET_RATIO_OFFSET))(this);
	}

	::System::Void set_Ratio(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_5DC409333800B026_SET_RATIO_OFFSET))(this, a1);
	}
};
