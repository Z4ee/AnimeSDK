#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class CacheUI; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_9B8DF5B996968D25_DISPOSE_OFFSET UNITYSDK_OFFSET(0xD174AC0)
#define CLASS_2_9B8DF5B996968D25_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xD174B10)
#define CLASS_2_9B8DF5B996968D25_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xD174D00)
#define CLASS_2_9B8DF5B996968D25_TICK_OFFSET UNITYSDK_OFFSET(0xD174D50)
#define CLASS_2_9B8DF5B996968D25__CTOR_OFFSET UNITYSDK_OFFSET(0xD174AB0)

inline static constexpr unsigned int Class_2_9B8DF5B996968D25_TypeDefinitionIndex = 46771;

class Class_2_9B8DF5B996968D25 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::CacheUI* Field_2_0; // 0x18

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::CacheUI* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::CacheUI*))((::PBYTE)hIl2Cpp + CLASS_2_9B8DF5B996968D25__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9B8DF5B996968D25_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9B8DF5B996968D25_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9B8DF5B996968D25_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_9B8DF5B996968D25_TICK_OFFSET))(this, a1);
	}
};
