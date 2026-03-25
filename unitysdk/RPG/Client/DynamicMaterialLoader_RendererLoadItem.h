#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class DynamicMaterialLoader_MaterialLoadItem; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Renderer; }

#define RPG_CLIENT_DYNAMICMATERIALLOADER_RENDERERLOADITEM_METHOD_1_2BE831D219166CD8_OFFSET UNITYSDK_OFFSET(0x951E040)
#define RPG_CLIENT_DYNAMICMATERIALLOADER_RENDERERLOADITEM_METHOD_1_95D40074EC7C1AA6_OFFSET UNITYSDK_OFFSET(0x951D740)
#define RPG_CLIENT_DYNAMICMATERIALLOADER_RENDERERLOADITEM_METHOD_1_A44A18C9451109E4_OFFSET UNITYSDK_OFFSET(0x951D3E0)
#define RPG_CLIENT_DYNAMICMATERIALLOADER_RENDERERLOADITEM_METHOD_1_F1A79A1F46BD9DD3_OFFSET UNITYSDK_OFFSET(0x951DF40)
#define RPG_CLIENT_DYNAMICMATERIALLOADER_RENDERERLOADITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x951E1D0)

namespace RPG::Client
{
	inline static constexpr unsigned int DynamicMaterialLoader_RendererLoadItem_TypeDefinitionIndex = 55843;

	class DynamicMaterialLoader_RendererLoadItem : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::List_1<::System::Int32>** StaticGet__TmpNameIDs()
		{
			return (::System::Collections::Generic::List_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(DynamicMaterialLoader_RendererLoadItem_TypeDefinitionIndex)->GetStaticField(0x45860);
		}
		::UnityEngine::Renderer* Renderer; // 0x10
		::Il2CppArray<::RPG::Client::DynamicMaterialLoader_MaterialLoadItem*>* Mats; // 0x18
		::Il2CppArray<::UnityEngine::Material*>* _MatInsts; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DYNAMICMATERIALLOADER_RENDERERLOADITEM__CTOR_OFFSET))(this);
		}

		::System::Void Method_1_A44A18C9451109E4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DYNAMICMATERIALLOADER_RENDERERLOADITEM_METHOD_1_A44A18C9451109E4_OFFSET))(this);
		}

		::System::Void Method_1_95D40074EC7C1AA6(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_DYNAMICMATERIALLOADER_RENDERERLOADITEM_METHOD_1_95D40074EC7C1AA6_OFFSET))(this, a1);
		}

		::System::Void Method_1_F1A79A1F46BD9DD3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DYNAMICMATERIALLOADER_RENDERERLOADITEM_METHOD_1_F1A79A1F46BD9DD3_OFFSET))(this);
		}

		static ::System::Void Method_1_2BE831D219166CD8(::UnityEngine::Material* a1)
		{
			return ((::System::Void(*)(::UnityEngine::Material*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DYNAMICMATERIALLOADER_RENDERERLOADITEM_METHOD_1_2BE831D219166CD8_OFFSET))(a1);
		}
	};
}
