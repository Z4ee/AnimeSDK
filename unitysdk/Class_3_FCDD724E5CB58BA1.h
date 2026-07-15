#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class PropSetEntityLodOffset; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_FCDD724E5CB58BA1_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1609A670)
#define CLASS_3_FCDD724E5CB58BA1__CTOR_OFFSET UNITYSDK_OFFSET(0x1609A640)

inline static constexpr unsigned int Class_3_FCDD724E5CB58BA1_TypeDefinitionIndex = 55764;

class Class_3_FCDD724E5CB58BA1 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::PropSetEntityLodOffset*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PropSetEntityLodOffset* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PropSetEntityLodOffset*))((::PBYTE)hIl2Cpp + CLASS_3_FCDD724E5CB58BA1__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FCDD724E5CB58BA1_ONTASKBEGIN_OFFSET))(this);
	}
};
