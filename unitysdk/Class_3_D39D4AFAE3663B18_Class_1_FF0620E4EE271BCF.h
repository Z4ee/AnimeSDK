#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_29439DBE2B63DCF3.h"
#include "unitysdk/Struct_2_FE9BD044832BC9C3.h"
#include "unitysdk/System/Object.h"

class Class_3_D39D4AFAE3663B18;
namespace Cysharp::Threading::Tasks { class UniTaskCompletionSource; }

#define CLASS_3_D39D4AFAE3663B18_CLASS_1_FF0620E4EE271BCF_METHOD_1_84F5936FB5227BFE_OFFSET UNITYSDK_OFFSET(0xDC78BD0)
#define CLASS_3_D39D4AFAE3663B18_CLASS_1_FF0620E4EE271BCF_METHOD_1_99D60EF23C904C6D_OFFSET UNITYSDK_OFFSET(0xDC78B50)
#define CLASS_3_D39D4AFAE3663B18_CLASS_1_FF0620E4EE271BCF_METHOD_1_A40475C44AA8CEAB_OFFSET UNITYSDK_OFFSET(0xDC78A30)
#define CLASS_3_D39D4AFAE3663B18_CLASS_1_FF0620E4EE271BCF__CTOR_OFFSET UNITYSDK_OFFSET(0xDC787A0)

inline static constexpr unsigned int Class_3_D39D4AFAE3663B18_Class_1_FF0620E4EE271BCF_TypeDefinitionIndex = 48322;

class Class_3_D39D4AFAE3663B18_Class_1_FF0620E4EE271BCF : public ::System::Object
{
public:
	::Struct_2_FE9BD044832BC9C3 Field_1_6; // 0x10
	::Struct_2_FE9BD044832BC9C3 Field_1_1; // 0x40
	::Cysharp::Threading::Tasks::UniTaskCompletionSource* Field_1_2; // 0x70
	::Struct_2_FE9BD044832BC9C3 Field_1_7; // 0x78
	::Struct_2_FE9BD044832BC9C3 Field_1_0; // 0xA8
	::System::Boolean Field_1_3; // 0xD8

	::System::Void _ctor(::Struct_2_29439DBE2B63DCF3& a1, ::Class_3_D39D4AFAE3663B18* a2, ::Cysharp::Threading::Tasks::UniTaskCompletionSource* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&, ::Class_3_D39D4AFAE3663B18*, ::Cysharp::Threading::Tasks::UniTaskCompletionSource*))((::PBYTE)hIl2Cpp + CLASS_3_D39D4AFAE3663B18_CLASS_1_FF0620E4EE271BCF__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_A40475C44AA8CEAB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D39D4AFAE3663B18_CLASS_1_FF0620E4EE271BCF_METHOD_1_A40475C44AA8CEAB_OFFSET))(this);
	}

	::System::Void Method_1_99D60EF23C904C6D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D39D4AFAE3663B18_CLASS_1_FF0620E4EE271BCF_METHOD_1_99D60EF23C904C6D_OFFSET))(this);
	}

	::System::Void Method_1_84F5936FB5227BFE(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_D39D4AFAE3663B18_CLASS_1_FF0620E4EE271BCF_METHOD_1_84F5936FB5227BFE_OFFSET))(this, a1);
	}
};
