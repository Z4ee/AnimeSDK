#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeCanvas/Framework/ConditionTask.h"

namespace NodeCanvas::Framework { template <typename T> class BBParameter_1; }
namespace NodeCanvas::Tasks::Conditions { template <typename T> class CheckUnityEvent_0_1; }
namespace ParadoxNotion::Serialization { class ISerializedReflectedInfo; }
namespace ParadoxNotion::Serialization { class SerializedUnityEventInfo; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Reflection { class FieldInfo; }
namespace System::Reflection { class MemberInfo; }
namespace System::Reflection { class PropertyInfo; }
namespace UnityEngine::Events { template <typename T> class UnityEvent_1; }

namespace NodeCanvas::Tasks::Conditions
{
	inline static constexpr unsigned int CheckUnityEvent_1_TypeDefinitionIndex = 29174;

	template <typename T>
	class CheckUnityEvent_1 : public ::NodeCanvas::Framework::ConditionTask
	{
	public:
		::ParadoxNotion::Serialization::SerializedUnityEventInfo* _eventInfo; // 0x0
		::NodeCanvas::Framework::BBParameter_1<T>* saveAs; // 0x0
		::UnityEngine::Events::UnityEvent_1<T>* unityEvent; // 0x0
	};
}
