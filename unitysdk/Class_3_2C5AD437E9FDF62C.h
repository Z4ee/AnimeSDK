#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_07C3C4D2990C49EE;
namespace RPG::GameCore { class RtCreateTrigger; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_2C5AD437E9FDF62C_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16FCFAF0)
#define CLASS_3_2C5AD437E9FDF62C_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x16FCFBC0)
#define CLASS_3_2C5AD437E9FDF62C__CTOR_OFFSET UNITYSDK_OFFSET(0x16FCFA50)

inline static constexpr unsigned int Class_3_2C5AD437E9FDF62C_TypeDefinitionIndex = 54046;

class Class_3_2C5AD437E9FDF62C : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::RtCreateTrigger*>
{
public:
	::Class_3_07C3C4D2990C49EE* OODBJDPKKKF; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RtCreateTrigger* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RtCreateTrigger*))((::PBYTE)hIl2Cpp + CLASS_3_2C5AD437E9FDF62C__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2C5AD437E9FDF62C_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2C5AD437E9FDF62C_ONTASKBEGIN_OFFSET))(this);
	}
};
