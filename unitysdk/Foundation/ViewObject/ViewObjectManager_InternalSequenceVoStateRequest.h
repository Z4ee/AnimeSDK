#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/GroupMemberIdentifier.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectManager_InternalSequenceVoStateRequestType.h"
#include "unitysdk/System/ValueType.h"

class Class_3_3EC97B498E0B85D2;
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }

namespace Foundation::ViewObject
{
	inline static constexpr unsigned int ViewObjectManager_InternalSequenceVoStateRequest_TypeDefinitionIndex = 66389;

	struct alignas(8) ViewObjectManager_InternalSequenceVoStateRequest
	{
		::Foundation::ViewObject::ViewObjectManager_InternalSequenceVoStateRequestType type; // 0x10
		::Foundation::ViewObject::GroupMemberIdentifier identifier; // 0x14
		::System::String* stateName; // 0x20
		::System::Action_2<::System::Boolean, ::System::Int32>* readCallback; // 0x28
		::System::Int32 writeValue; // 0x30
		::System::Action_1<::System::Boolean>* writeCallback; // 0x38
		::System::Int32 callbackTag; // 0x40
		::Class_3_3EC97B498E0B85D2* reason; // 0x48
	};
}
