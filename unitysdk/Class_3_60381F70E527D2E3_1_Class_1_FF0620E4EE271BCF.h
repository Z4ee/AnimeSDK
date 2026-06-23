#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_29439DBE2B63DCF3.h"
#include "unitysdk/Struct_2_FE9BD044832BC9C3.h"
#include "unitysdk/System/Object.h"

class Class_3_60381F70E527D2E3_1;
namespace Cysharp::Threading::Tasks { class UniTaskCompletionSource; }

#define CLASS_3_60381F70E527D2E3_1_CLASS_1_FF0620E4EE271BCF_METHOD_1_84F5936FB5227BFE_OFFSET UNITYSDK_OFFSET(0x15576730)
#define CLASS_3_60381F70E527D2E3_1_CLASS_1_FF0620E4EE271BCF_METHOD_1_99D60EF23C904C6D_OFFSET UNITYSDK_OFFSET(0x15576580)
#define CLASS_3_60381F70E527D2E3_1_CLASS_1_FF0620E4EE271BCF_METHOD_1_A40475C44AA8CEAB_OFFSET UNITYSDK_OFFSET(0x15576600)
#define CLASS_3_60381F70E527D2E3_1_CLASS_1_FF0620E4EE271BCF__CTOR_OFFSET UNITYSDK_OFFSET(0x155762E0)

inline static constexpr unsigned int Class_3_60381F70E527D2E3_1_Class_1_FF0620E4EE271BCF_TypeDefinitionIndex = 44043;

class Class_3_60381F70E527D2E3_1_Class_1_FF0620E4EE271BCF : public ::System::Object
{
public:
	::Struct_2_FE9BD044832BC9C3 Field_1_5; // 0x10
	::Struct_2_FE9BD044832BC9C3 Field_1_4; // 0x40
	::Struct_2_FE9BD044832BC9C3 Field_1_2; // 0x70
	::Struct_2_FE9BD044832BC9C3 Field_1_3; // 0xA0
	::Cysharp::Threading::Tasks::UniTaskCompletionSource* Field_1_1; // 0xD0
	::System::Boolean Field_1_0; // 0xD8

	::System::Void _ctor(::Struct_2_29439DBE2B63DCF3& a1, ::Class_3_60381F70E527D2E3_1* a2, ::Cysharp::Threading::Tasks::UniTaskCompletionSource* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&, ::Class_3_60381F70E527D2E3_1*, ::Cysharp::Threading::Tasks::UniTaskCompletionSource*))((::PBYTE)hIl2Cpp + CLASS_3_60381F70E527D2E3_1_CLASS_1_FF0620E4EE271BCF__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_99D60EF23C904C6D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_60381F70E527D2E3_1_CLASS_1_FF0620E4EE271BCF_METHOD_1_99D60EF23C904C6D_OFFSET))(this);
	}

	::System::Void Method_1_A40475C44AA8CEAB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_60381F70E527D2E3_1_CLASS_1_FF0620E4EE271BCF_METHOD_1_A40475C44AA8CEAB_OFFSET))(this);
	}

	::System::Void Method_1_84F5936FB5227BFE(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_60381F70E527D2E3_1_CLASS_1_FF0620E4EE271BCF_METHOD_1_84F5936FB5227BFE_OFFSET))(this, a1);
	}
};
