#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define HOUDINIENGINEUNITY_HEU_TOPWORKRESULT__CTOR_OFFSET UNITYSDK_OFFSET(0x8496140)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HEU_TOPWorkResult_TypeDefinitionIndex = 37752;

	class HEU_TOPWorkResult : public ::System::Object
	{
	public:
		::System::Int32 _workItemIndex; // 0x10
		::System::Int32 _workItemID; // 0x14
		::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* _generatedGOs; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_TOPWORKRESULT__CTOR_OFFSET))(this);
		}
	};
}
