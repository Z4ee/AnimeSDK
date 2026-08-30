#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class DefineHPSharedGroup; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_FD91B4E966A050CB_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x18E5F7D0)
#define CLASS_3_FD91B4E966A050CB__CTOR_OFFSET UNITYSDK_OFFSET(0x18E5F7A0)

inline static constexpr unsigned int Class_3_FD91B4E966A050CB_TypeDefinitionIndex = 55293;

class Class_3_FD91B4E966A050CB : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::DefineHPSharedGroup*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::DefineHPSharedGroup* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::DefineHPSharedGroup*))((::PBYTE)hIl2Cpp + CLASS_3_FD91B4E966A050CB__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FD91B4E966A050CB_ONTASKBEGIN_OFFSET))(this);
	}
};
