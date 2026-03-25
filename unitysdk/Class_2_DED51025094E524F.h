#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class ReviveCharacter; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_DED51025094E524F_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8899470)
#define CLASS_2_DED51025094E524F_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x8899510)
#define CLASS_2_DED51025094E524F_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x88998D0)
#define CLASS_2_DED51025094E524F_TICK_OFFSET UNITYSDK_OFFSET(0x88994B0)
#define CLASS_2_DED51025094E524F__CTOR_OFFSET UNITYSDK_OFFSET(0x8899460)

inline static constexpr unsigned int Class_2_DED51025094E524F_TypeDefinitionIndex = 44297;

class Class_2_DED51025094E524F : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_1; // 0x18
	::RPG::GameCore::ReviveCharacter* Field_2_0; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ReviveCharacter* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ReviveCharacter*))((::PBYTE)hIl2Cpp + CLASS_2_DED51025094E524F__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DED51025094E524F_DISPOSE_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_DED51025094E524F_TICK_OFFSET))(this, a1);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DED51025094E524F_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DED51025094E524F_ONTASKRESET_OFFSET))(this);
	}
};
