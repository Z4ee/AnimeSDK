#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_06CA57680E115A32_17;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_26_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x9A07360)
#define CLASS_3_27518451A20BB161_26__CTOR_OFFSET UNITYSDK_OFFSET(0x9A07330)

inline static constexpr unsigned int Class_3_27518451A20BB161_26_TypeDefinitionIndex = 48750;

class Class_3_27518451A20BB161_26 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_06CA57680E115A32_17*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_06CA57680E115A32_17* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_06CA57680E115A32_17*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_26__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_26_ONTASKBEGIN_OFFSET))(this);
	}
};
