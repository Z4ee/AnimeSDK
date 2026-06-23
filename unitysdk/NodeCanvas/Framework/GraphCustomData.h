#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeCanvas/Framework/GraphCustomData_Meta.h"
#include "unitysdk/System/Object.h"

#define NODECANVAS_FRAMEWORK_GRAPHCUSTOMDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1DB9AF80)

namespace NodeCanvas::Framework
{
	inline static constexpr unsigned int GraphCustomData_TypeDefinitionIndex = 29644;

	class GraphCustomData : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Byte>* _serializedBytes; // 0x10
		::Il2CppArray<::NodeCanvas::Framework::GraphCustomData_Meta>* _serializedMetaArray; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_GRAPHCUSTOMDATA__CTOR_OFFSET))(this);
		}
	};
}
