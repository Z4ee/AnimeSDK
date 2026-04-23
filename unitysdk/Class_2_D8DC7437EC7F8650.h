#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class PlayerHPRatioCheck; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_D8DC7437EC7F8650_DISPOSE_OFFSET UNITYSDK_OFFSET(0x129F8ED0)
#define CLASS_2_D8DC7437EC7F8650_METHOD_2_343259340A59888D_OFFSET UNITYSDK_OFFSET(0x129F9020)
#define CLASS_2_D8DC7437EC7F8650_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x129F8F10)
#define CLASS_2_D8DC7437EC7F8650_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x129F8F60)
#define CLASS_2_D8DC7437EC7F8650_TICK_OFFSET UNITYSDK_OFFSET(0x129F8FB0)
#define CLASS_2_D8DC7437EC7F8650__CTOR_OFFSET UNITYSDK_OFFSET(0x129F8EC0)

inline static constexpr unsigned int Class_2_D8DC7437EC7F8650_TypeDefinitionIndex = 53760;

class Class_2_D8DC7437EC7F8650 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::PlayerHPRatioCheck* Field_2_0; // 0x18
	::RPG::GameCore::TaskContext* Field_2_1; // 0x20

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

	::System::Boolean Method_2_343259340A59888D()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D8DC7437EC7F8650_METHOD_2_343259340A59888D_OFFSET))(this);
	}
};
