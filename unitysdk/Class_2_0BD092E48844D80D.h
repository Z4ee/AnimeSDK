#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_2_A48F3719AA1CF200_6;
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitTransferFinishedEvent; }
namespace System { class Object; }

#define CLASS_2_0BD092E48844D80D_DISPOSE_OFFSET UNITYSDK_OFFSET(0x97F0D20)
#define CLASS_2_0BD092E48844D80D_METHOD_2_5AD578FCE9CF19D4_OFFSET UNITYSDK_OFFSET(0x97F0E50)
#define CLASS_2_0BD092E48844D80D_METHOD_2_77D630694D127945_OFFSET UNITYSDK_OFFSET(0x97F0FC0)
#define CLASS_2_0BD092E48844D80D_METHOD_2_98511BB23D2E3748_OFFSET UNITYSDK_OFFSET(0x97F0F70)
#define CLASS_2_0BD092E48844D80D_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x97F0DA0)
#define CLASS_2_0BD092E48844D80D_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x97F0EC0)
#define CLASS_2_0BD092E48844D80D_TICK_OFFSET UNITYSDK_OFFSET(0x97F0F10)
#define CLASS_2_0BD092E48844D80D__CTOR_OFFSET UNITYSDK_OFFSET(0x97F0D10)

inline static constexpr unsigned int Class_2_0BD092E48844D80D_TypeDefinitionIndex = 54338;

class Class_2_0BD092E48844D80D : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::WaitTransferFinishedEvent* Field_2_0; // 0x18
	::Class_1_5F51D4049EA87B7B* Field_2_2; // 0x20
	::RPG::GameCore::TaskContext* Field_2_1; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::WaitTransferFinishedEvent* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WaitTransferFinishedEvent*))((::PBYTE)hIl2Cpp + CLASS_2_0BD092E48844D80D__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0BD092E48844D80D_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0BD092E48844D80D_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0BD092E48844D80D_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_0BD092E48844D80D_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_98511BB23D2E3748(::Class_2_A48F3719AA1CF200_6* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A48F3719AA1CF200_6*))((::PBYTE)hIl2Cpp + CLASS_2_0BD092E48844D80D_METHOD_2_98511BB23D2E3748_OFFSET))(this, a1);
	}

	::System::Void Method_2_5AD578FCE9CF19D4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0BD092E48844D80D_METHOD_2_5AD578FCE9CF19D4_OFFSET))(this);
	}

	::System::Void Method_2_77D630694D127945(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_0BD092E48844D80D_METHOD_2_77D630694D127945_OFFSET))(this, a1);
	}
};
