#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class MakeSuccess; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_4092B02F31BBA89F_DISPOSE_OFFSET UNITYSDK_OFFSET(0x13A404A0)
#define CLASS_2_4092B02F31BBA89F_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x13A40570)
#define CLASS_2_4092B02F31BBA89F_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x13A40850)
#define CLASS_2_4092B02F31BBA89F_TICK_OFFSET UNITYSDK_OFFSET(0x13A40AB0)
#define CLASS_2_4092B02F31BBA89F__CTOR_OFFSET UNITYSDK_OFFSET(0x13A403E0)

inline static constexpr unsigned int Class_2_4092B02F31BBA89F_TypeDefinitionIndex = 52671;

class Class_2_4092B02F31BBA89F : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_0; // 0x18
	::Class_1_5F51D4049EA87B7B* Field_2_1; // 0x20
	::RPG::GameCore::MakeSuccess* Field_2_2; // 0x28

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
