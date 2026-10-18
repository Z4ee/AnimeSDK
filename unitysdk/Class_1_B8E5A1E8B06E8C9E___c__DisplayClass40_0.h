#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_37C86F8E7774C578;
class Class_1_D05699509194BF9B;

#define CLASS_1_B8E5A1E8B06E8C9E___C__DISPLAYCLASS40_0__CTOR_OFFSET UNITYSDK_OFFSET(0x156C0E20)
#define CLASS_1_B8E5A1E8B06E8C9E___C__DISPLAYCLASS40_0__HANDLEASSISTANTRECOMMENDCHANGED_B__1_OFFSET UNITYSDK_OFFSET(0x156C1DF0)

inline static constexpr unsigned int Class_1_B8E5A1E8B06E8C9E___c__DisplayClass40_0_TypeDefinitionIndex = 79466;

class Class_1_B8E5A1E8B06E8C9E___c__DisplayClass40_0 : public ::System::Object
{
public:
	::Class_1_D05699509194BF9B* mold; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B8E5A1E8B06E8C9E___C__DISPLAYCLASS40_0__CTOR_OFFSET))(this);
	}

	::System::Boolean _HandleAssistantRecommendChanged_b__1(::Class_1_37C86F8E7774C578* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_37C86F8E7774C578*))((::PBYTE)hIl2Cpp + CLASS_1_B8E5A1E8B06E8C9E___C__DISPLAYCLASS40_0__HANDLEASSISTANTRECOMMENDCHANGED_B__1_OFFSET))(this, a1);
	}
};
