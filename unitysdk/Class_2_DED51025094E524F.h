#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class ReviveCharacter; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_DED51025094E524F_DISPOSE_OFFSET UNITYSDK_OFFSET(0xF3E4250)
#define CLASS_2_DED51025094E524F_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xF3E42F0)
#define CLASS_2_DED51025094E524F_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xF3E4670)
#define CLASS_2_DED51025094E524F_TICK_OFFSET UNITYSDK_OFFSET(0xF3E4290)
#define CLASS_2_DED51025094E524F__CTOR_OFFSET UNITYSDK_OFFSET(0xF3E4240)

inline static constexpr unsigned int Class_2_DED51025094E524F_TypeDefinitionIndex = 55527;

class Class_2_DED51025094E524F : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
	::RPG::GameCore::ReviveCharacter* OFKGLJOAMLD; // 0x20

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
