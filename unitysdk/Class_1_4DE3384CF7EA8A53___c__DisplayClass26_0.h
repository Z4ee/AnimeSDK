#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EnviromentSystemV2Space/OutputType.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_355;
class Class_0_16E4307DCC419505_360;
class Class_0_16E4307DCC419505_364;
class Class_1_4DE3384CF7EA8A53;
class Class_1_EAF7984A8FAD6BE4;

#define CLASS_1_4DE3384CF7EA8A53___C__DISPLAYCLASS26_0__APPLYPROPERTYWITHRESLOADING_B__0_OFFSET UNITYSDK_OFFSET(0x14E93F90)
#define CLASS_1_4DE3384CF7EA8A53___C__DISPLAYCLASS26_0__APPLYPROPERTYWITHRESLOADING_B__1_OFFSET UNITYSDK_OFFSET(0x14E94680)
#define CLASS_1_4DE3384CF7EA8A53___C__DISPLAYCLASS26_0__APPLYPROPERTYWITHRESLOADING_B__2_OFFSET UNITYSDK_OFFSET(0x14E94870)
#define CLASS_1_4DE3384CF7EA8A53___C__DISPLAYCLASS26_0__CTOR_OFFSET UNITYSDK_OFFSET(0x14E92340)

inline static constexpr unsigned int Class_1_4DE3384CF7EA8A53___c__DisplayClass26_0_TypeDefinitionIndex = 47585;

class Class_1_4DE3384CF7EA8A53___c__DisplayClass26_0 : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_355* h; // 0x10
	::Class_0_16E4307DCC419505_355* asyncResLoadingHandle; // 0x18
	::Class_1_EAF7984A8FAD6BE4* p; // 0x20
	::Class_1_4DE3384CF7EA8A53* __4__this; // 0x28
	::Class_0_16E4307DCC419505_360* du; // 0x30
	::Class_0_16E4307DCC419505_364* loadingObj; // 0x38
	::EnviromentSystemV2Space::OutputType tp; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4DE3384CF7EA8A53___C__DISPLAYCLASS26_0__CTOR_OFFSET))(this);
	}

	::System::Void _ApplyPropertyWithResLoading_b__0(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_4DE3384CF7EA8A53___C__DISPLAYCLASS26_0__APPLYPROPERTYWITHRESLOADING_B__0_OFFSET))(this, a1);
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
