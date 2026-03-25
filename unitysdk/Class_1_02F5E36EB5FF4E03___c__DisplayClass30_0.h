#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_02F5E36EB5FF4E03;
namespace System { class String; }

#define CLASS_1_02F5E36EB5FF4E03___C__DISPLAYCLASS30_0__CTOR_OFFSET UNITYSDK_OFFSET(0x10925010)
#define CLASS_1_02F5E36EB5FF4E03___C__DISPLAYCLASS30_0___ONPRELOADTIMELINEASSETFINISH_B__1_OFFSET UNITYSDK_OFFSET(0x109255B0)

inline static constexpr unsigned int Class_1_02F5E36EB5FF4E03___c__DisplayClass30_0_TypeDefinitionIndex = 39289;

class Class_1_02F5E36EB5FF4E03___c__DisplayClass30_0 : public ::System::Object
{
public:
	::Class_1_02F5E36EB5FF4E03* __4__this; // 0x10
	::System::String* timelinePath; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_02F5E36EB5FF4E03___C__DISPLAYCLASS30_0__CTOR_OFFSET))(this);
	}

	::System::Void __OnPreloadTimelineAssetFinish_b__1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_02F5E36EB5FF4E03___C__DISPLAYCLASS30_0___ONPRELOADTIMELINEASSETFINISH_B__1_OFFSET))(this);
	}
};
