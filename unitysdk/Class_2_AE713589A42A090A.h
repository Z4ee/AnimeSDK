#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class CharacterReplaceAnimatorController; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_AE713589A42A090A_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC16B280)
#define CLASS_2_AE713589A42A090A_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC16B2C0)
#define CLASS_2_AE713589A42A090A_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xC16B470)
#define CLASS_2_AE713589A42A090A_TICK_OFFSET UNITYSDK_OFFSET(0xC16B4C0)
#define CLASS_2_AE713589A42A090A__CTOR_OFFSET UNITYSDK_OFFSET(0xC16B270)

inline static constexpr unsigned int Class_2_AE713589A42A090A_TypeDefinitionIndex = 55154;

class Class_2_AE713589A42A090A : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
	::RPG::GameCore::CharacterReplaceAnimatorController* OFKGLJOAMLD; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::CharacterReplaceAnimatorController* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::CharacterReplaceAnimatorController*))((::PBYTE)hIl2Cpp + CLASS_2_AE713589A42A090A__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AE713589A42A090A_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AE713589A42A090A_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AE713589A42A090A_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_AE713589A42A090A_TICK_OFFSET))(this, a1);
	}
};
