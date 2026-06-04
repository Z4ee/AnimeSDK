#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdvEnterBattleSelectTargetType.h"
#include "unitysdk/Struct_2_AAEE0C68B25F25E2.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_B92D31ACF788CA3E_Class_1_FAD46716BE584497;
namespace RPG::Client { class AdventurePhase; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class GameEntityList; }
namespace RPG::GameCore { class NPCComponent; }
namespace System { template <typename T> class Comparison_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class Stack_1; }
namespace UnityEngine { class Object; }

#define CLASS_1_B92D31ACF788CA3E_METHOD_1_00A968F776BCC204_OFFSET UNITYSDK_OFFSET(0x13862010)
#define CLASS_1_B92D31ACF788CA3E_METHOD_1_0140817B2CF2F057_OFFSET UNITYSDK_OFFSET(0x13863ED0)
#define CLASS_1_B92D31ACF788CA3E_METHOD_1_0EEAABC2EC20AE55_OFFSET UNITYSDK_OFFSET(0x13865200)
#define CLASS_1_B92D31ACF788CA3E_METHOD_1_19CCC07C980409E4_OFFSET UNITYSDK_OFFSET(0x13862780)
#define CLASS_1_B92D31ACF788CA3E_METHOD_1_1B8B4D1F1E52FCCF_OFFSET UNITYSDK_OFFSET(0x13864860)
#define CLASS_1_B92D31ACF788CA3E_METHOD_1_1F47CAD86E555F5A_OFFSET UNITYSDK_OFFSET(0x138627E0)
#define CLASS_1_B92D31ACF788CA3E_METHOD_1_212CC44F2489E399_OFFSET UNITYSDK_OFFSET(0x13863000)
#define CLASS_1_B92D31ACF788CA3E_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x138621B0)
#define CLASS_1_B92D31ACF788CA3E_METHOD_1_69C2EC0705AE0AE5_OFFSET UNITYSDK_OFFSET(0x13864740)
#define CLASS_1_B92D31ACF788CA3E_METHOD_1_6D93101E4CE10A96_OFFSET UNITYSDK_OFFSET(0x13862260)
#define CLASS_1_B92D31ACF788CA3E_METHOD_1_89D695161FF25504_OFFSET UNITYSDK_OFFSET(0x13863C30)
#define CLASS_1_B92D31ACF788CA3E_METHOD_1_8DA2C45C7019FA48_OFFSET UNITYSDK_OFFSET(0x138647B0)
#define CLASS_1_B92D31ACF788CA3E_METHOD_1_8EA881231590E5D2_OFFSET UNITYSDK_OFFSET(0x13861AE0)
#define CLASS_1_B92D31ACF788CA3E_METHOD_1_985E36B8DBAFB692_OFFSET UNITYSDK_OFFSET(0x13864EE0)
#define CLASS_1_B92D31ACF788CA3E_METHOD_1_99F56FE8D13D1703_OFFSET UNITYSDK_OFFSET(0x138645A0)
#define CLASS_1_B92D31ACF788CA3E_METHOD_1_9E6A67F697B000DA_OFFSET UNITYSDK_OFFSET(0x13865190)
#define CLASS_1_B92D31ACF788CA3E_METHOD_1_A3EBCC58B43E9423_OFFSET UNITYSDK_OFFSET(0x13864A20)
#define CLASS_1_B92D31ACF788CA3E_METHOD_1_AB379526BCF8122B_OFFSET UNITYSDK_OFFSET(0x13863E70)
#define CLASS_1_B92D31ACF788CA3E_METHOD_1_B2F41B4AAFCB92EA_OFFSET UNITYSDK_OFFSET(0x13863D70)
#define CLASS_1_B92D31ACF788CA3E_METHOD_1_BC6E45EDBB77E2C0_OFFSET UNITYSDK_OFFSET(0x13862960)
#define CLASS_1_B92D31ACF788CA3E_METHOD_1_CBE3CAA4CAB6FF90_OFFSET UNITYSDK_OFFSET(0x13864B80)
#define CLASS_1_B92D31ACF788CA3E_METHOD_1_F472E8C57F390800_OFFSET UNITYSDK_OFFSET(0x13863220)
#define CLASS_1_B92D31ACF788CA3E_METHOD_1_F6D5FC24CB8E5AC9_OFFSET UNITYSDK_OFFSET(0x13861C30)
#define CLASS_1_B92D31ACF788CA3E__CCTOR_OFFSET UNITYSDK_OFFSET(0x13865420)
#define CLASS_1_B92D31ACF788CA3E__CTOR_OFFSET UNITYSDK_OFFSET(0x13861940)

inline static constexpr unsigned int Class_1_B92D31ACF788CA3E_TypeDefinitionIndex = 56532;

class Class_1_B92D31ACF788CA3E : public ::System::Object
{
public:
	static ::System::Collections::Generic::List_1<::System::Int32>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::List_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B92D31ACF788CA3E_TypeDefinitionIndex)->GetStaticField(0x60BC0);
	}
	static ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>** StaticGet_Field_1_1()
	{
		return (::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B92D31ACF788CA3E_TypeDefinitionIndex)->GetStaticField(0x60BC8);
	}
	static ::System::Comparison_1<::RPG::GameCore::GameEntity*>** StaticGet_Field_1_2()
	{
		return (::System::Comparison_1<::RPG::GameCore::GameEntity*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B92D31ACF788CA3E_TypeDefinitionIndex)->GetStaticField(0x60BD0);
	}
	static ::UnityEngine::Vector3* StaticGet_Field_1_3()
	{
		return (::UnityEngine::Vector3*)Il2CppClass::FromTypeDefinitionIndex(Class_1_B92D31ACF788CA3E_TypeDefinitionIndex)->GetStaticField(0x12C20);
	}
	::System::Collections::Generic::Stack_1<::Class_1_B92D31ACF788CA3E_Class_1_FAD46716BE584497*>* Field_1_4; // 0x10
	::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* Field_1_5; // 0x18
	::RPG::Client::AdventurePhase* Field_1_6; // 0x20
	::RPG::GameCore::GameEntity* Field_1_7; // 0x28
	::System::Collections::Generic::Stack_1<::System::Collections::Generic::List_1<::Class_1_B92D31ACF788CA3E_Class_1_FAD46716BE584497*>*>* Field_1_8; // 0x30
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::Class_1_B92D31ACF788CA3E_Class_1_FAD46716BE584497*>*>* Field_1_9; // 0x38
	::UnityEngine::Object* Field_1_10; // 0x40
	::System::Boolean Field_1_11; // 0x48

	::System::Void _ctor(::RPG::Client::AdventurePhase* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::AdventurePhase*))((::PBYTE)hIl2Cpp + CLASS_1_B92D31ACF788CA3E__CTOR_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_B92D31ACF788CA3E__CCTOR_OFFSET))();
	}

	::System::Void Method_1_8EA881231590E5D2(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_B92D31ACF788CA3E_METHOD_1_8EA881231590E5D2_OFFSET))(this, a1);
	}

	::System::Void Method_1_00A968F776BCC204(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_B92D31ACF788CA3E_METHOD_1_00A968F776BCC204_OFFSET))(this, a1);
	}

	::System::Void Method_1_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B92D31ACF788CA3E_METHOD_1_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_1_19CCC07C980409E4(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_B92D31ACF788CA3E_METHOD_1_19CCC07C980409E4_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::RPG::GameCore::GameEntityList*>* Method_1_BC6E45EDBB77E2C0(::RPG::GameCore::GameEntity* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a3, ::RPG::GameCore::AdvEnterBattleSelectTargetType a4)
	{
		return ((::System::Collections::Generic::List_1<::RPG::GameCore::GameEntityList*>*(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*, ::RPG::GameCore::AdvEnterBattleSelectTargetType))((::PBYTE)hIl2Cpp + CLASS_1_B92D31ACF788CA3E_METHOD_1_BC6E45EDBB77E2C0_OFFSET))(this, a1, a2, a3, a4);
	}

	::RPG::GameCore::GameEntityList* Method_1_212CC44F2489E399(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntityList*>* a1, ::RPG::GameCore::GameEntity* a2, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a3)
	{
		return ((::RPG::GameCore::GameEntityList*(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntityList*>*, ::RPG::GameCore::GameEntity*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_1_B92D31ACF788CA3E_METHOD_1_212CC44F2489E399_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_F6D5FC24CB8E5AC9(::RPG::GameCore::GameEntity* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_B92D31ACF788CA3E_METHOD_1_F6D5FC24CB8E5AC9_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_99F56FE8D13D1703(::RPG::GameCore::GameEntity* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_B92D31ACF788CA3E_METHOD_1_99F56FE8D13D1703_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_1_8DA2C45C7019FA48()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B92D31ACF788CA3E_METHOD_1_8DA2C45C7019FA48_OFFSET))(this);
	}

	::System::Void Method_1_1F47CAD86E555F5A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B92D31ACF788CA3E_METHOD_1_1F47CAD86E555F5A_OFFSET))(this);
	}

	::System::Void Method_1_A3EBCC58B43E9423(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_B92D31ACF788CA3E_METHOD_1_A3EBCC58B43E9423_OFFSET))(this, a1);
	}

	::System::Void Method_1_69C2EC0705AE0AE5(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_B92D31ACF788CA3E_METHOD_1_69C2EC0705AE0AE5_OFFSET))(this, a1);
	}

	static ::System::Boolean Method_1_B2F41B4AAFCB92EA(::RPG::GameCore::NPCComponent* a1)
	{
		return ((::System::Boolean(*)(::RPG::GameCore::NPCComponent*))((::PBYTE)hIl2Cpp + CLASS_1_B92D31ACF788CA3E_METHOD_1_B2F41B4AAFCB92EA_OFFSET))(a1);
	}

	static ::System::Void Method_1_F472E8C57F390800(::RPG::GameCore::GameEntity* a1, ::System::UInt32 a2, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a3, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a4)
	{
		return ((::System::Void(*)(::RPG::GameCore::GameEntity*, ::System::UInt32, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_1_B92D31ACF788CA3E_METHOD_1_F472E8C57F390800_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Int32 Method_1_985E36B8DBAFB692(::RPG::GameCore::GameEntity* a1, ::System::UInt32 a2, ::System::Collections::Generic::List_1<::Struct_2_AAEE0C68B25F25E2>*& a3, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a4)
	{
		return ((::System::Int32(*)(::RPG::GameCore::GameEntity*, ::System::UInt32, ::System::Collections::Generic::List_1<::Struct_2_AAEE0C68B25F25E2>*&, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_1_B92D31ACF788CA3E_METHOD_1_985E36B8DBAFB692_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Boolean Method_1_CBE3CAA4CAB6FF90(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_B92D31ACF788CA3E_METHOD_1_CBE3CAA4CAB6FF90_OFFSET))(a1);
	}

	::System::Void Method_1_9E6A67F697B000DA(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_B92D31ACF788CA3E_METHOD_1_9E6A67F697B000DA_OFFSET))(this, a1);
	}

	::System::Void Method_1_89D695161FF25504(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_B92D31ACF788CA3E_METHOD_1_89D695161FF25504_OFFSET))(this, a1);
	}

	::System::Void Method_1_AB379526BCF8122B(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_B92D31ACF788CA3E_METHOD_1_AB379526BCF8122B_OFFSET))(this, a1);
	}

	::System::Void Method_1_1B8B4D1F1E52FCCF(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_B92D31ACF788CA3E_METHOD_1_1B8B4D1F1E52FCCF_OFFSET))(this, a1);
	}

	::System::Void Method_1_0140817B2CF2F057(::RPG::GameCore::GameEntity* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_1_B92D31ACF788CA3E_METHOD_1_0140817B2CF2F057_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_6D93101E4CE10A96()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B92D31ACF788CA3E_METHOD_1_6D93101E4CE10A96_OFFSET))(this);
	}

	::Class_1_B92D31ACF788CA3E_Class_1_FAD46716BE584497* Method_1_0EEAABC2EC20AE55()
	{
		return ((::Class_1_B92D31ACF788CA3E_Class_1_FAD46716BE584497*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B92D31ACF788CA3E_METHOD_1_0EEAABC2EC20AE55_OFFSET))(this);
	}
};
