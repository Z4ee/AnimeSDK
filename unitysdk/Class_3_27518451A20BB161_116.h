#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_0D8E5F1714E99559;
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }

#define CLASS_3_27518451A20BB161_116_METHOD_3_83757353D0452C46_OFFSET UNITYSDK_OFFSET(0x15869860)
#define CLASS_3_27518451A20BB161_116_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15869000)
#define CLASS_3_27518451A20BB161_116__CTOR_OFFSET UNITYSDK_OFFSET(0x15868FD0)

inline static constexpr unsigned int Class_3_27518451A20BB161_116_TypeDefinitionIndex = 53348;

class Class_3_27518451A20BB161_116 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_0D8E5F1714E99559*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_0D8E5F1714E99559* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_0D8E5F1714E99559*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_116__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_116_ONTASKBEGIN_OFFSET))(this);
	}

	::System::UInt32 Method_3_83757353D0452C46(::System::String* a1)
	{
		return ((::System::UInt32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_116_METHOD_3_83757353D0452C46_OFFSET))(this, a1);
	}
};
