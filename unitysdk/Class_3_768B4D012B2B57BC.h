#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class PropAttachPointRendererSetVisibility; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_768B4D012B2B57BC_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1A8456A0)
#define CLASS_3_768B4D012B2B57BC__CTOR_OFFSET UNITYSDK_OFFSET(0x1A845670)

inline static constexpr unsigned int Class_3_768B4D012B2B57BC_TypeDefinitionIndex = 58451;

class Class_3_768B4D012B2B57BC : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::PropAttachPointRendererSetVisibility*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PropAttachPointRendererSetVisibility* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PropAttachPointRendererSetVisibility*))((::PBYTE)hIl2Cpp + CLASS_3_768B4D012B2B57BC__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_768B4D012B2B57BC_ONTASKBEGIN_OFFSET))(this);
	}
};
