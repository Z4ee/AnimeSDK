#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/WeakAssetReference.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_DYNAMICPREFABLOADER_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x1A6929B0)
#define RPG_CLIENT_DYNAMICPREFABLOADER_GET_MOUNTPOINT_OFFSET UNITYSDK_OFFSET(0x1A692A40)
#define RPG_CLIENT_DYNAMICPREFABLOADER_GET_PREFABREFERENCES_OFFSET UNITYSDK_OFFSET(0x1A692A00)
#define RPG_CLIENT_DYNAMICPREFABLOADER_METHOD_1_06967C08089797EA_OFFSET UNITYSDK_OFFSET(0x1A692D30)
#define RPG_CLIENT_DYNAMICPREFABLOADER_METHOD_1_263D31130C40FFCE_OFFSET UNITYSDK_OFFSET(0x1A692DB0)
#define RPG_CLIENT_DYNAMICPREFABLOADER_METHOD_1_7900DB25C44BBC9B_OFFSET UNITYSDK_OFFSET(0x1A692A80)
#define RPG_CLIENT_DYNAMICPREFABLOADER_METHOD_1_CDB4AF41FB50E1D8_OFFSET UNITYSDK_OFFSET(0x1A692EF0)
#define RPG_CLIENT_DYNAMICPREFABLOADER_METHOD_1_EAA1AA53E20D568D_OFFSET UNITYSDK_OFFSET(0x1A692AD0)
#define RPG_CLIENT_DYNAMICPREFABLOADER__CTOR_OFFSET UNITYSDK_OFFSET(0x1A692FA0)

namespace RPG::Client
{
	inline static constexpr unsigned int DynamicPrefabLoader_TypeDefinitionIndex = 72683;

	class DynamicPrefabLoader : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::WeakAssetReference>* _PrefabReferences; // 0x10
		::UnityEngine::Transform* _MountPoint; // 0x18
		::Il2CppArray<::UnityEngine::GameObject*>* _LoadedPrefabs; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DYNAMICPREFABLOADER__CTOR_OFFSET))(this);
		}

		::System::Int32 get_Count()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DYNAMICPREFABLOADER_GET_COUNT_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::WeakAssetReference>* get_PrefabReferences()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::WeakAssetReference>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DYNAMICPREFABLOADER_GET_PREFABREFERENCES_OFFSET))(this);
		}

		::UnityEngine::Transform* get_MountPoint()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DYNAMICPREFABLOADER_GET_MOUNTPOINT_OFFSET))(this);
		}

		::System::Void Method_1_7900DB25C44BBC9B(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DYNAMICPREFABLOADER_METHOD_1_7900DB25C44BBC9B_OFFSET))(this, a1);
		}

		::UnityEngine::GameObject* Method_1_EAA1AA53E20D568D(::System::Int32 a1)
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DYNAMICPREFABLOADER_METHOD_1_EAA1AA53E20D568D_OFFSET))(this, a1);
		}

		::UnityEngine::GameObject* Method_1_06967C08089797EA(::System::Int32 a1)
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DYNAMICPREFABLOADER_METHOD_1_06967C08089797EA_OFFSET))(this, a1);
		}

		::UnityEngine::GameObject* Method_1_263D31130C40FFCE(::System::Int32 a1, ::UnityEngine::Transform* a2)
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID, ::System::Int32, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DYNAMICPREFABLOADER_METHOD_1_263D31130C40FFCE_OFFSET))(this, a1, a2);
		}

		::System::Void Method_1_CDB4AF41FB50E1D8()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DYNAMICPREFABLOADER_METHOD_1_CDB4AF41FB50E1D8_OFFSET))(this);
		}
	};
}
