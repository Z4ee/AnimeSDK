#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_AEEA5F43E77E45D7;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_156_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x17528C40)
#define CLASS_3_27518451A20BB161_156__CTOR_OFFSET UNITYSDK_OFFSET(0x17528C10)

inline static constexpr unsigned int Class_3_27518451A20BB161_156_TypeDefinitionIndex = 52452;

class Class_3_27518451A20BB161_156 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_AEEA5F43E77E45D7*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_AEEA5F43E77E45D7* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_AEEA5F43E77E45D7*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_156__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_156_ONTASKBEGIN_OFFSET))(this);
	}
};
