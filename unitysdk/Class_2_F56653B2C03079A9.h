#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::Client { class LuaUIController; }
namespace RPG::GameCore { class ShowFantasticStoryBattleResultPage; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_F56653B2C03079A9_DISPOSE_OFFSET UNITYSDK_OFFSET(0xED971A0)
#define CLASS_2_F56653B2C03079A9_METHOD_2_0BDFAC56E6B704CB_OFFSET UNITYSDK_OFFSET(0xED97230)
#define CLASS_2_F56653B2C03079A9_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xED971E0)
#define CLASS_2_F56653B2C03079A9_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xED97360)
#define CLASS_2_F56653B2C03079A9_TICK_OFFSET UNITYSDK_OFFSET(0xED973B0)
#define CLASS_2_F56653B2C03079A9__CTOR_OFFSET UNITYSDK_OFFSET(0xED97190)

inline static constexpr unsigned int Class_2_F56653B2C03079A9_TypeDefinitionIndex = 58795;

class Class_2_F56653B2C03079A9 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
	::RPG::Client::LuaUIController* OGOFNHAGOPO; // 0x20
	::RPG::GameCore::ShowFantasticStoryBattleResultPage* OFKGLJOAMLD; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ShowFantasticStoryBattleResultPage* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ShowFantasticStoryBattleResultPage*))((::PBYTE)hIl2Cpp + CLASS_2_F56653B2C03079A9__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F56653B2C03079A9_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F56653B2C03079A9_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F56653B2C03079A9_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_F56653B2C03079A9_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_0BDFAC56E6B704CB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F56653B2C03079A9_METHOD_2_0BDFAC56E6B704CB_OFFSET))(this);
	}
};
