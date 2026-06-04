#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class RadialBlurEffect; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_7EB791AD25A95C6D_DISPOSE_OFFSET UNITYSDK_OFFSET(0x12AC8D00)
#define CLASS_2_7EB791AD25A95C6D_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x12AC8D40)
#define CLASS_2_7EB791AD25A95C6D_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x12AC9120)
#define CLASS_2_7EB791AD25A95C6D_TICK_OFFSET UNITYSDK_OFFSET(0x12AC9170)
#define CLASS_2_7EB791AD25A95C6D__CTOR_OFFSET UNITYSDK_OFFSET(0x12AC8CF0)

inline static constexpr unsigned int Class_2_7EB791AD25A95C6D_TypeDefinitionIndex = 51629;

class Class_2_7EB791AD25A95C6D : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::RadialBlurEffect* Field_2_0; // 0x18
	::RPG::GameCore::TaskContext* Field_2_1; // 0x20

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
