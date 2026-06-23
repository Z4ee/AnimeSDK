#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ButtonPressType.h"
#include "unitysdk/System/ValueType.h"

#define STRUCT_2_131FDC5D5C391D5E_METHOD_2_41E471DE0C8AAFEC_OFFSET UNITYSDK_OFFSET(0x79BF80)
#define STRUCT_2_131FDC5D5C391D5E_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x79BEC0)
#define STRUCT_2_131FDC5D5C391D5E_METHOD_2_CF9E586C3656F23F_OFFSET UNITYSDK_OFFSET(0x79BF10)

inline static constexpr unsigned int Struct_2_131FDC5D5C391D5E_TypeDefinitionIndex = 43643;

struct alignas(1) Struct_2_131FDC5D5C391D5E
{
	::System::Boolean Field_2_0; // 0x10
	::System::Boolean Field_2_1; // 0x11
	::System::Boolean Field_2_2; // 0x12

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_131FDC5D5C391D5E_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_CF9E586C3656F23F(::System::Boolean a1, ::MoleMole::ButtonPressType a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::MoleMole::ButtonPressType))((::PBYTE)hIl2Cpp + STRUCT_2_131FDC5D5C391D5E_METHOD_2_CF9E586C3656F23F_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_41E471DE0C8AAFEC(::MoleMole::ButtonPressType a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::ButtonPressType))((::PBYTE)hIl2Cpp + STRUCT_2_131FDC5D5C391D5E_METHOD_2_41E471DE0C8AAFEC_OFFSET))(this, a1);
	}
};
