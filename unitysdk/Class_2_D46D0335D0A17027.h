#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitFiveDimTeleportFinish; }

#define CLASS_2_D46D0335D0A17027_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16062B50)
#define CLASS_2_D46D0335D0A17027_METHOD_2_54757B8B62FBF467_OFFSET UNITYSDK_OFFSET(0x16062BF0)
#define CLASS_2_D46D0335D0A17027_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x16062BA0)
#define CLASS_2_D46D0335D0A17027_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x16062D20)
#define CLASS_2_D46D0335D0A17027_TICK_OFFSET UNITYSDK_OFFSET(0x16062D70)
#define CLASS_2_D46D0335D0A17027__CTOR_OFFSET UNITYSDK_OFFSET(0x16062B40)

inline static constexpr unsigned int Class_2_D46D0335D0A17027_TypeDefinitionIndex = 53172;

class Class_2_D46D0335D0A17027 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::WaitFiveDimTeleportFinish* OFKGLJOAMLD; // 0x18
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20

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
