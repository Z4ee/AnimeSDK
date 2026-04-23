#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_C7507A7CED329917;
namespace System { class String; }

#define CLASS_1_C7507A7CED329917___C__DISPLAYCLASS31_0__CTOR_OFFSET UNITYSDK_OFFSET(0x9878190)
#define CLASS_1_C7507A7CED329917___C__DISPLAYCLASS31_0___ONPRELOADTIMELINEASSETFINISH_B__1_OFFSET UNITYSDK_OFFSET(0x9878EF0)

inline static constexpr unsigned int Class_1_C7507A7CED329917___c__DisplayClass31_0_TypeDefinitionIndex = 45198;

class Class_1_C7507A7CED329917___c__DisplayClass31_0 : public ::System::Object
{
public:
	::System::String* timelinePath; // 0x10
	::Class_1_C7507A7CED329917* __4__this; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C7507A7CED329917___C__DISPLAYCLASS31_0__CTOR_OFFSET))(this);
	}

	::System::Void __OnPreloadTimelineAssetFinish_b__1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C7507A7CED329917___C__DISPLAYCLASS31_0___ONPRELOADTIMELINEASSETFINISH_B__1_OFFSET))(this);
	}
};
