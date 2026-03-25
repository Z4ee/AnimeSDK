#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class CaptureMainCamera; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_B59BC6EE769D2F92_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x10B4CCF0)
#define CLASS_3_B59BC6EE769D2F92__CTOR_OFFSET UNITYSDK_OFFSET(0x10B4CCC0)

inline static constexpr unsigned int Class_3_B59BC6EE769D2F92_TypeDefinitionIndex = 46772;

class Class_3_B59BC6EE769D2F92 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::CaptureMainCamera*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::CaptureMainCamera* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::CaptureMainCamera*))((::PBYTE)hIl2Cpp + CLASS_3_B59BC6EE769D2F92__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B59BC6EE769D2F92_ONTASKBEGIN_OFFSET))(this);
	}
};
