#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_2_A48F3719AA1CF200_4;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitEntityArtLoad; }
namespace System { template <typename T> class Action_1; }

#define CLASS_2_F4A08C9C0F5EB4C6_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBBF5540)
#define CLASS_2_F4A08C9C0F5EB4C6_METHOD_2_2C5008384F244597_OFFSET UNITYSDK_OFFSET(0xBBF5800)
#define CLASS_2_F4A08C9C0F5EB4C6_METHOD_2_98511BB23D2E3748_OFFSET UNITYSDK_OFFSET(0xBBF57B0)
#define CLASS_2_F4A08C9C0F5EB4C6_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBBF5670)
#define CLASS_2_F4A08C9C0F5EB4C6_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xBBF5590)
#define CLASS_2_F4A08C9C0F5EB4C6_TICK_OFFSET UNITYSDK_OFFSET(0xBBF5750)
#define CLASS_2_F4A08C9C0F5EB4C6__CTOR_OFFSET UNITYSDK_OFFSET(0xBBF54E0)

inline static constexpr unsigned int Class_2_F4A08C9C0F5EB4C6_TypeDefinitionIndex = 59035;

class Class_2_F4A08C9C0F5EB4C6 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::GameEntity* POPNDPJELNO; // 0x18
	::RPG::GameCore::WaitEntityArtLoad* OFKGLJOAMLD; // 0x20
	::Class_1_5F51D4049EA87B7B* JLMAKNFAEBH; // 0x28
	::System::Action_1<::RPG::GameCore::GameEntity*>* MNGIAJPCOCG; // 0x30
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x38

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::WaitEntityArtLoad* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WaitEntityArtLoad*))((::PBYTE)hIl2Cpp + CLASS_2_F4A08C9C0F5EB4C6__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F4A08C9C0F5EB4C6_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F4A08C9C0F5EB4C6_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F4A08C9C0F5EB4C6_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_F4A08C9C0F5EB4C6_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_98511BB23D2E3748(::Class_2_A48F3719AA1CF200_4* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A48F3719AA1CF200_4*))((::PBYTE)hIl2Cpp + CLASS_2_F4A08C9C0F5EB4C6_METHOD_2_98511BB23D2E3748_OFFSET))(this, a1);
	}

	::System::Void Method_2_2C5008384F244597(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_F4A08C9C0F5EB4C6_METHOD_2_2C5008384F244597_OFFSET))(this, a1);
	}
};
