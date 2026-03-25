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

#define RPG_EDITOR_SHADERPASSVARIENTCOLLECTION_METHOD_3_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0xA7C3800)
#define RPG_EDITOR_SHADERPASSVARIENTCOLLECTION_METHOD_3_27EC8924F4F29B89_OFFSET UNITYSDK_OFFSET(0xA7C38E0)
#define RPG_EDITOR_SHADERPASSVARIENTCOLLECTION_METHOD_3_305D7772FC4F3138_OFFSET UNITYSDK_OFFSET(0xA7C4CA0)
#define RPG_EDITOR_SHADERPASSVARIENTCOLLECTION_METHOD_3_4314164ED1025523_OFFSET UNITYSDK_OFFSET(0xA7C43B0)
#define RPG_EDITOR_SHADERPASSVARIENTCOLLECTION_METHOD_3_6F9F6E3C25D55AFD_OFFSET UNITYSDK_OFFSET(0xA7C47B0)
#define RPG_EDITOR_SHADERPASSVARIENTCOLLECTION_METHOD_3_79F616D5C3C27F8A_OFFSET UNITYSDK_OFFSET(0xA7C3C10)
#define RPG_EDITOR_SHADERPASSVARIENTCOLLECTION_METHOD_3_B2C0ADBFEA309440_OFFSET UNITYSDK_OFFSET(0xA7C3FF0)
#define RPG_EDITOR_SHADERPASSVARIENTCOLLECTION_METHOD_3_B732DC7FA82BA621_OFFSET UNITYSDK_OFFSET(0xA7C4190)
#define RPG_EDITOR_SHADERPASSVARIENTCOLLECTION_METHOD_3_BD395A260D7ECC62_OFFSET UNITYSDK_OFFSET(0xA7C3D90)
#define RPG_EDITOR_SHADERPASSVARIENTCOLLECTION_METHOD_3_DAE70E7E8EA7A53C_OFFSET UNITYSDK_OFFSET(0xA7C4630)
#define RPG_EDITOR_SHADERPASSVARIENTCOLLECTION__CCTOR_OFFSET UNITYSDK_OFFSET(0xA7C5030)
#define RPG_EDITOR_SHADERPASSVARIENTCOLLECTION__CTOR_OFFSET UNITYSDK_OFFSET(0xA7C3760)

namespace RPG::Editor
{
	inline static constexpr unsigned int ShaderPassVarientCollection_TypeDefinitionIndex = 42033;

	class ShaderPassVarientCollection : public ::UnityEngine::ScriptableObject
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet__NoRuntimePassName()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(ShaderPassVarientCollection_TypeDefinitionIndex)->GetStaticField(0x40CC0);
		}
		static ::RPG::Editor::ShaderPassVarientCollection** StaticGet__Asset()
		{
			return (::RPG::Editor::ShaderPassVarientCollection**)Il2CppClass::FromTypeDefinitionIndex(ShaderPassVarientCollection_TypeDefinitionIndex)->GetStaticField(0x40CC8);
		}
		static ::System::String** StaticGet__AssetPath()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(ShaderPassVarientCollection_TypeDefinitionIndex)->GetStaticField(0x40CD0);
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

		static ::System::Collections::Generic::SortedSet_1<::System::String*>* Method_3_27EC8924F4F29B89(::UnityEngine::Material* a1)
		{
			return ((::System::Collections::Generic::SortedSet_1<::System::String*>*(*)(::UnityEngine::Material*))((::PBYTE)hIl2Cpp + RPG_EDITOR_SHADERPASSVARIENTCOLLECTION_METHOD_3_27EC8924F4F29B89_OFFSET))(a1);
		}

		::System::Void Method_3_BD395A260D7ECC62(::UnityEngine::Material* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + RPG_EDITOR_SHADERPASSVARIENTCOLLECTION_METHOD_3_BD395A260D7ECC62_OFFSET))(this, a1);
		}

		static ::System::Collections::Generic::List_1<::System::String*>* Method_3_79F616D5C3C27F8A(::UnityEngine::Shader* a1, ::System::String* a2)
		{
			return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::UnityEngine::Shader*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_EDITOR_SHADERPASSVARIENTCOLLECTION_METHOD_3_79F616D5C3C27F8A_OFFSET))(a1, a2);
		}

		::System::Void Method_3_B2C0ADBFEA309440()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_EDITOR_SHADERPASSVARIENTCOLLECTION_METHOD_3_B2C0ADBFEA309440_OFFSET))(this);
		}

		::System::Void Method_3_B732DC7FA82BA621()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_EDITOR_SHADERPASSVARIENTCOLLECTION_METHOD_3_B732DC7FA82BA621_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::System::String*>*>* Method_3_4314164ED1025523(::System::String* a1)
		{
			return ((::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::System::String*>*>*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_EDITOR_SHADERPASSVARIENTCOLLECTION_METHOD_3_4314164ED1025523_OFFSET))(this, a1);
		}

		static ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::System::String*>*>* Method_3_DAE70E7E8EA7A53C(::System::String* a1)
		{
			return ((::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::System::String*>*>*(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_EDITOR_SHADERPASSVARIENTCOLLECTION_METHOD_3_DAE70E7E8EA7A53C_OFFSET))(a1);
		}

		static ::System::Collections::Generic::List_1<::System::String*>* Method_3_6F9F6E3C25D55AFD(::UnityEngine::Material* a1)
		{
			return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::UnityEngine::Material*))((::PBYTE)hIl2Cpp + RPG_EDITOR_SHADERPASSVARIENTCOLLECTION_METHOD_3_6F9F6E3C25D55AFD_OFFSET))(a1);
		}

		static ::System::Boolean Method_3_305D7772FC4F3138(::Il2CppArray<::System::String*>* a1, ::UnityEngine::Shader* a2, ::UnityEngine::ShaderVariantCollection* a3)
		{
			return ((::System::Boolean(*)(::Il2CppArray<::System::String*>*, ::UnityEngine::Shader*, ::UnityEngine::ShaderVariantCollection*))((::PBYTE)hIl2Cpp + RPG_EDITOR_SHADERPASSVARIENTCOLLECTION_METHOD_3_305D7772FC4F3138_OFFSET))(a1, a2, a3);
		}
	};
}
