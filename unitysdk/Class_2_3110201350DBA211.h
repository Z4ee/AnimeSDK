#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class AdventurePlayVO; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_3110201350DBA211_DISPOSE_OFFSET UNITYSDK_OFFSET(0x13B61D90)
#define CLASS_2_3110201350DBA211_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x13B61DD0)
#define CLASS_2_3110201350DBA211_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x13B62020)
#define CLASS_2_3110201350DBA211_TICK_OFFSET UNITYSDK_OFFSET(0x13B62070)
#define CLASS_2_3110201350DBA211__CTOR_OFFSET UNITYSDK_OFFSET(0x13B61D80)

inline static constexpr unsigned int Class_2_3110201350DBA211_TypeDefinitionIndex = 54115;

class Class_2_3110201350DBA211 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_0; // 0x18
	::RPG::GameCore::AdventurePlayVO* Field_2_1; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdventurePlayVO* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdventurePlayVO*))((::PBYTE)hIl2Cpp + CLASS_2_3110201350DBA211__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3110201350DBA211_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3110201350DBA211_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3110201350DBA211_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_3110201350DBA211_TICK_OFFSET))(this, a1);
	}
};
