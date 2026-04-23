#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_06CA57680E115A32_13;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_182_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x9394450)
#define CLASS_3_27518451A20BB161_182__CTOR_OFFSET UNITYSDK_OFFSET(0x9394420)

inline static constexpr unsigned int Class_3_27518451A20BB161_182_TypeDefinitionIndex = 54047;

class Class_3_27518451A20BB161_182 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_06CA57680E115A32_13*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_06CA57680E115A32_13* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_06CA57680E115A32_13*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_182__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_182_ONTASKBEGIN_OFFSET))(this);
	}
};
