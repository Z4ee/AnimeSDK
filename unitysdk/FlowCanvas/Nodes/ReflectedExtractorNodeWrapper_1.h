#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/FlowNode.h"

namespace FlowCanvas::Nodes { class BaseReflectedExtractorNode; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Reflection { class MemberInfo; }

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int ReflectedExtractorNodeWrapper_1_TypeDefinitionIndex = 29807;

	template <typename T>
	class ReflectedExtractorNodeWrapper_1 : public ::FlowCanvas::FlowNode
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Reflection::MemberInfo*>** StaticGet__memberInfos()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Reflection::MemberInfo*>**)Il2CppClass::FromTypeDefinitionIndex(ReflectedExtractorNodeWrapper_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Collections::Generic::List_1<::System::String*>** StaticGet__instanceMemberNames()
		{
			return (::System::Collections::Generic::List_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(ReflectedExtractorNodeWrapper_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Collections::Generic::List_1<::System::String*>** StaticGet__staticMemberNames()
		{
			return (::System::Collections::Generic::List_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(ReflectedExtractorNodeWrapper_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		::System::Collections::Generic::List_1<::System::String*>* _selectedInstanceMembers; // 0x0
		::FlowCanvas::Nodes::BaseReflectedExtractorNode* extractorNode; // 0x0
	};
}
