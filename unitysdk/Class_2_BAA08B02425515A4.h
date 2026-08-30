#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class ShowAvatarHUDSpecialEffect; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_BAA08B02425515A4_DISPOSE_OFFSET UNITYSDK_OFFSET(0x179CD220)
#define CLASS_2_BAA08B02425515A4_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x179CD260)
#define CLASS_2_BAA08B02425515A4_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x179CD920)
#define CLASS_2_BAA08B02425515A4_TICK_OFFSET UNITYSDK_OFFSET(0x179CD970)
#define CLASS_2_BAA08B02425515A4__CTOR_OFFSET UNITYSDK_OFFSET(0x179CD210)

inline static constexpr unsigned int Class_2_BAA08B02425515A4_TypeDefinitionIndex = 56625;

class Class_2_BAA08B02425515A4 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::ShowAvatarHUDSpecialEffect* OFKGLJOAMLD; // 0x18
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ShowAvatarHUDSpecialEffect* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ShowAvatarHUDSpecialEffect*))((::PBYTE)hIl2Cpp + CLASS_2_BAA08B02425515A4__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BAA08B02425515A4_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BAA08B02425515A4_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BAA08B02425515A4_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_BAA08B02425515A4_TICK_OFFSET))(this, a1);
	}
};
