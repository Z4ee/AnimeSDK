#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class PropReloadPuzzle; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_D30E02D3FD237095_DISPOSE_OFFSET UNITYSDK_OFFSET(0x183EB870)
#define CLASS_2_D30E02D3FD237095_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x183EB700)
#define CLASS_2_D30E02D3FD237095_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x183EB820)
#define CLASS_2_D30E02D3FD237095_TICK_OFFSET UNITYSDK_OFFSET(0x183EB8B0)
#define CLASS_2_D30E02D3FD237095__CTOR_OFFSET UNITYSDK_OFFSET(0x183EB6F0)

inline static constexpr unsigned int Class_2_D30E02D3FD237095_TypeDefinitionIndex = 55759;

class Class_2_D30E02D3FD237095 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::PropReloadPuzzle* Field_2_0; // 0x18
	::RPG::GameCore::TaskContext* Field_2_1; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PropReloadPuzzle* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PropReloadPuzzle*))((::PBYTE)hIl2Cpp + CLASS_2_D30E02D3FD237095__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D30E02D3FD237095_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D30E02D3FD237095_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D30E02D3FD237095_DISPOSE_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_D30E02D3FD237095_TICK_OFFSET))(this, a1);
	}
};
