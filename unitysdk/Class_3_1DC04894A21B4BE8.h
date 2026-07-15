#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_1_5F51D4049EA87B7B;
class Class_3_07C3C4D2990C49EE;
namespace RPG::GameCore { class Remodifier; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_1DC04894A21B4BE8_DISPOSE_OFFSET UNITYSDK_OFFSET(0x18ACDFB0)
#define CLASS_3_1DC04894A21B4BE8_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x18ACE1B0)
#define CLASS_3_1DC04894A21B4BE8__CTOR_OFFSET UNITYSDK_OFFSET(0x18ACDE30)

inline static constexpr unsigned int Class_3_1DC04894A21B4BE8_TypeDefinitionIndex = 52796;

class Class_3_1DC04894A21B4BE8 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::Remodifier*>
{
public:
	::Class_3_07C3C4D2990C49EE* Field_3_0; // 0x28
	::Class_1_5F51D4049EA87B7B* Field_3_1; // 0x30
	::Class_3_07C3C4D2990C49EE* Field_3_2; // 0x38

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::Remodifier* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::Remodifier*))((::PBYTE)hIl2Cpp + CLASS_3_1DC04894A21B4BE8__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1DC04894A21B4BE8_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1DC04894A21B4BE8_ONTASKBEGIN_OFFSET))(this);
	}
};
