#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class ShowRogueShopInfoDialog; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }

#define CLASS_2_7D952C9ECDC3F33C_DISPOSE_OFFSET UNITYSDK_OFFSET(0x19CA1220)
#define CLASS_2_7D952C9ECDC3F33C_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x19CA12C0)
#define CLASS_2_7D952C9ECDC3F33C_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x19CA1340)
#define CLASS_2_7D952C9ECDC3F33C_TICK_OFFSET UNITYSDK_OFFSET(0x19CA1260)
#define CLASS_2_7D952C9ECDC3F33C__CTOR_OFFSET UNITYSDK_OFFSET(0x19CA1210)

inline static constexpr unsigned int Class_2_7D952C9ECDC3F33C_TypeDefinitionIndex = 58835;

class Class_2_7D952C9ECDC3F33C : public ::Class_1_5F51D4049EA87B7B
{
public:
	// static const ::System::String* EJKJOEAMMBJ; // 0x0
	::RPG::GameCore::ShowRogueShopInfoDialog* OFKGLJOAMLD; // 0x18
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20

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
