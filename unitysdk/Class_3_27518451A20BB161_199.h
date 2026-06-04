#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_06CA57680E115A32_17;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_199_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x136E0720)
#define CLASS_3_27518451A20BB161_199__CTOR_OFFSET UNITYSDK_OFFSET(0x136E06F0)

inline static constexpr unsigned int Class_3_27518451A20BB161_199_TypeDefinitionIndex = 54779;

class Class_3_27518451A20BB161_199 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_06CA57680E115A32_17*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_06CA57680E115A32_17* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_06CA57680E115A32_17*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_199__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_199_ONTASKBEGIN_OFFSET))(this);
	}
};
