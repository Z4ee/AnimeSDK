#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_3.h"

namespace MoleMole { class MaterialGroup_RendererMaterials; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Tuple_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine { class Shader; }

#define MOLEMOLE_MATERIALGROUP_DISPOSE_OFFSET UNITYSDK_OFFSET(0x13EFBB30)
#define MOLEMOLE_MATERIALGROUP_METHOD_1_128774387667156B_OFFSET UNITYSDK_OFFSET(0x13EFBF30)
#define MOLEMOLE_MATERIALGROUP_METHOD_1_15521E9FDAF6FDA1_OFFSET UNITYSDK_OFFSET(0x13EFC5A0)
#define MOLEMOLE_MATERIALGROUP_METHOD_1_1A5AA449A88E439B_OFFSET UNITYSDK_OFFSET(0x13EFC450)
#define MOLEMOLE_MATERIALGROUP_METHOD_1_435AAB4498057B1D_OFFSET UNITYSDK_OFFSET(0x13EFEA30)
#define MOLEMOLE_MATERIALGROUP_METHOD_1_51B9C64C69C57DB4_OFFSET UNITYSDK_OFFSET(0x13EFE440)
#define MOLEMOLE_MATERIALGROUP_METHOD_1_636A665202BFCC89_OFFSET UNITYSDK_OFFSET(0x13EFCEB0)
#define MOLEMOLE_MATERIALGROUP_METHOD_1_73848A1A591EE38C_OFFSET UNITYSDK_OFFSET(0x13EFEDD0)
#define MOLEMOLE_MATERIALGROUP_METHOD_1_816ED7FC0A7FCCD1_OFFSET UNITYSDK_OFFSET(0x13EFC9D0)
#define MOLEMOLE_MATERIALGROUP_METHOD_1_85552586101BD5F4_OFFSET UNITYSDK_OFFSET(0x13EFD380)
#define MOLEMOLE_MATERIALGROUP_METHOD_1_871AE5998998B6B7_OFFSET UNITYSDK_OFFSET(0x13EFD480)
#define MOLEMOLE_MATERIALGROUP_METHOD_1_99F150381B61899B_OFFSET UNITYSDK_OFFSET(0x13EFDB90)
#define MOLEMOLE_MATERIALGROUP_METHOD_1_9B1F2653496E5C47_OFFSET UNITYSDK_OFFSET(0x13EFBBC0)
#define MOLEMOLE_MATERIALGROUP_METHOD_1_A56084A2648D35E3_OFFSET UNITYSDK_OFFSET(0x13EFBF70)
#define MOLEMOLE_MATERIALGROUP_METHOD_1_BE40E133AEDCC564_OFFSET UNITYSDK_OFFSET(0x13EFEE30)
#define MOLEMOLE_MATERIALGROUP_METHOD_1_C3F5B006C922A2D1_OFFSET UNITYSDK_OFFSET(0x13EFE580)
#define MOLEMOLE_MATERIALGROUP_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x13EFDB40)
#define MOLEMOLE_MATERIALGROUP_METHOD_1_D24E394C1D3224A9_OFFSET UNITYSDK_OFFSET(0x13EFE4B0)
#define MOLEMOLE_MATERIALGROUP_METHOD_1_E0BDB8FC8B82C874_OFFSET UNITYSDK_OFFSET(0x13EFC850)
#define MOLEMOLE_MATERIALGROUP_METHOD_1_E866E78CAA8884E1_OFFSET UNITYSDK_OFFSET(0x13EFC960)
#define MOLEMOLE_MATERIALGROUP_METHOD_1_EFC240F3C4F78D48_OFFSET UNITYSDK_OFFSET(0x13EFCBA0)
#define MOLEMOLE_MATERIALGROUP_METHOD_1_FD055F0BA6D9DCC7_OFFSET UNITYSDK_OFFSET(0x13EFC110)
#define MOLEMOLE_MATERIALGROUP_TOSTRING_OFFSET UNITYSDK_OFFSET(0x13EFBAD0)
#define MOLEMOLE_MATERIALGROUP__CCTOR_OFFSET UNITYSDK_OFFSET(0x13EFBEE0)
#define MOLEMOLE_MATERIALGROUP__CTOR_OFFSET UNITYSDK_OFFSET(0x13EFBA60)

namespace MoleMole
{
	inline static constexpr unsigned int MaterialGroup_TypeDefinitionIndex = 69116;

	class MaterialGroup : public ::System::Object
	{
	public:
		static ::Il2CppArray<::MoleMole::MaterialGroup_RendererMaterials*>** StaticGet_EMPTY_RENDERER_MATERIALS()
		{
			return (::Il2CppArray<::MoleMole::MaterialGroup_RendererMaterials*>**)Il2CppClass::FromTypeDefinitionIndex(MaterialGroup_TypeDefinitionIndex)->GetStaticField(0x4D980);
		}
		::Il2CppArray<::MoleMole::MaterialGroup_RendererMaterials*>* entries; // 0x10
		::Il2CppArray<::UnityEngine::Material*>* allInstancedMats; // 0x18
		::System::Collections::Generic::Dictionary_2<::UnityEngine::Material*, ::System::Tuple_2<::UnityEngine::Renderer*, ::System::Int32>*>* matInfos; // 0x20
		::System::Collections::Generic::Dictionary_2<::UnityEngine::Material*, ::UnityEngine::Shader*>* matOriginalShaders; // 0x28
		::System::Collections::Generic::Dictionary_2<::UnityEngine::Material*, ::System::Tuple_2<::UnityEngine::Renderer*, ::System::Int32>*>* _materialInfos; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MATERIALGROUP__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_MATERIALGROUP__CCTOR_OFFSET))();
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MATERIALGROUP_TOSTRING_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MATERIALGROUP_DISPOSE_OFFSET))(this);
		}

		::System::String* Method_1_128774387667156B()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MATERIALGROUP_METHOD_1_128774387667156B_OFFSET))(this);
		}

		static ::System::Boolean Method_1_A56084A2648D35E3(::MoleMole::MaterialGroup_RendererMaterials* a1, ::System::Collections::Generic::HashSet_1<::UnityEngine::Renderer*>* a2)
		{
			return ((::System::Boolean(*)(::MoleMole::MaterialGroup_RendererMaterials*, ::System::Collections::Generic::HashSet_1<::UnityEngine::Renderer*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_MATERIALGROUP_METHOD_1_A56084A2648D35E3_OFFSET))(a1, a2);
		}

		::MoleMole::MaterialGroup* Method_1_FD055F0BA6D9DCC7()
		{
			return ((::MoleMole::MaterialGroup*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MATERIALGROUP_METHOD_1_FD055F0BA6D9DCC7_OFFSET))(this);
		}

		::System::ValueTuple_3<::System::Boolean, ::UnityEngine::Renderer*, ::System::Int32> Method_1_1A5AA449A88E439B(::UnityEngine::Material* a1)
		{
			return ((::System::ValueTuple_3<::System::Boolean, ::UnityEngine::Renderer*, ::System::Int32>(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + MOLEMOLE_MATERIALGROUP_METHOD_1_1A5AA449A88E439B_OFFSET))(this, a1);
		}

		::MoleMole::MaterialGroup_RendererMaterials* Method_1_15521E9FDAF6FDA1(::UnityEngine::Renderer* a1)
		{
			return ((::MoleMole::MaterialGroup_RendererMaterials*(*)(::PVOID, ::UnityEngine::Renderer*))((::PBYTE)hIl2Cpp + MOLEMOLE_MATERIALGROUP_METHOD_1_15521E9FDAF6FDA1_OFFSET))(this, a1);
		}

		::System::Void Method_1_E0BDB8FC8B82C874(::System::Int32 a1, ::System::Collections::Generic::List_1<::UnityEngine::Material*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::List_1<::UnityEngine::Material*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_MATERIALGROUP_METHOD_1_E0BDB8FC8B82C874_OFFSET))(this, a1, a2);
		}

		::System::Void Method_1_E866E78CAA8884E1(::System::String* a1, ::Il2CppArray<::UnityEngine::Material*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::Il2CppArray<::UnityEngine::Material*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_MATERIALGROUP_METHOD_1_E866E78CAA8884E1_OFFSET))(this, a1, a2);
		}

		::System::Void Method_1_9B1F2653496E5C47()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MATERIALGROUP_METHOD_1_9B1F2653496E5C47_OFFSET))(this);
		}

		::System::Void Method_1_EFC240F3C4F78D48(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MATERIALGROUP_METHOD_1_EFC240F3C4F78D48_OFFSET))(this, a1);
		}

		::System::Void Method_1_636A665202BFCC89(::Il2CppArray<::UnityEngine::Renderer*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Renderer*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_MATERIALGROUP_METHOD_1_636A665202BFCC89_OFFSET))(this, a1);
		}

		::Il2CppArray<::UnityEngine::Material*>* Method_1_85552586101BD5F4(::System::Int32 a1)
		{
			return ((::Il2CppArray<::UnityEngine::Material*>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MATERIALGROUP_METHOD_1_85552586101BD5F4_OFFSET))(this, a1);
		}

		::System::Int32 Method_1_871AE5998998B6B7()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MATERIALGROUP_METHOD_1_871AE5998998B6B7_OFFSET))(this);
		}

		::System::Int32 Method_1_99F150381B61899B(::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Renderer*>* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Renderer*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_MATERIALGROUP_METHOD_1_99F150381B61899B_OFFSET))(this, a1);
		}

		::System::Void Method_1_51B9C64C69C57DB4(::UnityEngine::Shader* a1, ::Il2CppArray<::UnityEngine::Material*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Shader*, ::Il2CppArray<::UnityEngine::Material*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_MATERIALGROUP_METHOD_1_51B9C64C69C57DB4_OFFSET))(this, a1, a2);
		}

		::System::Void Method_1_CA373AA1C7054598()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MATERIALGROUP_METHOD_1_CA373AA1C7054598_OFFSET))(this);
		}

		::System::Void Method_1_D24E394C1D3224A9(::Il2CppArray<::UnityEngine::Renderer*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Renderer*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_MATERIALGROUP_METHOD_1_D24E394C1D3224A9_OFFSET))(this, a1);
		}

		::System::Void Method_1_435AAB4498057B1D(::Il2CppArray<::UnityEngine::Material*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Material*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_MATERIALGROUP_METHOD_1_435AAB4498057B1D_OFFSET))(this, a1);
		}

		::System::Collections::Generic::Dictionary_2<::UnityEngine::Material*, ::UnityEngine::Shader*>* Method_1_73848A1A591EE38C()
		{
			return ((::System::Collections::Generic::Dictionary_2<::UnityEngine::Material*, ::UnityEngine::Shader*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MATERIALGROUP_METHOD_1_73848A1A591EE38C_OFFSET))(this);
		}

		::Il2CppArray<::UnityEngine::Material*>* Method_1_C3F5B006C922A2D1()
		{
			return ((::Il2CppArray<::UnityEngine::Material*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MATERIALGROUP_METHOD_1_C3F5B006C922A2D1_OFFSET))(this);
		}

		::System::Void Method_1_816ED7FC0A7FCCD1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MATERIALGROUP_METHOD_1_816ED7FC0A7FCCD1_OFFSET))(this);
		}

		::System::Int32 Method_1_BE40E133AEDCC564(::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Renderer*>* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Renderer*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_MATERIALGROUP_METHOD_1_BE40E133AEDCC564_OFFSET))(this, a1);
		}
	};
}
