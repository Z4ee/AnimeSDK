#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightEquipCraftRecipe; }
namespace RPG::Client { class GridFightEquipCraftRecipeCollection; }
namespace System { template <typename T1, typename T2, typename T3> class Func_3; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
template <typename T1, typename T2> class __f__AnonymousType1_2;

#define RPG_CLIENT_GRIDFIGHTEQUIPCRAFTMAPINFO___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A682080)
#define RPG_CLIENT_GRIDFIGHTEQUIPCRAFTMAPINFO___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1A6820C0)
#define RPG_CLIENT_GRIDFIGHTEQUIPCRAFTMAPINFO___C__GETRECIPESCANCRAFTBYADDITEM_B__5_0_OFFSET UNITYSDK_OFFSET(0x1A682210)
#define RPG_CLIENT_GRIDFIGHTEQUIPCRAFTMAPINFO___C__GETRECIPESCANCRAFTBYADDITEM_B__5_1_OFFSET UNITYSDK_OFFSET(0x1A682230)
#define RPG_CLIENT_GRIDFIGHTEQUIPCRAFTMAPINFO___C__GETRECIPESCANCRAFTBYADDITEM_B__5_3_OFFSET UNITYSDK_OFFSET(0x1A682290)
#define RPG_CLIENT_GRIDFIGHTEQUIPCRAFTMAPINFO___C__GETRECIPESCANCRAFT_B__4_0_OFFSET UNITYSDK_OFFSET(0x1A682170)
#define RPG_CLIENT_GRIDFIGHTEQUIPCRAFTMAPINFO___C__GETRECIPESCANCRAFT_B__4_1_OFFSET UNITYSDK_OFFSET(0x1A682190)
#define RPG_CLIENT_GRIDFIGHTEQUIPCRAFTMAPINFO___C__GETRECIPESCANCRAFT_B__4_3_OFFSET UNITYSDK_OFFSET(0x1A6821F0)
#define RPG_CLIENT_GRIDFIGHTEQUIPCRAFTMAPINFO___C__GETRECIPESCONTAINSITEM_B__3_0_OFFSET UNITYSDK_OFFSET(0x1A6820D0)
#define RPG_CLIENT_GRIDFIGHTEQUIPCRAFTMAPINFO___C__GETRECIPESCONTAINSITEM_B__3_1_OFFSET UNITYSDK_OFFSET(0x1A6820F0)
#define RPG_CLIENT_GRIDFIGHTEQUIPCRAFTMAPINFO___C__GETRECIPESCONTAINSITEM_B__3_3_OFFSET UNITYSDK_OFFSET(0x1A682150)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightEquipCraftMapInfo___c_TypeDefinitionIndex = 61595;

	class GridFightEquipCraftMapInfo___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::__f__AnonymousType1_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::Client::GridFightEquipCraftRecipeCollection*>, ::RPG::Client::GridFightEquipCraftRecipe*>*, ::RPG::Client::GridFightEquipCraftRecipe*>** StaticGet___9__5_3()
		{
			return (::System::Func_2<::__f__AnonymousType1_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::Client::GridFightEquipCraftRecipeCollection*>, ::RPG::Client::GridFightEquipCraftRecipe*>*, ::RPG::Client::GridFightEquipCraftRecipe*>**)Il2CppClass::FromTypeDefinitionIndex(GridFightEquipCraftMapInfo___c_TypeDefinitionIndex)->GetStaticField(0x239F0);
		}
		static ::System::Func_2<::__f__AnonymousType1_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::Client::GridFightEquipCraftRecipeCollection*>, ::RPG::Client::GridFightEquipCraftRecipe*>*, ::RPG::Client::GridFightEquipCraftRecipe*>** StaticGet___9__4_3()
		{
			return (::System::Func_2<::__f__AnonymousType1_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::Client::GridFightEquipCraftRecipeCollection*>, ::RPG::Client::GridFightEquipCraftRecipe*>*, ::RPG::Client::GridFightEquipCraftRecipe*>**)Il2CppClass::FromTypeDefinitionIndex(GridFightEquipCraftMapInfo___c_TypeDefinitionIndex)->GetStaticField(0x239F8);
		}
		static ::System::Func_3<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::Client::GridFightEquipCraftRecipeCollection*>, ::RPG::Client::GridFightEquipCraftRecipe*, ::__f__AnonymousType1_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::Client::GridFightEquipCraftRecipeCollection*>, ::RPG::Client::GridFightEquipCraftRecipe*>*>** StaticGet___9__5_1()
		{
			return (::System::Func_3<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::Client::GridFightEquipCraftRecipeCollection*>, ::RPG::Client::GridFightEquipCraftRecipe*, ::__f__AnonymousType1_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::Client::GridFightEquipCraftRecipeCollection*>, ::RPG::Client::GridFightEquipCraftRecipe*>*>**)Il2CppClass::FromTypeDefinitionIndex(GridFightEquipCraftMapInfo___c_TypeDefinitionIndex)->GetStaticField(0x23A00);
		}
		static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::Client::GridFightEquipCraftRecipeCollection*>, ::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightEquipCraftRecipe*>*>** StaticGet___9__3_0()
		{
			return (::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::Client::GridFightEquipCraftRecipeCollection*>, ::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightEquipCraftRecipe*>*>**)Il2CppClass::FromTypeDefinitionIndex(GridFightEquipCraftMapInfo___c_TypeDefinitionIndex)->GetStaticField(0x23A08);
		}
		static ::RPG::Client::GridFightEquipCraftMapInfo___c** StaticGet___9()
		{
			return (::RPG::Client::GridFightEquipCraftMapInfo___c**)Il2CppClass::FromTypeDefinitionIndex(GridFightEquipCraftMapInfo___c_TypeDefinitionIndex)->GetStaticField(0x23A10);
		}
		static ::System::Func_3<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::Client::GridFightEquipCraftRecipeCollection*>, ::RPG::Client::GridFightEquipCraftRecipe*, ::__f__AnonymousType1_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::Client::GridFightEquipCraftRecipeCollection*>, ::RPG::Client::GridFightEquipCraftRecipe*>*>** StaticGet___9__4_1()
		{
			return (::System::Func_3<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::Client::GridFightEquipCraftRecipeCollection*>, ::RPG::Client::GridFightEquipCraftRecipe*, ::__f__AnonymousType1_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::Client::GridFightEquipCraftRecipeCollection*>, ::RPG::Client::GridFightEquipCraftRecipe*>*>**)Il2CppClass::FromTypeDefinitionIndex(GridFightEquipCraftMapInfo___c_TypeDefinitionIndex)->GetStaticField(0x23A18);
		}
		static ::System::Func_2<::__f__AnonymousType1_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::Client::GridFightEquipCraftRecipeCollection*>, ::RPG::Client::GridFightEquipCraftRecipe*>*, ::RPG::Client::GridFightEquipCraftRecipe*>** StaticGet___9__3_3()
		{
			return (::System::Func_2<::__f__AnonymousType1_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::Client::GridFightEquipCraftRecipeCollection*>, ::RPG::Client::GridFightEquipCraftRecipe*>*, ::RPG::Client::GridFightEquipCraftRecipe*>**)Il2CppClass::FromTypeDefinitionIndex(GridFightEquipCraftMapInfo___c_TypeDefinitionIndex)->GetStaticField(0x23A20);
		}
		static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::Client::GridFightEquipCraftRecipeCollection*>, ::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightEquipCraftRecipe*>*>** StaticGet___9__5_0()
		{
			return (::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::Client::GridFightEquipCraftRecipeCollection*>, ::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightEquipCraftRecipe*>*>**)Il2CppClass::FromTypeDefinitionIndex(GridFightEquipCraftMapInfo___c_TypeDefinitionIndex)->GetStaticField(0x23A28);
		}
		static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::Client::GridFightEquipCraftRecipeCollection*>, ::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightEquipCraftRecipe*>*>** StaticGet___9__4_0()
		{
			return (::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::Client::GridFightEquipCraftRecipeCollection*>, ::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightEquipCraftRecipe*>*>**)Il2CppClass::FromTypeDefinitionIndex(GridFightEquipCraftMapInfo___c_TypeDefinitionIndex)->GetStaticField(0x23A30);
		}
		static ::System::Func_3<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::Client::GridFightEquipCraftRecipeCollection*>, ::RPG::Client::GridFightEquipCraftRecipe*, ::__f__AnonymousType1_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::Client::GridFightEquipCraftRecipeCollection*>, ::RPG::Client::GridFightEquipCraftRecipe*>*>** StaticGet___9__3_1()
		{
			return (::System::Func_3<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::Client::GridFightEquipCraftRecipeCollection*>, ::RPG::Client::GridFightEquipCraftRecipe*, ::__f__AnonymousType1_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::Client::GridFightEquipCraftRecipeCollection*>, ::RPG::Client::GridFightEquipCraftRecipe*>*>**)Il2CppClass::FromTypeDefinitionIndex(GridFightEquipCraftMapInfo___c_TypeDefinitionIndex)->GetStaticField(0x23A38);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPCRAFTMAPINFO___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPCRAFTMAPINFO___C__CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightEquipCraftRecipe*>* _GetRecipesContainsItem_b__3_0(::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::Client::GridFightEquipCraftRecipeCollection*> a1)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightEquipCraftRecipe*>*(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::Client::GridFightEquipCraftRecipeCollection*>))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPCRAFTMAPINFO___C__GETRECIPESCONTAINSITEM_B__3_0_OFFSET))(this, a1);
		}

		::__f__AnonymousType1_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::Client::GridFightEquipCraftRecipeCollection*>, ::RPG::Client::GridFightEquipCraftRecipe*>* _GetRecipesContainsItem_b__3_1(::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::Client::GridFightEquipCraftRecipeCollection*> a1, ::RPG::Client::GridFightEquipCraftRecipe* a2)
		{
			return ((::__f__AnonymousType1_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::Client::GridFightEquipCraftRecipeCollection*>, ::RPG::Client::GridFightEquipCraftRecipe*>*(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::Client::GridFightEquipCraftRecipeCollection*>, ::RPG::Client::GridFightEquipCraftRecipe*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPCRAFTMAPINFO___C__GETRECIPESCONTAINSITEM_B__3_1_OFFSET))(this, a1, a2);
		}

		::RPG::Client::GridFightEquipCraftRecipe* _GetRecipesContainsItem_b__3_3(::__f__AnonymousType1_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::Client::GridFightEquipCraftRecipeCollection*>, ::RPG::Client::GridFightEquipCraftRecipe*>* a1)
		{
			return ((::RPG::Client::GridFightEquipCraftRecipe*(*)(::PVOID, ::__f__AnonymousType1_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::Client::GridFightEquipCraftRecipeCollection*>, ::RPG::Client::GridFightEquipCraftRecipe*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPCRAFTMAPINFO___C__GETRECIPESCONTAINSITEM_B__3_3_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightEquipCraftRecipe*>* _GetRecipesCanCraft_b__4_0(::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::Client::GridFightEquipCraftRecipeCollection*> a1)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightEquipCraftRecipe*>*(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::Client::GridFightEquipCraftRecipeCollection*>))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPCRAFTMAPINFO___C__GETRECIPESCANCRAFT_B__4_0_OFFSET))(this, a1);
		}

		::__f__AnonymousType1_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::Client::GridFightEquipCraftRecipeCollection*>, ::RPG::Client::GridFightEquipCraftRecipe*>* _GetRecipesCanCraft_b__4_1(::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::Client::GridFightEquipCraftRecipeCollection*> a1, ::RPG::Client::GridFightEquipCraftRecipe* a2)
		{
			return ((::__f__AnonymousType1_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::Client::GridFightEquipCraftRecipeCollection*>, ::RPG::Client::GridFightEquipCraftRecipe*>*(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::Client::GridFightEquipCraftRecipeCollection*>, ::RPG::Client::GridFightEquipCraftRecipe*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPCRAFTMAPINFO___C__GETRECIPESCANCRAFT_B__4_1_OFFSET))(this, a1, a2);
		}

		::RPG::Client::GridFightEquipCraftRecipe* _GetRecipesCanCraft_b__4_3(::__f__AnonymousType1_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::Client::GridFightEquipCraftRecipeCollection*>, ::RPG::Client::GridFightEquipCraftRecipe*>* a1)
		{
			return ((::RPG::Client::GridFightEquipCraftRecipe*(*)(::PVOID, ::__f__AnonymousType1_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::Client::GridFightEquipCraftRecipeCollection*>, ::RPG::Client::GridFightEquipCraftRecipe*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPCRAFTMAPINFO___C__GETRECIPESCANCRAFT_B__4_3_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightEquipCraftRecipe*>* _GetRecipesCanCraftByAddItem_b__5_0(::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::Client::GridFightEquipCraftRecipeCollection*> a1)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightEquipCraftRecipe*>*(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::Client::GridFightEquipCraftRecipeCollection*>))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPCRAFTMAPINFO___C__GETRECIPESCANCRAFTBYADDITEM_B__5_0_OFFSET))(this, a1);
		}

		::__f__AnonymousType1_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::Client::GridFightEquipCraftRecipeCollection*>, ::RPG::Client::GridFightEquipCraftRecipe*>* _GetRecipesCanCraftByAddItem_b__5_1(::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::Client::GridFightEquipCraftRecipeCollection*> a1, ::RPG::Client::GridFightEquipCraftRecipe* a2)
		{
			return ((::__f__AnonymousType1_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::Client::GridFightEquipCraftRecipeCollection*>, ::RPG::Client::GridFightEquipCraftRecipe*>*(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::Client::GridFightEquipCraftRecipeCollection*>, ::RPG::Client::GridFightEquipCraftRecipe*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPCRAFTMAPINFO___C__GETRECIPESCANCRAFTBYADDITEM_B__5_1_OFFSET))(this, a1, a2);
		}

		::RPG::Client::GridFightEquipCraftRecipe* _GetRecipesCanCraftByAddItem_b__5_3(::__f__AnonymousType1_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::Client::GridFightEquipCraftRecipeCollection*>, ::RPG::Client::GridFightEquipCraftRecipe*>* a1)
		{
			return ((::RPG::Client::GridFightEquipCraftRecipe*(*)(::PVOID, ::__f__AnonymousType1_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::Client::GridFightEquipCraftRecipeCollection*>, ::RPG::Client::GridFightEquipCraftRecipe*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPCRAFTMAPINFO___C__GETRECIPESCANCRAFTBYADDITEM_B__5_3_OFFSET))(this, a1);
		}
	};
}
