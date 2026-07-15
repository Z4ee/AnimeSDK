#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_CBA1E7FD4C82B228;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_136_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16B59CB0)
#define CLASS_3_27518451A20BB161_136_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x16B59CF0)
#define CLASS_3_27518451A20BB161_136__CTOR_OFFSET UNITYSDK_OFFSET(0x16B59C80)

inline static constexpr unsigned int Class_3_27518451A20BB161_136_TypeDefinitionIndex = 51460;

class Class_3_27518451A20BB161_136 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_CBA1E7FD4C82B228*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_CBA1E7FD4C82B228* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_CBA1E7FD4C82B228*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_136__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_136_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_136_ONTASKBEGIN_OFFSET))(this);
	}
};
