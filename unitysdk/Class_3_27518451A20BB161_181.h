#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_06CA57680E115A32_14;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_181_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xECA3A10)
#define CLASS_3_27518451A20BB161_181__CTOR_OFFSET UNITYSDK_OFFSET(0xECA39E0)

inline static constexpr unsigned int Class_3_27518451A20BB161_181_TypeDefinitionIndex = 54046;

class Class_3_27518451A20BB161_181 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_06CA57680E115A32_14*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_06CA57680E115A32_14* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_06CA57680E115A32_14*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_181__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_181_ONTASKBEGIN_OFFSET))(this);
	}
};
