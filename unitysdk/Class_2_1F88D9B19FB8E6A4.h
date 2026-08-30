#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class SwitchStoryLine; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_1F88D9B19FB8E6A4_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB84F630)
#define CLASS_2_1F88D9B19FB8E6A4_METHOD_2_9F2E6C28EBE466FC_OFFSET UNITYSDK_OFFSET(0xB84F840)
#define CLASS_2_1F88D9B19FB8E6A4_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xB84FA20)
#define CLASS_2_1F88D9B19FB8E6A4_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB84F670)
#define CLASS_2_1F88D9B19FB8E6A4_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB84F970)
#define CLASS_2_1F88D9B19FB8E6A4_TICK_OFFSET UNITYSDK_OFFSET(0xB84F9C0)
#define CLASS_2_1F88D9B19FB8E6A4__CTOR_OFFSET UNITYSDK_OFFSET(0xB84F620)

inline static constexpr unsigned int Class_2_1F88D9B19FB8E6A4_TypeDefinitionIndex = 55885;

class Class_2_1F88D9B19FB8E6A4 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::SwitchStoryLine* OFKGLJOAMLD; // 0x18
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SwitchStoryLine* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SwitchStoryLine*))((::PBYTE)hIl2Cpp + CLASS_2_1F88D9B19FB8E6A4__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1F88D9B19FB8E6A4_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1F88D9B19FB8E6A4_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1F88D9B19FB8E6A4_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_1F88D9B19FB8E6A4_TICK_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_9F2E6C28EBE466FC(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_1F88D9B19FB8E6A4_METHOD_2_9F2E6C28EBE466FC_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1F88D9B19FB8E6A4_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}
};
