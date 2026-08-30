#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class InitIsometricRoadLinker; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_9C8628A99732DCDB_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1546E5B0)
#define CLASS_3_9C8628A99732DCDB__CTOR_OFFSET UNITYSDK_OFFSET(0x1546E580)

inline static constexpr unsigned int Class_3_9C8628A99732DCDB_TypeDefinitionIndex = 53202;

class Class_3_9C8628A99732DCDB : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::InitIsometricRoadLinker*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::InitIsometricRoadLinker* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::InitIsometricRoadLinker*))((::PBYTE)hIl2Cpp + CLASS_3_9C8628A99732DCDB__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9C8628A99732DCDB_ONTASKBEGIN_OFFSET))(this);
	}
};
