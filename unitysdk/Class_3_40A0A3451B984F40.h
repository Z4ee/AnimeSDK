#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class StopDitherClose; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_40A0A3451B984F40_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x16B52880)
#define CLASS_3_40A0A3451B984F40__CTOR_OFFSET UNITYSDK_OFFSET(0x16B52850)

inline static constexpr unsigned int Class_3_40A0A3451B984F40_TypeDefinitionIndex = 50868;

class Class_3_40A0A3451B984F40 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::StopDitherClose*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::StopDitherClose* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::StopDitherClose*))((::PBYTE)hIl2Cpp + CLASS_3_40A0A3451B984F40__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_40A0A3451B984F40_ONTASKBEGIN_OFFSET))(this);
	}
};
