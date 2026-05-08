#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_40CD888D5D4FCB5B.h"
#include "unitysdk/MoleMole/Config/TextureSheetInterruptType.h"
#include "unitysdk/MoleMole/StaticSceneObjectListLoopType.h"
#include "unitysdk/MoleMole/TextureSheetType.h"

class Class_1_B7E341C5F1A6F199;
class Class_2_FF870BBAEF08CB0B_1;
class Class_3_41E4860029D43D9E;
namespace MoleMole { class ScreenPlayer; }
namespace MoleMole::Battle { class Entity; }
namespace Nap::NapECS { class EcsEntity; }
namespace Nap::NapECS { class EcsFilter; }
namespace Nap::NapECS { class EcsWorld; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define CLASS_3_6D05AEDEBD75F85C_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0x118B9C30)
#define CLASS_3_6D05AEDEBD75F85C_METHOD_3_0814860149814FAA_OFFSET UNITYSDK_OFFSET(0x118BB7D0)
#define CLASS_3_6D05AEDEBD75F85C_METHOD_3_190EA58896070C8F_OFFSET UNITYSDK_OFFSET(0x118BA810)
#define CLASS_3_6D05AEDEBD75F85C_METHOD_3_4844859145B15097_OFFSET UNITYSDK_OFFSET(0x118BA170)
#define CLASS_3_6D05AEDEBD75F85C_METHOD_3_4BFA336F3125D9F4_OFFSET UNITYSDK_OFFSET(0x118BB2B0)
#define CLASS_3_6D05AEDEBD75F85C_METHOD_3_566C2E8654887332_OFFSET UNITYSDK_OFFSET(0x118BE650)
#define CLASS_3_6D05AEDEBD75F85C_METHOD_3_58200C3ACE25844D_OFFSET UNITYSDK_OFFSET(0x118BE260)
#define CLASS_3_6D05AEDEBD75F85C_METHOD_3_90CC05C8E924D467_OFFSET UNITYSDK_OFFSET(0x118BB360)
#define CLASS_3_6D05AEDEBD75F85C_METHOD_3_99A197DE2DB0C4DB_OFFSET UNITYSDK_OFFSET(0x118BC690)
#define CLASS_3_6D05AEDEBD75F85C_METHOD_3_9A87035C9CF21A2F_OFFSET UNITYSDK_OFFSET(0x118BE6A0)
#define CLASS_3_6D05AEDEBD75F85C_METHOD_3_9D6D482D0D66151C_1_OFFSET UNITYSDK_OFFSET(0x118BE760)
#define CLASS_3_6D05AEDEBD75F85C_METHOD_3_9D6D482D0D66151C_OFFSET UNITYSDK_OFFSET(0x118BC650)
#define CLASS_3_6D05AEDEBD75F85C_METHOD_3_AEA1CABB05858D21_OFFSET UNITYSDK_OFFSET(0x118BE500)
#define CLASS_3_6D05AEDEBD75F85C_METHOD_3_BADC81CF9C936EDA_OFFSET UNITYSDK_OFFSET(0x118BC5C0)
#define CLASS_3_6D05AEDEBD75F85C_METHOD_3_C0C1E9158292D767_OFFSET UNITYSDK_OFFSET(0x118BBED0)
#define CLASS_3_6D05AEDEBD75F85C_METHOD_3_C1199B12EC8CD679_OFFSET UNITYSDK_OFFSET(0x118BDD50)
#define CLASS_3_6D05AEDEBD75F85C_METHOD_3_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x118BE470)
#define CLASS_3_6D05AEDEBD75F85C_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x118BB220)
#define CLASS_3_6D05AEDEBD75F85C_METHOD_3_CC10BA2B9F016A1D_OFFSET UNITYSDK_OFFSET(0x118BC3E0)
#define CLASS_3_6D05AEDEBD75F85C_METHOD_3_DA28D0577F84872E_OFFSET UNITYSDK_OFFSET(0x118BA3A0)
#define CLASS_3_6D05AEDEBD75F85C_METHOD_3_EE9CE58A16647CF6_OFFSET UNITYSDK_OFFSET(0x118BD490)
#define CLASS_3_6D05AEDEBD75F85C_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x118BA0D0)
#define CLASS_3_6D05AEDEBD75F85C_UPDATE_OFFSET UNITYSDK_OFFSET(0x118B9F70)
#define CLASS_3_6D05AEDEBD75F85C__CTOR_OFFSET UNITYSDK_OFFSET(0x118BA120)

inline static constexpr unsigned int Class_3_6D05AEDEBD75F85C_TypeDefinitionIndex = 62686;

class Class_3_6D05AEDEBD75F85C : public ::Class_2_40CD888D5D4FCB5B
{
public:
	static ::System::Collections::Generic::Dictionary_2<::MoleMole::ScreenPlayer*, ::MoleMole::ScreenPlayer*>** StaticGet_Field_3_1()
	{
		return (::System::Collections::Generic::Dictionary_2<::MoleMole::ScreenPlayer*, ::MoleMole::ScreenPlayer*>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_6D05AEDEBD75F85C_TypeDefinitionIndex)->GetStaticField(0x41010);
	}
	::Nap::NapECS::EcsFilter* Field_3_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6D05AEDEBD75F85C__CTOR_OFFSET))(this);
	}

	::System::Void CreateFilters(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_6D05AEDEBD75F85C_CREATEFILTERS_OFFSET))(this, a1);
	}

	::System::Void Update()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6D05AEDEBD75F85C_UPDATE_OFFSET))(this);
	}

	::System::Void OnDestroy()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6D05AEDEBD75F85C_ONDESTROY_OFFSET))(this);
	}

	static ::System::Collections::Generic::List_1<::MoleMole::ScreenPlayer*>* Method_3_4844859145B15097(::Class_3_41E4860029D43D9E* a1, ::System::String* a2)
	{
		return ((::System::Collections::Generic::List_1<::MoleMole::ScreenPlayer*>*(*)(::Class_3_41E4860029D43D9E*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_6D05AEDEBD75F85C_METHOD_3_4844859145B15097_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_DA28D0577F84872E(::Class_3_41E4860029D43D9E* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::Class_3_41E4860029D43D9E*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_6D05AEDEBD75F85C_METHOD_3_DA28D0577F84872E_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_190EA58896070C8F(::Class_3_41E4860029D43D9E* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::Class_3_41E4860029D43D9E*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_6D05AEDEBD75F85C_METHOD_3_190EA58896070C8F_OFFSET))(a1, a2);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6D05AEDEBD75F85C_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}

	static ::System::Void Method_3_4BFA336F3125D9F4(::Class_2_FF870BBAEF08CB0B_1* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::Class_2_FF870BBAEF08CB0B_1*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_6D05AEDEBD75F85C_METHOD_3_4BFA336F3125D9F4_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_90CC05C8E924D467(::MoleMole::ScreenPlayer* a1, ::MoleMole::TextureSheetType a2, ::System::Collections::Generic::List_1<::System::String*>* a3, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Boolean>* a4, ::MoleMole::Config::TextureSheetInterruptType a5, ::System::Boolean a6, ::MoleMole::StaticSceneObjectListLoopType a7, ::System::Boolean a8)
	{
		return ((::System::Void(*)(::MoleMole::ScreenPlayer*, ::MoleMole::TextureSheetType, ::System::Collections::Generic::List_1<::System::String*>*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Boolean>*, ::MoleMole::Config::TextureSheetInterruptType, ::System::Boolean, ::MoleMole::StaticSceneObjectListLoopType, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_6D05AEDEBD75F85C_METHOD_3_90CC05C8E924D467_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8);
	}

	static ::System::Void Method_3_0814860149814FAA(::MoleMole::Battle::Entity* a1, ::System::String* a2, ::System::String* a3)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_6D05AEDEBD75F85C_METHOD_3_0814860149814FAA_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_3_C0C1E9158292D767(::System::Collections::Generic::List_1<::MoleMole::ScreenPlayer*>* a1, ::System::Int32 a2, ::System::String* a3, ::System::Boolean a4, ::MoleMole::Battle::Entity* a5, ::UnityEngine::Transform* a6)
	{
		return ((::System::Void(*)(::System::Collections::Generic::List_1<::MoleMole::ScreenPlayer*>*, ::System::Int32, ::System::String*, ::System::Boolean, ::MoleMole::Battle::Entity*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_3_6D05AEDEBD75F85C_METHOD_3_C0C1E9158292D767_OFFSET))(a1, a2, a3, a4, a5, a6);
	}

	static ::System::Void Method_3_CC10BA2B9F016A1D(::MoleMole::ScreenPlayer* a1, ::System::String* a2, ::System::Boolean a3, ::MoleMole::Config::TextureSheetInterruptType a4)
	{
		return ((::System::Void(*)(::MoleMole::ScreenPlayer*, ::System::String*, ::System::Boolean, ::MoleMole::Config::TextureSheetInterruptType))((::PBYTE)hIl2Cpp + CLASS_3_6D05AEDEBD75F85C_METHOD_3_CC10BA2B9F016A1D_OFFSET))(a1, a2, a3, a4);
	}

	::System::Void Method_3_BADC81CF9C936EDA(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_6D05AEDEBD75F85C_METHOD_3_BADC81CF9C936EDA_OFFSET))(this, a1);
	}

	static ::System::Void Method_3_9D6D482D0D66151C(::Nap::NapECS::EcsEntity* a1)
	{
		return ((::System::Void(*)(::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + CLASS_3_6D05AEDEBD75F85C_METHOD_3_9D6D482D0D66151C_OFFSET))(a1);
	}

	static ::System::Void Method_3_99A197DE2DB0C4DB(::MoleMole::Battle::Entity* a1, ::System::String* a2, ::System::Collections::Generic::List_1<::System::String*>* a3, ::MoleMole::Config::TextureSheetInterruptType a4, ::System::Boolean a5, ::MoleMole::TextureSheetType a6, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Boolean>* a7, ::MoleMole::StaticSceneObjectListLoopType a8, ::System::Boolean a9)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::System::String*, ::System::Collections::Generic::List_1<::System::String*>*, ::MoleMole::Config::TextureSheetInterruptType, ::System::Boolean, ::MoleMole::TextureSheetType, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Boolean>*, ::MoleMole::StaticSceneObjectListLoopType, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_6D05AEDEBD75F85C_METHOD_3_99A197DE2DB0C4DB_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8, a9);
	}

	static ::System::Void Method_3_EE9CE58A16647CF6(::MoleMole::Battle::Entity* a1, ::System::String* a2, ::System::String* a3, ::System::Boolean a4, ::MoleMole::Config::TextureSheetInterruptType a5)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::System::String*, ::System::String*, ::System::Boolean, ::MoleMole::Config::TextureSheetInterruptType))((::PBYTE)hIl2Cpp + CLASS_3_6D05AEDEBD75F85C_METHOD_3_EE9CE58A16647CF6_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::System::Void Method_3_C1199B12EC8CD679(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_6D05AEDEBD75F85C_METHOD_3_C1199B12EC8CD679_OFFSET))(a1);
	}

	static ::System::Void Method_3_58200C3ACE25844D(::MoleMole::Battle::Entity* a1, ::MoleMole::Battle::Entity* a2, ::System::String* a3)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_6D05AEDEBD75F85C_METHOD_3_58200C3ACE25844D_OFFSET))(a1, a2, a3);
	}

	::System::Void Method_3_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6D05AEDEBD75F85C_METHOD_3_CA373AA1C7054598_1_OFFSET))(this);
	}

	static ::System::Void Method_3_AEA1CABB05858D21(::MoleMole::Battle::Entity* a1, ::System::String* a2, ::System::String* a3, ::MoleMole::Config::TextureSheetInterruptType a4, ::System::Boolean a5, ::MoleMole::TextureSheetType a6, ::System::Boolean a7)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::System::String*, ::System::String*, ::MoleMole::Config::TextureSheetInterruptType, ::System::Boolean, ::MoleMole::TextureSheetType, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_6D05AEDEBD75F85C_METHOD_3_AEA1CABB05858D21_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
	}

	static ::System::Void Method_3_566C2E8654887332(::Class_1_B7E341C5F1A6F199* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::Class_1_B7E341C5F1A6F199*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_6D05AEDEBD75F85C_METHOD_3_566C2E8654887332_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_9A87035C9CF21A2F(::Class_1_B7E341C5F1A6F199* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::Class_1_B7E341C5F1A6F199*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_6D05AEDEBD75F85C_METHOD_3_9A87035C9CF21A2F_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_9D6D482D0D66151C_1(::Nap::NapECS::EcsEntity* a1)
	{
		return ((::System::Void(*)(::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + CLASS_3_6D05AEDEBD75F85C_METHOD_3_9D6D482D0D66151C_1_OFFSET))(a1);
	}
};
