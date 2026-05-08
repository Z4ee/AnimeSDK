#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Threading/CancellationToken.h"

class Class_1_1D0F14FBEE98E5ED;
class Class_1_1D0F14FBEE98E5ED_Class_1_4E271783D45CB8C7;
class Class_3_270194760B058114;
class Class_3_733B560439A4DEF8;
namespace Cysharp::Threading::Tasks { template <typename T> class UniTaskCompletionSource_1; }
namespace System { class Action; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_1_1D0F14FBEE98E5ED_CLASS_1_777672843602A813_1_METHOD_1_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0xF5BF570)
#define CLASS_1_1D0F14FBEE98E5ED_CLASS_1_777672843602A813_1_METHOD_1_E335D6E9E0053D40_OFFSET UNITYSDK_OFFSET(0xF5BF5B0)
#define CLASS_1_1D0F14FBEE98E5ED_CLASS_1_777672843602A813_1__CTOR_OFFSET UNITYSDK_OFFSET(0xF5BF560)

inline static constexpr unsigned int Class_1_1D0F14FBEE98E5ED_Class_1_777672843602A813_1_TypeDefinitionIndex = 67705;

class Class_1_1D0F14FBEE98E5ED_Class_1_777672843602A813_1 : public ::System::Object
{
public:
	::System::Func_2<::System::Threading::CancellationToken, ::Cysharp::Threading::Tasks::UniTaskCompletionSource_1<::System::Int32>*>* Field_1_3; // 0x10
	::System::Action* Field_1_5; // 0x18
	::Class_3_733B560439A4DEF8* Field_1_2; // 0x20
	::Class_1_1D0F14FBEE98E5ED_Class_1_4E271783D45CB8C7* Field_1_4; // 0x28
	::Class_3_270194760B058114* Field_1_1; // 0x30
	::Class_1_1D0F14FBEE98E5ED* Field_1_0; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1D0F14FBEE98E5ED_CLASS_1_777672843602A813_1__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1D0F14FBEE98E5ED_CLASS_1_777672843602A813_1_METHOD_1_5790A55946AA509D_OFFSET))(this);
	}

	::Cysharp::Threading::Tasks::UniTaskCompletionSource_1<::System::Int32>* Method_1_E335D6E9E0053D40(::System::Threading::CancellationToken a1)
	{
		return ((::Cysharp::Threading::Tasks::UniTaskCompletionSource_1<::System::Int32>*(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CLASS_1_1D0F14FBEE98E5ED_CLASS_1_777672843602A813_1_METHOD_1_E335D6E9E0053D40_OFFSET))(this, a1);
	}
};
