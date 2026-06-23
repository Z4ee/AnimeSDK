#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_5_A6F8D19602712D95;
class Class_5_FCAF801AC482D3B5;
namespace System { class Action; }

#define CLASS_5_FCAF801AC482D3B5_CLASS_1_FEC51113DF0A9E1D_METHOD_1_74B606B7F04F3BC3_OFFSET UNITYSDK_OFFSET(0x123EE7B0)
#define CLASS_5_FCAF801AC482D3B5_CLASS_1_FEC51113DF0A9E1D_METHOD_1_B6E600762C489552_OFFSET UNITYSDK_OFFSET(0x123EE640)
#define CLASS_5_FCAF801AC482D3B5_CLASS_1_FEC51113DF0A9E1D__CTOR_OFFSET UNITYSDK_OFFSET(0x123EE630)

inline static constexpr unsigned int Class_5_FCAF801AC482D3B5_Class_1_FEC51113DF0A9E1D_TypeDefinitionIndex = 71736;

class Class_5_FCAF801AC482D3B5_Class_1_FEC51113DF0A9E1D : public ::System::Object
{
public:
	::System::Action* Field_1_2; // 0x10
	::Class_5_FCAF801AC482D3B5* Field_1_0; // 0x18
	::System::Nullable_1<::System::ValueTuple_2<::System::Single, ::System::Single>> Field_1_1; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_FCAF801AC482D3B5_CLASS_1_FEC51113DF0A9E1D__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_B6E600762C489552(::Class_5_A6F8D19602712D95* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_5_A6F8D19602712D95*))((::PBYTE)hIl2Cpp + CLASS_5_FCAF801AC482D3B5_CLASS_1_FEC51113DF0A9E1D_METHOD_1_B6E600762C489552_OFFSET))(this, a1);
	}

	::System::Void Method_1_74B606B7F04F3BC3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_FCAF801AC482D3B5_CLASS_1_FEC51113DF0A9E1D_METHOD_1_74B606B7F04F3BC3_OFFSET))(this);
	}
};
