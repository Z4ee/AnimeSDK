#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BoolEx.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"
#include "unitysdk/System/Nullable_1.h"

class Class_3_05677D33458EB438;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_102_METHOD_3_4AD3C45D81B35B70_OFFSET UNITYSDK_OFFSET(0x13544DF0)
#define CLASS_3_27518451A20BB161_102_METHOD_3_71436269021F921C_OFFSET UNITYSDK_OFFSET(0x13544D00)
#define CLASS_3_27518451A20BB161_102_METHOD_3_CD0979951400C3FD_OFFSET UNITYSDK_OFFSET(0x13544D90)
#define CLASS_3_27518451A20BB161_102_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x13543AE0)
#define CLASS_3_27518451A20BB161_102__CTOR_OFFSET UNITYSDK_OFFSET(0x13543AB0)

inline static constexpr unsigned int Class_3_27518451A20BB161_102_TypeDefinitionIndex = 50613;

class Class_3_27518451A20BB161_102 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_05677D33458EB438*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_05677D33458EB438* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_05677D33458EB438*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_102__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_102_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Nullable_1<::RPG::GameCore::FixPoint> Method_3_71436269021F921C(::RPG::GameCore::DynamicFloat* a1)
	{
		return ((::System::Nullable_1<::RPG::GameCore::FixPoint>(*)(::PVOID, ::RPG::GameCore::DynamicFloat*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_102_METHOD_3_71436269021F921C_OFFSET))(this, a1);
	}

	::System::Nullable_1<::System::Boolean> Method_3_CD0979951400C3FD(::RPG::GameCore::BoolEx a1)
	{
		return ((::System::Nullable_1<::System::Boolean>(*)(::PVOID, ::RPG::GameCore::BoolEx))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_102_METHOD_3_CD0979951400C3FD_OFFSET))(this, a1);
	}

	::System::Nullable_1<::System::Int32> Method_3_4AD3C45D81B35B70(::System::Int32 a1)
	{
		return ((::System::Nullable_1<::System::Int32>(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_102_METHOD_3_4AD3C45D81B35B70_OFFSET))(this, a1);
	}
};
