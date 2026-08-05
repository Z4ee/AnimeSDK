#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define NODECANVAS_BEHAVIOURTREES_BEHAVIOURTREE_DERIVEDSERIALIZATIONDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1EF903A0)

namespace NodeCanvas::BehaviourTrees
{
	inline static constexpr unsigned int BehaviourTree_DerivedSerializationData_TypeDefinitionIndex = 30609;

	class BehaviourTree_DerivedSerializationData : public ::System::Object
	{
	public:
		::System::Boolean repeat; // 0x10
		::System::Single updateInterval; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_BEHAVIOURTREES_BEHAVIOURTREE_DERIVEDSERIALIZATIONDATA__CTOR_OFFSET))(this);
		}
	};
}
