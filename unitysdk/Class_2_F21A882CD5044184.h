#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class HideHintEffect; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_F21A882CD5044184_DISPOSE_OFFSET UNITYSDK_OFFSET(0x17A7A820)
#define CLASS_2_F21A882CD5044184_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x17A7A860)
#define CLASS_2_F21A882CD5044184_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x17A7AE70)
#define CLASS_2_F21A882CD5044184_TICK_OFFSET UNITYSDK_OFFSET(0x17A7AEB0)
#define CLASS_2_F21A882CD5044184__CTOR_OFFSET UNITYSDK_OFFSET(0x17A7A810)

inline static constexpr unsigned int Class_2_F21A882CD5044184_TypeDefinitionIndex = 50530;

class Class_2_F21A882CD5044184 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_0; // 0x18
	::RPG::GameCore::HideHintEffect* Field_2_1; // 0x20
	::System::UInt32 Field_2_2; // 0x28
	::System::UInt32 Field_2_3; // 0x2C

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::HideHintEffect* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::HideHintEffect*))((::PBYTE)hIl2Cpp + CLASS_2_F21A882CD5044184__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F21A882CD5044184_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F21A882CD5044184_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F21A882CD5044184_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_F21A882CD5044184_TICK_OFFSET))(this, a1);
	}
};
