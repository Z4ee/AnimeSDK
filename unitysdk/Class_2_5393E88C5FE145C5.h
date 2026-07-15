#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"
#include "unitysdk/UnityEngine/Rect.h"

namespace RPG::GameCore { class ShowTutorialBlockMask; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_5393E88C5FE145C5_DISPOSE_OFFSET UNITYSDK_OFFSET(0x14568640)
#define CLASS_2_5393E88C5FE145C5_METHOD_2_4E8F0BA4B6232E21_OFFSET UNITYSDK_OFFSET(0x14568720)
#define CLASS_2_5393E88C5FE145C5_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x14568680)
#define CLASS_2_5393E88C5FE145C5_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x145687D0)
#define CLASS_2_5393E88C5FE145C5_TICK_OFFSET UNITYSDK_OFFSET(0x14568820)
#define CLASS_2_5393E88C5FE145C5__CTOR_OFFSET UNITYSDK_OFFSET(0x14568630)

inline static constexpr unsigned int Class_2_5393E88C5FE145C5_TypeDefinitionIndex = 56071;

class Class_2_5393E88C5FE145C5 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_0; // 0x18
	::RPG::GameCore::ShowTutorialBlockMask* Field_2_1; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ShowTutorialBlockMask* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ShowTutorialBlockMask*))((::PBYTE)hIl2Cpp + CLASS_2_5393E88C5FE145C5__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5393E88C5FE145C5_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5393E88C5FE145C5_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5393E88C5FE145C5_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_5393E88C5FE145C5_TICK_OFFSET))(this, a1);
	}

	::UnityEngine::Rect Method_2_4E8F0BA4B6232E21()
	{
		return ((::UnityEngine::Rect(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5393E88C5FE145C5_METHOD_2_4E8F0BA4B6232E21_OFFSET))(this);
	}
};
