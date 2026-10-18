#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_30A54EB5ABE52F0F;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_284_METHOD_3_23C3681AC9E5D438_OFFSET UNITYSDK_OFFSET(0xB0C8F30)
#define CLASS_3_27518451A20BB161_284_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB0C8EE0)
#define CLASS_3_27518451A20BB161_284__CTOR_OFFSET UNITYSDK_OFFSET(0xB0C8EB0)

inline static constexpr unsigned int Class_3_27518451A20BB161_284_TypeDefinitionIndex = 56411;

class Class_3_27518451A20BB161_284 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_30A54EB5ABE52F0F*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_30A54EB5ABE52F0F* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_30A54EB5ABE52F0F*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_284__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_284_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Method_3_23C3681AC9E5D438()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_284_METHOD_3_23C3681AC9E5D438_OFFSET))(this);
	}
};
