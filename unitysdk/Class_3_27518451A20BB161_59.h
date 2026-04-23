#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_06CA57680E115A32_4;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_59_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x953B110)
#define CLASS_3_27518451A20BB161_59__CTOR_OFFSET UNITYSDK_OFFSET(0x953B0E0)

inline static constexpr unsigned int Class_3_27518451A20BB161_59_TypeDefinitionIndex = 49070;

class Class_3_27518451A20BB161_59 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_06CA57680E115A32_4*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_06CA57680E115A32_4* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_06CA57680E115A32_4*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_59__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_59_ONTASKBEGIN_OFFSET))(this);
	}
};
