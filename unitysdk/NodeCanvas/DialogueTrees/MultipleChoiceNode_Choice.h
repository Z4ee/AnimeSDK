#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace NodeCanvas::DialogueTrees { class Statement; }
namespace NodeCanvas::Framework { class ConditionTask; }

#define NODECANVAS_DIALOGUETREES_MULTIPLECHOICENODE_CHOICE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1B0B6210)
#define NODECANVAS_DIALOGUETREES_MULTIPLECHOICENODE_CHOICE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B0B6200)

namespace NodeCanvas::DialogueTrees
{
	inline static constexpr unsigned int MultipleChoiceNode_Choice_TypeDefinitionIndex = 28130;

	class MultipleChoiceNode_Choice : public ::System::Object
	{
	public:
		::System::Boolean isUnfolded; // 0x10
		::NodeCanvas::DialogueTrees::Statement* statement; // 0x18
		::NodeCanvas::Framework::ConditionTask* condition; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_DIALOGUETREES_MULTIPLECHOICENODE_CHOICE__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::NodeCanvas::DialogueTrees::Statement* statement)
		{
			return ((::System::Void(*)(::PVOID, ::NodeCanvas::DialogueTrees::Statement*))((::PBYTE)hIl2Cpp + NODECANVAS_DIALOGUETREES_MULTIPLECHOICENODE_CHOICE__CTOR_1_OFFSET))(this, statement);
		}
	};
}
