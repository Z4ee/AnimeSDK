#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_7AAAC9B25C84E6E4.h"

namespace System { class String; }

#define CLASS_2_A4866D93FDECA0AD_GET_MODIFIERNAME_OFFSET UNITYSDK_OFFSET(0xB855220)
#define CLASS_2_A4866D93FDECA0AD_GET_MODIFIERTARGET_OFFSET UNITYSDK_OFFSET(0xB855240)
#define CLASS_2_A4866D93FDECA0AD_METHOD_2_B577D9A18287F15F_OFFSET UNITYSDK_OFFSET(0xB8550F0)
#define CLASS_2_A4866D93FDECA0AD_SET_MODIFIERNAME_OFFSET UNITYSDK_OFFSET(0xB855230)
#define CLASS_2_A4866D93FDECA0AD_SET_MODIFIERTARGET_OFFSET UNITYSDK_OFFSET(0xB855250)
#define CLASS_2_A4866D93FDECA0AD__CTOR_OFFSET UNITYSDK_OFFSET(0xB855190)

inline static constexpr unsigned int Class_2_A4866D93FDECA0AD_TypeDefinitionIndex = 59149;

class Class_2_A4866D93FDECA0AD : public ::Class_1_7AAAC9B25C84E6E4
{
public:
	::System::String* _ModifierName_k__BackingField; // 0x10
	::System::String* _ModifierTarget_k__BackingField; // 0x18

	::System::Void _ctor(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_A4866D93FDECA0AD__CTOR_OFFSET))(this, a1);
	}

	static ::System::String* Method_2_B577D9A18287F15F(::System::String* a1, ::System::String* a2)
	{
		return ((::System::String*(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_A4866D93FDECA0AD_METHOD_2_B577D9A18287F15F_OFFSET))(a1, a2);
	}

	::System::String* get_ModifierName()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A4866D93FDECA0AD_GET_MODIFIERNAME_OFFSET))(this);
	}

	::System::Void set_ModifierName(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_A4866D93FDECA0AD_SET_MODIFIERNAME_OFFSET))(this, a1);
	}

	::System::String* get_ModifierTarget()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A4866D93FDECA0AD_GET_MODIFIERTARGET_OFFSET))(this);
	}

	::System::Void set_ModifierTarget(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_A4866D93FDECA0AD_SET_MODIFIERTARGET_OFFSET))(this, a1);
	}
};
