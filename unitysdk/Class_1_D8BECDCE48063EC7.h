#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DiceCombatTarget.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/StringHash.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_24;
class Class_2_28E21688BAEA91E6;
class Class_2_AEE59ED8DADEC1A1;
namespace RPG::GameCore { class DynamicFloat; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_D8BECDCE48063EC7_EVALUATE_OFFSET UNITYSDK_OFFSET(0x189D11E0)
#define CLASS_1_D8BECDCE48063EC7_GET_ABILITYTARGETENTITY_OFFSET UNITYSDK_OFFSET(0x189DFCC0)
#define CLASS_1_D8BECDCE48063EC7_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x189DFC90)
#define CLASS_1_D8BECDCE48063EC7_GET_OWNER_OFFSET UNITYSDK_OFFSET(0x189DFCA0)
#define CLASS_1_D8BECDCE48063EC7_GET_PARAMLIST_OFFSET UNITYSDK_OFFSET(0x189DFCB0)
#define CLASS_1_D8BECDCE48063EC7_METHOD_1_2EB122CB53B1542D_OFFSET UNITYSDK_OFFSET(0x189E0B40)
#define CLASS_1_D8BECDCE48063EC7_METHOD_1_2F5919C7B34BA075_1_OFFSET UNITYSDK_OFFSET(0x189E0FE0)
#define CLASS_1_D8BECDCE48063EC7_METHOD_1_2F5919C7B34BA075_OFFSET UNITYSDK_OFFSET(0x189E0DA0)
#define CLASS_1_D8BECDCE48063EC7_METHOD_1_3770FB3F5FC08336_OFFSET UNITYSDK_OFFSET(0x189E03F0)
#define CLASS_1_D8BECDCE48063EC7_METHOD_1_AD91484737B4F069_1_OFFSET UNITYSDK_OFFSET(0x189E06A0)
#define CLASS_1_D8BECDCE48063EC7_METHOD_1_AD91484737B4F069_OFFSET UNITYSDK_OFFSET(0x189DFFD0)
#define CLASS_1_D8BECDCE48063EC7_METHOD_1_B6B81B4815054C12_OFFSET UNITYSDK_OFFSET(0x189E13D0)
#define CLASS_1_D8BECDCE48063EC7_METHOD_1_DCEC38F05597CB7D_OFFSET UNITYSDK_OFFSET(0x189D1370)
#define CLASS_1_D8BECDCE48063EC7_METHOD_1_E7498AF04E8E685D_1_OFFSET UNITYSDK_OFFSET(0x189E1220)
#define CLASS_1_D8BECDCE48063EC7_METHOD_1_E7498AF04E8E685D_2_OFFSET UNITYSDK_OFFSET(0x189E12B0)
#define CLASS_1_D8BECDCE48063EC7_METHOD_1_E7498AF04E8E685D_3_OFFSET UNITYSDK_OFFSET(0x189E1340)
#define CLASS_1_D8BECDCE48063EC7_METHOD_1_E7498AF04E8E685D_OFFSET UNITYSDK_OFFSET(0x189E0AB0)
#define CLASS_1_D8BECDCE48063EC7_METHOD_1_E88B356A1B8231C4_OFFSET UNITYSDK_OFFSET(0x189E1640)
#define CLASS_1_D8BECDCE48063EC7_METHOD_1_FA53756A2AB5E247_OFFSET UNITYSDK_OFFSET(0x189DFDD0)
#define CLASS_1_D8BECDCE48063EC7_SET_ABILITYTARGETENTITY_OFFSET UNITYSDK_OFFSET(0x189DFCD0)
#define CLASS_1_D8BECDCE48063EC7__CCTOR_OFFSET UNITYSDK_OFFSET(0x189E1970)
#define CLASS_1_D8BECDCE48063EC7__CTOR_OFFSET UNITYSDK_OFFSET(0x189DFCE0)

inline static constexpr unsigned int Class_1_D8BECDCE48063EC7_TypeDefinitionIndex = 34462;

class Class_1_D8BECDCE48063EC7 : public ::System::Object
{
public:
	static ::RPG::GameCore::StringHash* StaticGet_Field_1_0()
	{
		return (::RPG::GameCore::StringHash*)Il2CppClass::FromTypeDefinitionIndex(Class_1_D8BECDCE48063EC7_TypeDefinitionIndex)->GetStaticField(0x10750);
	}
	static ::RPG::GameCore::StringHash* StaticGet_Field_1_1()
	{
		return (::RPG::GameCore::StringHash*)Il2CppClass::FromTypeDefinitionIndex(Class_1_D8BECDCE48063EC7_TypeDefinitionIndex)->GetStaticField(0x10754);
	}
	static ::RPG::GameCore::StringHash* StaticGet_Field_1_2()
	{
		return (::RPG::GameCore::StringHash*)Il2CppClass::FromTypeDefinitionIndex(Class_1_D8BECDCE48063EC7_TypeDefinitionIndex)->GetStaticField(0x10758);
	}
	static ::RPG::GameCore::StringHash* StaticGet_Field_1_3()
	{
		return (::RPG::GameCore::StringHash*)Il2CppClass::FromTypeDefinitionIndex(Class_1_D8BECDCE48063EC7_TypeDefinitionIndex)->GetStaticField(0x1075C);
	}
	static ::RPG::GameCore::StringHash* StaticGet_Field_1_4()
	{
		return (::RPG::GameCore::StringHash*)Il2CppClass::FromTypeDefinitionIndex(Class_1_D8BECDCE48063EC7_TypeDefinitionIndex)->GetStaticField(0x10760);
	}
	static ::RPG::GameCore::StringHash* StaticGet_Field_1_5()
	{
		return (::RPG::GameCore::StringHash*)Il2CppClass::FromTypeDefinitionIndex(Class_1_D8BECDCE48063EC7_TypeDefinitionIndex)->GetStaticField(0x10764);
	}
	static ::RPG::GameCore::StringHash* StaticGet_Field_1_6()
	{
		return (::RPG::GameCore::StringHash*)Il2CppClass::FromTypeDefinitionIndex(Class_1_D8BECDCE48063EC7_TypeDefinitionIndex)->GetStaticField(0x10768);
	}
	static ::RPG::GameCore::StringHash* StaticGet_Field_1_7()
	{
		return (::RPG::GameCore::StringHash*)Il2CppClass::FromTypeDefinitionIndex(Class_1_D8BECDCE48063EC7_TypeDefinitionIndex)->GetStaticField(0x1076C);
	}
	static ::RPG::GameCore::StringHash* StaticGet_Field_1_8()
	{
		return (::RPG::GameCore::StringHash*)Il2CppClass::FromTypeDefinitionIndex(Class_1_D8BECDCE48063EC7_TypeDefinitionIndex)->GetStaticField(0x10770);
	}
	static ::RPG::GameCore::StringHash* StaticGet_Field_1_9()
	{
		return (::RPG::GameCore::StringHash*)Il2CppClass::FromTypeDefinitionIndex(Class_1_D8BECDCE48063EC7_TypeDefinitionIndex)->GetStaticField(0x10774);
	}
	::Class_0_16E4307DCC419505_24* _Instance_k__BackingField; // 0x10
	::Class_2_AEE59ED8DADEC1A1* _AbilityTargetEntity_k__BackingField; // 0x18
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::StringHash, ::RPG::GameCore::FixPoint>* Field_1_12; // 0x20
	::Il2CppArray<::RPG::GameCore::FixPoint>* _ParamList_k__BackingField; // 0x28
	::Class_2_AEE59ED8DADEC1A1* _Owner_k__BackingField; // 0x30

	::System::Void _ctor(::Class_0_16E4307DCC419505_24* a1, ::Class_2_AEE59ED8DADEC1A1* a2, ::Il2CppArray<::RPG::GameCore::FixPoint>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_24*, ::Class_2_AEE59ED8DADEC1A1*, ::Il2CppArray<::RPG::GameCore::FixPoint>*))((::PBYTE)hIl2Cpp + CLASS_1_D8BECDCE48063EC7__CTOR_OFFSET))(this, a1, a2, a3);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D8BECDCE48063EC7__CCTOR_OFFSET))();
	}

	::Class_0_16E4307DCC419505_24* get_Instance()
	{
		return ((::Class_0_16E4307DCC419505_24*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D8BECDCE48063EC7_GET_INSTANCE_OFFSET))(this);
	}

	::Class_2_AEE59ED8DADEC1A1* get_Owner()
	{
		return ((::Class_2_AEE59ED8DADEC1A1*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D8BECDCE48063EC7_GET_OWNER_OFFSET))(this);
	}

	::Il2CppArray<::RPG::GameCore::FixPoint>* get_ParamList()
	{
		return ((::Il2CppArray<::RPG::GameCore::FixPoint>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D8BECDCE48063EC7_GET_PARAMLIST_OFFSET))(this);
	}

	::Class_2_AEE59ED8DADEC1A1* get_AbilityTargetEntity()
	{
		return ((::Class_2_AEE59ED8DADEC1A1*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D8BECDCE48063EC7_GET_ABILITYTARGETENTITY_OFFSET))(this);
	}

	::System::Void set_AbilityTargetEntity(::Class_2_AEE59ED8DADEC1A1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_AEE59ED8DADEC1A1*))((::PBYTE)hIl2Cpp + CLASS_1_D8BECDCE48063EC7_SET_ABILITYTARGETENTITY_OFFSET))(this, a1);
	}

	::System::Void Method_1_FA53756A2AB5E247()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D8BECDCE48063EC7_METHOD_1_FA53756A2AB5E247_OFFSET))(this);
	}

	::RPG::GameCore::FixPoint Method_1_AD91484737B4F069()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D8BECDCE48063EC7_METHOD_1_AD91484737B4F069_OFFSET))(this);
	}

	::RPG::GameCore::FixPoint Method_1_3770FB3F5FC08336()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D8BECDCE48063EC7_METHOD_1_3770FB3F5FC08336_OFFSET))(this);
	}

	::RPG::GameCore::FixPoint Method_1_AD91484737B4F069_1()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D8BECDCE48063EC7_METHOD_1_AD91484737B4F069_1_OFFSET))(this);
	}

	::RPG::GameCore::FixPoint Method_1_E7498AF04E8E685D()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D8BECDCE48063EC7_METHOD_1_E7498AF04E8E685D_OFFSET))(this);
	}

	::RPG::GameCore::FixPoint Method_1_2EB122CB53B1542D()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D8BECDCE48063EC7_METHOD_1_2EB122CB53B1542D_OFFSET))(this);
	}

	::RPG::GameCore::FixPoint Method_1_2F5919C7B34BA075()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D8BECDCE48063EC7_METHOD_1_2F5919C7B34BA075_OFFSET))(this);
	}

	::RPG::GameCore::FixPoint Method_1_2F5919C7B34BA075_1()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D8BECDCE48063EC7_METHOD_1_2F5919C7B34BA075_1_OFFSET))(this);
	}

	::RPG::GameCore::FixPoint Method_1_E7498AF04E8E685D_1()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D8BECDCE48063EC7_METHOD_1_E7498AF04E8E685D_1_OFFSET))(this);
	}

	::RPG::GameCore::FixPoint Method_1_E7498AF04E8E685D_2()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D8BECDCE48063EC7_METHOD_1_E7498AF04E8E685D_2_OFFSET))(this);
	}

	::RPG::GameCore::FixPoint Method_1_E7498AF04E8E685D_3()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D8BECDCE48063EC7_METHOD_1_E7498AF04E8E685D_3_OFFSET))(this);
	}

	::System::Boolean Method_1_B6B81B4815054C12(::RPG::GameCore::StringHash a1, ::RPG::GameCore::FixPoint& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::StringHash, ::RPG::GameCore::FixPoint&))((::PBYTE)hIl2Cpp + CLASS_1_D8BECDCE48063EC7_METHOD_1_B6B81B4815054C12_OFFSET))(this, a1, a2);
	}

	::RPG::GameCore::FixPoint Method_1_E88B356A1B8231C4(::RPG::GameCore::StringHash a1)
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::StringHash))((::PBYTE)hIl2Cpp + CLASS_1_D8BECDCE48063EC7_METHOD_1_E88B356A1B8231C4_OFFSET))(this, a1);
	}

	::RPG::GameCore::FixPoint Evaluate(::RPG::GameCore::DynamicFloat* a1)
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::DynamicFloat*))((::PBYTE)hIl2Cpp + CLASS_1_D8BECDCE48063EC7_EVALUATE_OFFSET))(this, a1);
	}

	::Class_2_28E21688BAEA91E6* Method_1_DCEC38F05597CB7D()
	{
		return ((::Class_2_28E21688BAEA91E6*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D8BECDCE48063EC7_METHOD_1_DCEC38F05597CB7D_OFFSET))(this);
	}
};
