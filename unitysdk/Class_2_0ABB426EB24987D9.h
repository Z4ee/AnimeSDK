#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_2_A48F3719AA1CF200_7;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class PlayPenaconyEndmostShowPage; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class IDisposable; }

#define CLASS_2_0ABB426EB24987D9_DISPOSE_OFFSET UNITYSDK_OFFSET(0x155CFA00)
#define CLASS_2_0ABB426EB24987D9_METHOD_2_35942D7A8A374AB0_OFFSET UNITYSDK_OFFSET(0x155CF6E0)
#define CLASS_2_0ABB426EB24987D9_METHOD_2_98511BB23D2E3748_OFFSET UNITYSDK_OFFSET(0x155CFCE0)
#define CLASS_2_0ABB426EB24987D9_METHOD_2_A5B6063FFC26FC8F_OFFSET UNITYSDK_OFFSET(0x155CF3F0)
#define CLASS_2_0ABB426EB24987D9_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x155CF0B0)
#define CLASS_2_0ABB426EB24987D9_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x155CFB40)
#define CLASS_2_0ABB426EB24987D9_TICK_OFFSET UNITYSDK_OFFSET(0x155CFC80)
#define CLASS_2_0ABB426EB24987D9__CTOR_OFFSET UNITYSDK_OFFSET(0x155CF0A0)

inline static constexpr unsigned int Class_2_0ABB426EB24987D9_TypeDefinitionIndex = 53069;

class Class_2_0ABB426EB24987D9 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::GameEntity* GGPBBEOEPCB; // 0x18
	::RPG::GameCore::TaskContext* EEFMDEHLLFI; // 0x20
	::Class_2_A48F3719AA1CF200_7* JLMAKNFAEBH; // 0x28
	::System::IDisposable* IDDCLDHMEEM; // 0x30
	::RPG::GameCore::PlayPenaconyEndmostShowPage* OFKGLJOAMLD; // 0x38

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PlayPenaconyEndmostShowPage* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PlayPenaconyEndmostShowPage*))((::PBYTE)hIl2Cpp + CLASS_2_0ABB426EB24987D9__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0ABB426EB24987D9_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Method_2_A5B6063FFC26FC8F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0ABB426EB24987D9_METHOD_2_A5B6063FFC26FC8F_OFFSET))(this);
	}

	::System::Void Method_2_35942D7A8A374AB0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0ABB426EB24987D9_METHOD_2_35942D7A8A374AB0_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0ABB426EB24987D9_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0ABB426EB24987D9_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_0ABB426EB24987D9_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_98511BB23D2E3748(::Class_2_A48F3719AA1CF200_7* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A48F3719AA1CF200_7*))((::PBYTE)hIl2Cpp + CLASS_2_0ABB426EB24987D9_METHOD_2_98511BB23D2E3748_OFFSET))(this, a1);
	}
};
