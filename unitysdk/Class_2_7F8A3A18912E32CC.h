#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_3_07C3C4D2990C49EE;
namespace RPG::GameCore { class AdvWaitArtLoad; }
namespace RPG::GameCore { class CharacterModelComponent; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_7F8A3A18912E32CC_DISPOSE_OFFSET UNITYSDK_OFFSET(0x186CFB70)
#define CLASS_2_7F8A3A18912E32CC_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x186CFC40)
#define CLASS_2_7F8A3A18912E32CC_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x186CFDB0)
#define CLASS_2_7F8A3A18912E32CC_TICK_OFFSET UNITYSDK_OFFSET(0x186CFE00)
#define CLASS_2_7F8A3A18912E32CC__CTOR_OFFSET UNITYSDK_OFFSET(0x186CFAE0)

inline static constexpr unsigned int Class_2_7F8A3A18912E32CC_TypeDefinitionIndex = 52794;

class Class_2_7F8A3A18912E32CC : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::CharacterModelComponent* FFPNKJOPAIL; // 0x18
	::RPG::GameCore::AdvWaitArtLoad* OFKGLJOAMLD; // 0x20
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x28
	::Class_3_07C3C4D2990C49EE* DKLIJOFDJCK; // 0x30
	::System::Boolean FCDAPPDMLEG; // 0x38

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvWaitArtLoad* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvWaitArtLoad*))((::PBYTE)hIl2Cpp + CLASS_2_7F8A3A18912E32CC__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7F8A3A18912E32CC_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7F8A3A18912E32CC_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7F8A3A18912E32CC_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_7F8A3A18912E32CC_TICK_OFFSET))(this, a1);
	}
};
