#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class ShowRogueShopInfoDialog; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }

#define CLASS_2_7D952C9ECDC3F33C_DISPOSE_OFFSET UNITYSDK_OFFSET(0xD1B3BC0)
#define CLASS_2_7D952C9ECDC3F33C_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xD1B3C60)
#define CLASS_2_7D952C9ECDC3F33C_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xD1B3CE0)
#define CLASS_2_7D952C9ECDC3F33C_TICK_OFFSET UNITYSDK_OFFSET(0xD1B3C00)
#define CLASS_2_7D952C9ECDC3F33C__CTOR_OFFSET UNITYSDK_OFFSET(0xD1B3BB0)

inline static constexpr unsigned int Class_2_7D952C9ECDC3F33C_TypeDefinitionIndex = 47368;

class Class_2_7D952C9ECDC3F33C : public ::Class_1_5F51D4049EA87B7B
{
public:
	// static const ::System::String* Field_2_2; // 0x0
	::RPG::GameCore::ShowRogueShopInfoDialog* Field_2_0; // 0x18
	::RPG::GameCore::TaskContext* Field_2_1; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ShowRogueShopInfoDialog* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ShowRogueShopInfoDialog*))((::PBYTE)hIl2Cpp + CLASS_2_7D952C9ECDC3F33C__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7D952C9ECDC3F33C_DISPOSE_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_7D952C9ECDC3F33C_TICK_OFFSET))(this, a1);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7D952C9ECDC3F33C_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7D952C9ECDC3F33C_ONTASKRESET_OFFSET))(this);
	}
};
