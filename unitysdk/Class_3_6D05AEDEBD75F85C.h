#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_40CD888D5D4FCB5B.h"
#include "unitysdk/MoleMole/Config/TextureSheetInterruptType.h"
#include "unitysdk/MoleMole/StaticSceneObjectListLoopType.h"
#include "unitysdk/MoleMole/TextureSheetType.h"

class Class_1_B7E341C5F1A6F199;
class Class_2_FF870BBAEF08CB0B;
class Class_3_41E4860029D43D9E;
namespace MoleMole { class ScreenPlayer; }
namespace MoleMole { class TextureSheetLoopFrame; }
namespace MoleMole::Battle { class Entity; }
namespace Nap::NapECS { class EcsEntity; }
namespace Nap::NapECS { class EcsFilter; }
namespace Nap::NapECS { class EcsWorld; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define CLASS_3_6D05AEDEBD75F85C_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0x114BA350)
#define CLASS_3_6D05AEDEBD75F85C_METHOD_3_1879B6A027FFBD8A_OFFSET UNITYSDK_OFFSET(0x114BB680)
#define CLASS_3_6D05AEDEBD75F85C_METHOD_3_4BFA336F3125D9F4_OFFSET UNITYSDK_OFFSET(0x114BFAA0)
#define CLASS_3_6D05AEDEBD75F85C_METHOD_3_566C2E8654887332_OFFSET UNITYSDK_OFFSET(0x114BE1D0)
#define CLASS_3_6D05AEDEBD75F85C_METHOD_3_58200C3ACE25844D_OFFSET UNITYSDK_OFFSET(0x114BBDF0)
#define CLASS_3_6D05AEDEBD75F85C_METHOD_3_6192DCAF105854BC_OFFSET UNITYSDK_OFFSET(0x114BD700)
#define CLASS_3_6D05AEDEBD75F85C_METHOD_3_620C332FFC04748F_OFFSET UNITYSDK_OFFSET(0x114BE2B0)
#define CLASS_3_6D05AEDEBD75F85C_METHOD_3_6A82E99D9DA44714_OFFSET UNITYSDK_OFFSET(0x114BE6D0)
#define CLASS_3_6D05AEDEBD75F85C_METHOD_3_7FA34EBF4523E9D0_OFFSET UNITYSDK_OFFSET(0x114BEFE0)
#define CLASS_3_6D05AEDEBD75F85C_METHOD_3_99A197DE2DB0C4DB_OFFSET UNITYSDK_OFFSET(0x114BA890)
#define CLASS_3_6D05AEDEBD75F85C_METHOD_3_9A87035C9CF21A2F_OFFSET UNITYSDK_OFFSET(0x114BF9E0)
#define CLASS_3_6D05AEDEBD75F85C_METHOD_3_9D6D482D0D66151C_1_OFFSET UNITYSDK_OFFSET(0x114BDD30)
#define CLASS_3_6D05AEDEBD75F85C_METHOD_3_9D6D482D0D66151C_OFFSET UNITYSDK_OFFSET(0x114BBDB0)
#define CLASS_3_6D05AEDEBD75F85C_METHOD_3_AC70F9028B6F7D43_OFFSET UNITYSDK_OFFSET(0x114BB8A0)
#define CLASS_3_6D05AEDEBD75F85C_METHOD_3_AEA1CABB05858D21_OFFSET UNITYSDK_OFFSET(0x114BDBF0)
#define CLASS_3_6D05AEDEBD75F85C_METHOD_3_BADC81CF9C936EDA_OFFSET UNITYSDK_OFFSET(0x114BE640)
#define CLASS_3_6D05AEDEBD75F85C_METHOD_3_C0C1E9158292D767_OFFSET UNITYSDK_OFFSET(0x114BCF80)
#define CLASS_3_6D05AEDEBD75F85C_METHOD_3_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x114BE220)
#define CLASS_3_6D05AEDEBD75F85C_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x114BD670)
#define CLASS_3_6D05AEDEBD75F85C_METHOD_3_CC10BA2B9F016A1D_OFFSET UNITYSDK_OFFSET(0x114BD490)
#define CLASS_3_6D05AEDEBD75F85C_METHOD_3_D2CB664A498D70BC_OFFSET UNITYSDK_OFFSET(0x114BC010)
#define CLASS_3_6D05AEDEBD75F85C_METHOD_3_DA28D0577F84872E_OFFSET UNITYSDK_OFFSET(0x114BDD70)
#define CLASS_3_6D05AEDEBD75F85C_METHOD_3_EE9CE58A16647CF6_OFFSET UNITYSDK_OFFSET(0x114BC6D0)
#define CLASS_3_6D05AEDEBD75F85C_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x114BA7F0)
#define CLASS_3_6D05AEDEBD75F85C_UPDATE_OFFSET UNITYSDK_OFFSET(0x114BA690)
#define CLASS_3_6D05AEDEBD75F85C__CTOR_OFFSET UNITYSDK_OFFSET(0x114BA840)

inline static constexpr unsigned int Class_3_6D05AEDEBD75F85C_TypeDefinitionIndex = 84257;

class Class_3_6D05AEDEBD75F85C : public ::Class_2_40CD888D5D4FCB5B
{
public:
	static ::System::Collections::Generic::Dictionary_2<::MoleMole::ScreenPlayer*, ::MoleMole::ScreenPlayer*>** StaticGet_Field_3_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::MoleMole::ScreenPlayer*, ::MoleMole::ScreenPlayer*>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_6D05AEDEBD75F85C_TypeDefinitionIndex)->GetStaticField(0x33780);
	}
	::Nap::NapECS::EcsFilter* Field_3_1; // 0x20

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

	static ::System::Void Method_3_99A197DE2DB0C4DB(::MoleMole::Battle::Entity* a1, ::System::String* a2, ::System::Collections::Generic::List_1<::System::String*>* a3, ::MoleMole::Config::TextureSheetInterruptType a4, ::System::Boolean a5, ::MoleMole::TextureSheetType a6, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Boolean>* a7, ::MoleMole::StaticSceneObjectListLoopType a8, ::System::Boolean a9)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::System::String*, ::System::Collections::Generic::List_1<::System::String*>*, ::MoleMole::Config::TextureSheetInterruptType, ::System::Boolean, ::MoleMole::TextureSheetType, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Boolean>*, ::MoleMole::StaticSceneObjectListLoopType, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_6D05AEDEBD75F85C_METHOD_3_99A197DE2DB0C4DB_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8, a9);
	}

	static ::System::Void Method_3_9D6D482D0D66151C(::Nap::NapECS::EcsEntity* a1)
	{
		return ((::System::Void(*)(::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + CLASS_3_6D05AEDEBD75F85C_METHOD_3_9D6D482D0D66151C_OFFSET))(a1);
	}

	static ::System::Void Method_3_58200C3ACE25844D(::MoleMole::Battle::Entity* a1, ::MoleMole::Battle::Entity* a2, ::System::String* a3)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_6D05AEDEBD75F85C_METHOD_3_58200C3ACE25844D_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_3_D2CB664A498D70BC(::MoleMole::Battle::Entity* a1, ::System::String* a2, ::System::String* a3)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_6D05AEDEBD75F85C_METHOD_3_D2CB664A498D70BC_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_3_EE9CE58A16647CF6(::MoleMole::Battle::Entity* a1, ::System::String* a2, ::System::String* a3, ::System::Boolean a4, ::MoleMole::Config::TextureSheetInterruptType a5)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::System::String*, ::System::String*, ::System::Boolean, ::MoleMole::Config::TextureSheetInterruptType))((::PBYTE)hIl2Cpp + CLASS_3_6D05AEDEBD75F85C_METHOD_3_EE9CE58A16647CF6_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::System::Void Method_3_AC70F9028B6F7D43(::MoleMole::ScreenPlayer* a1, ::MoleMole::TextureSheetType a2, ::System::Collections::Generic::List_1<::System::String*>* a3, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Boolean>* a4, ::MoleMole::Config::TextureSheetInterruptType a5, ::System::Boolean a6, ::MoleMole::StaticSceneObjectListLoopType a7, ::System::Boolean a8)
	{
		return ((::System::Void(*)(::MoleMole::ScreenPlayer*, ::MoleMole::TextureSheetType, ::System::Collections::Generic::List_1<::System::String*>*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Boolean>*, ::MoleMole::Config::TextureSheetInterruptType, ::System::Boolean, ::MoleMole::StaticSceneObjectListLoopType, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_6D05AEDEBD75F85C_METHOD_3_AC70F9028B6F7D43_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6D05AEDEBD75F85C_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}

	static ::System::Void Method_3_6192DCAF105854BC(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_6D05AEDEBD75F85C_METHOD_3_6192DCAF105854BC_OFFSET))(a1);
	}

	static ::System::Void Method_3_C0C1E9158292D767(::System::Collections::Generic::List_1<::MoleMole::ScreenPlayer*>* a1, ::System::Int32 a2, ::System::String* a3, ::System::Boolean a4, ::MoleMole::Battle::Entity* a5, ::UnityEngine::Transform* a6)
	{
		return ((::System::Void(*)(::System::Collections::Generic::List_1<::MoleMole::ScreenPlayer*>*, ::System::Int32, ::System::String*, ::System::Boolean, ::MoleMole::Battle::Entity*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_3_6D05AEDEBD75F85C_METHOD_3_C0C1E9158292D767_OFFSET))(a1, a2, a3, a4, a5, a6);
	}

	static ::System::Void Method_3_AEA1CABB05858D21(::MoleMole::Battle::Entity* a1, ::System::String* a2, ::System::String* a3, ::MoleMole::Config::TextureSheetInterruptType a4, ::System::Boolean a5, ::MoleMole::TextureSheetType a6, ::System::Boolean a7)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::System::String*, ::System::String*, ::MoleMole::Config::TextureSheetInterruptType, ::System::Boolean, ::MoleMole::TextureSheetType, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_6D05AEDEBD75F85C_METHOD_3_AEA1CABB05858D21_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
	}

	static ::System::Void Method_3_9D6D482D0D66151C_1(::Nap::NapECS::EcsEntity* a1)
	{
		return ((::System::Void(*)(::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + CLASS_3_6D05AEDEBD75F85C_METHOD_3_9D6D482D0D66151C_1_OFFSET))(a1);
	}

	static ::System::Void Method_3_DA28D0577F84872E(::Class_3_41E4860029D43D9E* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::Class_3_41E4860029D43D9E*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_6D05AEDEBD75F85C_METHOD_3_DA28D0577F84872E_OFFSET))(a1, a2);
	}

	static ::System::Collections::Generic::List_1<::MoleMole::ScreenPlayer*>* Method_3_1879B6A027FFBD8A(::Class_3_41E4860029D43D9E* a1, ::System::String* a2)
	{
		return ((::System::Collections::Generic::List_1<::MoleMole::ScreenPlayer*>*(*)(::Class_3_41E4860029D43D9E*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_6D05AEDEBD75F85C_METHOD_3_1879B6A027FFBD8A_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_566C2E8654887332(::Class_1_B7E341C5F1A6F199* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::Class_1_B7E341C5F1A6F199*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_6D05AEDEBD75F85C_METHOD_3_566C2E8654887332_OFFSET))(a1, a2);
	}

	::System::Void Method_3_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6D05AEDEBD75F85C_METHOD_3_CA373AA1C7054598_1_OFFSET))(this);
	}

	static ::System::Void Method_3_620C332FFC04748F(::MoleMole::ScreenPlayer* a1, ::MoleMole::TextureSheetType a2, ::System::String* a3, ::System::Collections::Generic::List_1<::MoleMole::TextureSheetLoopFrame*>* a4)
	{
		return ((::System::Void(*)(::MoleMole::ScreenPlayer*, ::MoleMole::TextureSheetType, ::System::String*, ::System::Collections::Generic::List_1<::MoleMole::TextureSheetLoopFrame*>*))((::PBYTE)hIl2Cpp + CLASS_3_6D05AEDEBD75F85C_METHOD_3_620C332FFC04748F_OFFSET))(a1, a2, a3, a4);
	}

	::System::Void Method_3_BADC81CF9C936EDA(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_6D05AEDEBD75F85C_METHOD_3_BADC81CF9C936EDA_OFFSET))(this, a1);
	}

	static ::System::Void Method_3_6A82E99D9DA44714(::MoleMole::Battle::Entity* a1, ::System::String* a2, ::System::String* a3, ::System::Int32 a4, ::System::Int32 a5, ::System::Boolean a6, ::System::Int32 a7, ::System::Int32 a8)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::System::String*, ::System::String*, ::System::Int32, ::System::Int32, ::System::Boolean, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_6D05AEDEBD75F85C_METHOD_3_6A82E99D9DA44714_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8);
	}

	static ::System::Void Method_3_CC10BA2B9F016A1D(::MoleMole::ScreenPlayer* a1, ::System::String* a2, ::System::Boolean a3, ::MoleMole::Config::TextureSheetInterruptType a4)
	{
		return ((::System::Void(*)(::MoleMole::ScreenPlayer*, ::System::String*, ::System::Boolean, ::MoleMole::Config::TextureSheetInterruptType))((::PBYTE)hIl2Cpp + CLASS_3_6D05AEDEBD75F85C_METHOD_3_CC10BA2B9F016A1D_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_3_7FA34EBF4523E9D0(::Class_3_41E4860029D43D9E* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::Class_3_41E4860029D43D9E*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_6D05AEDEBD75F85C_METHOD_3_7FA34EBF4523E9D0_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_9A87035C9CF21A2F(::Class_1_B7E341C5F1A6F199* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::Class_1_B7E341C5F1A6F199*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_6D05AEDEBD75F85C_METHOD_3_9A87035C9CF21A2F_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_4BFA336F3125D9F4(::Class_2_FF870BBAEF08CB0B* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::Class_2_FF870BBAEF08CB0B*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_6D05AEDEBD75F85C_METHOD_3_4BFA336F3125D9F4_OFFSET))(a1, a2);
	}
};
