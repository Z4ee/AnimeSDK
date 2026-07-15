#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class DynamicMaterialLoader_MaterialLoadItem; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Renderer; }

#define RPG_CLIENT_DYNAMICMATERIALLOADER_RENDERERLOADITEM_METHOD_1_3CD6E3B4A8AD91EF_OFFSET UNITYSDK_OFFSET(0x177169B0)
#define RPG_CLIENT_DYNAMICMATERIALLOADER_RENDERERLOADITEM_METHOD_1_95D40074EC7C1AA6_OFFSET UNITYSDK_OFFSET(0x177161A0)
#define RPG_CLIENT_DYNAMICMATERIALLOADER_RENDERERLOADITEM_METHOD_1_D155D4917B3D2C6A_OFFSET UNITYSDK_OFFSET(0x17715E80)
#define RPG_CLIENT_DYNAMICMATERIALLOADER_RENDERERLOADITEM_METHOD_1_F1A79A1F46BD9DD3_OFFSET UNITYSDK_OFFSET(0x177168C0)
#define RPG_CLIENT_DYNAMICMATERIALLOADER_RENDERERLOADITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x17716B10)

namespace RPG::Client
{
	inline static constexpr unsigned int DynamicMaterialLoader_RendererLoadItem_TypeDefinitionIndex = 65365;

	class DynamicMaterialLoader_RendererLoadItem : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::List_1<::System::Int32>** StaticGet__TmpNameIDs()
		{
			return (::System::Collections::Generic::List_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(DynamicMaterialLoader_RendererLoadItem_TypeDefinitionIndex)->GetStaticField(0x6B660);
		}
		::UnityEngine::Renderer* Renderer; // 0x10
		::Il2CppArray<::RPG::Client::DynamicMaterialLoader_MaterialLoadItem*>* Mats; // 0x18
		::Il2CppArray<::UnityEngine::Material*>* _MatInsts; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DYNAMICMATERIALLOADER_RENDERERLOADITEM__CTOR_OFFSET))(this);
		}

		::System::Void Method_1_D155D4917B3D2C6A()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DYNAMICMATERIALLOADER_RENDERERLOADITEM_METHOD_1_D155D4917B3D2C6A_OFFSET))(this);
		}

		::System::Void Method_1_95D40074EC7C1AA6(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_DYNAMICMATERIALLOADER_RENDERERLOADITEM_METHOD_1_95D40074EC7C1AA6_OFFSET))(this, a1);
		}

		::System::Void Method_1_F1A79A1F46BD9DD3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DYNAMICMATERIALLOADER_RENDERERLOADITEM_METHOD_1_F1A79A1F46BD9DD3_OFFSET))(this);
		}

		static ::System::Void Method_1_3CD6E3B4A8AD91EF(::UnityEngine::Material* a1)
		{
			return ((::System::Void(*)(::UnityEngine::Material*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DYNAMICMATERIALLOADER_RENDERERLOADITEM_METHOD_1_3CD6E3B4A8AD91EF_OFFSET))(a1);
		}
	};
}
