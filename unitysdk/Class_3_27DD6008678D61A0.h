#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_40CD888D5D4FCB5B.h"
#include "unitysdk/Enum_3_5EA2B17DF83E32C8.h"
#include "unitysdk/Enum_3_E18DD7D3DEDDD336.h"
#include "unitysdk/Enum_3_F40B865AC61AB8D7.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/RaycastHit.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_D4E3BB7FB7BD8B59;
class Class_3_4076EB58F5C5BF5E;
class Class_3_BC16675DD2FB1452;
class Class_3_E87BEBC681EE4CED;
namespace MoleMole { class MonoConfigurableCollider; }
namespace MoleMole::Battle { class Entity; }
namespace Nap::NapECS { class EcsFilter; }
namespace Nap::NapECS { class EcsWorld; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Collider; }

#define CLASS_3_27DD6008678D61A0_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0x12BBFE70)
#define CLASS_3_27DD6008678D61A0_FIXEDUPDATE_OFFSET UNITYSDK_OFFSET(0x12BC0160)
#define CLASS_3_27DD6008678D61A0_METHOD_3_3DE949ACDA12E264_OFFSET UNITYSDK_OFFSET(0x12BC4DE0)
#define CLASS_3_27DD6008678D61A0_METHOD_3_4C92EF9757E5BFCF_OFFSET UNITYSDK_OFFSET(0x12BC3E40)
#define CLASS_3_27DD6008678D61A0_METHOD_3_527027D562B239B2_OFFSET UNITYSDK_OFFSET(0x12BCAC10)
#define CLASS_3_27DD6008678D61A0_METHOD_3_57FF2C42D8C7B8C4_OFFSET UNITYSDK_OFFSET(0x12BCAF10)
#define CLASS_3_27DD6008678D61A0_METHOD_3_60461E279480E202_OFFSET UNITYSDK_OFFSET(0x12BC0E50)
#define CLASS_3_27DD6008678D61A0_METHOD_3_62B83D25D7AB002F_OFFSET UNITYSDK_OFFSET(0x12BC6A80)
#define CLASS_3_27DD6008678D61A0_METHOD_3_68A71533AD243EC1_OFFSET UNITYSDK_OFFSET(0x12BC6BB0)
#define CLASS_3_27DD6008678D61A0_METHOD_3_9B2E710EB9D49BA6_OFFSET UNITYSDK_OFFSET(0x12BC0590)
#define CLASS_3_27DD6008678D61A0_METHOD_3_A83912A7F81D33B2_OFFSET UNITYSDK_OFFSET(0x12BC4170)
#define CLASS_3_27DD6008678D61A0_METHOD_3_AE0A0A6D0CD3B08D_OFFSET UNITYSDK_OFFSET(0x12BC6480)
#define CLASS_3_27DD6008678D61A0_METHOD_3_BADC81CF9C936EDA_OFFSET UNITYSDK_OFFSET(0x12BC43B0)
#define CLASS_3_27DD6008678D61A0_METHOD_3_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x12BCCDD0)
#define CLASS_3_27DD6008678D61A0_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x12BCB6C0)
#define CLASS_3_27DD6008678D61A0_METHOD_3_D9FF16FA18506AAB_OFFSET UNITYSDK_OFFSET(0x12BC6970)
#define CLASS_3_27DD6008678D61A0_METHOD_3_EAC3A8587F1EB8C4_OFFSET UNITYSDK_OFFSET(0x12BCB750)
#define CLASS_3_27DD6008678D61A0_METHOD_3_ED237CE2A9896A96_OFFSET UNITYSDK_OFFSET(0x12BC4440)
#define CLASS_3_27DD6008678D61A0_WAITFORFIXEDUPDATE_OFFSET UNITYSDK_OFFSET(0x12BC09C0)
#define CLASS_3_27DD6008678D61A0__CCTOR_OFFSET UNITYSDK_OFFSET(0x12BC0DC0)
#define CLASS_3_27DD6008678D61A0__CTOR_OFFSET UNITYSDK_OFFSET(0x12BC0D70)

inline static constexpr unsigned int Class_3_27DD6008678D61A0_TypeDefinitionIndex = 78492;

class Class_3_27DD6008678D61A0 : public ::Class_2_40CD888D5D4FCB5B
{
public:
	static ::System::Collections::Generic::List_1<::UnityEngine::Bounds>** StaticGet_Field_3_6()
	{
		return (::System::Collections::Generic::List_1<::UnityEngine::Bounds>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_27DD6008678D61A0_TypeDefinitionIndex)->GetStaticField(0x3EAB0);
	}
	static ::System::Boolean* StaticGet_Field_3_1()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_3_27DD6008678D61A0_TypeDefinitionIndex)->GetStaticField(0xE9E0);
	}
	::Nap::NapECS::EcsFilter* Field_3_0; // 0x20
	::Nap::NapECS::EcsFilter* Field_3_7; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27DD6008678D61A0__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_27DD6008678D61A0__CCTOR_OFFSET))();
	}

	::System::Void CreateFilters(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_27DD6008678D61A0_CREATEFILTERS_OFFSET))(this, a1);
	}

	::System::Void FixedUpdate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27DD6008678D61A0_FIXEDUPDATE_OFFSET))(this);
	}

	::System::Void WaitForFixedUpdate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27DD6008678D61A0_WAITFORFIXEDUPDATE_OFFSET))(this);
	}

	static ::System::Void Method_3_60461E279480E202(::Class_3_4076EB58F5C5BF5E* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::Class_3_4076EB58F5C5BF5E*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_27DD6008678D61A0_METHOD_3_60461E279480E202_OFFSET))(a1, a2);
	}

	::System::Void Method_3_BADC81CF9C936EDA(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_27DD6008678D61A0_METHOD_3_BADC81CF9C936EDA_OFFSET))(this, a1);
	}

	static ::System::Boolean Method_3_ED237CE2A9896A96(::UnityEngine::Bounds& a1, ::Enum_3_5EA2B17DF83E32C8 a2)
	{
		return ((::System::Boolean(*)(::UnityEngine::Bounds&, ::Enum_3_5EA2B17DF83E32C8))((::PBYTE)hIl2Cpp + CLASS_3_27DD6008678D61A0_METHOD_3_ED237CE2A9896A96_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_3DE949ACDA12E264(::Class_3_4076EB58F5C5BF5E* a1, ::Class_3_BC16675DD2FB1452* a2)
	{
		return ((::System::Void(*)(::Class_3_4076EB58F5C5BF5E*, ::Class_3_BC16675DD2FB1452*))((::PBYTE)hIl2Cpp + CLASS_3_27DD6008678D61A0_METHOD_3_3DE949ACDA12E264_OFFSET))(a1, a2);
	}

	static ::System::Single Method_3_D9FF16FA18506AAB(::Class_3_4076EB58F5C5BF5E* a1)
	{
		return ((::System::Single(*)(::Class_3_4076EB58F5C5BF5E*))((::PBYTE)hIl2Cpp + CLASS_3_27DD6008678D61A0_METHOD_3_D9FF16FA18506AAB_OFFSET))(a1);
	}

	static ::System::Void Method_3_62B83D25D7AB002F(::Class_3_4076EB58F5C5BF5E* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::Class_3_4076EB58F5C5BF5E*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_27DD6008678D61A0_METHOD_3_62B83D25D7AB002F_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_68A71533AD243EC1(::Class_3_4076EB58F5C5BF5E* a1, ::Class_3_BC16675DD2FB1452* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::Class_3_4076EB58F5C5BF5E*, ::Class_3_BC16675DD2FB1452*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_27DD6008678D61A0_METHOD_3_68A71533AD243EC1_OFFSET))(a1, a2, a3);
	}

	static ::UnityEngine::Vector3 Method_3_4C92EF9757E5BFCF(::UnityEngine::Collider* a1, ::UnityEngine::Vector3 a2)
	{
		return ((::UnityEngine::Vector3(*)(::UnityEngine::Collider*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_3_27DD6008678D61A0_METHOD_3_4C92EF9757E5BFCF_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_527027D562B239B2(::Class_3_4076EB58F5C5BF5E* a1, ::Class_3_BC16675DD2FB1452* a2)
	{
		return ((::System::Void(*)(::Class_3_4076EB58F5C5BF5E*, ::Class_3_BC16675DD2FB1452*))((::PBYTE)hIl2Cpp + CLASS_3_27DD6008678D61A0_METHOD_3_527027D562B239B2_OFFSET))(a1, a2);
	}

	static ::System::Int32 Method_3_57FF2C42D8C7B8C4(::MoleMole::MonoConfigurableCollider* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Quaternion a4, ::System::Int32 a5, ::Il2CppArray<::UnityEngine::RaycastHit>* a6)
	{
		return ((::System::Int32(*)(::MoleMole::MonoConfigurableCollider*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::System::Int32, ::Il2CppArray<::UnityEngine::RaycastHit>*))((::PBYTE)hIl2Cpp + CLASS_3_27DD6008678D61A0_METHOD_3_57FF2C42D8C7B8C4_OFFSET))(a1, a2, a3, a4, a5, a6);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27DD6008678D61A0_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}

	static ::System::Void Method_3_EAC3A8587F1EB8C4(::Class_3_4076EB58F5C5BF5E* a1, ::Class_3_E87BEBC681EE4CED* a2)
	{
		return ((::System::Void(*)(::Class_3_4076EB58F5C5BF5E*, ::Class_3_E87BEBC681EE4CED*))((::PBYTE)hIl2Cpp + CLASS_3_27DD6008678D61A0_METHOD_3_EAC3A8587F1EB8C4_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_9B2E710EB9D49BA6()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_27DD6008678D61A0_METHOD_3_9B2E710EB9D49BA6_OFFSET))();
	}

	static ::UnityEngine::Vector3 Method_3_AE0A0A6D0CD3B08D(::Enum_3_F40B865AC61AB8D7 a1, ::UnityEngine::Collider* a2, ::UnityEngine::Vector3 a3)
	{
		return ((::UnityEngine::Vector3(*)(::Enum_3_F40B865AC61AB8D7, ::UnityEngine::Collider*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_3_27DD6008678D61A0_METHOD_3_AE0A0A6D0CD3B08D_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_3_A83912A7F81D33B2(::Class_3_4076EB58F5C5BF5E* a1, ::Class_1_D4E3BB7FB7BD8B59* a2, ::UnityEngine::Collider* a3, ::UnityEngine::Vector3 a4, ::UnityEngine::Vector3 a5, ::Enum_3_E18DD7D3DEDDD336 a6, ::UnityEngine::Vector3 a7)
	{
		return ((::System::Void(*)(::Class_3_4076EB58F5C5BF5E*, ::Class_1_D4E3BB7FB7BD8B59*, ::UnityEngine::Collider*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::Enum_3_E18DD7D3DEDDD336, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_3_27DD6008678D61A0_METHOD_3_A83912A7F81D33B2_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
	}

	::System::Void Method_3_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27DD6008678D61A0_METHOD_3_CA373AA1C7054598_1_OFFSET))(this);
	}
};
