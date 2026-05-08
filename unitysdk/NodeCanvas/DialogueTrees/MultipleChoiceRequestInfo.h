#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace NodeCanvas::DialogueTrees { class IDialogueActor; }
namespace NodeCanvas::DialogueTrees { class IStatement; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define NODECANVAS_DIALOGUETREES_MULTIPLECHOICEREQUESTINFO__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1B0F1AE0)
#define NODECANVAS_DIALOGUETREES_MULTIPLECHOICEREQUESTINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1B0F1AC0)

namespace NodeCanvas::DialogueTrees
{
	inline static constexpr unsigned int MultipleChoiceRequestInfo_TypeDefinitionIndex = 26518;

	class MultipleChoiceRequestInfo : public ::System::Object
	{
	public:
		::System::Action_1<::System::Int32>* SelectOption; // 0x10
		::System::Collections::Generic::Dictionary_2<::NodeCanvas::DialogueTrees::IStatement*, ::System::Int32>* options; // 0x18
		::NodeCanvas::DialogueTrees::IDialogueActor* actor; // 0x20
		::System::Single availableTime; // 0x28
		::System::Boolean showLastStatement; // 0x2C

		::System::Void _ctor(::NodeCanvas::DialogueTrees::IDialogueActor* actor, ::System::Collections::Generic::Dictionary_2<::NodeCanvas::DialogueTrees::IStatement*, ::System::Int32>* options, ::System::Single availableTime, ::System::Boolean showLastStatement, ::System::Action_1<::System::Int32>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::NodeCanvas::DialogueTrees::IDialogueActor*, ::System::Collections::Generic::Dictionary_2<::NodeCanvas::DialogueTrees::IStatement*, ::System::Int32>*, ::System::Single, ::System::Boolean, ::System::Action_1<::System::Int32>*))((::PBYTE)hIl2Cpp + NODECANVAS_DIALOGUETREES_MULTIPLECHOICEREQUESTINFO__CTOR_OFFSET))(this, actor, options, availableTime, showLastStatement, callback);
		}

		::System::Void _ctor_1(::NodeCanvas::DialogueTrees::IDialogueActor* actor, ::System::Collections::Generic::Dictionary_2<::NodeCanvas::DialogueTrees::IStatement*, ::System::Int32>* options, ::System::Single availableTime, ::System::Action_1<::System::Int32>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::NodeCanvas::DialogueTrees::IDialogueActor*, ::System::Collections::Generic::Dictionary_2<::NodeCanvas::DialogueTrees::IStatement*, ::System::Int32>*, ::System::Single, ::System::Action_1<::System::Int32>*))((::PBYTE)hIl2Cpp + NODECANVAS_DIALOGUETREES_MULTIPLECHOICEREQUESTINFO__CTOR_1_OFFSET))(this, actor, options, availableTime, callback);
		}
	};
}
