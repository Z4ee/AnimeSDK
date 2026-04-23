#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_1_D9E989B298282E16;
class Class_3_1A6A6EF120955241_1;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_93F97C1903A3FDA4_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA5271A0)
#define CLASS_2_93F97C1903A3FDA4_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xA5271F0)
#define CLASS_2_93F97C1903A3FDA4_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xA5272E0)
#define CLASS_2_93F97C1903A3FDA4_TICK_OFFSET UNITYSDK_OFFSET(0xA527240)
#define CLASS_2_93F97C1903A3FDA4__CTOR_OFFSET UNITYSDK_OFFSET(0xA527130)

inline static constexpr unsigned int Class_2_93F97C1903A3FDA4_TypeDefinitionIndex = 49618;

class Class_2_93F97C1903A3FDA4 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::Class_1_D9E989B298282E16* Field_2_2; // 0x18
	::Class_3_1A6A6EF120955241_1* Field_2_0; // 0x20
	::RPG::GameCore::TaskContext* Field_2_1; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_1A6A6EF120955241_1* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_1A6A6EF120955241_1*))((::PBYTE)hIl2Cpp + CLASS_2_93F97C1903A3FDA4__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_93F97C1903A3FDA4_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_93F97C1903A3FDA4_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_93F97C1903A3FDA4_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_93F97C1903A3FDA4_TICK_OFFSET))(this, a1);
	}
};
