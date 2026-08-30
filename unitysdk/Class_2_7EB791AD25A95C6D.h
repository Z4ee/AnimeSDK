#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class RadialBlurEffect; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_7EB791AD25A95C6D_DISPOSE_OFFSET UNITYSDK_OFFSET(0x19C03D20)
#define CLASS_2_7EB791AD25A95C6D_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x19C03D60)
#define CLASS_2_7EB791AD25A95C6D_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x19C04200)
#define CLASS_2_7EB791AD25A95C6D_TICK_OFFSET UNITYSDK_OFFSET(0x19C04250)
#define CLASS_2_7EB791AD25A95C6D__CTOR_OFFSET UNITYSDK_OFFSET(0x19C03D10)

inline static constexpr unsigned int Class_2_7EB791AD25A95C6D_TypeDefinitionIndex = 55475;

class Class_2_7EB791AD25A95C6D : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
	::RPG::GameCore::RadialBlurEffect* OFKGLJOAMLD; // 0x20

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
