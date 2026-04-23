#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdvEnterBattleSelectTargetType.h"
#include "unitysdk/Struct_2_AAEE0C68B25F25E2.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_46FEFE987AF60A5E_Class_1_FAD46716BE584497;
namespace RPG::Client { class AdventurePhase; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class GameEntityList; }
namespace RPG::GameCore { class NPCComponent; }
namespace System { template <typename T> class Comparison_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class Stack_1; }
namespace UnityEngine { class Object; }

#define CLASS_1_46FEFE987AF60A5E_METHOD_1_03E4D29DEA69355E_OFFSET UNITYSDK_OFFSET(0x9E3D6B0)
#define CLASS_1_46FEFE987AF60A5E_METHOD_1_0EEAABC2EC20AE55_OFFSET UNITYSDK_OFFSET(0x9E3DF40)
#define CLASS_1_46FEFE987AF60A5E_METHOD_1_18BE2D2AEC23DFA0_OFFSET UNITYSDK_OFFSET(0x9E3D9C0)
#define CLASS_1_46FEFE987AF60A5E_METHOD_1_19CCC07C980409E4_OFFSET UNITYSDK_OFFSET(0x9E3BA30)
#define CLASS_1_46FEFE987AF60A5E_METHOD_1_220CD9F18AA5F51F_OFFSET UNITYSDK_OFFSET(0x9E3D640)
#define CLASS_1_46FEFE987AF60A5E_METHOD_1_22998C0497F21AFB_OFFSET UNITYSDK_OFFSET(0x9E3B350)
#define CLASS_1_46FEFE987AF60A5E_METHOD_1_2316D4353A3AD4B1_OFFSET UNITYSDK_OFFSET(0x9E3D530)
#define CLASS_1_46FEFE987AF60A5E_METHOD_1_446C03543308BBEB_OFFSET UNITYSDK_OFFSET(0x9E3CEE0)
#define CLASS_1_46FEFE987AF60A5E_METHOD_1_654E186F29967F71_OFFSET UNITYSDK_OFFSET(0x9E3CE80)
#define CLASS_1_46FEFE987AF60A5E_METHOD_1_6EF3E39E83372EF0_OFFSET UNITYSDK_OFFSET(0x9E3C060)
#define CLASS_1_46FEFE987AF60A5E_METHOD_1_7A097E7EF929F289_OFFSET UNITYSDK_OFFSET(0x9E3B570)
#define CLASS_1_46FEFE987AF60A5E_METHOD_1_7A7242DC5225C966_OFFSET UNITYSDK_OFFSET(0x9E3DED0)
#define CLASS_1_46FEFE987AF60A5E_METHOD_1_7B6EC255F45D034F_OFFSET UNITYSDK_OFFSET(0x9E3D930)
#define CLASS_1_46FEFE987AF60A5E_METHOD_1_90CCCE3676B17FFA_OFFSET UNITYSDK_OFFSET(0x9E3BC20)
#define CLASS_1_46FEFE987AF60A5E_METHOD_1_A74F1CF3E25BC135_OFFSET UNITYSDK_OFFSET(0x9E3BA90)
#define CLASS_1_46FEFE987AF60A5E_METHOD_1_AE6C93684D50A53E_OFFSET UNITYSDK_OFFSET(0x9E3AF90)
#define CLASS_1_46FEFE987AF60A5E_METHOD_1_B2F41B4AAFCB92EA_OFFSET UNITYSDK_OFFSET(0x9E3CD80)
#define CLASS_1_46FEFE987AF60A5E_METHOD_1_C87B78651598063B_OFFSET UNITYSDK_OFFSET(0x9E3DC90)
#define CLASS_1_46FEFE987AF60A5E_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x9E3B4F0)
#define CLASS_1_46FEFE987AF60A5E_METHOD_1_CC4CA2A40C0B4346_OFFSET UNITYSDK_OFFSET(0x9E3CC00)
#define CLASS_1_46FEFE987AF60A5E_METHOD_1_CF447177E3AD5A68_OFFSET UNITYSDK_OFFSET(0x9E3AE70)
#define CLASS_1_46FEFE987AF60A5E_METHOD_1_E9E8684D4EBFAE5E_OFFSET UNITYSDK_OFFSET(0x9E3D790)
#define CLASS_1_46FEFE987AF60A5E_METHOD_1_F472E8C57F390800_OFFSET UNITYSDK_OFFSET(0x9E3C230)
#define CLASS_1_46FEFE987AF60A5E__CCTOR_OFFSET UNITYSDK_OFFSET(0x9E3E160)
#define CLASS_1_46FEFE987AF60A5E__CTOR_OFFSET UNITYSDK_OFFSET(0x9E3ACF0)

inline static constexpr unsigned int Class_1_46FEFE987AF60A5E_TypeDefinitionIndex = 55777;

class Class_1_46FEFE987AF60A5E : public ::System::Object
{
public:
	static ::System::Comparison_1<::RPG::GameCore::GameEntity*>** StaticGet_Field_1_11()
	{
		return (::System::Comparison_1<::RPG::GameCore::GameEntity*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_46FEFE987AF60A5E_TypeDefinitionIndex)->GetStaticField(0x6A780);
	}
	static ::System::Collections::Generic::List_1<::System::Int32>** StaticGet_Field_1_10()
	{
		return (::System::Collections::Generic::List_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_46FEFE987AF60A5E_TypeDefinitionIndex)->GetStaticField(0x6A788);
	}
	static ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>** StaticGet_Field_1_8()
	{
		return (::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_46FEFE987AF60A5E_TypeDefinitionIndex)->GetStaticField(0x6A790);
	}
	static ::UnityEngine::Vector3* StaticGet_Field_1_9()
	{
		return (::UnityEngine::Vector3*)Il2CppClass::FromTypeDefinitionIndex(Class_1_46FEFE987AF60A5E_TypeDefinitionIndex)->GetStaticField(0x11A60);
	}
	::RPG::GameCore::GameEntity* Field_1_7; // 0x10
	::System::Collections::Generic::Stack_1<::System::Collections::Generic::List_1<::Class_1_46FEFE987AF60A5E_Class_1_FAD46716BE584497*>*>* Field_1_6; // 0x18
	::RPG::Client::AdventurePhase* Field_1_0; // 0x20
	::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* Field_1_3; // 0x28
	::System::Collections::Generic::Stack_1<::Class_1_46FEFE987AF60A5E_Class_1_FAD46716BE584497*>* Field_1_5; // 0x30
	::UnityEngine::Object* Field_1_1; // 0x38
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::Class_1_46FEFE987AF60A5E_Class_1_FAD46716BE584497*>*>* Field_1_4; // 0x40
	::System::Boolean Field_1_2; // 0x48

	::System::Void _ctor(::RPG::Client::AdventurePhase* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::AdventurePhase*))((::PBYTE)hIl2Cpp + CLASS_1_46FEFE987AF60A5E__CTOR_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_46FEFE987AF60A5E__CCTOR_OFFSET))();
	}

	::System::Void Method_1_CF447177E3AD5A68(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_46FEFE987AF60A5E_METHOD_1_CF447177E3AD5A68_OFFSET))(this, a1);
	}

	::System::Void Method_1_22998C0497F21AFB(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_46FEFE987AF60A5E_METHOD_1_22998C0497F21AFB_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_46FEFE987AF60A5E_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_19CCC07C980409E4(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_46FEFE987AF60A5E_METHOD_1_19CCC07C980409E4_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::RPG::GameCore::GameEntityList*>* Method_1_90CCCE3676B17FFA(::RPG::GameCore::GameEntity* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a3, ::RPG::GameCore::AdvEnterBattleSelectTargetType a4)
	{
		return ((::System::Collections::Generic::List_1<::RPG::GameCore::GameEntityList*>*(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*, ::RPG::GameCore::AdvEnterBattleSelectTargetType))((::PBYTE)hIl2Cpp + CLASS_1_46FEFE987AF60A5E_METHOD_1_90CCCE3676B17FFA_OFFSET))(this, a1, a2, a3, a4);
	}

	::RPG::GameCore::GameEntityList* Method_1_6EF3E39E83372EF0(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntityList*>* a1, ::RPG::GameCore::GameEntity* a2, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a3)
	{
		return ((::RPG::GameCore::GameEntityList*(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntityList*>*, ::RPG::GameCore::GameEntity*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_1_46FEFE987AF60A5E_METHOD_1_6EF3E39E83372EF0_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_AE6C93684D50A53E(::RPG::GameCore::GameEntity* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_46FEFE987AF60A5E_METHOD_1_AE6C93684D50A53E_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_2316D4353A3AD4B1(::RPG::GameCore::GameEntity* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_46FEFE987AF60A5E_METHOD_1_2316D4353A3AD4B1_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_1_03E4D29DEA69355E()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_46FEFE987AF60A5E_METHOD_1_03E4D29DEA69355E_OFFSET))(this);
	}

	::System::Void Method_1_A74F1CF3E25BC135()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_46FEFE987AF60A5E_METHOD_1_A74F1CF3E25BC135_OFFSET))(this);
	}

	::System::Void Method_1_7B6EC255F45D034F(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_46FEFE987AF60A5E_METHOD_1_7B6EC255F45D034F_OFFSET))(this, a1);
	}

	::System::Void Method_1_220CD9F18AA5F51F(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_46FEFE987AF60A5E_METHOD_1_220CD9F18AA5F51F_OFFSET))(this, a1);
	}

	static ::System::Boolean Method_1_B2F41B4AAFCB92EA(::RPG::GameCore::NPCComponent* a1)
	{
		return ((::System::Boolean(*)(::RPG::GameCore::NPCComponent*))((::PBYTE)hIl2Cpp + CLASS_1_46FEFE987AF60A5E_METHOD_1_B2F41B4AAFCB92EA_OFFSET))(a1);
	}

	static ::System::Void Method_1_F472E8C57F390800(::RPG::GameCore::GameEntity* a1, ::System::UInt32 a2, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a3, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a4)
	{
		return ((::System::Void(*)(::RPG::GameCore::GameEntity*, ::System::UInt32, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_1_46FEFE987AF60A5E_METHOD_1_F472E8C57F390800_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Int32 Method_1_C87B78651598063B(::RPG::GameCore::GameEntity* a1, ::System::UInt32 a2, ::System::Collections::Generic::List_1<::Struct_2_AAEE0C68B25F25E2>*& a3, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a4)
	{
		return ((::System::Int32(*)(::RPG::GameCore::GameEntity*, ::System::UInt32, ::System::Collections::Generic::List_1<::Struct_2_AAEE0C68B25F25E2>*&, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_1_46FEFE987AF60A5E_METHOD_1_C87B78651598063B_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Boolean Method_1_18BE2D2AEC23DFA0(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_46FEFE987AF60A5E_METHOD_1_18BE2D2AEC23DFA0_OFFSET))(a1);
	}

	::System::Void Method_1_7A7242DC5225C966(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_46FEFE987AF60A5E_METHOD_1_7A7242DC5225C966_OFFSET))(this, a1);
	}

	::System::Void Method_1_CC4CA2A40C0B4346(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_46FEFE987AF60A5E_METHOD_1_CC4CA2A40C0B4346_OFFSET))(this, a1);
	}

	::System::Void Method_1_654E186F29967F71(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_46FEFE987AF60A5E_METHOD_1_654E186F29967F71_OFFSET))(this, a1);
	}

	::System::Void Method_1_E9E8684D4EBFAE5E(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_46FEFE987AF60A5E_METHOD_1_E9E8684D4EBFAE5E_OFFSET))(this, a1);
	}

	::System::Void Method_1_446C03543308BBEB(::RPG::GameCore::GameEntity* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_1_46FEFE987AF60A5E_METHOD_1_446C03543308BBEB_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_7A097E7EF929F289()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_46FEFE987AF60A5E_METHOD_1_7A097E7EF929F289_OFFSET))(this);
	}

	::Class_1_46FEFE987AF60A5E_Class_1_FAD46716BE584497* Method_1_0EEAABC2EC20AE55()
	{
		return ((::Class_1_46FEFE987AF60A5E_Class_1_FAD46716BE584497*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_46FEFE987AF60A5E_METHOD_1_0EEAABC2EC20AE55_OFFSET))(this);
	}
};
