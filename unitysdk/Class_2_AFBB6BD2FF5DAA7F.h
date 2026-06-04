#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class ShowSwipeGuide; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_AFBB6BD2FF5DAA7F_DISPOSE_OFFSET UNITYSDK_OFFSET(0x144769A0)
#define CLASS_2_AFBB6BD2FF5DAA7F_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x144769E0)
#define CLASS_2_AFBB6BD2FF5DAA7F_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x14476AB0)
#define CLASS_2_AFBB6BD2FF5DAA7F_TICK_OFFSET UNITYSDK_OFFSET(0x14476B00)
#define CLASS_2_AFBB6BD2FF5DAA7F__CTOR_OFFSET UNITYSDK_OFFSET(0x14476990)

inline static constexpr unsigned int Class_2_AFBB6BD2FF5DAA7F_TypeDefinitionIndex = 54837;

class Class_2_AFBB6BD2FF5DAA7F : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::ShowSwipeGuide* Field_2_0; // 0x18
	::RPG::GameCore::TaskContext* Field_2_1; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ShowSwipeGuide* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ShowSwipeGuide*))((::PBYTE)hIl2Cpp + CLASS_2_AFBB6BD2FF5DAA7F__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AFBB6BD2FF5DAA7F_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AFBB6BD2FF5DAA7F_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AFBB6BD2FF5DAA7F_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_AFBB6BD2FF5DAA7F_TICK_OFFSET))(this, a1);
	}
};
