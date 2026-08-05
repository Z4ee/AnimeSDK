#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/OdinInspector/SerializedMonoBehaviour.h"

namespace MoleMole::SceneMark { class SceneMarkNode; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_SCENEMARK_MONOSCENEMARKROOT_ADDNODETOMAP_OFFSET UNITYSDK_OFFSET(0x1190A120)
#define MOLEMOLE_SCENEMARK_MONOSCENEMARKROOT_BUILDMAP_OFFSET UNITYSDK_OFFSET(0x11909DF0)
#define MOLEMOLE_SCENEMARK_MONOSCENEMARKROOT_COLLECTCHILD_OFFSET UNITYSDK_OFFSET(0x1190A640)
#define MOLEMOLE_SCENEMARK_MONOSCENEMARKROOT_COLLECTDATA_1_OFFSET UNITYSDK_OFFSET(0x1190A6F0)
#define MOLEMOLE_SCENEMARK_MONOSCENEMARKROOT_COLLECTDATA_OFFSET UNITYSDK_OFFSET(0x11909D20)
#define MOLEMOLE_SCENEMARK_MONOSCENEMARKROOT_COLLECTPRUNEDTREE_OFFSET UNITYSDK_OFFSET(0x1190A4A0)
#define MOLEMOLE_SCENEMARK_MONOSCENEMARKROOT_COLLECTTREE_OFFSET UNITYSDK_OFFSET(0x11909DA0)
#define MOLEMOLE_SCENEMARK_MONOSCENEMARKROOT_FINDNODEBYFULLNAME_1_OFFSET UNITYSDK_OFFSET(0x1190AB70)
#define MOLEMOLE_SCENEMARK_MONOSCENEMARKROOT_FINDNODEBYFULLNAME_OFFSET UNITYSDK_OFFSET(0x1190AAA0)
#define MOLEMOLE_SCENEMARK_MONOSCENEMARKROOT_FINDNODEBYSORTNAME_OFFSET UNITYSDK_OFFSET(0x1190AC40)
#define MOLEMOLE_SCENEMARK_MONOSCENEMARKROOT__CCTOR_OFFSET UNITYSDK_OFFSET(0x1190AD80)
#define MOLEMOLE_SCENEMARK_MONOSCENEMARKROOT__CTOR_OFFSET UNITYSDK_OFFSET(0x1190AD30)

namespace MoleMole::SceneMark
{
	inline static constexpr unsigned int MonoSceneMarkRoot_TypeDefinitionIndex = 53732;

	class MonoSceneMarkRoot : public ::Sirenix::OdinInspector::SerializedMonoBehaviour
	{
	public:
		static ::System::Collections::Generic::List_1<::System::Type*>** StaticGet_PreBuildTypeSet()
		{
			return (::System::Collections::Generic::List_1<::System::Type*>**)Il2CppClass::FromTypeDefinitionIndex(MonoSceneMarkRoot_TypeDefinitionIndex)->GetStaticField(0x3CCB0);
		}
		// static const ::System::Char FULL_NAME_SPLITE_SEPARATOR; // 0x0
		::MoleMole::SceneMark::SceneMarkNode* RootNode; // 0x58
		::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::SceneMark::SceneMarkNode*>* NodeMap; // 0x60
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::MoleMole::SceneMark::SceneMarkNode*>*>* NodeMapByType; // 0x68
		::System::Boolean AutoPruning; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENEMARK_MONOSCENEMARKROOT__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_SCENEMARK_MONOSCENEMARKROOT__CCTOR_OFFSET))();
		}

		::System::Void CollectData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENEMARK_MONOSCENEMARKROOT_COLLECTDATA_OFFSET))(this);
		}

		::System::Void BuildMap()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENEMARK_MONOSCENEMARKROOT_BUILDMAP_OFFSET))(this);
		}

		::System::Void AddNodeToMap(::MoleMole::SceneMark::SceneMarkNode* node)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::SceneMark::SceneMarkNode*))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENEMARK_MONOSCENEMARKROOT_ADDNODETOMAP_OFFSET))(this, node);
		}

		::System::Void CollectTree()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENEMARK_MONOSCENEMARKROOT_COLLECTTREE_OFFSET))(this);
		}

		::System::Void CollectPrunedTree()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENEMARK_MONOSCENEMARKROOT_COLLECTPRUNEDTREE_OFFSET))(this);
		}

		::System::Void CollectData_1(::UnityEngine::Transform* trans, ::MoleMole::SceneMark::SceneMarkNode* parentNode)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::MoleMole::SceneMark::SceneMarkNode*))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENEMARK_MONOSCENEMARKROOT_COLLECTDATA_1_OFFSET))(this, trans, parentNode);
		}

		::System::Void CollectChild(::UnityEngine::Transform* trans, ::MoleMole::SceneMark::SceneMarkNode* parentNode)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::MoleMole::SceneMark::SceneMarkNode*))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENEMARK_MONOSCENEMARKROOT_COLLECTCHILD_OFFSET))(this, trans, parentNode);
		}

		::MoleMole::SceneMark::SceneMarkNode* FindNodeByFullName(::System::String* fullName)
		{
			return ((::MoleMole::SceneMark::SceneMarkNode*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENEMARK_MONOSCENEMARKROOT_FINDNODEBYFULLNAME_OFFSET))(this, fullName);
		}

		::MoleMole::SceneMark::SceneMarkNode* FindNodeBySortName(::System::String* sortName)
		{
			return ((::MoleMole::SceneMark::SceneMarkNode*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENEMARK_MONOSCENEMARKROOT_FINDNODEBYSORTNAME_OFFSET))(this, sortName);
		}

		::MoleMole::SceneMark::SceneMarkNode* FindNodeByFullName_1(::Il2CppArray<::System::String*>* fullName)
		{
			return ((::MoleMole::SceneMark::SceneMarkNode*(*)(::PVOID, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENEMARK_MONOSCENEMARKROOT_FINDNODEBYFULLNAME_1_OFFSET))(this, fullName);
		}
	};
}
