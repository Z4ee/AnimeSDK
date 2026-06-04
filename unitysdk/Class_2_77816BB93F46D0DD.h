#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class AdvRegisterPet; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_77816BB93F46D0DD_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC201C90)
#define CLASS_2_77816BB93F46D0DD_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC201A70)
#define CLASS_2_77816BB93F46D0DD_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xC201C40)
#define CLASS_2_77816BB93F46D0DD_TICK_OFFSET UNITYSDK_OFFSET(0xC201CD0)
#define CLASS_2_77816BB93F46D0DD__CTOR_OFFSET UNITYSDK_OFFSET(0xC201A60)

inline static constexpr unsigned int Class_2_77816BB93F46D0DD_TypeDefinitionIndex = 54089;

class Class_2_77816BB93F46D0DD : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::AdvRegisterPet* Field_2_0; // 0x18
	::RPG::GameCore::TaskContext* Field_2_1; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvRegisterPet* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvRegisterPet*))((::PBYTE)hIl2Cpp + CLASS_2_77816BB93F46D0DD__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_77816BB93F46D0DD_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_77816BB93F46D0DD_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_77816BB93F46D0DD_DISPOSE_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_77816BB93F46D0DD_TICK_OFFSET))(this, a1);
	}
};
