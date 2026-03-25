#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class SetExcludeInMultiCharacterFormation; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_A79DCA646540D294_DISPOSE_OFFSET UNITYSDK_OFFSET(0x11183B50)
#define CLASS_2_A79DCA646540D294_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x11183B90)
#define CLASS_2_A79DCA646540D294_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x11183D10)
#define CLASS_2_A79DCA646540D294_TICK_OFFSET UNITYSDK_OFFSET(0x11183D60)
#define CLASS_2_A79DCA646540D294__CTOR_OFFSET UNITYSDK_OFFSET(0x11183B40)

inline static constexpr unsigned int Class_2_A79DCA646540D294_TypeDefinitionIndex = 44453;

class Class_2_A79DCA646540D294 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::SetExcludeInMultiCharacterFormation* Field_2_0; // 0x18
	::RPG::GameCore::TaskContext* Field_2_1; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetExcludeInMultiCharacterFormation* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetExcludeInMultiCharacterFormation*))((::PBYTE)hIl2Cpp + CLASS_2_A79DCA646540D294__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A79DCA646540D294_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A79DCA646540D294_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A79DCA646540D294_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_A79DCA646540D294_TICK_OFFSET))(this, a1);
	}
};
