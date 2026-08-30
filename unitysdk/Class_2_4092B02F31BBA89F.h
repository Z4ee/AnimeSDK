#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class MakeSuccess; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_4092B02F31BBA89F_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1591AA80)
#define CLASS_2_4092B02F31BBA89F_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1591AB50)
#define CLASS_2_4092B02F31BBA89F_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1591AE30)
#define CLASS_2_4092B02F31BBA89F_TICK_OFFSET UNITYSDK_OFFSET(0x1591B090)
#define CLASS_2_4092B02F31BBA89F__CTOR_OFFSET UNITYSDK_OFFSET(0x1591A9C0)

inline static constexpr unsigned int Class_2_4092B02F31BBA89F_TypeDefinitionIndex = 55370;

class Class_2_4092B02F31BBA89F : public ::Class_1_5F51D4049EA87B7B
{
public:
	::Class_1_5F51D4049EA87B7B* LFONBBDGMEN; // 0x18
	::RPG::GameCore::MakeSuccess* OFKGLJOAMLD; // 0x20
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::MakeSuccess* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::MakeSuccess*))((::PBYTE)hIl2Cpp + CLASS_2_4092B02F31BBA89F__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4092B02F31BBA89F_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4092B02F31BBA89F_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4092B02F31BBA89F_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_4092B02F31BBA89F_TICK_OFFSET))(this, a1);
	}
};
