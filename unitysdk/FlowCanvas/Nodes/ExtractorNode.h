#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/SimplexNode.h"

namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define FLOWCANVAS_NODES_EXTRACTORNODE_GETEXTRACTORTYPE_OFFSET UNITYSDK_OFFSET(0x1D51D080)
#define FLOWCANVAS_NODES_EXTRACTORNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D51D6B0)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int ExtractorNode_TypeDefinitionIndex = 30175;

	class ExtractorNode : public ::FlowCanvas::Nodes::SimplexNode
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Type*>** StaticGet__extractors()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Type*>**)Il2CppClass::FromTypeDefinitionIndex(ExtractorNode_TypeDefinitionIndex)->GetStaticField(0x24590);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_EXTRACTORNODE__CTOR_OFFSET))(this);
		}

		static ::System::Type* GetExtractorType(::System::Type* type)
		{
			return ((::System::Type*(*)(::System::Type*))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_EXTRACTORNODE_GETEXTRACTORTYPE_OFFSET))(type);
		}
	};
}
