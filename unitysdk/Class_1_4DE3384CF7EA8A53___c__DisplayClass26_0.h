#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EnviromentSystemV2Space/OutputType.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_318;
class Class_0_16E4307DCC419505_323;
class Class_0_16E4307DCC419505_327;
class Class_1_4DE3384CF7EA8A53;
class Class_1_EAF7984A8FAD6BE4;

#define CLASS_1_4DE3384CF7EA8A53___C__DISPLAYCLASS26_0__APPLYPROPERTYWITHRESLOADING_B__0_OFFSET UNITYSDK_OFFSET(0x11D6B420)
#define CLASS_1_4DE3384CF7EA8A53___C__DISPLAYCLASS26_0__APPLYPROPERTYWITHRESLOADING_B__1_OFFSET UNITYSDK_OFFSET(0x11D6B920)
#define CLASS_1_4DE3384CF7EA8A53___C__DISPLAYCLASS26_0__APPLYPROPERTYWITHRESLOADING_B__2_OFFSET UNITYSDK_OFFSET(0x11D6BA80)
#define CLASS_1_4DE3384CF7EA8A53___C__DISPLAYCLASS26_0__CTOR_OFFSET UNITYSDK_OFFSET(0x11D69B30)

inline static constexpr unsigned int Class_1_4DE3384CF7EA8A53___c__DisplayClass26_0_TypeDefinitionIndex = 46037;

class Class_1_4DE3384CF7EA8A53___c__DisplayClass26_0 : public ::System::Object
{
public:
	::Class_1_4DE3384CF7EA8A53* __4__this; // 0x10
	::Class_0_16E4307DCC419505_318* asyncResLoadingHandle; // 0x18
	::Class_0_16E4307DCC419505_318* h; // 0x20
	::Class_0_16E4307DCC419505_327* loadingObj; // 0x28
	::Class_0_16E4307DCC419505_323* du; // 0x30
	::Class_1_EAF7984A8FAD6BE4* p; // 0x38
	::EnviromentSystemV2Space::OutputType tp; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4DE3384CF7EA8A53___C__DISPLAYCLASS26_0__CTOR_OFFSET))(this);
	}

	::System::Void _ApplyPropertyWithResLoading_b__0(::System::Boolean v)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_4DE3384CF7EA8A53___C__DISPLAYCLASS26_0__APPLYPROPERTYWITHRESLOADING_B__0_OFFSET))(this, v);
	}

	::System::Void _ApplyPropertyWithResLoading_b__1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4DE3384CF7EA8A53___C__DISPLAYCLASS26_0__APPLYPROPERTYWITHRESLOADING_B__1_OFFSET))(this);
	}

	::System::Void _ApplyPropertyWithResLoading_b__2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4DE3384CF7EA8A53___C__DISPLAYCLASS26_0__APPLYPROPERTYWITHRESLOADING_B__2_OFFSET))(this);
	}
};
