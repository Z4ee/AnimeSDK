#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_06CA57680E115A32;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_4_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x8D7FEC0)
#define CLASS_3_27518451A20BB161_4__CTOR_OFFSET UNITYSDK_OFFSET(0x8D7FE90)

inline static constexpr unsigned int Class_3_27518451A20BB161_4_TypeDefinitionIndex = 42729;

class Class_3_27518451A20BB161_4 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_06CA57680E115A32*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_06CA57680E115A32* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_06CA57680E115A32*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_4__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_4_ONTASKBEGIN_OFFSET))(this);
	}
};
