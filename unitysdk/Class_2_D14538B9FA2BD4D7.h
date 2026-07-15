#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class ModifyStance; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_D14538B9FA2BD4D7_DISPOSE_OFFSET UNITYSDK_OFFSET(0x18F18A00)
#define CLASS_2_D14538B9FA2BD4D7_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x18F18A40)
#define CLASS_2_D14538B9FA2BD4D7_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x18F18FF0)
#define CLASS_2_D14538B9FA2BD4D7_TICK_OFFSET UNITYSDK_OFFSET(0x18F19040)
#define CLASS_2_D14538B9FA2BD4D7__CTOR_OFFSET UNITYSDK_OFFSET(0x18F189F0)

inline static constexpr unsigned int Class_2_D14538B9FA2BD4D7_TypeDefinitionIndex = 52719;

class Class_2_D14538B9FA2BD4D7 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::ModifyStance* Field_2_0; // 0x18
	::RPG::GameCore::TaskContext* Field_2_1; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ModifyStance* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ModifyStance*))((::PBYTE)hIl2Cpp + CLASS_2_D14538B9FA2BD4D7__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D14538B9FA2BD4D7_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D14538B9FA2BD4D7_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D14538B9FA2BD4D7_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_D14538B9FA2BD4D7_TICK_OFFSET))(this, a1);
	}
};
