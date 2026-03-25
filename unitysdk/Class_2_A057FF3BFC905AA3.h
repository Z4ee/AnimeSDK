#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class LensDistortionCurveEffect; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_A057FF3BFC905AA3_DISPOSE_OFFSET UNITYSDK_OFFSET(0x99DDAF0)
#define CLASS_2_A057FF3BFC905AA3_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x99DDB30)
#define CLASS_2_A057FF3BFC905AA3_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x99DDDD0)
#define CLASS_2_A057FF3BFC905AA3_TICK_OFFSET UNITYSDK_OFFSET(0x99DDE20)
#define CLASS_2_A057FF3BFC905AA3__CTOR_OFFSET UNITYSDK_OFFSET(0x99DDAE0)

inline static constexpr unsigned int Class_2_A057FF3BFC905AA3_TypeDefinitionIndex = 44122;

class Class_2_A057FF3BFC905AA3 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::LensDistortionCurveEffect* Field_2_0; // 0x18
	::RPG::GameCore::TaskContext* Field_2_1; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::LensDistortionCurveEffect* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::LensDistortionCurveEffect*))((::PBYTE)hIl2Cpp + CLASS_2_A057FF3BFC905AA3__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A057FF3BFC905AA3_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A057FF3BFC905AA3_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A057FF3BFC905AA3_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_A057FF3BFC905AA3_TICK_OFFSET))(this, a1);
	}
};
