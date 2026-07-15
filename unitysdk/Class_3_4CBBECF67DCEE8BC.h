#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class EnableBillboard; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_4CBBECF67DCEE8BC_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x17F20500)
#define CLASS_3_4CBBECF67DCEE8BC__CTOR_OFFSET UNITYSDK_OFFSET(0x17F204D0)

inline static constexpr unsigned int Class_3_4CBBECF67DCEE8BC_TypeDefinitionIndex = 55524;

class Class_3_4CBBECF67DCEE8BC : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::EnableBillboard*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::EnableBillboard* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::EnableBillboard*))((::PBYTE)hIl2Cpp + CLASS_3_4CBBECF67DCEE8BC__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4CBBECF67DCEE8BC_ONTASKBEGIN_OFFSET))(this);
	}
};
