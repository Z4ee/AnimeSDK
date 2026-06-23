#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_52F82E04F7FEE529.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/Struct_2_29439DBE2B63DCF3.h"

class Class_3_B537A0AA78803363;
class Class_3_DCB7F8B839F0C44B_4;
template <typename T> class Class_4_B51FB35349ACD175;
template <typename T> class Class_4_F91115D9A1F02F5F;

#define CLASS_3_6E53196D8412FA30_METHOD_3_84B92802FDAFF6C8_OFFSET UNITYSDK_OFFSET(0x13FC44C0)
#define CLASS_3_6E53196D8412FA30_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x13FC4BF0)
#define CLASS_3_6E53196D8412FA30_METHOD_3_F4D4194FB86E4F25_OFFSET UNITYSDK_OFFSET(0x13FC4780)
#define CLASS_3_6E53196D8412FA30__CTOR_OFFSET UNITYSDK_OFFSET(0x13FC4970)

inline static constexpr unsigned int Class_3_6E53196D8412FA30_TypeDefinitionIndex = 66191;

class Class_3_6E53196D8412FA30 : public ::Class_2_52F82E04F7FEE529
{
public:
	::Class_4_B51FB35349ACD175<::MoleMole::EntityHandle>* Field_3_3; // 0x18
	::Class_4_F91115D9A1F02F5F<::System::Int32>* Field_3_1; // 0x20
	::Class_3_B537A0AA78803363* Field_3_6; // 0x28
	::Class_4_B51FB35349ACD175<::Foundation::ViewObject::ViewObjectHandle>* Field_3_2; // 0x30
	::Class_3_DCB7F8B839F0C44B_4* Field_3_0; // 0x38
	::Class_3_B537A0AA78803363* Field_3_5; // 0x40
	::Class_3_B537A0AA78803363* Field_3_4; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6E53196D8412FA30__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_84B92802FDAFF6C8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6E53196D8412FA30_METHOD_3_84B92802FDAFF6C8_OFFSET))(this);
	}

	::System::Void Method_3_F4D4194FB86E4F25(::Struct_2_29439DBE2B63DCF3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_3_6E53196D8412FA30_METHOD_3_F4D4194FB86E4F25_OFFSET))(this, a1);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6E53196D8412FA30_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}
};
