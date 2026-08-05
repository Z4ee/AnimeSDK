#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTaskVoid.h"
#include "unitysdk/Enum_3_903100312A285543.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_416;
namespace System { class Action; }

#define CLASS_1_85D2C122520A4ADB_CLASS_1_58C63BEEE5C3D7E9_METHOD_1_B18B1454639B3C52_OFFSET UNITYSDK_OFFSET(0x18254030)
#define CLASS_1_85D2C122520A4ADB_CLASS_1_58C63BEEE5C3D7E9_METHOD_1_F114A6B7584ABDAD_OFFSET UNITYSDK_OFFSET(0x18254060)
#define CLASS_1_85D2C122520A4ADB_CLASS_1_58C63BEEE5C3D7E9__CTOR_OFFSET UNITYSDK_OFFSET(0x18254020)

inline static constexpr unsigned int Class_1_85D2C122520A4ADB_Class_1_58C63BEEE5C3D7E9_TypeDefinitionIndex = 68236;

class Class_1_85D2C122520A4ADB_Class_1_58C63BEEE5C3D7E9 : public ::System::Object
{
public:
	::System::Action* Field_1_7; // 0x10
	::Class_0_16E4307DCC419505_416* Field_1_1; // 0x18
	::System::Single Field_1_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_85D2C122520A4ADB_CLASS_1_58C63BEEE5C3D7E9__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_B18B1454639B3C52(::Enum_3_903100312A285543 a1, ::Enum_3_903100312A285543 a2)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_903100312A285543, ::Enum_3_903100312A285543))((::PBYTE)hIl2Cpp + CLASS_1_85D2C122520A4ADB_CLASS_1_58C63BEEE5C3D7E9_METHOD_1_B18B1454639B3C52_OFFSET))(this, a1, a2);
	}

	::Cysharp::Threading::Tasks::UniTaskVoid Method_1_F114A6B7584ABDAD()
	{
		return ((::Cysharp::Threading::Tasks::UniTaskVoid(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_85D2C122520A4ADB_CLASS_1_58C63BEEE5C3D7E9_METHOD_1_F114A6B7584ABDAD_OFFSET))(this);
	}
};
