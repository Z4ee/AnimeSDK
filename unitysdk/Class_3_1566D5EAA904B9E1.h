#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TransferMahJongLayoutEffect; }

#define CLASS_3_1566D5EAA904B9E1_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xE4FCA80)
#define CLASS_3_1566D5EAA904B9E1__CTOR_OFFSET UNITYSDK_OFFSET(0xE4FCA50)

inline static constexpr unsigned int Class_3_1566D5EAA904B9E1_TypeDefinitionIndex = 53187;

class Class_3_1566D5EAA904B9E1 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::TransferMahJongLayoutEffect*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TransferMahJongLayoutEffect* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TransferMahJongLayoutEffect*))((::PBYTE)hIl2Cpp + CLASS_3_1566D5EAA904B9E1__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1566D5EAA904B9E1_ONTASKBEGIN_OFFSET))(this);
	}
};
