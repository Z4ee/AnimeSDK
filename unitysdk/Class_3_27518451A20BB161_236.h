#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_152D3DCA2F7D1D6F;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_236_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB930410)
#define CLASS_3_27518451A20BB161_236__CTOR_OFFSET UNITYSDK_OFFSET(0xB9303E0)

inline static constexpr unsigned int Class_3_27518451A20BB161_236_TypeDefinitionIndex = 55496;

class Class_3_27518451A20BB161_236 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_152D3DCA2F7D1D6F*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_152D3DCA2F7D1D6F* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_152D3DCA2F7D1D6F*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_236__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_236_ONTASKBEGIN_OFFSET))(this);
	}
};
