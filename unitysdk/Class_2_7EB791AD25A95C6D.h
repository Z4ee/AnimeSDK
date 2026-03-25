#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class RadialBlurEffect; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_7EB791AD25A95C6D_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8EB5AB0)
#define CLASS_2_7EB791AD25A95C6D_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x8EB5AF0)
#define CLASS_2_7EB791AD25A95C6D_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x8EB5EB0)
#define CLASS_2_7EB791AD25A95C6D_TICK_OFFSET UNITYSDK_OFFSET(0x8EB5F00)
#define CLASS_2_7EB791AD25A95C6D__CTOR_OFFSET UNITYSDK_OFFSET(0x8EB5AA0)

inline static constexpr unsigned int Class_2_7EB791AD25A95C6D_TypeDefinitionIndex = 44246;

class Class_2_7EB791AD25A95C6D : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_1; // 0x18
	::RPG::GameCore::RadialBlurEffect* Field_2_0; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RadialBlurEffect* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RadialBlurEffect*))((::PBYTE)hIl2Cpp + CLASS_2_7EB791AD25A95C6D__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7EB791AD25A95C6D_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7EB791AD25A95C6D_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7EB791AD25A95C6D_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_7EB791AD25A95C6D_TICK_OFFSET))(this, a1);
	}
};
