#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class ShowSwipeGuide; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_AFBB6BD2FF5DAA7F_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB2F6760)
#define CLASS_2_AFBB6BD2FF5DAA7F_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB2F67A0)
#define CLASS_2_AFBB6BD2FF5DAA7F_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB2F6870)
#define CLASS_2_AFBB6BD2FF5DAA7F_TICK_OFFSET UNITYSDK_OFFSET(0xB2F68C0)
#define CLASS_2_AFBB6BD2FF5DAA7F__CTOR_OFFSET UNITYSDK_OFFSET(0xB2F6750)

inline static constexpr unsigned int Class_2_AFBB6BD2FF5DAA7F_TypeDefinitionIndex = 58695;

class Class_2_AFBB6BD2FF5DAA7F : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::ShowSwipeGuide* OFKGLJOAMLD; // 0x18
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20

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
