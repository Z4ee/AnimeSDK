#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_3.h"

namespace MoleMole { class MaterialGroup_RendererMaterials; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Tuple_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine { class Shader; }

#define MOLEMOLE_MATERIALGROUP_DISPOSE_OFFSET UNITYSDK_OFFSET(0x12347490)
#define MOLEMOLE_MATERIALGROUP_METHOD_1_128774387667156B_OFFSET UNITYSDK_OFFSET(0x12348A60)
#define MOLEMOLE_MATERIALGROUP_METHOD_1_1A5AA449A88E439B_OFFSET UNITYSDK_OFFSET(0x12348910)
#define MOLEMOLE_MATERIALGROUP_METHOD_1_435AAB4498057B1D_OFFSET UNITYSDK_OFFSET(0x123478E0)
#define MOLEMOLE_MATERIALGROUP_METHOD_1_51B9C64C69C57DB4_OFFSET UNITYSDK_OFFSET(0x12348190)
#define MOLEMOLE_MATERIALGROUP_METHOD_1_636A665202BFCC89_OFFSET UNITYSDK_OFFSET(0x123483D0)
#define MOLEMOLE_MATERIALGROUP_METHOD_1_73848A1A591EE38C_OFFSET UNITYSDK_OFFSET(0x12348130)
#define MOLEMOLE_MATERIALGROUP_METHOD_1_816ED7FC0A7FCCD1_OFFSET UNITYSDK_OFFSET(0x12348200)
#define MOLEMOLE_MATERIALGROUP_METHOD_1_85552586101BD5F4_OFFSET UNITYSDK_OFFSET(0x12348BB0)
#define MOLEMOLE_MATERIALGROUP_METHOD_1_9B1F2653496E5C47_OFFSET UNITYSDK_OFFSET(0x12347520)
#define MOLEMOLE_MATERIALGROUP_METHOD_1_C3F5B006C922A2D1_OFFSET UNITYSDK_OFFSET(0x12347C80)
#define MOLEMOLE_MATERIALGROUP_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x12347890)
#define MOLEMOLE_MATERIALGROUP_METHOD_1_D24E394C1D3224A9_OFFSET UNITYSDK_OFFSET(0x12348CB0)
#define MOLEMOLE_MATERIALGROUP_METHOD_1_E0BDB8FC8B82C874_OFFSET UNITYSDK_OFFSET(0x12348AA0)
#define MOLEMOLE_MATERIALGROUP_METHOD_1_E866E78CAA8884E1_OFFSET UNITYSDK_OFFSET(0x123488A0)
#define MOLEMOLE_MATERIALGROUP_METHOD_1_FD055F0BA6D9DCC7_OFFSET UNITYSDK_OFFSET(0x12348D80)
#define MOLEMOLE_MATERIALGROUP_TOSTRING_OFFSET UNITYSDK_OFFSET(0x12347430)
#define MOLEMOLE_MATERIALGROUP__CCTOR_OFFSET UNITYSDK_OFFSET(0x12347840)
#define MOLEMOLE_MATERIALGROUP__CTOR_OFFSET UNITYSDK_OFFSET(0x123473C0)

namespace MoleMole
{
	inline static constexpr unsigned int MaterialGroup_TypeDefinitionIndex = 39531;

	class MaterialGroup : public ::System::Object
	{
	public:
		static ::Il2CppArray<::MoleMole::MaterialGroup_RendererMaterials*>** StaticGet_EMPTY_RENDERER_MATERIALS()
		{
			return (::Il2CppArray<::MoleMole::MaterialGroup_RendererMaterials*>**)Il2CppClass::FromTypeDefinitionIndex(MaterialGroup_TypeDefinitionIndex)->GetStaticField(0x436F0);
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

		::System::Void Method_1_CA373AA1C7054598()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MATERIALGROUP_METHOD_1_CA373AA1C7054598_OFFSET))(this);
		}

		::System::Void Method_1_435AAB4498057B1D(::Il2CppArray<::UnityEngine::Material*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Material*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_MATERIALGROUP_METHOD_1_435AAB4498057B1D_OFFSET))(this, a1);
		}

		::System::Void Method_1_51B9C64C69C57DB4(::UnityEngine::Shader* a1, ::Il2CppArray<::UnityEngine::Material*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Shader*, ::Il2CppArray<::UnityEngine::Material*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_MATERIALGROUP_METHOD_1_51B9C64C69C57DB4_OFFSET))(this, a1, a2);
		}

		::System::Void Method_1_9B1F2653496E5C47()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MATERIALGROUP_METHOD_1_9B1F2653496E5C47_OFFSET))(this);
		}

		::System::Void Method_1_636A665202BFCC89(::Il2CppArray<::UnityEngine::Renderer*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Renderer*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_MATERIALGROUP_METHOD_1_636A665202BFCC89_OFFSET))(this, a1);
		}

		::System::Collections::Generic::Dictionary_2<::UnityEngine::Material*, ::UnityEngine::Shader*>* Method_1_73848A1A591EE38C()
		{
			return ((::System::Collections::Generic::Dictionary_2<::UnityEngine::Material*, ::UnityEngine::Shader*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MATERIALGROUP_METHOD_1_73848A1A591EE38C_OFFSET))(this);
		}

		::Il2CppArray<::UnityEngine::Material*>* Method_1_C3F5B006C922A2D1()
		{
			return ((::Il2CppArray<::UnityEngine::Material*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MATERIALGROUP_METHOD_1_C3F5B006C922A2D1_OFFSET))(this);
		}

		::System::Void Method_1_E866E78CAA8884E1(::System::String* a1, ::Il2CppArray<::UnityEngine::Material*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::Il2CppArray<::UnityEngine::Material*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_MATERIALGROUP_METHOD_1_E866E78CAA8884E1_OFFSET))(this, a1, a2);
		}

		::System::ValueTuple_3<::System::Boolean, ::UnityEngine::Renderer*, ::System::Int32> Method_1_1A5AA449A88E439B(::UnityEngine::Material* a1)
		{
			return ((::System::ValueTuple_3<::System::Boolean, ::UnityEngine::Renderer*, ::System::Int32>(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + MOLEMOLE_MATERIALGROUP_METHOD_1_1A5AA449A88E439B_OFFSET))(this, a1);
		}

		::System::Void Method_1_816ED7FC0A7FCCD1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MATERIALGROUP_METHOD_1_816ED7FC0A7FCCD1_OFFSET))(this);
		}

		::System::String* Method_1_128774387667156B()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MATERIALGROUP_METHOD_1_128774387667156B_OFFSET))(this);
		}

		::System::Void Method_1_E0BDB8FC8B82C874(::System::Int32 a1, ::System::Collections::Generic::List_1<::UnityEngine::Material*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::List_1<::UnityEngine::Material*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_MATERIALGROUP_METHOD_1_E0BDB8FC8B82C874_OFFSET))(this, a1, a2);
		}

		::Il2CppArray<::UnityEngine::Material*>* Method_1_85552586101BD5F4(::System::Int32 a1)
		{
			return ((::Il2CppArray<::UnityEngine::Material*>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MATERIALGROUP_METHOD_1_85552586101BD5F4_OFFSET))(this, a1);
		}

		::System::Void Method_1_D24E394C1D3224A9(::Il2CppArray<::UnityEngine::Renderer*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Renderer*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_MATERIALGROUP_METHOD_1_D24E394C1D3224A9_OFFSET))(this, a1);
		}

		::MoleMole::MaterialGroup* Method_1_FD055F0BA6D9DCC7()
		{
			return ((::MoleMole::MaterialGroup*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MATERIALGROUP_METHOD_1_FD055F0BA6D9DCC7_OFFSET))(this);
		}
	};
}
