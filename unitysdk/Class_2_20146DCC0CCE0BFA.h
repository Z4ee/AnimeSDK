#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class AlleyTransportFocusCamera; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_20146DCC0CCE0BFA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x18FED240)
#define CLASS_2_20146DCC0CCE0BFA_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x18FED280)
#define CLASS_2_20146DCC0CCE0BFA_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x18FED300)
#define CLASS_2_20146DCC0CCE0BFA_TICK_OFFSET UNITYSDK_OFFSET(0x18FED350)
#define CLASS_2_20146DCC0CCE0BFA__CTOR_OFFSET UNITYSDK_OFFSET(0x18FED230)

inline static constexpr unsigned int Class_2_20146DCC0CCE0BFA_TypeDefinitionIndex = 58086;

class Class_2_20146DCC0CCE0BFA : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
	::RPG::GameCore::AlleyTransportFocusCamera* OFKGLJOAMLD; // 0x20
	::System::Single BOBKAKEJPEI; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AlleyTransportFocusCamera* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AlleyTransportFocusCamera*))((::PBYTE)hIl2Cpp + CLASS_2_20146DCC0CCE0BFA__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_20146DCC0CCE0BFA_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_20146DCC0CCE0BFA_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_20146DCC0CCE0BFA_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_20146DCC0CCE0BFA_TICK_OFFSET))(this, a1);
	}
};
