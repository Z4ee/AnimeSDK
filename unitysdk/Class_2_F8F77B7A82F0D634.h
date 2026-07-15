#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class StackCustomUnselectable; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_F8F77B7A82F0D634_DISPOSE_OFFSET UNITYSDK_OFFSET(0x176EEF90)
#define CLASS_2_F8F77B7A82F0D634_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x176EF060)
#define CLASS_2_F8F77B7A82F0D634_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x176EF2D0)
#define CLASS_2_F8F77B7A82F0D634_TICK_OFFSET UNITYSDK_OFFSET(0x176EF320)
#define CLASS_2_F8F77B7A82F0D634__CTOR_OFFSET UNITYSDK_OFFSET(0x176EEED0)

inline static constexpr unsigned int Class_2_F8F77B7A82F0D634_TypeDefinitionIndex = 53121;

class Class_2_F8F77B7A82F0D634 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::Class_1_5F51D4049EA87B7B* Field_2_0; // 0x18
	::RPG::GameCore::StackCustomUnselectable* Field_2_1; // 0x20
	::RPG::GameCore::TaskContext* Field_2_2; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::StackCustomUnselectable* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::StackCustomUnselectable*))((::PBYTE)hIl2Cpp + CLASS_2_F8F77B7A82F0D634__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F8F77B7A82F0D634_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F8F77B7A82F0D634_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F8F77B7A82F0D634_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_F8F77B7A82F0D634_TICK_OFFSET))(this, a1);
	}
};
