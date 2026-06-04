#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"

namespace RPG::Editor { class ShaderPassVarientCollection_SPVC; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class SortedSet_1; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Shader; }
namespace UnityEngine { class ShaderVariantCollection; }

#define RPG_EDITOR_SHADERPASSVARIENTCOLLECTION_METHOD_3_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0xCC6D200)
#define RPG_EDITOR_SHADERPASSVARIENTCOLLECTION_METHOD_3_305D7772FC4F3138_OFFSET UNITYSDK_OFFSET(0xCC6EB50)
#define RPG_EDITOR_SHADERPASSVARIENTCOLLECTION_METHOD_3_4C43A8AF5B60FD19_OFFSET UNITYSDK_OFFSET(0xCC6D620)
#define RPG_EDITOR_SHADERPASSVARIENTCOLLECTION_METHOD_3_737220D2233A9067_OFFSET UNITYSDK_OFFSET(0xCC6DE10)
#define RPG_EDITOR_SHADERPASSVARIENTCOLLECTION_METHOD_3_8A01D6F684F8A8D9_OFFSET UNITYSDK_OFFSET(0xCC6E070)
#define RPG_EDITOR_SHADERPASSVARIENTCOLLECTION_METHOD_3_A567C742752EF5B0_OFFSET UNITYSDK_OFFSET(0xCC6D300)
#define RPG_EDITOR_SHADERPASSVARIENTCOLLECTION_METHOD_3_ACDA63219002AD85_OFFSET UNITYSDK_OFFSET(0xCC6E3C0)
#define RPG_EDITOR_SHADERPASSVARIENTCOLLECTION_METHOD_3_B2C0ADBFEA309440_OFFSET UNITYSDK_OFFSET(0xCC6DC40)
#define RPG_EDITOR_SHADERPASSVARIENTCOLLECTION_METHOD_3_CADDC201B8653321_OFFSET UNITYSDK_OFFSET(0xCC6D800)
#define RPG_EDITOR_SHADERPASSVARIENTCOLLECTION_METHOD_3_F90E0BD1B4F23E4F_OFFSET UNITYSDK_OFFSET(0xCC6E540)
#define RPG_EDITOR_SHADERPASSVARIENTCOLLECTION__CCTOR_OFFSET UNITYSDK_OFFSET(0xCC6EEE0)
#define RPG_EDITOR_SHADERPASSVARIENTCOLLECTION__CTOR_OFFSET UNITYSDK_OFFSET(0xCC6D180)

namespace RPG::Editor
{
	inline static constexpr unsigned int ShaderPassVarientCollection_TypeDefinitionIndex = 48624;

	class ShaderPassVarientCollection : public ::UnityEngine::ScriptableObject
	{
	public:
		static ::System::String** StaticGet__AssetPath()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(ShaderPassVarientCollection_TypeDefinitionIndex)->GetStaticField(0x62EB0);
		}
		static ::Il2CppArray<::System::String*>** StaticGet__NoRuntimePassName()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(ShaderPassVarientCollection_TypeDefinitionIndex)->GetStaticField(0x62EB8);
		}
		static ::RPG::Editor::ShaderPassVarientCollection** StaticGet__Asset()
		{
			return (::RPG::Editor::ShaderPassVarientCollection**)Il2CppClass::FromTypeDefinitionIndex(ShaderPassVarientCollection_TypeDefinitionIndex)->GetStaticField(0x62EC0);
		}
		::System::Collections::Generic::List_1<::RPG::Editor::ShaderPassVarientCollection_SPVC*>* SPVCs; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::System::String*>*>* _SPVCollection; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_EDITOR_SHADERPASSVARIENTCOLLECTION__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_EDITOR_SHADERPASSVARIENTCOLLECTION__CCTOR_OFFSET))();
		}

		::System::Void Method_3_1290EA767C459179()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_EDITOR_SHADERPASSVARIENTCOLLECTION_METHOD_3_1290EA767C459179_OFFSET))(this);
		}

		static ::System::Collections::Generic::SortedSet_1<::System::String*>* Method_3_A567C742752EF5B0(::UnityEngine::Material* a1)
		{
			return ((::System::Collections::Generic::SortedSet_1<::System::String*>*(*)(::UnityEngine::Material*))((::PBYTE)hIl2Cpp + RPG_EDITOR_SHADERPASSVARIENTCOLLECTION_METHOD_3_A567C742752EF5B0_OFFSET))(a1);
		}

		::System::Void Method_3_CADDC201B8653321(::UnityEngine::Material* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + RPG_EDITOR_SHADERPASSVARIENTCOLLECTION_METHOD_3_CADDC201B8653321_OFFSET))(this, a1);
		}

		static ::System::Collections::Generic::List_1<::System::String*>* Method_3_4C43A8AF5B60FD19(::UnityEngine::Shader* a1, ::System::String* a2)
		{
			return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::UnityEngine::Shader*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_EDITOR_SHADERPASSVARIENTCOLLECTION_METHOD_3_4C43A8AF5B60FD19_OFFSET))(a1, a2);
		}

		::System::Void Method_3_B2C0ADBFEA309440()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_EDITOR_SHADERPASSVARIENTCOLLECTION_METHOD_3_B2C0ADBFEA309440_OFFSET))(this);
		}

		::System::Void Method_3_737220D2233A9067()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_EDITOR_SHADERPASSVARIENTCOLLECTION_METHOD_3_737220D2233A9067_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::System::String*>*>* Method_3_8A01D6F684F8A8D9(::System::String* a1)
		{
			return ((::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::System::String*>*>*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_EDITOR_SHADERPASSVARIENTCOLLECTION_METHOD_3_8A01D6F684F8A8D9_OFFSET))(this, a1);
		}

		static ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::System::String*>*>* Method_3_ACDA63219002AD85(::System::String* a1)
		{
			return ((::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::System::String*>*>*(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_EDITOR_SHADERPASSVARIENTCOLLECTION_METHOD_3_ACDA63219002AD85_OFFSET))(a1);
		}

		static ::System::Collections::Generic::List_1<::System::String*>* Method_3_F90E0BD1B4F23E4F(::UnityEngine::Material* a1)
		{
			return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::UnityEngine::Material*))((::PBYTE)hIl2Cpp + RPG_EDITOR_SHADERPASSVARIENTCOLLECTION_METHOD_3_F90E0BD1B4F23E4F_OFFSET))(a1);
		}

		static ::System::Boolean Method_3_305D7772FC4F3138(::Il2CppArray<::System::String*>* a1, ::UnityEngine::Shader* a2, ::UnityEngine::ShaderVariantCollection* a3)
		{
			return ((::System::Boolean(*)(::Il2CppArray<::System::String*>*, ::UnityEngine::Shader*, ::UnityEngine::ShaderVariantCollection*))((::PBYTE)hIl2Cpp + RPG_EDITOR_SHADERPASSVARIENTCOLLECTION_METHOD_3_305D7772FC4F3138_OFFSET))(a1, a2, a3);
		}
	};
}
