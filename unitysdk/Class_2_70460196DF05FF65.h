#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class ShowTalkUI; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_70460196DF05FF65_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16A1E580)
#define CLASS_2_70460196DF05FF65_METHOD_2_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x16A1E750)
#define CLASS_2_70460196DF05FF65_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x16A1E5C0)
#define CLASS_2_70460196DF05FF65_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x16A1E700)
#define CLASS_2_70460196DF05FF65_TICK_OFFSET UNITYSDK_OFFSET(0x16A1E7C0)
#define CLASS_2_70460196DF05FF65__CTOR_OFFSET UNITYSDK_OFFSET(0x16A1E570)

inline static constexpr unsigned int Class_2_70460196DF05FF65_TypeDefinitionIndex = 56069;

class Class_2_70460196DF05FF65 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_0; // 0x18
	::RPG::GameCore::ShowTalkUI* Field_2_1; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ShowTalkUI* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ShowTalkUI*))((::PBYTE)hIl2Cpp + CLASS_2_70460196DF05FF65__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_70460196DF05FF65_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_70460196DF05FF65_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_70460196DF05FF65_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Method_2_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_70460196DF05FF65_METHOD_2_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_70460196DF05FF65_TICK_OFFSET))(this, a1);
	}
};
