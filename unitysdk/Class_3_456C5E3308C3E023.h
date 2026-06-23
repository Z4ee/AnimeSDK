#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_40CD888D5D4FCB5B.h"
#include "unitysdk/UnityEngine/AI/NavMeshHit.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_3_D2084E0C2DD39509;
class Class_3_DFD5D1FDB9D2A4AC;
namespace Nap::NapECS { class EcsEntity; }
namespace Nap::NapECS { class EcsFilter; }
namespace Nap::NapECS { class EcsWorld; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_456C5E3308C3E023_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0x15CD2040)
#define CLASS_3_456C5E3308C3E023_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x15CD22A0)
#define CLASS_3_456C5E3308C3E023_METHOD_3_0D9CA19A94EE0E06_OFFSET UNITYSDK_OFFSET(0x15CD39D0)
#define CLASS_3_456C5E3308C3E023_METHOD_3_4BDCD8817E21E5A1_OFFSET UNITYSDK_OFFSET(0x15CD36D0)
#define CLASS_3_456C5E3308C3E023_METHOD_3_5F3FDFFB0D42F24D_OFFSET UNITYSDK_OFFSET(0x15CD4800)
#define CLASS_3_456C5E3308C3E023_METHOD_3_8752D4CD1A72424F_OFFSET UNITYSDK_OFFSET(0x15CD6470)
#define CLASS_3_456C5E3308C3E023_METHOD_3_94B4F6E872AF1B21_OFFSET UNITYSDK_OFFSET(0x15CD3FE0)
#define CLASS_3_456C5E3308C3E023_METHOD_3_9B93F0750CA1A57B_OFFSET UNITYSDK_OFFSET(0x15CD3040)
#define CLASS_3_456C5E3308C3E023_METHOD_3_9CAA70E839829223_OFFSET UNITYSDK_OFFSET(0x15CD24F0)
#define CLASS_3_456C5E3308C3E023_METHOD_3_9F5B7D57846D8196_OFFSET UNITYSDK_OFFSET(0x15CD4DD0)
#define CLASS_3_456C5E3308C3E023_METHOD_3_A11144519902A27F_OFFSET UNITYSDK_OFFSET(0x15CD6420)
#define CLASS_3_456C5E3308C3E023_METHOD_3_A4E0B019BFC803EE_OFFSET UNITYSDK_OFFSET(0x15CD34C0)
#define CLASS_3_456C5E3308C3E023_METHOD_3_BADC81CF9C936EDA_OFFSET UNITYSDK_OFFSET(0x15CD5A80)
#define CLASS_3_456C5E3308C3E023_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x15CD2460)
#define CLASS_3_456C5E3308C3E023_METHOD_3_CF9FFD283700CF46_OFFSET UNITYSDK_OFFSET(0x15CD5B10)
#define CLASS_3_456C5E3308C3E023_METHOD_3_D2094F2ADCBD9A7D_OFFSET UNITYSDK_OFFSET(0x15CD3CE0)
#define CLASS_3_456C5E3308C3E023_METHOD_3_D95C08DFF81FE381_OFFSET UNITYSDK_OFFSET(0x15CD6010)
#define CLASS_3_456C5E3308C3E023_METHOD_3_EBD61D80C0892553_OFFSET UNITYSDK_OFFSET(0x15CD62A0)
#define CLASS_3_456C5E3308C3E023_METHOD_3_F1AB8E1526605CB8_OFFSET UNITYSDK_OFFSET(0x15CD2810)
#define CLASS_3_456C5E3308C3E023__CCTOR_OFFSET UNITYSDK_OFFSET(0x15CD2450)
#define CLASS_3_456C5E3308C3E023__CTOR_OFFSET UNITYSDK_OFFSET(0x15CD2400)

inline static constexpr unsigned int Class_3_456C5E3308C3E023_TypeDefinitionIndex = 78635;

class Class_3_456C5E3308C3E023 : public ::Class_2_40CD888D5D4FCB5B
{
public:
	static ::System::Boolean* StaticGet_Field_3_0()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_3_456C5E3308C3E023_TypeDefinitionIndex)->GetStaticField(0xD5E0);
	}
	static ::System::Boolean* StaticGet_Field_3_1()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_3_456C5E3308C3E023_TypeDefinitionIndex)->GetStaticField(0xD5E1);
	}
	::Nap::NapECS::EcsFilter* Field_3_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_456C5E3308C3E023__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_456C5E3308C3E023__CCTOR_OFFSET))();
	}

	::System::Void CreateFilters(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_456C5E3308C3E023_CREATEFILTERS_OFFSET))(this, a1);
	}

	::System::Void LateUpdate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_456C5E3308C3E023_LATEUPDATE_OFFSET))(this);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_456C5E3308C3E023_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}

	static ::System::Void Method_3_9CAA70E839829223(::Class_3_D2084E0C2DD39509* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::Class_3_D2084E0C2DD39509*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_456C5E3308C3E023_METHOD_3_9CAA70E839829223_OFFSET))(a1, a2);
	}

	::System::Void Method_3_F1AB8E1526605CB8(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_456C5E3308C3E023_METHOD_3_F1AB8E1526605CB8_OFFSET))(this, a1);
	}

	static ::System::Void Method_3_A4E0B019BFC803EE(::Class_3_D2084E0C2DD39509* a1, ::UnityEngine::Vector3 a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::Class_3_D2084E0C2DD39509*, ::UnityEngine::Vector3, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_456C5E3308C3E023_METHOD_3_A4E0B019BFC803EE_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_3_0D9CA19A94EE0E06(::Class_3_D2084E0C2DD39509* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::Class_3_D2084E0C2DD39509*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_456C5E3308C3E023_METHOD_3_0D9CA19A94EE0E06_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_3_D2094F2ADCBD9A7D(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::UnityEngine::AI::NavMeshHit& a4, ::UnityEngine::Vector3& a5, ::System::Int32 a6)
	{
		return ((::System::Boolean(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::AI::NavMeshHit&, ::UnityEngine::Vector3&, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_456C5E3308C3E023_METHOD_3_D2094F2ADCBD9A7D_OFFSET))(a1, a2, a3, a4, a5, a6);
	}

	::System::Void Method_3_5F3FDFFB0D42F24D(::Nap::NapECS::EcsEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + CLASS_3_456C5E3308C3E023_METHOD_3_5F3FDFFB0D42F24D_OFFSET))(this, a1);
	}

	static ::System::Single Method_3_9B93F0750CA1A57B(::Class_3_D2084E0C2DD39509* a1, ::Class_3_DFD5D1FDB9D2A4AC* a2)
	{
		return ((::System::Single(*)(::Class_3_D2084E0C2DD39509*, ::Class_3_DFD5D1FDB9D2A4AC*))((::PBYTE)hIl2Cpp + CLASS_3_456C5E3308C3E023_METHOD_3_9B93F0750CA1A57B_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_3_94B4F6E872AF1B21(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::UnityEngine::AI::NavMeshHit& a4, ::UnityEngine::Vector3& a5, ::System::Int32 a6)
	{
		return ((::System::Boolean(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::AI::NavMeshHit&, ::UnityEngine::Vector3&, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_456C5E3308C3E023_METHOD_3_94B4F6E872AF1B21_OFFSET))(a1, a2, a3, a4, a5, a6);
	}

	static ::System::Void Method_3_9F5B7D57846D8196(::Class_3_D2084E0C2DD39509* a1, ::System::Single a2, ::System::Int32 a3, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* a4, ::System::Int32 a5, ::System::Boolean a6)
	{
		return ((::System::Void(*)(::Class_3_D2084E0C2DD39509*, ::System::Single, ::System::Int32, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_456C5E3308C3E023_METHOD_3_9F5B7D57846D8196_OFFSET))(a1, a2, a3, a4, a5, a6);
	}

	::System::Void Method_3_BADC81CF9C936EDA(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_456C5E3308C3E023_METHOD_3_BADC81CF9C936EDA_OFFSET))(this, a1);
	}

	static ::System::Void Method_3_4BDCD8817E21E5A1(::Class_3_D2084E0C2DD39509* a1)
	{
		return ((::System::Void(*)(::Class_3_D2084E0C2DD39509*))((::PBYTE)hIl2Cpp + CLASS_3_456C5E3308C3E023_METHOD_3_4BDCD8817E21E5A1_OFFSET))(a1);
	}

	static ::System::Boolean Method_3_CF9FFD283700CF46(::Class_3_D2084E0C2DD39509* a1, ::UnityEngine::Vector3 a2, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* a3, ::System::Single a4, ::System::Boolean a5, ::System::Int32 a6, ::System::Boolean a7)
	{
		return ((::System::Boolean(*)(::Class_3_D2084E0C2DD39509*, ::UnityEngine::Vector3, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, ::System::Single, ::System::Boolean, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_456C5E3308C3E023_METHOD_3_CF9FFD283700CF46_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
	}

	static ::System::Boolean Method_3_D95C08DFF81FE381(::Class_3_D2084E0C2DD39509* a1, ::UnityEngine::Vector3 a2, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* a3, ::System::Int32 a4, ::System::Boolean a5)
	{
		return ((::System::Boolean(*)(::Class_3_D2084E0C2DD39509*, ::UnityEngine::Vector3, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_456C5E3308C3E023_METHOD_3_D95C08DFF81FE381_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::System::Boolean Method_3_EBD61D80C0892553(::Class_3_D2084E0C2DD39509* a1)
	{
		return ((::System::Boolean(*)(::Class_3_D2084E0C2DD39509*))((::PBYTE)hIl2Cpp + CLASS_3_456C5E3308C3E023_METHOD_3_EBD61D80C0892553_OFFSET))(a1);
	}

	::System::Void Method_3_A11144519902A27F(::Nap::NapECS::EcsEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + CLASS_3_456C5E3308C3E023_METHOD_3_A11144519902A27F_OFFSET))(this, a1);
	}

	static ::UnityEngine::Vector3 Method_3_8752D4CD1A72424F(::Class_3_D2084E0C2DD39509* a1)
	{
		return ((::UnityEngine::Vector3(*)(::Class_3_D2084E0C2DD39509*))((::PBYTE)hIl2Cpp + CLASS_3_456C5E3308C3E023_METHOD_3_8752D4CD1A72424F_OFFSET))(a1);
	}
};
