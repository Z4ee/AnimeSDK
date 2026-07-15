#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class ReleaseCharacter; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_31078D694969DD35_DISPOSE_OFFSET UNITYSDK_OFFSET(0x17C8FE70)
#define CLASS_2_31078D694969DD35_GET_FORCESKIP_OFFSET UNITYSDK_OFFSET(0x17C900A0)
#define CLASS_2_31078D694969DD35_ONSKIP_OFFSET UNITYSDK_OFFSET(0x17C900B0)
#define CLASS_2_31078D694969DD35_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x17C8FEB0)
#define CLASS_2_31078D694969DD35_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x17C8FFF0)
#define CLASS_2_31078D694969DD35_TICK_OFFSET UNITYSDK_OFFSET(0x17C90040)
#define CLASS_2_31078D694969DD35__CTOR_OFFSET UNITYSDK_OFFSET(0x17C8FE60)

inline static constexpr unsigned int Class_2_31078D694969DD35_TypeDefinitionIndex = 55797;

class Class_2_31078D694969DD35 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::ReleaseCharacter* Field_2_0; // 0x18
	::RPG::GameCore::TaskContext* Field_2_1; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ReleaseCharacter* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ReleaseCharacter*))((::PBYTE)hIl2Cpp + CLASS_2_31078D694969DD35__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_31078D694969DD35_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_31078D694969DD35_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_31078D694969DD35_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_31078D694969DD35_TICK_OFFSET))(this, a1);
	}

	::System::Boolean get_ForceSkip()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_31078D694969DD35_GET_FORCESKIP_OFFSET))(this);
	}

	::System::Void OnSkip()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_31078D694969DD35_ONSKIP_OFFSET))(this);
	}
};
