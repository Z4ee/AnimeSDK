#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class LensDistortionCurveEffect; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_A057FF3BFC905AA3_DISPOSE_OFFSET UNITYSDK_OFFSET(0x17A01EB0)
#define CLASS_2_A057FF3BFC905AA3_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x17A01EF0)
#define CLASS_2_A057FF3BFC905AA3_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x17A02290)
#define CLASS_2_A057FF3BFC905AA3_TICK_OFFSET UNITYSDK_OFFSET(0x17A022E0)
#define CLASS_2_A057FF3BFC905AA3__CTOR_OFFSET UNITYSDK_OFFSET(0x17A01EA0)

inline static constexpr unsigned int Class_2_A057FF3BFC905AA3_TypeDefinitionIndex = 55338;

class Class_2_A057FF3BFC905AA3 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
	::RPG::GameCore::LensDistortionCurveEffect* OFKGLJOAMLD; // 0x20

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
