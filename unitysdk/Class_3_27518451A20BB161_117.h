#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_F618693DC2D27561;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_117_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC6FD530)
#define CLASS_3_27518451A20BB161_117_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC6FD570)
#define CLASS_3_27518451A20BB161_117__CTOR_OFFSET UNITYSDK_OFFSET(0xC6FD500)
#define CLASS_3_27518451A20BB161_117___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC6FD630)

inline static constexpr unsigned int Class_3_27518451A20BB161_117_TypeDefinitionIndex = 50776;

class Class_3_27518451A20BB161_117 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_F618693DC2D27561*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_F618693DC2D27561* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_F618693DC2D27561*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_117__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_117_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_117_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_117___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}
};
