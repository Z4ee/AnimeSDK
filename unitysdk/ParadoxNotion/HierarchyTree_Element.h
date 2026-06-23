#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define PARADOXNOTION_HIERARCHYTREE_ELEMENT_ADDCHILD_OFFSET UNITYSDK_OFFSET(0x1CC4DC90)
#define PARADOXNOTION_HIERARCHYTREE_ELEMENT_FINDREFERENCEELEMENT_OFFSET UNITYSDK_OFFSET(0x1CC4DDB0)
#define PARADOXNOTION_HIERARCHYTREE_ELEMENT_GETROOT_OFFSET UNITYSDK_OFFSET(0x1CC4DDA0)
#define PARADOXNOTION_HIERARCHYTREE_ELEMENT_GET_CHILDREN_OFFSET UNITYSDK_OFFSET(0x1CC4DC70)
#define PARADOXNOTION_HIERARCHYTREE_ELEMENT_GET_PARENT_OFFSET UNITYSDK_OFFSET(0x1CC4DC60)
#define PARADOXNOTION_HIERARCHYTREE_ELEMENT_GET_REFERENCE_OFFSET UNITYSDK_OFFSET(0x1CC4DC50)
#define PARADOXNOTION_HIERARCHYTREE_ELEMENT_REMOVECHILD_OFFSET UNITYSDK_OFFSET(0x1CC4DD40)
#define PARADOXNOTION_HIERARCHYTREE_ELEMENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1CC4DC80)

namespace ParadoxNotion
{
	inline static constexpr unsigned int HierarchyTree_Element_TypeDefinitionIndex = 29879;

	class HierarchyTree_Element : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::ParadoxNotion::HierarchyTree_Element*>* _children; // 0x10
		::System::Object* _reference; // 0x18
		::ParadoxNotion::HierarchyTree_Element* _parent; // 0x20

		::System::Void _ctor(::System::Object* reference)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PARADOXNOTION_HIERARCHYTREE_ELEMENT__CTOR_OFFSET))(this, reference);
		}

		::System::Object* get_reference()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + PARADOXNOTION_HIERARCHYTREE_ELEMENT_GET_REFERENCE_OFFSET))(this);
		}

		::ParadoxNotion::HierarchyTree_Element* get_parent()
		{
			return ((::ParadoxNotion::HierarchyTree_Element*(*)(::PVOID))((::PBYTE)hIl2Cpp + PARADOXNOTION_HIERARCHYTREE_ELEMENT_GET_PARENT_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::ParadoxNotion::HierarchyTree_Element*>* get_children()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::ParadoxNotion::HierarchyTree_Element*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PARADOXNOTION_HIERARCHYTREE_ELEMENT_GET_CHILDREN_OFFSET))(this);
		}

		::ParadoxNotion::HierarchyTree_Element* AddChild(::ParadoxNotion::HierarchyTree_Element* child)
		{
			return ((::ParadoxNotion::HierarchyTree_Element*(*)(::PVOID, ::ParadoxNotion::HierarchyTree_Element*))((::PBYTE)hIl2Cpp + PARADOXNOTION_HIERARCHYTREE_ELEMENT_ADDCHILD_OFFSET))(this, child);
		}

		::System::Void RemoveChild(::ParadoxNotion::HierarchyTree_Element* child)
		{
			return ((::System::Void(*)(::PVOID, ::ParadoxNotion::HierarchyTree_Element*))((::PBYTE)hIl2Cpp + PARADOXNOTION_HIERARCHYTREE_ELEMENT_REMOVECHILD_OFFSET))(this, child);
		}

		::ParadoxNotion::HierarchyTree_Element* GetRoot()
		{
			return ((::ParadoxNotion::HierarchyTree_Element*(*)(::PVOID))((::PBYTE)hIl2Cpp + PARADOXNOTION_HIERARCHYTREE_ELEMENT_GETROOT_OFFSET))(this);
		}

		::ParadoxNotion::HierarchyTree_Element* FindReferenceElement(::System::Object* target)
		{
			return ((::ParadoxNotion::HierarchyTree_Element*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PARADOXNOTION_HIERARCHYTREE_ELEMENT_FINDREFERENCEELEMENT_OFFSET))(this, target);
		}
	};
}
