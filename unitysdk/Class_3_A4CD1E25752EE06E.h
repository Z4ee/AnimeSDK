#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class ResetActionCountDown; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_A4CD1E25752EE06E_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x11670E20)
#define CLASS_3_A4CD1E25752EE06E__CTOR_OFFSET UNITYSDK_OFFSET(0x11670DF0)

inline static constexpr unsigned int Class_3_A4CD1E25752EE06E_TypeDefinitionIndex = 43862;

class Class_3_A4CD1E25752EE06E : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::ResetActionCountDown*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ResetActionCountDown* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ResetActionCountDown*))((::PBYTE)hIl2Cpp + CLASS_3_A4CD1E25752EE06E__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A4CD1E25752EE06E_ONTASKBEGIN_OFFSET))(this);
	}
};
