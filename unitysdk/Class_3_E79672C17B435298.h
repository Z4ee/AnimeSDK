#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class SetDynamicAttachPointEffectAdaptionConfig; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Text::RegularExpressions { class Regex; }

#define CLASS_3_E79672C17B435298_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x88F9900)
#define CLASS_3_E79672C17B435298__CTOR_OFFSET UNITYSDK_OFFSET(0x88F98D0)

inline static constexpr unsigned int Class_3_E79672C17B435298_TypeDefinitionIndex = 44357;

class Class_3_E79672C17B435298 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::SetDynamicAttachPointEffectAdaptionConfig*>
{
public:
	::System::Text::RegularExpressions::Regex* Field_3_0; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetDynamicAttachPointEffectAdaptionConfig* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetDynamicAttachPointEffectAdaptionConfig*))((::PBYTE)hIl2Cpp + CLASS_3_E79672C17B435298__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E79672C17B435298_ONTASKBEGIN_OFFSET))(this);
	}
};
