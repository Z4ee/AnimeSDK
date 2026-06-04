#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class PropResetGachaMachine; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_009F92A01F28AF4F_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x145F8AC0)
#define CLASS_3_009F92A01F28AF4F__CTOR_OFFSET UNITYSDK_OFFSET(0x145F8A90)

inline static constexpr unsigned int Class_3_009F92A01F28AF4F_TypeDefinitionIndex = 54536;

class Class_3_009F92A01F28AF4F : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::PropResetGachaMachine*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PropResetGachaMachine* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PropResetGachaMachine*))((::PBYTE)hIl2Cpp + CLASS_3_009F92A01F28AF4F__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_009F92A01F28AF4F_ONTASKBEGIN_OFFSET))(this);
	}
};
