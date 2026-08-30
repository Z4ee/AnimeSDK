#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_5F2C362102AF26AB;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_221_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15606C80)
#define CLASS_3_27518451A20BB161_221_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15606CC0)
#define CLASS_3_27518451A20BB161_221__CTOR_OFFSET UNITYSDK_OFFSET(0x15606C50)

inline static constexpr unsigned int Class_3_27518451A20BB161_221_TypeDefinitionIndex = 55686;

class Class_3_27518451A20BB161_221 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_5F2C362102AF26AB*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_5F2C362102AF26AB* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_5F2C362102AF26AB*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_221__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_221_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_221_ONTASKBEGIN_OFFSET))(this);
	}
};
