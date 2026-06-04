#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_1975A5FDAE8FEEF0;
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }

#define CLASS_3_27518451A20BB161_193_METHOD_3_6929C20FCC70C1A3_OFFSET UNITYSDK_OFFSET(0xAA058E0)
#define CLASS_3_27518451A20BB161_193_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xAA056B0)
#define CLASS_3_27518451A20BB161_193__CTOR_OFFSET UNITYSDK_OFFSET(0xAA05680)

inline static constexpr unsigned int Class_3_27518451A20BB161_193_TypeDefinitionIndex = 54755;

class Class_3_27518451A20BB161_193 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_1975A5FDAE8FEEF0*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_1975A5FDAE8FEEF0* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_1975A5FDAE8FEEF0*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_193__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_193_ONTASKBEGIN_OFFSET))(this);
	}

	::System::String* Method_3_6929C20FCC70C1A3()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_193_METHOD_3_6929C20FCC70C1A3_OFFSET))(this);
	}
};
