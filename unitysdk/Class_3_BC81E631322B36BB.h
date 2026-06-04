#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class SetMusicVisualRenderEnable; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_BC81E631322B36BB_METHOD_3_A44A18C9451109E4_OFFSET UNITYSDK_OFFSET(0x13A48500)
#define CLASS_3_BC81E631322B36BB_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x13A48380)
#define CLASS_3_BC81E631322B36BB__CTOR_OFFSET UNITYSDK_OFFSET(0x13A48350)

inline static constexpr unsigned int Class_3_BC81E631322B36BB_TypeDefinitionIndex = 49768;

class Class_3_BC81E631322B36BB : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::SetMusicVisualRenderEnable*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetMusicVisualRenderEnable* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetMusicVisualRenderEnable*))((::PBYTE)hIl2Cpp + CLASS_3_BC81E631322B36BB__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_BC81E631322B36BB_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Method_3_A44A18C9451109E4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_BC81E631322B36BB_METHOD_3_A44A18C9451109E4_OFFSET))(this);
	}
};
