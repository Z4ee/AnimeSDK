#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_1_D9E989B298282E16;
class Class_3_8960B8D5132C5605_2;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_93F97C1903A3FDA4_DISPOSE_OFFSET UNITYSDK_OFFSET(0x184B66A0)
#define CLASS_2_93F97C1903A3FDA4_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x184B66F0)
#define CLASS_2_93F97C1903A3FDA4_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x184B67E0)
#define CLASS_2_93F97C1903A3FDA4_TICK_OFFSET UNITYSDK_OFFSET(0x184B6740)
#define CLASS_2_93F97C1903A3FDA4__CTOR_OFFSET UNITYSDK_OFFSET(0x184B6630)

inline static constexpr unsigned int Class_2_93F97C1903A3FDA4_TypeDefinitionIndex = 54051;

class Class_2_93F97C1903A3FDA4 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
	::Class_1_D9E989B298282E16* OHKCFMOAECF; // 0x20
	::Class_3_8960B8D5132C5605_2* OFKGLJOAMLD; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_8960B8D5132C5605_2* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_8960B8D5132C5605_2*))((::PBYTE)hIl2Cpp + CLASS_2_93F97C1903A3FDA4__CTOR_OFFSET))(this, a1, a2);
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
