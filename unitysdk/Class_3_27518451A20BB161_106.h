#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_06CA57680E115A32_14;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_106_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xD1B3E30)
#define CLASS_3_27518451A20BB161_106__CTOR_OFFSET UNITYSDK_OFFSET(0xD1B3E00)

inline static constexpr unsigned int Class_3_27518451A20BB161_106_TypeDefinitionIndex = 47413;

class Class_3_27518451A20BB161_106 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_06CA57680E115A32_14*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_06CA57680E115A32_14* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_06CA57680E115A32_14*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_106__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_106_ONTASKBEGIN_OFFSET))(this);
	}
};
