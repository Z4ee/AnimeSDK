#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Threading/CancellationToken.h"

class Class_1_3002D7CF5FEE9D3A;
class Class_1_98236523318AE319;
class Class_1_98236523318AE319_Class_1_4E271783D45CB8C7;
class Class_1_BF85135934DD45B5;
class Class_2_CD42631606067E6B;
namespace Cysharp::Threading::Tasks { template <typename T> class UniTaskCompletionSource_1; }
namespace System { class Action; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_1_98236523318AE319_CLASS_1_93E45263203D486B_METHOD_1_0D7F0C9DBEFD8449_OFFSET UNITYSDK_OFFSET(0x14E493D0)
#define CLASS_1_98236523318AE319_CLASS_1_93E45263203D486B_METHOD_1_81A66FB988DFA6AA_OFFSET UNITYSDK_OFFSET(0x14E48C50)
#define CLASS_1_98236523318AE319_CLASS_1_93E45263203D486B_METHOD_1_A2458167D7752575_OFFSET UNITYSDK_OFFSET(0x14E49010)
#define CLASS_1_98236523318AE319_CLASS_1_93E45263203D486B__CTOR_OFFSET UNITYSDK_OFFSET(0x14E48C40)

inline static constexpr unsigned int Class_1_98236523318AE319_Class_1_93E45263203D486B_TypeDefinitionIndex = 86729;

class Class_1_98236523318AE319_Class_1_93E45263203D486B : public ::System::Object
{
public:
	::System::Action* Field_1_10; // 0x10
	::Class_1_98236523318AE319* Field_1_2; // 0x18
	::System::Action* Field_1_4; // 0x20
	::System::Action* Field_1_11; // 0x28
	::System::Func_2<::System::Threading::CancellationToken, ::Cysharp::Threading::Tasks::UniTaskCompletionSource_1<::System::Int32>*>* Field_1_5; // 0x30
	::Class_1_98236523318AE319_Class_1_4E271783D45CB8C7* Field_1_1; // 0x38
	::Class_1_BF85135934DD45B5* Field_1_0; // 0x40
	::Class_2_CD42631606067E6B* Field_1_6; // 0x48
	::Class_1_3002D7CF5FEE9D3A* Field_1_7; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_98236523318AE319_CLASS_1_93E45263203D486B__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_81A66FB988DFA6AA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_98236523318AE319_CLASS_1_93E45263203D486B_METHOD_1_81A66FB988DFA6AA_OFFSET))(this);
	}

	::System::Void Method_1_A2458167D7752575()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_98236523318AE319_CLASS_1_93E45263203D486B_METHOD_1_A2458167D7752575_OFFSET))(this);
	}

	::System::Void Method_1_0D7F0C9DBEFD8449()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_98236523318AE319_CLASS_1_93E45263203D486B_METHOD_1_0D7F0C9DBEFD8449_OFFSET))(this);
	}
};
