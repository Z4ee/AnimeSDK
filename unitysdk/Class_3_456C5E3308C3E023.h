#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_40CD888D5D4FCB5B.h"
#include "unitysdk/UnityEngine/AI/NavMeshHit.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_3_C93CC3D2C2AC4067;
class Class_3_D2084E0C2DD39509;
namespace Nap::NapECS { class EcsEntity; }
namespace Nap::NapECS { class EcsFilter; }
namespace Nap::NapECS { class EcsWorld; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_456C5E3308C3E023_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0x15FC7470)
#define CLASS_3_456C5E3308C3E023_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x15FC76D0)
#define CLASS_3_456C5E3308C3E023_METHOD_3_0D9CA19A94EE0E06_OFFSET UNITYSDK_OFFSET(0x15FCA730)
#define CLASS_3_456C5E3308C3E023_METHOD_3_35A72B83187AC36C_OFFSET UNITYSDK_OFFSET(0x15FCBEF0)
#define CLASS_3_456C5E3308C3E023_METHOD_3_563395C855182288_OFFSET UNITYSDK_OFFSET(0x15FC9B50)
#define CLASS_3_456C5E3308C3E023_METHOD_3_5F3FDFFB0D42F24D_OFFSET UNITYSDK_OFFSET(0x15FC78A0)
#define CLASS_3_456C5E3308C3E023_METHOD_3_6CC10766EB53B675_OFFSET UNITYSDK_OFFSET(0x15FCA0B0)
#define CLASS_3_456C5E3308C3E023_METHOD_3_80BDB26AF6C98D12_OFFSET UNITYSDK_OFFSET(0x15FC9490)
#define CLASS_3_456C5E3308C3E023_METHOD_3_8752D4CD1A72424F_OFFSET UNITYSDK_OFFSET(0x15FC9ED0)
#define CLASS_3_456C5E3308C3E023_METHOD_3_9CAA70E839829223_OFFSET UNITYSDK_OFFSET(0x15FCAA40)
#define CLASS_3_456C5E3308C3E023_METHOD_3_9F5B7D57846D8196_OFFSET UNITYSDK_OFFSET(0x15FC8650)
#define CLASS_3_456C5E3308C3E023_METHOD_3_A11144519902A27F_OFFSET UNITYSDK_OFFSET(0x15FC9DF0)
#define CLASS_3_456C5E3308C3E023_METHOD_3_A4E0B019BFC803EE_OFFSET UNITYSDK_OFFSET(0x15FCB570)
#define CLASS_3_456C5E3308C3E023_METHOD_3_BADC81CF9C936EDA_OFFSET UNITYSDK_OFFSET(0x15FCA6A0)
#define CLASS_3_456C5E3308C3E023_METHOD_3_C6275379738BD731_OFFSET UNITYSDK_OFFSET(0x15FCAD60)
#define CLASS_3_456C5E3308C3E023_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x15FC9E40)
#define CLASS_3_456C5E3308C3E023_METHOD_3_CF9FFD283700CF46_OFFSET UNITYSDK_OFFSET(0x15FC7E70)
#define CLASS_3_456C5E3308C3E023_METHOD_3_D172C5B85240FB12_OFFSET UNITYSDK_OFFSET(0x15FCB770)
#define CLASS_3_456C5E3308C3E023_METHOD_3_D2094F2ADCBD9A7D_OFFSET UNITYSDK_OFFSET(0x15FCC180)
#define CLASS_3_456C5E3308C3E023_METHOD_3_D6D5C2F25B29E6BD_OFFSET UNITYSDK_OFFSET(0x15FC8370)
#define CLASS_3_456C5E3308C3E023_METHOD_3_DE224A6444B5E377_OFFSET UNITYSDK_OFFSET(0x15FC9C80)
#define CLASS_3_456C5E3308C3E023_METHOD_3_EBD61D80C0892553_OFFSET UNITYSDK_OFFSET(0x15FCA520)
#define CLASS_3_456C5E3308C3E023__CCTOR_OFFSET UNITYSDK_OFFSET(0x15FC7880)
#define CLASS_3_456C5E3308C3E023__CTOR_OFFSET UNITYSDK_OFFSET(0x15FC7830)

inline static constexpr unsigned int Class_3_456C5E3308C3E023_TypeDefinitionIndex = 40751;

class Class_3_456C5E3308C3E023 : public ::Class_2_40CD888D5D4FCB5B
{
public:
	static ::System::Boolean* StaticGet_Field_3_0()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_3_456C5E3308C3E023_TypeDefinitionIndex)->GetStaticField(0xE170);
	}
	static ::System::Boolean* StaticGet_Field_3_1()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_3_456C5E3308C3E023_TypeDefinitionIndex)->GetStaticField(0xE171);
	}
	static ::System::Boolean* StaticGet_Field_3_7()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_3_456C5E3308C3E023_TypeDefinitionIndex)->GetStaticField(0xE172);
	}
	::Nap::NapECS::EcsFilter* Field_3_6; // 0x20

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

	::System::Void Method_3_5F3FDFFB0D42F24D(::Nap::NapECS::EcsEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + CLASS_3_456C5E3308C3E023_METHOD_3_5F3FDFFB0D42F24D_OFFSET))(this, a1);
	}

	static ::System::Boolean Method_3_CF9FFD283700CF46(::Class_3_D2084E0C2DD39509* a1, ::UnityEngine::Vector3 a2, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* a3, ::System::Single a4, ::System::Boolean a5, ::System::Int32 a6, ::System::Boolean a7)
	{
		return ((::System::Boolean(*)(::Class_3_D2084E0C2DD39509*, ::UnityEngine::Vector3, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, ::System::Single, ::System::Boolean, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_456C5E3308C3E023_METHOD_3_CF9FFD283700CF46_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
	}

	static ::System::Boolean Method_3_80BDB26AF6C98D12(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::System::Single a4, ::UnityEngine::Vector3& a5)
	{
		return ((::System::Boolean(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + CLASS_3_456C5E3308C3E023_METHOD_3_80BDB26AF6C98D12_OFFSET))(a1, a2, a3, a4, a5);
	}

	::System::Void Method_3_A11144519902A27F(::Nap::NapECS::EcsEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + CLASS_3_456C5E3308C3E023_METHOD_3_A11144519902A27F_OFFSET))(this, a1);
	}

	static ::UnityEngine::Vector3 Method_3_DE224A6444B5E377(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3)
	{
		return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_3_456C5E3308C3E023_METHOD_3_DE224A6444B5E377_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_3_D6D5C2F25B29E6BD(::Class_3_D2084E0C2DD39509* a1)
	{
		return ((::System::Void(*)(::Class_3_D2084E0C2DD39509*))((::PBYTE)hIl2Cpp + CLASS_3_456C5E3308C3E023_METHOD_3_D6D5C2F25B29E6BD_OFFSET))(a1);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_456C5E3308C3E023_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}

	static ::UnityEngine::Vector3 Method_3_8752D4CD1A72424F(::Class_3_D2084E0C2DD39509* a1)
	{
		return ((::UnityEngine::Vector3(*)(::Class_3_D2084E0C2DD39509*))((::PBYTE)hIl2Cpp + CLASS_3_456C5E3308C3E023_METHOD_3_8752D4CD1A72424F_OFFSET))(a1);
	}

	static ::System::Single Method_3_6CC10766EB53B675(::Class_3_D2084E0C2DD39509* a1, ::Class_3_C93CC3D2C2AC4067* a2)
	{
		return ((::System::Single(*)(::Class_3_D2084E0C2DD39509*, ::Class_3_C93CC3D2C2AC4067*))((::PBYTE)hIl2Cpp + CLASS_3_456C5E3308C3E023_METHOD_3_6CC10766EB53B675_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_3_EBD61D80C0892553(::Class_3_D2084E0C2DD39509* a1)
	{
		return ((::System::Boolean(*)(::Class_3_D2084E0C2DD39509*))((::PBYTE)hIl2Cpp + CLASS_3_456C5E3308C3E023_METHOD_3_EBD61D80C0892553_OFFSET))(a1);
	}

	static ::System::Boolean Method_3_563395C855182288(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2)
	{
		return ((::System::Boolean(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_3_456C5E3308C3E023_METHOD_3_563395C855182288_OFFSET))(a1, a2);
	}

	::System::Void Method_3_BADC81CF9C936EDA(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_456C5E3308C3E023_METHOD_3_BADC81CF9C936EDA_OFFSET))(this, a1);
	}

	static ::System::Void Method_3_0D9CA19A94EE0E06(::Class_3_D2084E0C2DD39509* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::Class_3_D2084E0C2DD39509*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_456C5E3308C3E023_METHOD_3_0D9CA19A94EE0E06_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_9CAA70E839829223(::Class_3_D2084E0C2DD39509* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::Class_3_D2084E0C2DD39509*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_456C5E3308C3E023_METHOD_3_9CAA70E839829223_OFFSET))(a1, a2);
	}

	::System::Void Method_3_C6275379738BD731(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_456C5E3308C3E023_METHOD_3_C6275379738BD731_OFFSET))(this, a1);
	}

	static ::System::Void Method_3_A4E0B019BFC803EE(::Class_3_D2084E0C2DD39509* a1, ::UnityEngine::Vector3 a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::Class_3_D2084E0C2DD39509*, ::UnityEngine::Vector3, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_456C5E3308C3E023_METHOD_3_A4E0B019BFC803EE_OFFSET))(a1, a2, a3);
	}

	static ::System::Boolean Method_3_D172C5B85240FB12(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::UnityEngine::AI::NavMeshHit& a4, ::UnityEngine::Vector3& a5, ::System::Int32 a6)
	{
		return ((::System::Boolean(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::AI::NavMeshHit&, ::UnityEngine::Vector3&, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_456C5E3308C3E023_METHOD_3_D172C5B85240FB12_OFFSET))(a1, a2, a3, a4, a5, a6);
	}

	static ::System::Boolean Method_3_35A72B83187AC36C(::Class_3_D2084E0C2DD39509* a1, ::UnityEngine::Vector3 a2, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* a3, ::System::Int32 a4, ::System::Boolean a5)
	{
		return ((::System::Boolean(*)(::Class_3_D2084E0C2DD39509*, ::UnityEngine::Vector3, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_456C5E3308C3E023_METHOD_3_35A72B83187AC36C_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::System::Void Method_3_9F5B7D57846D8196(::Class_3_D2084E0C2DD39509* a1, ::System::Single a2, ::System::Int32 a3, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* a4, ::System::Int32 a5, ::System::Boolean a6)
	{
		return ((::System::Void(*)(::Class_3_D2084E0C2DD39509*, ::System::Single, ::System::Int32, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_456C5E3308C3E023_METHOD_3_9F5B7D57846D8196_OFFSET))(a1, a2, a3, a4, a5, a6);
	}

	static ::System::Boolean Method_3_D2094F2ADCBD9A7D(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::UnityEngine::AI::NavMeshHit& a4, ::UnityEngine::Vector3& a5, ::System::Int32 a6)
	{
		return ((::System::Boolean(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::AI::NavMeshHit&, ::UnityEngine::Vector3&, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_456C5E3308C3E023_METHOD_3_D2094F2ADCBD9A7D_OFFSET))(a1, a2, a3, a4, a5, a6);
	}
};
