#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitFiveDimTeleportFinish; }

#define CLASS_2_D46D0335D0A17027_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1865D290)
#define CLASS_2_D46D0335D0A17027_METHOD_2_54757B8B62FBF467_OFFSET UNITYSDK_OFFSET(0x1865D330)
#define CLASS_2_D46D0335D0A17027_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1865D2E0)
#define CLASS_2_D46D0335D0A17027_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1865D460)
#define CLASS_2_D46D0335D0A17027_TICK_OFFSET UNITYSDK_OFFSET(0x1865D4B0)
#define CLASS_2_D46D0335D0A17027__CTOR_OFFSET UNITYSDK_OFFSET(0x1865D280)

inline static constexpr unsigned int Class_2_D46D0335D0A17027_TypeDefinitionIndex = 50504;

class Class_2_D46D0335D0A17027 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_0; // 0x18
	::RPG::GameCore::WaitFiveDimTeleportFinish* Field_2_1; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::WaitFiveDimTeleportFinish* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WaitFiveDimTeleportFinish*))((::PBYTE)hIl2Cpp + CLASS_2_D46D0335D0A17027__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D46D0335D0A17027_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D46D0335D0A17027_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D46D0335D0A17027_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_D46D0335D0A17027_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_54757B8B62FBF467()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D46D0335D0A17027_METHOD_2_54757B8B62FBF467_OFFSET))(this);
	}
};
