#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class SetMusicVisualRenderEnable; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_BC81E631322B36BB_METHOD_3_07E567B3C6C3D7D7_OFFSET UNITYSDK_OFFSET(0x11377F60)
#define CLASS_3_BC81E631322B36BB_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x11377DE0)
#define CLASS_3_BC81E631322B36BB__CTOR_OFFSET UNITYSDK_OFFSET(0x11377DB0)

inline static constexpr unsigned int Class_3_BC81E631322B36BB_TypeDefinitionIndex = 43111;

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

	::System::Void Method_3_07E567B3C6C3D7D7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_BC81E631322B36BB_METHOD_3_07E567B3C6C3D7D7_OFFSET))(this);
	}
};
