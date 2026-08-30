#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::Client { class WaitPlanetFesLargeBonus; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define CLASS_2_48B975BB95DE1616_DISPOSE_OFFSET UNITYSDK_OFFSET(0x155208E0)
#define CLASS_2_48B975BB95DE1616_METHOD_2_7DD84EAFF333A1E4_OFFSET UNITYSDK_OFFSET(0x15520B70)
#define CLASS_2_48B975BB95DE1616_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15520970)
#define CLASS_2_48B975BB95DE1616_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x15520AC0)
#define CLASS_2_48B975BB95DE1616_TICK_OFFSET UNITYSDK_OFFSET(0x15520B10)
#define CLASS_2_48B975BB95DE1616__CTOR_OFFSET UNITYSDK_OFFSET(0x15520850)

inline static constexpr unsigned int Class_2_48B975BB95DE1616_TypeDefinitionIndex = 59059;

class Class_2_48B975BB95DE1616 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::Client::WaitPlanetFesLargeBonus* OFKGLJOAMLD; // 0x18
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
	::System::Boolean MFGHMLJJNIG; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::Client::WaitPlanetFesLargeBonus* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::Client::WaitPlanetFesLargeBonus*))((::PBYTE)hIl2Cpp + CLASS_2_48B975BB95DE1616__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_48B975BB95DE1616_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_48B975BB95DE1616_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_48B975BB95DE1616_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_48B975BB95DE1616_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_7DD84EAFF333A1E4(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_48B975BB95DE1616_METHOD_2_7DD84EAFF333A1E4_OFFSET))(this, a1);
	}
};
