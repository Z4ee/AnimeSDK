#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class PlayerHPRatioCheck; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_D8DC7437EC7F8650_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15383770)
#define CLASS_2_D8DC7437EC7F8650_METHOD_2_EBFFDA5B2524E067_OFFSET UNITYSDK_OFFSET(0x153838C0)
#define CLASS_2_D8DC7437EC7F8650_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x153837B0)
#define CLASS_2_D8DC7437EC7F8650_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x15383800)
#define CLASS_2_D8DC7437EC7F8650_TICK_OFFSET UNITYSDK_OFFSET(0x15383850)
#define CLASS_2_D8DC7437EC7F8650__CTOR_OFFSET UNITYSDK_OFFSET(0x15383760)

inline static constexpr unsigned int Class_2_D8DC7437EC7F8650_TypeDefinitionIndex = 58440;

class Class_2_D8DC7437EC7F8650 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
	::RPG::GameCore::PlayerHPRatioCheck* OFKGLJOAMLD; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PlayerHPRatioCheck* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PlayerHPRatioCheck*))((::PBYTE)hIl2Cpp + CLASS_2_D8DC7437EC7F8650__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D8DC7437EC7F8650_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D8DC7437EC7F8650_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D8DC7437EC7F8650_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_D8DC7437EC7F8650_TICK_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_EBFFDA5B2524E067()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D8DC7437EC7F8650_METHOD_2_EBFFDA5B2524E067_OFFSET))(this);
	}
};
