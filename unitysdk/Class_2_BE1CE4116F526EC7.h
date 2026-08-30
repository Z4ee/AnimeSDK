#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"
#include "unitysdk/RPG/GameCore/StringHash.h"

namespace RPG::GameCore { class SetDynamicValueByGridFightDropCount; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_BE1CE4116F526EC7_DISPOSE_OFFSET UNITYSDK_OFFSET(0x198B29D0)
#define CLASS_2_BE1CE4116F526EC7_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x198B2A10)
#define CLASS_2_BE1CE4116F526EC7_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x198B2DF0)
#define CLASS_2_BE1CE4116F526EC7_TICK_OFFSET UNITYSDK_OFFSET(0x198B2E40)
#define CLASS_2_BE1CE4116F526EC7__CTOR_OFFSET UNITYSDK_OFFSET(0x198B2900)

inline static constexpr unsigned int Class_2_BE1CE4116F526EC7_TypeDefinitionIndex = 55630;

class Class_2_BE1CE4116F526EC7 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::SetDynamicValueByGridFightDropCount* OFKGLJOAMLD; // 0x18
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
	::RPG::GameCore::StringHash DIJHOMCLPEG; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetDynamicValueByGridFightDropCount* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetDynamicValueByGridFightDropCount*))((::PBYTE)hIl2Cpp + CLASS_2_BE1CE4116F526EC7__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BE1CE4116F526EC7_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BE1CE4116F526EC7_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BE1CE4116F526EC7_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_BE1CE4116F526EC7_TICK_OFFSET))(this, a1);
	}
};
