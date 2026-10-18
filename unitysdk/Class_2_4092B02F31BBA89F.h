#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class MakeSuccess; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_4092B02F31BBA89F_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBB9BF10)
#define CLASS_2_4092B02F31BBA89F_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBB9BFE0)
#define CLASS_2_4092B02F31BBA89F_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xBB9C2C0)
#define CLASS_2_4092B02F31BBA89F_TICK_OFFSET UNITYSDK_OFFSET(0xBB9C520)
#define CLASS_2_4092B02F31BBA89F__CTOR_OFFSET UNITYSDK_OFFSET(0xBB9BE50)

inline static constexpr unsigned int Class_2_4092B02F31BBA89F_TypeDefinitionIndex = 55167;

class Class_2_4092B02F31BBA89F : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::MakeSuccess* OFKGLJOAMLD; // 0x18
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
	::Class_1_5F51D4049EA87B7B* LFONBBDGMEN; // 0x28

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
