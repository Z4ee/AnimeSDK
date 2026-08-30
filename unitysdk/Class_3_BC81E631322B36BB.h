#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class SetMusicVisualRenderEnable; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_BC81E631322B36BB_METHOD_3_AA7E3074254D484A_OFFSET UNITYSDK_OFFSET(0x158641F0)
#define CLASS_3_BC81E631322B36BB_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15864070)
#define CLASS_3_BC81E631322B36BB__CTOR_OFFSET UNITYSDK_OFFSET(0x15864040)

inline static constexpr unsigned int Class_3_BC81E631322B36BB_TypeDefinitionIndex = 53505;

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

	::System::Void Method_3_AA7E3074254D484A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_BC81E631322B36BB_METHOD_3_AA7E3074254D484A_OFFSET))(this);
	}
};
