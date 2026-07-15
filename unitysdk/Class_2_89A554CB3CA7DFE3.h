#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class ShowPenaconyGiftSubmitPage; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_89A554CB3CA7DFE3_DISPOSE_OFFSET UNITYSDK_OFFSET(0x17051EA0)
#define CLASS_2_89A554CB3CA7DFE3_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x17051EE0)
#define CLASS_2_89A554CB3CA7DFE3_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x17051F30)
#define CLASS_2_89A554CB3CA7DFE3_TICK_OFFSET UNITYSDK_OFFSET(0x17051F80)
#define CLASS_2_89A554CB3CA7DFE3__CTOR_OFFSET UNITYSDK_OFFSET(0x17051E90)

inline static constexpr unsigned int Class_2_89A554CB3CA7DFE3_TypeDefinitionIndex = 50856;

class Class_2_89A554CB3CA7DFE3 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ShowPenaconyGiftSubmitPage* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ShowPenaconyGiftSubmitPage*))((::PBYTE)hIl2Cpp + CLASS_2_89A554CB3CA7DFE3__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_89A554CB3CA7DFE3_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_89A554CB3CA7DFE3_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_89A554CB3CA7DFE3_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_89A554CB3CA7DFE3_TICK_OFFSET))(this, a1);
	}
};
