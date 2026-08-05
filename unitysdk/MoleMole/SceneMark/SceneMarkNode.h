#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/Dictionary_2_Enumerator.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole::SceneMark { class SceneMarkDataBase; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_SCENEMARK_SCENEMARKNODE_ADDCHILD_OFFSET UNITYSDK_OFFSET(0x129D8EE0)
#define MOLEMOLE_SCENEMARK_SCENEMARKNODE_COLLECTALLCHILDRENNAME_1_OFFSET UNITYSDK_OFFSET(0x129D93F0)
#define MOLEMOLE_SCENEMARK_SCENEMARKNODE_COLLECTALLCHILDRENNAME_OFFSET UNITYSDK_OFFSET(0x1298D0C0)
#define MOLEMOLE_SCENEMARK_SCENEMARKNODE_GETMARKDATA_1_OFFSET UNITYSDK_OFFSET(0x129D9290)
#define MOLEMOLE_SCENEMARK_SCENEMARKNODE_GETMARKDATA_OFFSET UNITYSDK_OFFSET(0x129D9140)
#define MOLEMOLE_SCENEMARK_SCENEMARKNODE_GET_CHILDMAPITERATOR_OFFSET UNITYSDK_OFFSET(0x129D8DB0)
#define MOLEMOLE_SCENEMARK_SCENEMARKNODE_GET_FORWARD_OFFSET UNITYSDK_OFFSET(0x129D9690)
#define MOLEMOLE_SCENEMARK_SCENEMARKNODE_GET_HASCHILDRENDATA_OFFSET UNITYSDK_OFFSET(0x129D8D50)
#define MOLEMOLE_SCENEMARK_SCENEMARKNODE_GET_POSITION_OFFSET UNITYSDK_OFFSET(0x129D9640)
#define MOLEMOLE_SCENEMARK_SCENEMARKNODE_GET_XZPOSITION_OFFSET UNITYSDK_OFFSET(0x129D9590)
#define MOLEMOLE_SCENEMARK_SCENEMARKNODE_TRYGETCHILD_OFFSET UNITYSDK_OFFSET(0x129D9040)
#define MOLEMOLE_SCENEMARK_SCENEMARKNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x129D8EA0)

namespace MoleMole::SceneMark
{
	inline static constexpr unsigned int SceneMarkNode_TypeDefinitionIndex = 88406;

	class SceneMarkNode : public ::System::Object
	{
	public:
		::Il2CppArray<::MoleMole::SceneMark::SceneMarkDataBase*>* MarkData; // 0x10
		::System::String* Name; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::SceneMark::SceneMarkNode*>* ChildrenMap; // 0x20
		::UnityEngine::Transform* transform; // 0x28
		::System::String* ParentName; // 0x30

		::System::Void _ctor(::System::String* name, ::MoleMole::SceneMark::SceneMarkNode* parent, ::UnityEngine::Transform* transform, ::Il2CppArray<::MoleMole::SceneMark::SceneMarkDataBase*>* data)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::MoleMole::SceneMark::SceneMarkNode*, ::UnityEngine::Transform*, ::Il2CppArray<::MoleMole::SceneMark::SceneMarkDataBase*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENEMARK_SCENEMARKNODE__CTOR_OFFSET))(this, name, parent, transform, data);
		}

		::System::Boolean get_HasChildrenData()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENEMARK_SCENEMARKNODE_GET_HASCHILDRENDATA_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2_Enumerator<::System::String*, ::MoleMole::SceneMark::SceneMarkNode*> get_ChildMapIterator()
		{
			return ((::System::Collections::Generic::Dictionary_2_Enumerator<::System::String*, ::MoleMole::SceneMark::SceneMarkNode*>(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENEMARK_SCENEMARKNODE_GET_CHILDMAPITERATOR_OFFSET))(this);
		}

		::System::Void AddChild(::MoleMole::SceneMark::SceneMarkNode* child)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::SceneMark::SceneMarkNode*))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENEMARK_SCENEMARKNODE_ADDCHILD_OFFSET))(this, child);
		}

		::System::Boolean TryGetChild(::System::String* name, ::MoleMole::SceneMark::SceneMarkNode*& ret)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::MoleMole::SceneMark::SceneMarkNode*&))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENEMARK_SCENEMARKNODE_TRYGETCHILD_OFFSET))(this, name, ret);
		}

		::MoleMole::SceneMark::SceneMarkDataBase* GetMarkData(::System::Type* targetType, ::System::String* name)
		{
			return ((::MoleMole::SceneMark::SceneMarkDataBase*(*)(::PVOID, ::System::Type*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENEMARK_SCENEMARKNODE_GETMARKDATA_OFFSET))(this, targetType, name);
		}

		::MoleMole::SceneMark::SceneMarkDataBase* GetMarkData_1(::System::Int32 targetType, ::System::String* name)
		{
			return ((::MoleMole::SceneMark::SceneMarkDataBase*(*)(::PVOID, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENEMARK_SCENEMARKNODE_GETMARKDATA_1_OFFSET))(this, targetType, name);
		}

		::System::Collections::Generic::List_1<::System::String*>* CollectAllChildrenName(::System::Boolean includeNest)
		{
			return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENEMARK_SCENEMARKNODE_COLLECTALLCHILDRENNAME_OFFSET))(this, includeNest);
		}

		static ::System::Void CollectAllChildrenName_1(::System::Collections::Generic::List_1<::System::String*>* list, ::MoleMole::SceneMark::SceneMarkNode* node, ::System::Boolean includeNest)
		{
			return ((::System::Void(*)(::System::Collections::Generic::List_1<::System::String*>*, ::MoleMole::SceneMark::SceneMarkNode*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENEMARK_SCENEMARKNODE_COLLECTALLCHILDRENNAME_1_OFFSET))(list, node, includeNest);
		}

		::UnityEngine::Vector3 get_XZPosition()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENEMARK_SCENEMARKNODE_GET_XZPOSITION_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_Position()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENEMARK_SCENEMARKNODE_GET_POSITION_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_Forward()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENEMARK_SCENEMARKNODE_GET_FORWARD_OFFSET))(this);
		}
	};
}
