#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_2_3CC769D284A54927_1;
class Class_3_025FF4981524A424_129;
namespace System::Threading { class CancellationTokenSource; }

#define CLASS_2_3CC769D284A54927_1_CLASS_1_BA073E3C7FFC1CB2_METHOD_1_2EB9AC11D04A5D20_OFFSET UNITYSDK_OFFSET(0x16D01250)
#define CLASS_2_3CC769D284A54927_1_CLASS_1_BA073E3C7FFC1CB2__CTOR_OFFSET UNITYSDK_OFFSET(0x16D01240)

inline static constexpr unsigned int Class_2_3CC769D284A54927_1_Class_1_BA073E3C7FFC1CB2_TypeDefinitionIndex = 86333;

class Class_2_3CC769D284A54927_1_Class_1_BA073E3C7FFC1CB2 : public ::System::Object
{
public:
	::System::Threading::CancellationTokenSource* Field_1_0; // 0x10
	::Class_2_3CC769D284A54927_1* Field_1_1; // 0x18
	::System::Boolean Field_1_4; // 0x20
	::System::UInt32 Field_1_2; // 0x24
	::System::Int32 Field_1_3; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_1_CLASS_1_BA073E3C7FFC1CB2__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_2EB9AC11D04A5D20(::System::ValueTuple_2<::System::Boolean, ::Class_3_025FF4981524A424_129*> a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::ValueTuple_2<::System::Boolean, ::Class_3_025FF4981524A424_129*>))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_1_CLASS_1_BA073E3C7FFC1CB2_METHOD_1_2EB9AC11D04A5D20_OFFSET))(this, a1);
	}
};
