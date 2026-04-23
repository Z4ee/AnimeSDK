#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_071A4770D673A34D_1;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_19_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x953B370)
#define CLASS_3_27518451A20BB161_19__CTOR_OFFSET UNITYSDK_OFFSET(0x953B340)

inline static constexpr unsigned int Class_3_27518451A20BB161_19_TypeDefinitionIndex = 48737;

class Class_3_27518451A20BB161_19 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_071A4770D673A34D_1*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_071A4770D673A34D_1* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_071A4770D673A34D_1*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_19__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_19_ONTASKBEGIN_OFFSET))(this);
	}
};
