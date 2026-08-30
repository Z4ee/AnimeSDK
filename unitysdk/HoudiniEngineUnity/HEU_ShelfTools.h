#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace HoudiniEngineUnity { class HEU_Shelf; }
namespace HoudiniEngineUnity { class HEU_ShelfToolData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define HOUDINIENGINEUNITY_HEU_SHELFTOOLS_ADDSHELF_OFFSET UNITYSDK_OFFSET(0x1B14F440)
#define HOUDINIENGINEUNITY_HEU_SHELFTOOLS_ARESHELVESLOADED_OFFSET UNITYSDK_OFFSET(0x1B14E360)
#define HOUDINIENGINEUNITY_HEU_SHELFTOOLS_CLEARSHELVES_OFFSET UNITYSDK_OFFSET(0x1B14E420)
#define HOUDINIENGINEUNITY_HEU_SHELFTOOLS_EXECUTETOOLBATCH_OFFSET UNITYSDK_OFFSET(0x1B152F40)
#define HOUDINIENGINEUNITY_HEU_SHELFTOOLS_EXECUTETOOLGENERATOR_OFFSET UNITYSDK_OFFSET(0x1B151D50)
#define HOUDINIENGINEUNITY_HEU_SHELFTOOLS_EXECUTETOOLNOINPUT_OFFSET UNITYSDK_OFFSET(0x1B151F20)
#define HOUDINIENGINEUNITY_HEU_SHELFTOOLS_EXECUTETOOLOPERATORMULTIPLE_OFFSET UNITYSDK_OFFSET(0x1B152870)
#define HOUDINIENGINEUNITY_HEU_SHELFTOOLS_EXECUTETOOLOPERATORSINGLE_OFFSET UNITYSDK_OFFSET(0x1B152060)
#define HOUDINIENGINEUNITY_HEU_SHELFTOOLS_EXECUTETOOL_OFFSET UNITYSDK_OFFSET(0x1B1519C0)
#define HOUDINIENGINEUNITY_HEU_SHELFTOOLS_GETCURRENTSHELFINDEX_OFFSET UNITYSDK_OFFSET(0x1B14E540)
#define HOUDINIENGINEUNITY_HEU_SHELFTOOLS_GETNUMSHELVES_OFFSET UNITYSDK_OFFSET(0x1B14E4C0)
#define HOUDINIENGINEUNITY_HEU_SHELFTOOLS_GETSHELFSTORAGEENTRY_OFFSET UNITYSDK_OFFSET(0x1B14E8B0)
#define HOUDINIENGINEUNITY_HEU_SHELFTOOLS_GETSHELF_1_OFFSET UNITYSDK_OFFSET(0x1B14E6E0)
#define HOUDINIENGINEUNITY_HEU_SHELFTOOLS_GETSHELF_OFFSET UNITYSDK_OFFSET(0x1B14E600)
#define HOUDINIENGINEUNITY_HEU_SHELFTOOLS_GETSPLITSHELFENTRY_OFFSET UNITYSDK_OFFSET(0x1B14E920)
#define HOUDINIENGINEUNITY_HEU_SHELFTOOLS_GETTOOLASSETPATH_OFFSET UNITYSDK_OFFSET(0x1B151370)
#define HOUDINIENGINEUNITY_HEU_SHELFTOOLS_GETTOOLICONPATH_OFFSET UNITYSDK_OFFSET(0x1B151590)
#define HOUDINIENGINEUNITY_HEU_SHELFTOOLS_GETTOOLRESOURCEPATH_OFFSET UNITYSDK_OFFSET(0x1B1533F0)
#define HOUDINIENGINEUNITY_HEU_SHELFTOOLS_ISVALIDINPUTHDA_OFFSET UNITYSDK_OFFSET(0x1B1531F0)
#define HOUDINIENGINEUNITY_HEU_SHELFTOOLS_ISVALIDINPUTMESH_OFFSET UNITYSDK_OFFSET(0x1B152FB0)
#define HOUDINIENGINEUNITY_HEU_SHELFTOOLS_LOADSHELVES_OFFSET UNITYSDK_OFFSET(0x1B14E9B0)
#define HOUDINIENGINEUNITY_HEU_SHELFTOOLS_LOADTOOLFROMJSONFILE_OFFSET UNITYSDK_OFFSET(0x1B14FC30)
#define HOUDINIENGINEUNITY_HEU_SHELFTOOLS_LOADTOOLFROMJSONSTRING_OFFSET UNITYSDK_OFFSET(0x1B14FE80)
#define HOUDINIENGINEUNITY_HEU_SHELFTOOLS_LOADTOOLSFROMDIRECTORY_OFFSET UNITYSDK_OFFSET(0x1B14F650)
#define HOUDINIENGINEUNITY_HEU_SHELFTOOLS_REMOVESHELF_OFFSET UNITYSDK_OFFSET(0x1B1517C0)
#define HOUDINIENGINEUNITY_HEU_SHELFTOOLS_SAVESHELF_OFFSET UNITYSDK_OFFSET(0x1B14F860)
#define HOUDINIENGINEUNITY_HEU_SHELFTOOLS_SETCURRENTSHELF_OFFSET UNITYSDK_OFFSET(0x1B14E5A0)
#define HOUDINIENGINEUNITY_HEU_SHELFTOOLS_SETRELOADSHELVES_OFFSET UNITYSDK_OFFSET(0x1B14E3C0)
#define HOUDINIENGINEUNITY_HEU_SHELFTOOLS_SHOULDUSEHDA_OFFSET UNITYSDK_OFFSET(0x1B1532A0)
#define HOUDINIENGINEUNITY_HEU_SHELFTOOLS__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B1534C0)
#define HOUDINIENGINEUNITY_HEU_SHELFTOOLS__CTOR_OFFSET UNITYSDK_OFFSET(0x1B1534B0)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HEU_ShelfTools_TypeDefinitionIndex = 39367;

	class HEU_ShelfTools : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_Shelf*>** StaticGet__shelves()
		{
			return (::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_Shelf*>**)Il2CppClass::FromTypeDefinitionIndex(HEU_ShelfTools_TypeDefinitionIndex)->GetStaticField(0x5A980);
		}
		static ::System::Int32* StaticGet__currentSelectedShelf()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(HEU_ShelfTools_TypeDefinitionIndex)->GetStaticField(0x12670);
		}
		static ::System::Boolean* StaticGet__shelvesLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(HEU_ShelfTools_TypeDefinitionIndex)->GetStaticField(0x12674);
		}
		// static const ::System::String* TARGET_ALL; // 0x0
		// static const ::System::String* TARGET_UNITY; // 0x0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_SHELFTOOLS__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_SHELFTOOLS__CCTOR_OFFSET))();
		}

		static ::System::Boolean AreShelvesLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_SHELFTOOLS_ARESHELVESLOADED_OFFSET))();
		}

		static ::System::Void SetReloadShelves()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_SHELFTOOLS_SETRELOADSHELVES_OFFSET))();
		}

		static ::System::Void ClearShelves()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_SHELFTOOLS_CLEARSHELVES_OFFSET))();
		}

		static ::System::Int32 GetNumShelves()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_SHELFTOOLS_GETNUMSHELVES_OFFSET))();
		}

		static ::System::Int32 GetCurrentShelfIndex()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_SHELFTOOLS_GETCURRENTSHELFINDEX_OFFSET))();
		}

		static ::System::Void SetCurrentShelf(::System::Int32 a1)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_SHELFTOOLS_SETCURRENTSHELF_OFFSET))(a1);
		}

		static ::HoudiniEngineUnity::HEU_Shelf* GetShelf(::System::Int32 a1)
		{
			return ((::HoudiniEngineUnity::HEU_Shelf*(*)(::System::Int32))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_SHELFTOOLS_GETSHELF_OFFSET))(a1);
		}

		static ::HoudiniEngineUnity::HEU_Shelf* GetShelf_1(::System::String* a1)
		{
			return ((::HoudiniEngineUnity::HEU_Shelf*(*)(::System::String*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_SHELFTOOLS_GETSHELF_1_OFFSET))(a1);
		}

		static ::System::String* GetShelfStorageEntry(::System::String* a1, ::System::String* a2)
		{
			return ((::System::String*(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_SHELFTOOLS_GETSHELFSTORAGEENTRY_OFFSET))(a1, a2);
		}

		static ::System::Void GetSplitShelfEntry(::System::String* a1, ::System::String*& a2, ::System::String*& a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*&, ::System::String*&))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_SHELFTOOLS_GETSPLITSHELFENTRY_OFFSET))(a1, a2, a3);
		}

		static ::System::Void LoadShelves()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_SHELFTOOLS_LOADSHELVES_OFFSET))();
		}

		static ::System::Boolean LoadToolsFromDirectory(::System::String* a1, ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_ShelfToolData*>*& a2)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_ShelfToolData*>*&))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_SHELFTOOLS_LOADTOOLSFROMDIRECTORY_OFFSET))(a1, a2);
		}

		static ::HoudiniEngineUnity::HEU_ShelfToolData* LoadToolFromJsonFile(::System::String* a1)
		{
			return ((::HoudiniEngineUnity::HEU_ShelfToolData*(*)(::System::String*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_SHELFTOOLS_LOADTOOLFROMJSONFILE_OFFSET))(a1);
		}

		static ::HoudiniEngineUnity::HEU_ShelfToolData* LoadToolFromJsonString(::System::String* a1, ::System::String* a2)
		{
			return ((::HoudiniEngineUnity::HEU_ShelfToolData*(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_SHELFTOOLS_LOADTOOLFROMJSONSTRING_OFFSET))(a1, a2);
		}

		static ::HoudiniEngineUnity::HEU_Shelf* AddShelf(::System::String* a1, ::System::String* a2)
		{
			return ((::HoudiniEngineUnity::HEU_Shelf*(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_SHELFTOOLS_ADDSHELF_OFFSET))(a1, a2);
		}

		static ::System::Void RemoveShelf(::System::Int32 a1)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_SHELFTOOLS_REMOVESHELF_OFFSET))(a1);
		}

		static ::System::Void SaveShelf()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_SHELFTOOLS_SAVESHELF_OFFSET))();
		}

		static ::System::Void ExecuteTool(::System::Int32 a1)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_SHELFTOOLS_EXECUTETOOL_OFFSET))(a1);
		}

		static ::System::Void ExecuteToolGenerator(::System::String* a1, ::System::String* a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Quaternion a4, ::UnityEngine::Vector3 a5)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_SHELFTOOLS_EXECUTETOOLGENERATOR_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Boolean IsValidInputMesh(::UnityEngine::GameObject* a1)
		{
			return ((::System::Boolean(*)(::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_SHELFTOOLS_ISVALIDINPUTMESH_OFFSET))(a1);
		}

		static ::System::Boolean IsValidInputHDA(::UnityEngine::GameObject* a1)
		{
			return ((::System::Boolean(*)(::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_SHELFTOOLS_ISVALIDINPUTHDA_OFFSET))(a1);
		}

		static ::System::Boolean ShouldUseHDA(::Il2CppArray<::UnityEngine::GameObject*>* a1)
		{
			return ((::System::Boolean(*)(::Il2CppArray<::UnityEngine::GameObject*>*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_SHELFTOOLS_SHOULDUSEHDA_OFFSET))(a1);
		}

		static ::System::Void ExecuteToolNoInput(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_SHELFTOOLS_EXECUTETOOLNOINPUT_OFFSET))(a1, a2);
		}

		static ::System::Void ExecuteToolOperatorSingle(::System::String* a1, ::System::String* a2, ::Il2CppArray<::UnityEngine::GameObject*>* a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*, ::Il2CppArray<::UnityEngine::GameObject*>*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_SHELFTOOLS_EXECUTETOOLOPERATORSINGLE_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ExecuteToolOperatorMultiple(::System::String* a1, ::System::String* a2, ::Il2CppArray<::UnityEngine::GameObject*>* a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*, ::Il2CppArray<::UnityEngine::GameObject*>*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_SHELFTOOLS_EXECUTETOOLOPERATORMULTIPLE_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ExecuteToolBatch(::System::String* a1, ::System::String* a2, ::Il2CppArray<::UnityEngine::GameObject*>* a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*, ::Il2CppArray<::UnityEngine::GameObject*>*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_SHELFTOOLS_EXECUTETOOLBATCH_OFFSET))(a1, a2, a3);
		}

		static ::System::String* GetToolResourcePath(::HoudiniEngineUnity::HEU_ShelfToolData* a1, ::System::String* a2, ::System::String* a3)
		{
			return ((::System::String*(*)(::HoudiniEngineUnity::HEU_ShelfToolData*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_SHELFTOOLS_GETTOOLRESOURCEPATH_OFFSET))(a1, a2, a3);
		}

		static ::System::String* GetToolIconPath(::HoudiniEngineUnity::HEU_ShelfToolData* a1, ::System::String* a2)
		{
			return ((::System::String*(*)(::HoudiniEngineUnity::HEU_ShelfToolData*, ::System::String*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_SHELFTOOLS_GETTOOLICONPATH_OFFSET))(a1, a2);
		}

		static ::System::String* GetToolAssetPath(::HoudiniEngineUnity::HEU_ShelfToolData* a1, ::System::String* a2)
		{
			return ((::System::String*(*)(::HoudiniEngineUnity::HEU_ShelfToolData*, ::System::String*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_SHELFTOOLS_GETTOOLASSETPATH_OFFSET))(a1, a2);
		}
	};
}
