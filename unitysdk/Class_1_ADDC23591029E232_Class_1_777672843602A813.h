#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Threading/CancellationToken.h"

class Class_1_ADDC23591029E232;
class Class_1_ADDC23591029E232_Class_1_4E271783D45CB8C7;
class Class_3_270194760B058114;
class Class_3_568600B6F5743120;
namespace Cysharp::Threading::Tasks { template <typename T> class UniTaskCompletionSource_1; }
namespace System { class Action; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_1_ADDC23591029E232_CLASS_1_777672843602A813_METHOD_1_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x127C14F0)
#define CLASS_1_ADDC23591029E232_CLASS_1_777672843602A813_METHOD_1_E335D6E9E0053D40_OFFSET UNITYSDK_OFFSET(0x127C1310)
#define CLASS_1_ADDC23591029E232_CLASS_1_777672843602A813__CTOR_OFFSET UNITYSDK_OFFSET(0x127C1300)

inline static constexpr unsigned int Class_1_ADDC23591029E232_Class_1_777672843602A813_TypeDefinitionIndex = 53845;

class Class_1_ADDC23591029E232_Class_1_777672843602A813 : public ::System::Object
{
public:
	::System::Action* Field_1_5; // 0x10
	::Class_3_270194760B058114* Field_1_1; // 0x18
	::Class_1_ADDC23591029E232_Class_1_4E271783D45CB8C7* Field_1_4; // 0x20
	::Class_1_ADDC23591029E232* Field_1_0; // 0x28
	::Class_3_568600B6F5743120* Field_1_2; // 0x30
	::System::Func_2<::System::Threading::CancellationToken, ::Cysharp::Threading::Tasks::UniTaskCompletionSource_1<::System::Int32>*>* Field_1_3; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ADDC23591029E232_CLASS_1_777672843602A813__CTOR_OFFSET))(this);
	}

	::Cysharp::Threading::Tasks::UniTaskCompletionSource_1<::System::Int32>* Method_1_E335D6E9E0053D40(::System::Threading::CancellationToken a1)
	{
		return ((::Cysharp::Threading::Tasks::UniTaskCompletionSource_1<::System::Int32>*(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CLASS_1_ADDC23591029E232_CLASS_1_777672843602A813_METHOD_1_E335D6E9E0053D40_OFFSET))(this, a1);
	}

	::System::Void Method_1_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ADDC23591029E232_CLASS_1_777672843602A813_METHOD_1_5790A55946AA509D_OFFSET))(this);
	}
};
