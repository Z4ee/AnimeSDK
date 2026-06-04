#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class AdvIsometricNotify; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_7224EC159E8E3D7C_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC462860)
#define CLASS_3_7224EC159E8E3D7C__CTOR_OFFSET UNITYSDK_OFFSET(0xC462830)

inline static constexpr unsigned int Class_3_7224EC159E8E3D7C_TypeDefinitionIndex = 48988;

class Class_3_7224EC159E8E3D7C : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::AdvIsometricNotify*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvIsometricNotify* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvIsometricNotify*))((::PBYTE)hIl2Cpp + CLASS_3_7224EC159E8E3D7C__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_7224EC159E8E3D7C_ONTASKBEGIN_OFFSET))(this);
	}
};
