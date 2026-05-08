#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTaskVoid.h"
#include "unitysdk/Enum_3_903100312A285543.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_227;
namespace System { class Action; }

#define CLASS_1_85D2C122520A4ADB_CLASS_1_29B6B71155F5BFB4_METHOD_1_5BB39A077C1F66D9_OFFSET UNITYSDK_OFFSET(0x137C7D20)
#define CLASS_1_85D2C122520A4ADB_CLASS_1_29B6B71155F5BFB4_METHOD_1_F114A6B7584ABDAD_OFFSET UNITYSDK_OFFSET(0x137C7D50)
#define CLASS_1_85D2C122520A4ADB_CLASS_1_29B6B71155F5BFB4__CTOR_OFFSET UNITYSDK_OFFSET(0x137C7D10)

inline static constexpr unsigned int Class_1_85D2C122520A4ADB_Class_1_29B6B71155F5BFB4_TypeDefinitionIndex = 58126;

class Class_1_85D2C122520A4ADB_Class_1_29B6B71155F5BFB4 : public ::System::Object
{
public:
	::System::Action* Field_1_2; // 0x10
	::Class_0_16E4307DCC419505_227* Field_1_0; // 0x18
	::System::Single Field_1_1; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_85D2C122520A4ADB_CLASS_1_29B6B71155F5BFB4__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_5BB39A077C1F66D9(::Enum_3_903100312A285543 a1, ::Enum_3_903100312A285543 a2)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_903100312A285543, ::Enum_3_903100312A285543))((::PBYTE)hIl2Cpp + CLASS_1_85D2C122520A4ADB_CLASS_1_29B6B71155F5BFB4_METHOD_1_5BB39A077C1F66D9_OFFSET))(this, a1, a2);
	}

	::Cysharp::Threading::Tasks::UniTaskVoid Method_1_F114A6B7584ABDAD()
	{
		return ((::Cysharp::Threading::Tasks::UniTaskVoid(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_85D2C122520A4ADB_CLASS_1_29B6B71155F5BFB4_METHOD_1_F114A6B7584ABDAD_OFFSET))(this);
	}
};
