#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_6703C6C34C6ABE20;
class Class_3_E21F6DE9B7FA4D05;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_89B5B1B04274D4C6_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB492660)
#define CLASS_3_89B5B1B04274D4C6__CTOR_OFFSET UNITYSDK_OFFSET(0xB4925C0)

inline static constexpr unsigned int Class_3_89B5B1B04274D4C6_TypeDefinitionIndex = 49609;

class Class_3_89B5B1B04274D4C6 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_6703C6C34C6ABE20*>
{
public:
	::Class_3_E21F6DE9B7FA4D05* Field_3_0; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_6703C6C34C6ABE20* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_6703C6C34C6ABE20*))((::PBYTE)hIl2Cpp + CLASS_3_89B5B1B04274D4C6__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_89B5B1B04274D4C6_ONTASKBEGIN_OFFSET))(this);
	}
};
