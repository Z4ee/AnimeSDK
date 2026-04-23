#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class AlleyTransportFocusCamera; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_20146DCC0CCE0BFA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x96FCCF0)
#define CLASS_2_20146DCC0CCE0BFA_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x96FCD30)
#define CLASS_2_20146DCC0CCE0BFA_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x96FCDB0)
#define CLASS_2_20146DCC0CCE0BFA_TICK_OFFSET UNITYSDK_OFFSET(0x96FCE00)
#define CLASS_2_20146DCC0CCE0BFA__CTOR_OFFSET UNITYSDK_OFFSET(0x96FCCE0)

inline static constexpr unsigned int Class_2_20146DCC0CCE0BFA_TypeDefinitionIndex = 53426;

class Class_2_20146DCC0CCE0BFA : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_1; // 0x18
	::RPG::GameCore::AlleyTransportFocusCamera* Field_2_0; // 0x20
	::System::Single Field_2_2; // 0x28

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
