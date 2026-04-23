#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_06CA57680E115A32_16;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_186_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x11C4D960)
#define CLASS_3_27518451A20BB161_186__CTOR_OFFSET UNITYSDK_OFFSET(0x11C4D930)

inline static constexpr unsigned int Class_3_27518451A20BB161_186_TypeDefinitionIndex = 54053;

class Class_3_27518451A20BB161_186 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_06CA57680E115A32_16*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_06CA57680E115A32_16* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_06CA57680E115A32_16*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_186__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_186_ONTASKBEGIN_OFFSET))(this);
	}
};
