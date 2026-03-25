#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChessAbilityProperty.h"
#include "unitysdk/RPG/GameCore/ChessModifierBehaviorFlag.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"
#include "unitysdk/RPG/GameCore/ModifierStateFilter.h"
#include "unitysdk/RPG/GameCore/PropertyModifyFunction.h"
#include "unitysdk/RPG/GameCore/PropertyStacking.h"

class Class_0_16E4307DCC419505_338;
class Class_1_83AB3963F9C15714;
class Class_1_A2D8E5AB4B623162;
class Class_2_1826750844BBDC76;
class Class_2_9578C231AE3EB57A;
class Class_2_DE4AC8AE3B4F2B78;
namespace RPG::GameCore { class AbilityComponent; }
namespace RPG::GameCore { class ChessAbilityConfig; }
namespace RPG::GameCore { class ChessCharacterConfig; }
namespace RPG::GameCore { class ChessModifierConfig; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TransformComponent; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define CLASS_2_EA46C5F9F8D34AB4_DISPOSE_OFFSET UNITYSDK_OFFSET(0x110302D0)
#define CLASS_2_EA46C5F9F8D34AB4_GET_ABILITYCOMPONENTREF_OFFSET UNITYSDK_OFFSET(0x11033510)
#define CLASS_2_EA46C5F9F8D34AB4_METHOD_2_06C078408F614377_OFFSET UNITYSDK_OFFSET(0x110332E0)
#define CLASS_2_EA46C5F9F8D34AB4_METHOD_2_081BF6C1595711FA_OFFSET UNITYSDK_OFFSET(0x11032C00)
#define CLASS_2_EA46C5F9F8D34AB4_METHOD_2_0E9F5EB2C3809FC2_OFFSET UNITYSDK_OFFSET(0x11032290)
#define CLASS_2_EA46C5F9F8D34AB4_METHOD_2_13135F1111DFADD3_OFFSET UNITYSDK_OFFSET(0x11032310)
#define CLASS_2_EA46C5F9F8D34AB4_METHOD_2_179C6B3AED102C33_OFFSET UNITYSDK_OFFSET(0x11032A30)
#define CLASS_2_EA46C5F9F8D34AB4_METHOD_2_30644406FD3C3D04_OFFSET UNITYSDK_OFFSET(0x110317F0)
#define CLASS_2_EA46C5F9F8D34AB4_METHOD_2_36D05A618DDB9D55_OFFSET UNITYSDK_OFFSET(0x11030F20)
#define CLASS_2_EA46C5F9F8D34AB4_METHOD_2_41F5D9C0F0A306F5_OFFSET UNITYSDK_OFFSET(0x11030270)
#define CLASS_2_EA46C5F9F8D34AB4_METHOD_2_55637F60FEF86879_OFFSET UNITYSDK_OFFSET(0x11032C80)
#define CLASS_2_EA46C5F9F8D34AB4_METHOD_2_56056365FE976513_OFFSET UNITYSDK_OFFSET(0x11032570)
#define CLASS_2_EA46C5F9F8D34AB4_METHOD_2_5A866353DE6097F7_OFFSET UNITYSDK_OFFSET(0x11032870)
#define CLASS_2_EA46C5F9F8D34AB4_METHOD_2_5D18ECAE427706CB_OFFSET UNITYSDK_OFFSET(0x11030F80)
#define CLASS_2_EA46C5F9F8D34AB4_METHOD_2_5E044DE35ECFE877_OFFSET UNITYSDK_OFFSET(0x11030E70)
#define CLASS_2_EA46C5F9F8D34AB4_METHOD_2_5FB4EAE232C9E26D_OFFSET UNITYSDK_OFFSET(0x11030190)
#define CLASS_2_EA46C5F9F8D34AB4_METHOD_2_68A98D5D4FF97F7B_OFFSET UNITYSDK_OFFSET(0x11033350)
#define CLASS_2_EA46C5F9F8D34AB4_METHOD_2_6D110D87E584DEA9_OFFSET UNITYSDK_OFFSET(0x11031190)
#define CLASS_2_EA46C5F9F8D34AB4_METHOD_2_6E36833C19070537_OFFSET UNITYSDK_OFFSET(0x11031F40)
#define CLASS_2_EA46C5F9F8D34AB4_METHOD_2_7C58730EB565D1D1_OFFSET UNITYSDK_OFFSET(0x110310D0)
#define CLASS_2_EA46C5F9F8D34AB4_METHOD_2_8E604D57FEAB24FF_OFFSET UNITYSDK_OFFSET(0x11031260)
#define CLASS_2_EA46C5F9F8D34AB4_METHOD_2_8E94DA95FAEF5ECE_OFFSET UNITYSDK_OFFSET(0x11033480)
#define CLASS_2_EA46C5F9F8D34AB4_METHOD_2_94A6154A6376FD3F_OFFSET UNITYSDK_OFFSET(0x110314B0)
#define CLASS_2_EA46C5F9F8D34AB4_METHOD_2_9B51F84D5A5364AA_OFFSET UNITYSDK_OFFSET(0x110311F0)
#define CLASS_2_EA46C5F9F8D34AB4_METHOD_2_B2581680E5126D17_OFFSET UNITYSDK_OFFSET(0x110326A0)
#define CLASS_2_EA46C5F9F8D34AB4_METHOD_2_B667F4B651445981_OFFSET UNITYSDK_OFFSET(0x11031070)
#define CLASS_2_EA46C5F9F8D34AB4_METHOD_2_C201D7916589F648_OFFSET UNITYSDK_OFFSET(0x11032030)
#define CLASS_2_EA46C5F9F8D34AB4_METHOD_2_E52129E82CD2D7F8_OFFSET UNITYSDK_OFFSET(0x11030B50)
#define CLASS_2_EA46C5F9F8D34AB4_METHOD_2_E9A575D18A0748D9_OFFSET UNITYSDK_OFFSET(0x110317A0)
#define CLASS_2_EA46C5F9F8D34AB4_METHOD_2_F206290BA342BA13_OFFSET UNITYSDK_OFFSET(0x11030430)
#define CLASS_2_EA46C5F9F8D34AB4_SET_ABILITYCOMPONENTREF_OFFSET UNITYSDK_OFFSET(0x11033520)
#define CLASS_2_EA46C5F9F8D34AB4_TICK_OFFSET UNITYSDK_OFFSET(0x11030390)
#define CLASS_2_EA46C5F9F8D34AB4__CCTOR_OFFSET UNITYSDK_OFFSET(0x110300B0)
#define CLASS_2_EA46C5F9F8D34AB4__CTOR_OFFSET UNITYSDK_OFFSET(0x11033530)
#define CLASS_2_EA46C5F9F8D34AB4___IFIXBASEPROXY_TICK_OFFSET UNITYSDK_OFFSET(0x11033560)

inline static constexpr unsigned int Class_2_EA46C5F9F8D34AB4_TypeDefinitionIndex = 45236;

class Class_2_EA46C5F9F8D34AB4 : public ::RPG::GameCore::GameComponentBase
{
public:
	static ::Il2CppArray<::Class_2_DE4AC8AE3B4F2B78*>** StaticGet_Field_2_0()
	{
		return (::Il2CppArray<::Class_2_DE4AC8AE3B4F2B78*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_EA46C5F9F8D34AB4_TypeDefinitionIndex)->GetStaticField(0x2F2E0);
	}
	static ::Il2CppArray<::RPG::GameCore::ChessAbilityProperty>** StaticGet_Field_2_6()
	{
		return (::Il2CppArray<::RPG::GameCore::ChessAbilityProperty>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_EA46C5F9F8D34AB4_TypeDefinitionIndex)->GetStaticField(0x2F2E8);
	}
	static ::Il2CppArray<::RPG::GameCore::ChessAbilityProperty>** StaticGet_Field_2_5()
	{
		return (::Il2CppArray<::RPG::GameCore::ChessAbilityProperty>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_EA46C5F9F8D34AB4_TypeDefinitionIndex)->GetStaticField(0x2F2F0);
	}
	::Il2CppArray<::Class_1_83AB3963F9C15714*>* Field_2_4; // 0x18
	::RPG::GameCore::TransformComponent* Field_2_3; // 0x20
	::RPG::GameCore::AbilityComponent* _AbilityComponentRef_k__BackingField; // 0x28
	::RPG::GameCore::ChessCharacterConfig* Field_2_2; // 0x30

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_EA46C5F9F8D34AB4__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EA46C5F9F8D34AB4__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_5FB4EAE232C9E26D(::RPG::GameCore::ChessCharacterConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ChessCharacterConfig*))((::PBYTE)hIl2Cpp + CLASS_2_EA46C5F9F8D34AB4_METHOD_2_5FB4EAE232C9E26D_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EA46C5F9F8D34AB4_DISPOSE_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_EA46C5F9F8D34AB4_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_41F5D9C0F0A306F5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EA46C5F9F8D34AB4_METHOD_2_41F5D9C0F0A306F5_OFFSET))(this);
	}

	::System::Void Method_2_E52129E82CD2D7F8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EA46C5F9F8D34AB4_METHOD_2_E52129E82CD2D7F8_OFFSET))(this);
	}

	::System::Void Method_2_F206290BA342BA13()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EA46C5F9F8D34AB4_METHOD_2_F206290BA342BA13_OFFSET))(this);
	}

	::UnityEngine::Transform* Method_2_5E044DE35ECFE877()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EA46C5F9F8D34AB4_METHOD_2_5E044DE35ECFE877_OFFSET))(this);
	}

	::Class_2_1826750844BBDC76* Method_2_36D05A618DDB9D55(::System::String* a1)
	{
		return ((::Class_2_1826750844BBDC76*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_EA46C5F9F8D34AB4_METHOD_2_36D05A618DDB9D55_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_B667F4B651445981(::System::String* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_EA46C5F9F8D34AB4_METHOD_2_B667F4B651445981_OFFSET))(this, a1);
	}

	::Class_2_1826750844BBDC76* Method_2_7C58730EB565D1D1(::System::String* a1)
	{
		return ((::Class_2_1826750844BBDC76*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_EA46C5F9F8D34AB4_METHOD_2_7C58730EB565D1D1_OFFSET))(this, a1);
	}

	::Class_0_16E4307DCC419505_338* Method_2_6D110D87E584DEA9(::System::String* a1)
	{
		return ((::Class_0_16E4307DCC419505_338*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_EA46C5F9F8D34AB4_METHOD_2_6D110D87E584DEA9_OFFSET))(this, a1);
	}

	::System::Void Method_2_9B51F84D5A5364AA(::Class_0_16E4307DCC419505_338* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_338*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_2_EA46C5F9F8D34AB4_METHOD_2_9B51F84D5A5364AA_OFFSET))(this, a1, a2);
	}

	::Class_2_1826750844BBDC76* Method_2_8E604D57FEAB24FF(::System::String* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
	{
		return ((::Class_2_1826750844BBDC76*(*)(::PVOID, ::System::String*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_2_EA46C5F9F8D34AB4_METHOD_2_8E604D57FEAB24FF_OFFSET))(this, a1, a2);
	}

	::Class_2_1826750844BBDC76* Method_2_5D18ECAE427706CB(::System::String* a1, ::Class_2_1826750844BBDC76* a2)
	{
		return ((::Class_2_1826750844BBDC76*(*)(::PVOID, ::System::String*, ::Class_2_1826750844BBDC76*))((::PBYTE)hIl2Cpp + CLASS_2_EA46C5F9F8D34AB4_METHOD_2_5D18ECAE427706CB_OFFSET))(this, a1, a2);
	}

	::Class_2_1826750844BBDC76* Method_2_94A6154A6376FD3F(::RPG::GameCore::ChessAbilityConfig* a1, ::Class_1_A2D8E5AB4B623162* a2)
	{
		return ((::Class_2_1826750844BBDC76*(*)(::PVOID, ::RPG::GameCore::ChessAbilityConfig*, ::Class_1_A2D8E5AB4B623162*))((::PBYTE)hIl2Cpp + CLASS_2_EA46C5F9F8D34AB4_METHOD_2_94A6154A6376FD3F_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_E9A575D18A0748D9(::Class_1_A2D8E5AB4B623162* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A2D8E5AB4B623162*))((::PBYTE)hIl2Cpp + CLASS_2_EA46C5F9F8D34AB4_METHOD_2_E9A575D18A0748D9_OFFSET))(this, a1);
	}

	::Class_2_DE4AC8AE3B4F2B78* Method_2_30644406FD3C3D04(::System::String* a1, ::RPG::GameCore::ChessModifierConfig* a2, ::Class_2_1826750844BBDC76* a3, ::Class_2_9578C231AE3EB57A* a4)
	{
		return ((::Class_2_DE4AC8AE3B4F2B78*(*)(::PVOID, ::System::String*, ::RPG::GameCore::ChessModifierConfig*, ::Class_2_1826750844BBDC76*, ::Class_2_9578C231AE3EB57A*))((::PBYTE)hIl2Cpp + CLASS_2_EA46C5F9F8D34AB4_METHOD_2_30644406FD3C3D04_OFFSET))(this, a1, a2, a3, a4);
	}

	::Class_2_DE4AC8AE3B4F2B78* Method_2_C201D7916589F648(::Class_2_DE4AC8AE3B4F2B78* a1)
	{
		return ((::Class_2_DE4AC8AE3B4F2B78*(*)(::PVOID, ::Class_2_DE4AC8AE3B4F2B78*))((::PBYTE)hIl2Cpp + CLASS_2_EA46C5F9F8D34AB4_METHOD_2_C201D7916589F648_OFFSET))(this, a1);
	}

	::System::Void Method_2_13135F1111DFADD3(::Class_2_DE4AC8AE3B4F2B78* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_DE4AC8AE3B4F2B78*))((::PBYTE)hIl2Cpp + CLASS_2_EA46C5F9F8D34AB4_METHOD_2_13135F1111DFADD3_OFFSET))(this, a1);
	}

	::Class_2_DE4AC8AE3B4F2B78* Method_2_56056365FE976513(::System::Int32 a1)
	{
		return ((::Class_2_DE4AC8AE3B4F2B78*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_EA46C5F9F8D34AB4_METHOD_2_56056365FE976513_OFFSET))(this, a1);
	}

	::Class_2_DE4AC8AE3B4F2B78* Method_2_6E36833C19070537(::System::String* a1, ::System::UInt32 a2, ::RPG::GameCore::ModifierStateFilter a3)
	{
		return ((::Class_2_DE4AC8AE3B4F2B78*(*)(::PVOID, ::System::String*, ::System::UInt32, ::RPG::GameCore::ModifierStateFilter))((::PBYTE)hIl2Cpp + CLASS_2_EA46C5F9F8D34AB4_METHOD_2_6E36833C19070537_OFFSET))(this, a1, a2, a3);
	}

	::System::Int32 Method_2_0E9F5EB2C3809FC2(::System::String* a1, ::System::UInt32 a2, ::Il2CppArray<::Class_2_DE4AC8AE3B4F2B78*>* a3)
	{
		return ((::System::Int32(*)(::PVOID, ::System::String*, ::System::UInt32, ::Il2CppArray<::Class_2_DE4AC8AE3B4F2B78*>*))((::PBYTE)hIl2Cpp + CLASS_2_EA46C5F9F8D34AB4_METHOD_2_0E9F5EB2C3809FC2_OFFSET))(this, a1, a2, a3);
	}

	::Class_2_DE4AC8AE3B4F2B78* Method_2_B2581680E5126D17(::RPG::GameCore::ChessModifierBehaviorFlag a1, ::System::Boolean a2)
	{
		return ((::Class_2_DE4AC8AE3B4F2B78*(*)(::PVOID, ::RPG::GameCore::ChessModifierBehaviorFlag, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_EA46C5F9F8D34AB4_METHOD_2_B2581680E5126D17_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_5A866353DE6097F7(::RPG::GameCore::ChessModifierBehaviorFlag a1, ::System::Boolean a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::ChessModifierBehaviorFlag, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_EA46C5F9F8D34AB4_METHOD_2_5A866353DE6097F7_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_179C6B3AED102C33(::Il2CppArray<::RPG::GameCore::ChessModifierBehaviorFlag>* a1, ::System::Boolean a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::ChessModifierBehaviorFlag>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_EA46C5F9F8D34AB4_METHOD_2_179C6B3AED102C33_OFFSET))(this, a1, a2);
	}

	::RPG::GameCore::FixPoint Method_2_081BF6C1595711FA(::RPG::GameCore::ChessAbilityProperty a1)
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::ChessAbilityProperty))((::PBYTE)hIl2Cpp + CLASS_2_EA46C5F9F8D34AB4_METHOD_2_081BF6C1595711FA_OFFSET))(this, a1);
	}

	::System::Void Method_2_55637F60FEF86879(::RPG::GameCore::ChessAbilityProperty a1, ::RPG::GameCore::PropertyModifyFunction a2, ::RPG::GameCore::FixPoint a3, ::System::Object* a4)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ChessAbilityProperty, ::RPG::GameCore::PropertyModifyFunction, ::RPG::GameCore::FixPoint, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_EA46C5F9F8D34AB4_METHOD_2_55637F60FEF86879_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_06C078408F614377(::RPG::GameCore::ChessAbilityProperty a1, ::RPG::GameCore::PropertyStacking a2, ::RPG::GameCore::FixPoint a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ChessAbilityProperty, ::RPG::GameCore::PropertyStacking, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_2_EA46C5F9F8D34AB4_METHOD_2_06C078408F614377_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_8E94DA95FAEF5ECE(::RPG::GameCore::ChessAbilityProperty a1, ::RPG::GameCore::PropertyStacking a2, ::RPG::GameCore::FixPoint a3, ::RPG::GameCore::FixPoint a4)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ChessAbilityProperty, ::RPG::GameCore::PropertyStacking, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_2_EA46C5F9F8D34AB4_METHOD_2_8E94DA95FAEF5ECE_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_68A98D5D4FF97F7B(::RPG::GameCore::ChessAbilityProperty a1, ::RPG::GameCore::PropertyStacking a2, ::RPG::GameCore::FixPoint a3, ::RPG::GameCore::FixPoint a4, ::RPG::GameCore::FixPoint a5)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ChessAbilityProperty, ::RPG::GameCore::PropertyStacking, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_2_EA46C5F9F8D34AB4_METHOD_2_68A98D5D4FF97F7B_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::RPG::GameCore::AbilityComponent* get_AbilityComponentRef()
	{
		return ((::RPG::GameCore::AbilityComponent*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EA46C5F9F8D34AB4_GET_ABILITYCOMPONENTREF_OFFSET))(this);
	}

	::System::Void set_AbilityComponentRef(::RPG::GameCore::AbilityComponent* value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AbilityComponent*))((::PBYTE)hIl2Cpp + CLASS_2_EA46C5F9F8D34AB4_SET_ABILITYCOMPONENTREF_OFFSET))(this, value);
	}

	::System::Void __iFixBaseProxy_Tick(::System::Single P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_EA46C5F9F8D34AB4___IFIXBASEPROXY_TICK_OFFSET))(this, P0);
	}
};
