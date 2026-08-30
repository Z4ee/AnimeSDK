#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_152D3DCA2F7D1D6F;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_222_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBA6A1D0)
#define CLASS_3_27518451A20BB161_222__CTOR_OFFSET UNITYSDK_OFFSET(0xBA6A1A0)

inline static constexpr unsigned int Class_3_27518451A20BB161_222_TypeDefinitionIndex = 55688;

class Class_3_27518451A20BB161_222 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_152D3DCA2F7D1D6F*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_152D3DCA2F7D1D6F* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_152D3DCA2F7D1D6F*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_222__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_222_ONTASKBEGIN_OFFSET))(this);
	}
};
