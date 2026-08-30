#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class FiveDimAddGlobalTimeScale; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_841F9A59515A2950_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x18809590)
#define CLASS_3_841F9A59515A2950__CTOR_OFFSET UNITYSDK_OFFSET(0x18809560)

inline static constexpr unsigned int Class_3_841F9A59515A2950_TypeDefinitionIndex = 53100;

class Class_3_841F9A59515A2950 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::FiveDimAddGlobalTimeScale*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::FiveDimAddGlobalTimeScale* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::FiveDimAddGlobalTimeScale*))((::PBYTE)hIl2Cpp + CLASS_3_841F9A59515A2950__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_841F9A59515A2950_ONTASKBEGIN_OFFSET))(this);
	}
};
