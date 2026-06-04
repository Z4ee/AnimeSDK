#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class GlobalOverrideTimeRewindSpecialControlMode; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_A285E99D3729B859_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x141E8F30)
#define CLASS_3_A285E99D3729B859__CTOR_OFFSET UNITYSDK_OFFSET(0x141E8F00)

inline static constexpr unsigned int Class_3_A285E99D3729B859_TypeDefinitionIndex = 49869;

class Class_3_A285E99D3729B859 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::GlobalOverrideTimeRewindSpecialControlMode*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::GlobalOverrideTimeRewindSpecialControlMode* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::GlobalOverrideTimeRewindSpecialControlMode*))((::PBYTE)hIl2Cpp + CLASS_3_A285E99D3729B859__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A285E99D3729B859_ONTASKBEGIN_OFFSET))(this);
	}
};
