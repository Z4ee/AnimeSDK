#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class Object; }
namespace UnityEngine { class Transform; }

#define ROOTMOTION_HIERARCHY_ADDANCESTORS_OFFSET UNITYSDK_OFFSET(0x1B9B3E10)
#define ROOTMOTION_HIERARCHY_CONTAINSCHILD_OFFSET UNITYSDK_OFFSET(0x1B9B3C90)
#define ROOTMOTION_HIERARCHY_CONTAINSDUPLICATE_OFFSET UNITYSDK_OFFSET(0x1B9B3B60)
#define ROOTMOTION_HIERARCHY_GETANCESTOR_OFFSET UNITYSDK_OFFSET(0x1B9B41E0)
#define ROOTMOTION_HIERARCHY_GETFIRSTCOMMONANCESTORRECURSIVE_OFFSET UNITYSDK_OFFSET(0x1B9B4F10)
#define ROOTMOTION_HIERARCHY_GETFIRSTCOMMONANCESTOR_1_OFFSET UNITYSDK_OFFSET(0x1B9B4940)
#define ROOTMOTION_HIERARCHY_GETFIRSTCOMMONANCESTOR_OFFSET UNITYSDK_OFFSET(0x1B9B4440)
#define ROOTMOTION_HIERARCHY_HIERARCHYISVALID_OFFSET UNITYSDK_OFFSET(0x1B9B3770)
#define ROOTMOTION_HIERARCHY_ISANCESTOR_OFFSET UNITYSDK_OFFSET(0x1B9B37F0)
#define ROOTMOTION_HIERARCHY_ISCOMMONANCESTOR_OFFSET UNITYSDK_OFFSET(0x1B9B4B90)
#define ROOTMOTION_HIERARCHY__CTOR_OFFSET UNITYSDK_OFFSET(0x1B9B52E0)

namespace RootMotion
{
	inline static constexpr unsigned int Hierarchy_TypeDefinitionIndex = 36530;

	class Hierarchy : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_HIERARCHY__CTOR_OFFSET))(this);
		}

		static ::System::Boolean HierarchyIsValid(::Il2CppArray<::UnityEngine::Transform*>* bones)
		{
			return ((::System::Boolean(*)(::Il2CppArray<::UnityEngine::Transform*>*))((::PBYTE)hIl2Cpp + ROOTMOTION_HIERARCHY_HIERARCHYISVALID_OFFSET))(bones);
		}

		static ::UnityEngine::Object* ContainsDuplicate(::Il2CppArray<::UnityEngine::Object*>* objects)
		{
			return ((::UnityEngine::Object*(*)(::Il2CppArray<::UnityEngine::Object*>*))((::PBYTE)hIl2Cpp + ROOTMOTION_HIERARCHY_CONTAINSDUPLICATE_OFFSET))(objects);
		}

		static ::System::Boolean IsAncestor(::UnityEngine::Transform* transform, ::UnityEngine::Transform* ancestor)
		{
			return ((::System::Boolean(*)(::UnityEngine::Transform*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + ROOTMOTION_HIERARCHY_ISANCESTOR_OFFSET))(transform, ancestor);
		}

		static ::System::Boolean ContainsChild(::UnityEngine::Transform* transform, ::UnityEngine::Transform* child)
		{
			return ((::System::Boolean(*)(::UnityEngine::Transform*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + ROOTMOTION_HIERARCHY_CONTAINSCHILD_OFFSET))(transform, child);
		}

		static ::System::Void AddAncestors(::UnityEngine::Transform* transform, ::UnityEngine::Transform* blocker, ::Il2CppArray<::UnityEngine::Transform*>*& array)
		{
			return ((::System::Void(*)(::UnityEngine::Transform*, ::UnityEngine::Transform*, ::Il2CppArray<::UnityEngine::Transform*>*&))((::PBYTE)hIl2Cpp + ROOTMOTION_HIERARCHY_ADDANCESTORS_OFFSET))(transform, blocker, array);
		}

		static ::UnityEngine::Transform* GetAncestor(::UnityEngine::Transform* transform, ::System::Int32 minChildCount)
		{
			return ((::UnityEngine::Transform*(*)(::UnityEngine::Transform*, ::System::Int32))((::PBYTE)hIl2Cpp + ROOTMOTION_HIERARCHY_GETANCESTOR_OFFSET))(transform, minChildCount);
		}

		static ::UnityEngine::Transform* GetFirstCommonAncestor(::UnityEngine::Transform* t1, ::UnityEngine::Transform* t2)
		{
			return ((::UnityEngine::Transform*(*)(::UnityEngine::Transform*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + ROOTMOTION_HIERARCHY_GETFIRSTCOMMONANCESTOR_OFFSET))(t1, t2);
		}

		static ::UnityEngine::Transform* GetFirstCommonAncestor_1(::Il2CppArray<::UnityEngine::Transform*>* transforms)
		{
			return ((::UnityEngine::Transform*(*)(::Il2CppArray<::UnityEngine::Transform*>*))((::PBYTE)hIl2Cpp + ROOTMOTION_HIERARCHY_GETFIRSTCOMMONANCESTOR_1_OFFSET))(transforms);
		}

		static ::UnityEngine::Transform* GetFirstCommonAncestorRecursive(::UnityEngine::Transform* transform, ::Il2CppArray<::UnityEngine::Transform*>* transforms)
		{
			return ((::UnityEngine::Transform*(*)(::UnityEngine::Transform*, ::Il2CppArray<::UnityEngine::Transform*>*))((::PBYTE)hIl2Cpp + ROOTMOTION_HIERARCHY_GETFIRSTCOMMONANCESTORRECURSIVE_OFFSET))(transform, transforms);
		}

		static ::System::Boolean IsCommonAncestor(::UnityEngine::Transform* transform, ::Il2CppArray<::UnityEngine::Transform*>* transforms)
		{
			return ((::System::Boolean(*)(::UnityEngine::Transform*, ::Il2CppArray<::UnityEngine::Transform*>*))((::PBYTE)hIl2Cpp + ROOTMOTION_HIERARCHY_ISCOMMONANCESTOR_OFFSET))(transform, transforms);
		}
	};
}
