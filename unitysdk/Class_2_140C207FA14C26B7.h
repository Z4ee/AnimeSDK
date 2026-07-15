#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class PropWaterWheelStartRotate; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_140C207FA14C26B7_DISPOSE_OFFSET UNITYSDK_OFFSET(0x18451630)
#define CLASS_2_140C207FA14C26B7_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x18451690)
#define CLASS_2_140C207FA14C26B7_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x18451130)
#define CLASS_2_140C207FA14C26B7_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x184515E0)
#define CLASS_2_140C207FA14C26B7_TICK_OFFSET UNITYSDK_OFFSET(0x184516E0)
#define CLASS_2_140C207FA14C26B7__CTOR_OFFSET UNITYSDK_OFFSET(0x18451120)

inline static constexpr unsigned int Class_2_140C207FA14C26B7_TypeDefinitionIndex = 55783;

class Class_2_140C207FA14C26B7 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_0; // 0x18
	::RPG::GameCore::PropWaterWheelStartRotate* Field_2_1; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PropWaterWheelStartRotate* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PropWaterWheelStartRotate*))((::PBYTE)hIl2Cpp + CLASS_2_140C207FA14C26B7__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_140C207FA14C26B7_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_140C207FA14C26B7_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_140C207FA14C26B7_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_140C207FA14C26B7_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_140C207FA14C26B7_TICK_OFFSET))(this, a1);
	}
};
