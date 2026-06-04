#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class EnableNegativeHP; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_6DB8AC52C88CEA1A_DISPOSE_OFFSET UNITYSDK_OFFSET(0x13558650)
#define CLASS_2_6DB8AC52C88CEA1A_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x13558690)
#define CLASS_2_6DB8AC52C88CEA1A_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x135587B0)
#define CLASS_2_6DB8AC52C88CEA1A_TICK_OFFSET UNITYSDK_OFFSET(0x13558800)
#define CLASS_2_6DB8AC52C88CEA1A__CTOR_OFFSET UNITYSDK_OFFSET(0x13558640)

inline static constexpr unsigned int Class_2_6DB8AC52C88CEA1A_TypeDefinitionIndex = 51416;

class Class_2_6DB8AC52C88CEA1A : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::EnableNegativeHP* Field_2_0; // 0x18
	::RPG::GameCore::TaskContext* Field_2_1; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::EnableNegativeHP* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::EnableNegativeHP*))((::PBYTE)hIl2Cpp + CLASS_2_6DB8AC52C88CEA1A__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6DB8AC52C88CEA1A_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6DB8AC52C88CEA1A_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6DB8AC52C88CEA1A_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_6DB8AC52C88CEA1A_TICK_OFFSET))(this, a1);
	}
};
