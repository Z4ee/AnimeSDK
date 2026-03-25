#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_3_111F36CF5247BACE_3;
namespace RPG::Client { class Stage; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }

#define CLASS_2_2504DFD00442E50D_DISPOSE_OFFSET UNITYSDK_OFFSET(0x87FFD00)
#define CLASS_2_2504DFD00442E50D_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x87FFBD0)
#define CLASS_2_2504DFD00442E50D_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x87FFC90)
#define CLASS_2_2504DFD00442E50D_TICK_OFFSET UNITYSDK_OFFSET(0x87FFD90)
#define CLASS_2_2504DFD00442E50D__CTOR_OFFSET UNITYSDK_OFFSET(0x87FFB60)

inline static constexpr unsigned int Class_2_2504DFD00442E50D_TypeDefinitionIndex = 46848;

class Class_2_2504DFD00442E50D : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::Client::Stage* Field_2_0; // 0x18
	::RPG::GameCore::TaskContext* Field_2_1; // 0x20
	::System::String* Field_2_3; // 0x28
	::Class_3_111F36CF5247BACE_3* Field_2_2; // 0x30

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_111F36CF5247BACE_3* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_111F36CF5247BACE_3*))((::PBYTE)hIl2Cpp + CLASS_2_2504DFD00442E50D__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2504DFD00442E50D_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2504DFD00442E50D_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2504DFD00442E50D_DISPOSE_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_2504DFD00442E50D_TICK_OFFSET))(this, a1);
	}
};
