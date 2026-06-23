#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace NodeCanvas::DialogueTrees { class DialogueTree_ActorParameter; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NODECANVAS_DIALOGUETREES_DIALOGUETREE_DERIVEDSERIALIZATIONDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1D820160)

namespace NodeCanvas::DialogueTrees
{
	inline static constexpr unsigned int DialogueTree_DerivedSerializationData_TypeDefinitionIndex = 30115;

	class DialogueTree_DerivedSerializationData : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::NodeCanvas::DialogueTrees::DialogueTree_ActorParameter*>* actorParameters; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_DIALOGUETREES_DIALOGUETREE_DERIVEDSERIALIZATIONDATA__CTOR_OFFSET))(this);
		}
	};
}
