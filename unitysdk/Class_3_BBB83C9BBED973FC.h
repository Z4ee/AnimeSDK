#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class AdvNPCSetFrozen; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_BBB83C9BBED973FC_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x14229E40)
#define CLASS_3_BBB83C9BBED973FC__CTOR_OFFSET UNITYSDK_OFFSET(0x14229E10)

inline static constexpr unsigned int Class_3_BBB83C9BBED973FC_TypeDefinitionIndex = 49042;

class Class_3_BBB83C9BBED973FC : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::AdvNPCSetFrozen*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvNPCSetFrozen* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvNPCSetFrozen*))((::PBYTE)hIl2Cpp + CLASS_3_BBB83C9BBED973FC__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_BBB83C9BBED973FC_ONTASKBEGIN_OFFSET))(this);
	}
};
