#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_40CD888D5D4FCB5B.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_916778923E38503B;
class Class_1_B7E341C5F1A6F199;
class Class_3_DFD5D1FDB9D2A4AC;
class Class_3_FFD0045B4597F294;
namespace MoleMole::Battle { class Entity; }
namespace Nap::NapECS { class EcsEntity; }
namespace Nap::NapECS { class EcsFilter; }
namespace Nap::NapECS { class EcsWorld; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }

#define CLASS_3_2712D76941E4508C_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0x1AA18EB0)
#define CLASS_3_2712D76941E4508C_METHOD_3_00DC8BCDD9497DF0_OFFSET UNITYSDK_OFFSET(0x1AA1CC20)
#define CLASS_3_2712D76941E4508C_METHOD_3_05252F136A7884FE_OFFSET UNITYSDK_OFFSET(0x1AA1A160)
#define CLASS_3_2712D76941E4508C_METHOD_3_134A95DAF15CFB39_OFFSET UNITYSDK_OFFSET(0x1AA1D3B0)
#define CLASS_3_2712D76941E4508C_METHOD_3_20FD8965F00EA2BF_OFFSET UNITYSDK_OFFSET(0x1AA1A6F0)
#define CLASS_3_2712D76941E4508C_METHOD_3_21A5433EDB9E3BFB_OFFSET UNITYSDK_OFFSET(0x1AA1D960)
#define CLASS_3_2712D76941E4508C_METHOD_3_2DF53C819113F884_OFFSET UNITYSDK_OFFSET(0x1AA1BFE0)
#define CLASS_3_2712D76941E4508C_METHOD_3_36094BFB41CBC198_OFFSET UNITYSDK_OFFSET(0x1AA1CCB0)
#define CLASS_3_2712D76941E4508C_METHOD_3_3E0CF88A50D88B11_OFFSET UNITYSDK_OFFSET(0x1AA1E1F0)
#define CLASS_3_2712D76941E4508C_METHOD_3_4572AE8CBBAFC727_OFFSET UNITYSDK_OFFSET(0x1AA1C720)
#define CLASS_3_2712D76941E4508C_METHOD_3_4691854E32F3C2F6_OFFSET UNITYSDK_OFFSET(0x1AA1C650)
#define CLASS_3_2712D76941E4508C_METHOD_3_4D4D11992F7A784F_OFFSET UNITYSDK_OFFSET(0x1AA1D870)
#define CLASS_3_2712D76941E4508C_METHOD_3_4E069FC9EE6CE58D_OFFSET UNITYSDK_OFFSET(0x1AA1BA00)
#define CLASS_3_2712D76941E4508C_METHOD_3_54A73EE71975CF96_OFFSET UNITYSDK_OFFSET(0x1AA1ABE0)
#define CLASS_3_2712D76941E4508C_METHOD_3_551B9669BD27A152_OFFSET UNITYSDK_OFFSET(0x1AA196D0)
#define CLASS_3_2712D76941E4508C_METHOD_3_5CBC2890DD8B8FE1_OFFSET UNITYSDK_OFFSET(0x1AA19FB0)
#define CLASS_3_2712D76941E4508C_METHOD_3_5E4534F85F5E24C1_OFFSET UNITYSDK_OFFSET(0x1AA194D0)
#define CLASS_3_2712D76941E4508C_METHOD_3_64E54667189E0E82_1_OFFSET UNITYSDK_OFFSET(0x1AA1C300)
#define CLASS_3_2712D76941E4508C_METHOD_3_64E54667189E0E82_OFFSET UNITYSDK_OFFSET(0x1AA1B880)
#define CLASS_3_2712D76941E4508C_METHOD_3_6A42D69EC06778FC_OFFSET UNITYSDK_OFFSET(0x1AA1B3E0)
#define CLASS_3_2712D76941E4508C_METHOD_3_8891C4A56F6DD8A4_OFFSET UNITYSDK_OFFSET(0x1AA1B5C0)
#define CLASS_3_2712D76941E4508C_METHOD_3_91D97064765DCBF1_OFFSET UNITYSDK_OFFSET(0x1AA1E0C0)
#define CLASS_3_2712D76941E4508C_METHOD_3_B519A46C44F8653F_OFFSET UNITYSDK_OFFSET(0x1AA1A800)
#define CLASS_3_2712D76941E4508C_METHOD_3_BADC81CF9C936EDA_OFFSET UNITYSDK_OFFSET(0x1AA1E160)
#define CLASS_3_2712D76941E4508C_METHOD_3_BD71CCF95E66CB30_OFFSET UNITYSDK_OFFSET(0x1AA1CFA0)
#define CLASS_3_2712D76941E4508C_METHOD_3_BE77BDBA11F12421_OFFSET UNITYSDK_OFFSET(0x1AA199C0)
#define CLASS_3_2712D76941E4508C_METHOD_3_C03BDC7128320068_OFFSET UNITYSDK_OFFSET(0x1AA1C490)
#define CLASS_3_2712D76941E4508C_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1AA19AA0)
#define CLASS_3_2712D76941E4508C_METHOD_3_CE944E12A64032F6_OFFSET UNITYSDK_OFFSET(0x1AA1DC20)
#define CLASS_3_2712D76941E4508C_METHOD_3_E9F85D670420BBAB_OFFSET UNITYSDK_OFFSET(0x1AA1EC00)
#define CLASS_3_2712D76941E4508C_METHOD_3_EB8BD7BE57734D47_OFFSET UNITYSDK_OFFSET(0x1AA19B30)
#define CLASS_3_2712D76941E4508C_METHOD_3_EE3A4115437F2968_OFFSET UNITYSDK_OFFSET(0x1AA1CB70)
#define CLASS_3_2712D76941E4508C_METHOD_3_F390BC167F6CE613_OFFSET UNITYSDK_OFFSET(0x1AA1E7F0)
#define CLASS_3_2712D76941E4508C_POSTLATEUPDATE_OFFSET UNITYSDK_OFFSET(0x1AA19270)
#define CLASS_3_2712D76941E4508C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1AA19420)
#define CLASS_3_2712D76941E4508C__CTOR_OFFSET UNITYSDK_OFFSET(0x1AA193D0)

inline static constexpr unsigned int Class_3_2712D76941E4508C_TypeDefinitionIndex = 74615;

class Class_3_2712D76941E4508C : public ::Class_2_40CD888D5D4FCB5B
{
public:
	static ::System::Collections::Generic::List_1<::System::String*>** StaticGet_Field_3_2()
	{
		return (::System::Collections::Generic::List_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_2712D76941E4508C_TypeDefinitionIndex)->GetStaticField(0x43CD0);
	}
	static ::System::String** StaticGet_Field_3_1()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_3_2712D76941E4508C_TypeDefinitionIndex)->GetStaticField(0x43CD8);
	}
	::Nap::NapECS::EcsFilter* Field_3_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2712D76941E4508C__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_2712D76941E4508C__CCTOR_OFFSET))();
	}

	::System::Void CreateFilters(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_2712D76941E4508C_CREATEFILTERS_OFFSET))(this, a1);
	}

	::System::Void PostLateUpdate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2712D76941E4508C_POSTLATEUPDATE_OFFSET))(this);
	}

	static ::System::Void Method_3_5E4534F85F5E24C1(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_2712D76941E4508C_METHOD_3_5E4534F85F5E24C1_OFFSET))(a1);
	}

	static ::Class_1_916778923E38503B* Method_3_BE77BDBA11F12421(::Class_3_FFD0045B4597F294* a1, ::System::String* a2, ::System::String* a3, ::System::UInt32 a4)
	{
		return ((::Class_1_916778923E38503B*(*)(::Class_3_FFD0045B4597F294*, ::System::String*, ::System::String*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_2712D76941E4508C_METHOD_3_BE77BDBA11F12421_OFFSET))(a1, a2, a3, a4);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2712D76941E4508C_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}

	static ::System::Boolean Method_3_EB8BD7BE57734D47(::Class_3_DFD5D1FDB9D2A4AC* a1, ::Class_3_FFD0045B4597F294* a2, ::UnityEngine::Vector3 a3)
	{
		return ((::System::Boolean(*)(::Class_3_DFD5D1FDB9D2A4AC*, ::Class_3_FFD0045B4597F294*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_3_2712D76941E4508C_METHOD_3_EB8BD7BE57734D47_OFFSET))(a1, a2, a3);
	}

	static ::Class_1_916778923E38503B* Method_3_20FD8965F00EA2BF(::Class_3_FFD0045B4597F294* a1, ::System::String* a2, ::System::String* a3, ::System::Action_1<::System::UInt32>* a4, ::System::Action* a5, ::System::UInt32 a6)
	{
		return ((::Class_1_916778923E38503B*(*)(::Class_3_FFD0045B4597F294*, ::System::String*, ::System::String*, ::System::Action_1<::System::UInt32>*, ::System::Action*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_2712D76941E4508C_METHOD_3_20FD8965F00EA2BF_OFFSET))(a1, a2, a3, a4, a5, a6);
	}

	static ::System::Void Method_3_B519A46C44F8653F(::Class_3_FFD0045B4597F294* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::Class_3_FFD0045B4597F294*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_2712D76941E4508C_METHOD_3_B519A46C44F8653F_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_3_54A73EE71975CF96(::System::Single a1, ::Class_3_DFD5D1FDB9D2A4AC* a2, ::Class_3_FFD0045B4597F294* a3, ::UnityEngine::Vector3 a4)
	{
		return ((::System::Boolean(*)(::System::Single, ::Class_3_DFD5D1FDB9D2A4AC*, ::Class_3_FFD0045B4597F294*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_3_2712D76941E4508C_METHOD_3_54A73EE71975CF96_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_3_8891C4A56F6DD8A4(::UnityEngine::Material* a1, ::MoleMole::Battle::Entity* a2, ::Class_3_FFD0045B4597F294* a3)
	{
		return ((::System::Void(*)(::UnityEngine::Material*, ::MoleMole::Battle::Entity*, ::Class_3_FFD0045B4597F294*))((::PBYTE)hIl2Cpp + CLASS_3_2712D76941E4508C_METHOD_3_8891C4A56F6DD8A4_OFFSET))(a1, a2, a3);
	}

	static ::System::Boolean Method_3_64E54667189E0E82(::Class_3_FFD0045B4597F294* a1)
	{
		return ((::System::Boolean(*)(::Class_3_FFD0045B4597F294*))((::PBYTE)hIl2Cpp + CLASS_3_2712D76941E4508C_METHOD_3_64E54667189E0E82_OFFSET))(a1);
	}

	static ::System::Void Method_3_4E069FC9EE6CE58D(::Class_3_FFD0045B4597F294* a1, ::System::Boolean a2, ::System::String* a3, ::UnityEngine::Vector2 a4, ::System::Single a5)
	{
		return ((::System::Void(*)(::Class_3_FFD0045B4597F294*, ::System::Boolean, ::System::String*, ::UnityEngine::Vector2, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_2712D76941E4508C_METHOD_3_4E069FC9EE6CE58D_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::System::Void Method_3_2DF53C819113F884(::Class_3_FFD0045B4597F294* a1)
	{
		return ((::System::Void(*)(::Class_3_FFD0045B4597F294*))((::PBYTE)hIl2Cpp + CLASS_3_2712D76941E4508C_METHOD_3_2DF53C819113F884_OFFSET))(a1);
	}

	static ::System::Boolean Method_3_551B9669BD27A152(::System::Single a1, ::Class_3_DFD5D1FDB9D2A4AC* a2, ::Class_3_FFD0045B4597F294* a3)
	{
		return ((::System::Boolean(*)(::System::Single, ::Class_3_DFD5D1FDB9D2A4AC*, ::Class_3_FFD0045B4597F294*))((::PBYTE)hIl2Cpp + CLASS_3_2712D76941E4508C_METHOD_3_551B9669BD27A152_OFFSET))(a1, a2, a3);
	}

	static ::System::Boolean Method_3_64E54667189E0E82_1(::Class_3_FFD0045B4597F294* a1)
	{
		return ((::System::Boolean(*)(::Class_3_FFD0045B4597F294*))((::PBYTE)hIl2Cpp + CLASS_3_2712D76941E4508C_METHOD_3_64E54667189E0E82_1_OFFSET))(a1);
	}

	static ::System::Void Method_3_C03BDC7128320068(::System::Single a1, ::Class_3_DFD5D1FDB9D2A4AC* a2, ::Class_3_FFD0045B4597F294* a3)
	{
		return ((::System::Void(*)(::System::Single, ::Class_3_DFD5D1FDB9D2A4AC*, ::Class_3_FFD0045B4597F294*))((::PBYTE)hIl2Cpp + CLASS_3_2712D76941E4508C_METHOD_3_C03BDC7128320068_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_3_4691854E32F3C2F6(::Class_3_FFD0045B4597F294* a1, ::System::String* a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::Class_3_FFD0045B4597F294*, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_2712D76941E4508C_METHOD_3_4691854E32F3C2F6_OFFSET))(a1, a2, a3);
	}

	static ::System::Single Method_3_5CBC2890DD8B8FE1(::UnityEngine::Vector3 a1, ::Class_3_DFD5D1FDB9D2A4AC* a2, ::Class_3_FFD0045B4597F294* a3, ::UnityEngine::Vector3 a4)
	{
		return ((::System::Single(*)(::UnityEngine::Vector3, ::Class_3_DFD5D1FDB9D2A4AC*, ::Class_3_FFD0045B4597F294*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_3_2712D76941E4508C_METHOD_3_5CBC2890DD8B8FE1_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Boolean Method_3_4572AE8CBBAFC727(::Class_3_FFD0045B4597F294* a1)
	{
		return ((::System::Boolean(*)(::Class_3_FFD0045B4597F294*))((::PBYTE)hIl2Cpp + CLASS_3_2712D76941E4508C_METHOD_3_4572AE8CBBAFC727_OFFSET))(a1);
	}

	static ::System::Void Method_3_EE3A4115437F2968(::Class_1_B7E341C5F1A6F199* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::Class_1_B7E341C5F1A6F199*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_2712D76941E4508C_METHOD_3_EE3A4115437F2968_OFFSET))(a1, a2);
	}

	static ::System::String* Method_3_00DC8BCDD9497DF0(::Class_3_FFD0045B4597F294* a1)
	{
		return ((::System::String*(*)(::Class_3_FFD0045B4597F294*))((::PBYTE)hIl2Cpp + CLASS_3_2712D76941E4508C_METHOD_3_00DC8BCDD9497DF0_OFFSET))(a1);
	}

	static ::System::Void Method_3_36094BFB41CBC198(::Class_3_FFD0045B4597F294* a1)
	{
		return ((::System::Void(*)(::Class_3_FFD0045B4597F294*))((::PBYTE)hIl2Cpp + CLASS_3_2712D76941E4508C_METHOD_3_36094BFB41CBC198_OFFSET))(a1);
	}

	static ::System::Boolean Method_3_134A95DAF15CFB39(::Class_3_FFD0045B4597F294* a1, ::System::Single a2, ::System::Action_1<::System::UInt32>* a3, ::System::String* a4, ::System::UInt32 a5)
	{
		return ((::System::Boolean(*)(::Class_3_FFD0045B4597F294*, ::System::Single, ::System::Action_1<::System::UInt32>*, ::System::String*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_2712D76941E4508C_METHOD_3_134A95DAF15CFB39_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::System::Boolean Method_3_4D4D11992F7A784F(::UnityEngine::Material* a1, ::MoleMole::Battle::Entity* a2, ::Class_3_FFD0045B4597F294* a3, ::System::Int32& a4)
	{
		return ((::System::Boolean(*)(::UnityEngine::Material*, ::MoleMole::Battle::Entity*, ::Class_3_FFD0045B4597F294*, ::System::Int32&))((::PBYTE)hIl2Cpp + CLASS_3_2712D76941E4508C_METHOD_3_4D4D11992F7A784F_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_3_21A5433EDB9E3BFB(::Nap::NapECS::EcsEntity* a1)
	{
		return ((::System::Void(*)(::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + CLASS_3_2712D76941E4508C_METHOD_3_21A5433EDB9E3BFB_OFFSET))(a1);
	}

	static ::System::Void Method_3_CE944E12A64032F6(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_2712D76941E4508C_METHOD_3_CE944E12A64032F6_OFFSET))(a1);
	}

	::System::Void Method_3_BADC81CF9C936EDA(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_2712D76941E4508C_METHOD_3_BADC81CF9C936EDA_OFFSET))(this, a1);
	}

	static ::System::Boolean Method_3_BD71CCF95E66CB30(::Class_3_FFD0045B4597F294* a1, ::System::Single a2, ::System::Action* a3, ::System::String* a4, ::System::UInt32 a5)
	{
		return ((::System::Boolean(*)(::Class_3_FFD0045B4597F294*, ::System::Single, ::System::Action*, ::System::String*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_2712D76941E4508C_METHOD_3_BD71CCF95E66CB30_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::System::Void Method_3_3E0CF88A50D88B11(::Class_3_FFD0045B4597F294* a1)
	{
		return ((::System::Void(*)(::Class_3_FFD0045B4597F294*))((::PBYTE)hIl2Cpp + CLASS_3_2712D76941E4508C_METHOD_3_3E0CF88A50D88B11_OFFSET))(a1);
	}

	static ::System::Boolean Method_3_F390BC167F6CE613(::Class_3_FFD0045B4597F294* a1, ::System::Single a2, ::System::Action* a3, ::System::String* a4, ::System::String* a5, ::System::UInt32 a6)
	{
		return ((::System::Boolean(*)(::Class_3_FFD0045B4597F294*, ::System::Single, ::System::Action*, ::System::String*, ::System::String*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_2712D76941E4508C_METHOD_3_F390BC167F6CE613_OFFSET))(a1, a2, a3, a4, a5, a6);
	}

	static ::System::Void Method_3_E9F85D670420BBAB(::Class_3_FFD0045B4597F294* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::Class_3_FFD0045B4597F294*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_2712D76941E4508C_METHOD_3_E9F85D670420BBAB_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_6A42D69EC06778FC(::Class_3_FFD0045B4597F294* a1)
	{
		return ((::System::Void(*)(::Class_3_FFD0045B4597F294*))((::PBYTE)hIl2Cpp + CLASS_3_2712D76941E4508C_METHOD_3_6A42D69EC06778FC_OFFSET))(a1);
	}

	static ::System::Void Method_3_05252F136A7884FE(::Class_3_FFD0045B4597F294* a1)
	{
		return ((::System::Void(*)(::Class_3_FFD0045B4597F294*))((::PBYTE)hIl2Cpp + CLASS_3_2712D76941E4508C_METHOD_3_05252F136A7884FE_OFFSET))(a1);
	}

	static ::System::Void Method_3_91D97064765DCBF1(::Class_3_FFD0045B4597F294* a1)
	{
		return ((::System::Void(*)(::Class_3_FFD0045B4597F294*))((::PBYTE)hIl2Cpp + CLASS_3_2712D76941E4508C_METHOD_3_91D97064765DCBF1_OFFSET))(a1);
	}
};
