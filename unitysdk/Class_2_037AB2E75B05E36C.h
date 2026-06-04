#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class EndPerformance; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_037AB2E75B05E36C_DISPOSE_OFFSET UNITYSDK_OFFSET(0x143AAA10)
#define CLASS_2_037AB2E75B05E36C_GET_FORCESKIP_OFFSET UNITYSDK_OFFSET(0x143AAA50)
#define CLASS_2_037AB2E75B05E36C_ONSKIP_OFFSET UNITYSDK_OFFSET(0x143AAB90)
#define CLASS_2_037AB2E75B05E36C_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x143AAA60)
#define CLASS_2_037AB2E75B05E36C_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x143AAAE0)
#define CLASS_2_037AB2E75B05E36C_TICK_OFFSET UNITYSDK_OFFSET(0x143AAB30)
#define CLASS_2_037AB2E75B05E36C__CTOR_OFFSET UNITYSDK_OFFSET(0x143AAA00)

inline static constexpr unsigned int Class_2_037AB2E75B05E36C_TypeDefinitionIndex = 54313;

class Class_2_037AB2E75B05E36C : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_0; // 0x18

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::EndPerformance* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::EndPerformance*))((::PBYTE)hIl2Cpp + CLASS_2_037AB2E75B05E36C__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_037AB2E75B05E36C_DISPOSE_OFFSET))(this);
	}

	::System::Boolean get_ForceSkip()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_037AB2E75B05E36C_GET_FORCESKIP_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_037AB2E75B05E36C_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_037AB2E75B05E36C_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_037AB2E75B05E36C_TICK_OFFSET))(this, a1);
	}

	::System::Void OnSkip()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_037AB2E75B05E36C_ONSKIP_OFFSET))(this);
	}
};
