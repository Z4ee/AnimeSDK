#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class SetNavMeshState; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_FA9E576B127E0BBC_METHOD_3_7A4DA50406643EC6_OFFSET UNITYSDK_OFFSET(0x1639D700)
#define CLASS_3_FA9E576B127E0BBC_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1639D6A0)
#define CLASS_3_FA9E576B127E0BBC__CTOR_OFFSET UNITYSDK_OFFSET(0x1639D670)

inline static constexpr unsigned int Class_3_FA9E576B127E0BBC_TypeDefinitionIndex = 53506;

class Class_3_FA9E576B127E0BBC : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::SetNavMeshState*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetNavMeshState* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetNavMeshState*))((::PBYTE)hIl2Cpp + CLASS_3_FA9E576B127E0BBC__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FA9E576B127E0BBC_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Boolean Method_3_7A4DA50406643EC6()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FA9E576B127E0BBC_METHOD_3_7A4DA50406643EC6_OFFSET))(this);
	}
};
