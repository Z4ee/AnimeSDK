#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MechCraft/MechCraftAttributeType.h"
#include "unitysdk/RPG/Client/MechCraft/MechCraftChipTraitType.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_1_581762AE8CB44C88_Class_1_F7D5EE28D668399A;
class Class_1_D05699509194BF9B;
namespace System { template <typename T1, typename T2, typename T3> class Func_3; }
namespace System { template <typename T1, typename T2> class Func_2; }
template <typename T1, typename T2> class __f__AnonymousType0_2;

#define CLASS_1_581762AE8CB44C88___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x15F2F130)
#define CLASS_1_581762AE8CB44C88___C__CTOR_OFFSET UNITYSDK_OFFSET(0x15F2F170)
#define CLASS_1_581762AE8CB44C88___C__GET_CANCLICK_B__32_0_OFFSET UNITYSDK_OFFSET(0x15F2F200)
#define CLASS_1_581762AE8CB44C88___C__GET_ISTALKVISIBLE_B__27_0_OFFSET UNITYSDK_OFFSET(0x15F2F1F0)
#define CLASS_1_581762AE8CB44C88___C__GET_RECOMMENDEDMOLD_B__17_0_OFFSET UNITYSDK_OFFSET(0x15F2F180)
#define CLASS_1_581762AE8CB44C88___C___TRYRECOMMENDMOLDFORATTRNOTMETONLY_B__52_1_OFFSET UNITYSDK_OFFSET(0x15F2F2A0)
#define CLASS_1_581762AE8CB44C88___C___TRYRECOMMENDMOLDFORATTRNOTMETONLY_B__52_2_OFFSET UNITYSDK_OFFSET(0x15F2F2B0)
#define CLASS_1_581762AE8CB44C88___C___TRYRECOMMENDMOLDFORATTRNOTMETONLY_B__52_3_OFFSET UNITYSDK_OFFSET(0x15F2F2C0)
#define CLASS_1_581762AE8CB44C88___C___TRYRECOMMENDMOLDFORATTRNOTMETONLY_B__52_4_OFFSET UNITYSDK_OFFSET(0x15F2F2D0)
#define CLASS_1_581762AE8CB44C88___C___TRYRECOMMENDMOLDFORATTRNOTMETONLY_B__52_5_OFFSET UNITYSDK_OFFSET(0x15F2F2E0)
#define CLASS_1_581762AE8CB44C88___C___TRYRECOMMENDMOLDFORATTRNOTMETONLY_B__52_7_OFFSET UNITYSDK_OFFSET(0x15F2F300)
#define CLASS_1_581762AE8CB44C88___C___TRYRECOMMENDMOLDFORATTRTRAITNEITHERMET_B__54_10_OFFSET UNITYSDK_OFFSET(0x15F2F500)
#define CLASS_1_581762AE8CB44C88___C___TRYRECOMMENDMOLDFORATTRTRAITNEITHERMET_B__54_13_OFFSET UNITYSDK_OFFSET(0x15F2F520)
#define CLASS_1_581762AE8CB44C88___C___TRYRECOMMENDMOLDFORATTRTRAITNEITHERMET_B__54_1_OFFSET UNITYSDK_OFFSET(0x15F2F480)
#define CLASS_1_581762AE8CB44C88___C___TRYRECOMMENDMOLDFORATTRTRAITNEITHERMET_B__54_2_OFFSET UNITYSDK_OFFSET(0x15F2F490)
#define CLASS_1_581762AE8CB44C88___C___TRYRECOMMENDMOLDFORATTRTRAITNEITHERMET_B__54_3_OFFSET UNITYSDK_OFFSET(0x15F2F4A0)
#define CLASS_1_581762AE8CB44C88___C___TRYRECOMMENDMOLDFORATTRTRAITNEITHERMET_B__54_4_OFFSET UNITYSDK_OFFSET(0x15F2F4B0)
#define CLASS_1_581762AE8CB44C88___C___TRYRECOMMENDMOLDFORATTRTRAITNEITHERMET_B__54_6_OFFSET UNITYSDK_OFFSET(0x15F2F4C0)
#define CLASS_1_581762AE8CB44C88___C___TRYRECOMMENDMOLDFORATTRTRAITNEITHERMET_B__54_7_OFFSET UNITYSDK_OFFSET(0x15F2F4D0)
#define CLASS_1_581762AE8CB44C88___C___TRYRECOMMENDMOLDFORATTRTRAITNEITHERMET_B__54_8_OFFSET UNITYSDK_OFFSET(0x15F2F4E0)
#define CLASS_1_581762AE8CB44C88___C___TRYRECOMMENDMOLDFORATTRTRAITNEITHERMET_B__54_9_OFFSET UNITYSDK_OFFSET(0x15F2F4F0)
#define CLASS_1_581762AE8CB44C88___C___TRYRECOMMENDMOLDFOREXAM_B__51_1_OFFSET UNITYSDK_OFFSET(0x15F2F270)
#define CLASS_1_581762AE8CB44C88___C___TRYRECOMMENDMOLDFOREXAM_B__51_3_OFFSET UNITYSDK_OFFSET(0x15F2F290)
#define CLASS_1_581762AE8CB44C88___C___TRYRECOMMENDMOLDFORTRAITNOTMETONLY_B__53_0_OFFSET UNITYSDK_OFFSET(0x15F2F370)
#define CLASS_1_581762AE8CB44C88___C___TRYRECOMMENDMOLDFORTRAITNOTMETONLY_B__53_10_OFFSET UNITYSDK_OFFSET(0x15F2F410)
#define CLASS_1_581762AE8CB44C88___C___TRYRECOMMENDMOLDFORTRAITNOTMETONLY_B__53_2_OFFSET UNITYSDK_OFFSET(0x15F2F380)
#define CLASS_1_581762AE8CB44C88___C___TRYRECOMMENDMOLDFORTRAITNOTMETONLY_B__53_3_OFFSET UNITYSDK_OFFSET(0x15F2F390)
#define CLASS_1_581762AE8CB44C88___C___TRYRECOMMENDMOLDFORTRAITNOTMETONLY_B__53_4_OFFSET UNITYSDK_OFFSET(0x15F2F3A0)
#define CLASS_1_581762AE8CB44C88___C___TRYRECOMMENDMOLDFORTRAITNOTMETONLY_B__53_5_OFFSET UNITYSDK_OFFSET(0x15F2F3B0)
#define CLASS_1_581762AE8CB44C88___C___TRYRECOMMENDMOLDFORTRAITNOTMETONLY_B__53_6_OFFSET UNITYSDK_OFFSET(0x15F2F3C0)
#define CLASS_1_581762AE8CB44C88___C___TRYRECOMMENDMOLDFORTRAITNOTMETONLY_B__53_9_OFFSET UNITYSDK_OFFSET(0x15F2F3E0)

inline static constexpr unsigned int Class_1_581762AE8CB44C88___c_TypeDefinitionIndex = 79446;

class Class_1_581762AE8CB44C88___c : public ::System::Object
{
public:
	static ::System::Func_2<::Class_1_581762AE8CB44C88_Class_1_F7D5EE28D668399A*, ::Class_1_D05699509194BF9B*>** StaticGet___9__17_0()
	{
		return (::System::Func_2<::Class_1_581762AE8CB44C88_Class_1_F7D5EE28D668399A*, ::Class_1_D05699509194BF9B*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_581762AE8CB44C88___c_TypeDefinitionIndex)->GetStaticField(0x58470);
	}
	static ::System::Func_2<::Class_1_D05699509194BF9B*, ::System::Boolean>** StaticGet___9__51_3()
	{
		return (::System::Func_2<::Class_1_D05699509194BF9B*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_581762AE8CB44C88___c_TypeDefinitionIndex)->GetStaticField(0x58478);
	}
	static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::RPG::Client::MechCraft::MechCraftAttributeType, ::System::Int32>, ::RPG::Client::MechCraft::MechCraftAttributeType>** StaticGet___9__53_0()
	{
		return (::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::RPG::Client::MechCraft::MechCraftAttributeType, ::System::Int32>, ::RPG::Client::MechCraft::MechCraftAttributeType>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_581762AE8CB44C88___c_TypeDefinitionIndex)->GetStaticField(0x58480);
	}
	static ::System::Func_2<::Class_1_D05699509194BF9B*, ::System::Int32>** StaticGet___9__52_7()
	{
		return (::System::Func_2<::Class_1_D05699509194BF9B*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_581762AE8CB44C88___c_TypeDefinitionIndex)->GetStaticField(0x58488);
	}
	static ::System::Func_2<::System::ValueTuple_2<::System::Int32, ::RPG::Client::MechCraft::MechCraftAttributeType>, ::RPG::Client::MechCraft::MechCraftAttributeType>** StaticGet___9__52_3()
	{
		return (::System::Func_2<::System::ValueTuple_2<::System::Int32, ::RPG::Client::MechCraft::MechCraftAttributeType>, ::RPG::Client::MechCraft::MechCraftAttributeType>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_581762AE8CB44C88___c_TypeDefinitionIndex)->GetStaticField(0x58490);
	}
	static ::System::Func_2<::Class_1_D05699509194BF9B*, ::System::Boolean>** StaticGet___9__52_5()
	{
		return (::System::Func_2<::Class_1_D05699509194BF9B*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_581762AE8CB44C88___c_TypeDefinitionIndex)->GetStaticField(0x58498);
	}
	static ::System::Func_2<::Class_1_D05699509194BF9B*, ::System::Boolean>** StaticGet___9__53_9()
	{
		return (::System::Func_2<::Class_1_D05699509194BF9B*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_581762AE8CB44C88___c_TypeDefinitionIndex)->GetStaticField(0x584A0);
	}
	static ::System::Func_2<::RPG::Client::MechCraft::MechCraftChipTraitType, ::RPG::Client::MechCraft::MechCraftChipTraitType>** StaticGet___9__54_6()
	{
		return (::System::Func_2<::RPG::Client::MechCraft::MechCraftChipTraitType, ::RPG::Client::MechCraft::MechCraftChipTraitType>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_581762AE8CB44C88___c_TypeDefinitionIndex)->GetStaticField(0x584A8);
	}
	static ::System::Func_2<::System::ValueTuple_2<::System::Int32, ::RPG::Client::MechCraft::MechCraftAttributeType>, ::System::Int32>** StaticGet___9__52_4()
	{
		return (::System::Func_2<::System::ValueTuple_2<::System::Int32, ::RPG::Client::MechCraft::MechCraftAttributeType>, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_581762AE8CB44C88___c_TypeDefinitionIndex)->GetStaticField(0x584B0);
	}
	static ::System::Func_2<::System::ValueTuple_2<::System::Int32, ::RPG::Client::MechCraft::MechCraftChipTraitType>, ::RPG::Client::MechCraft::MechCraftChipTraitType>** StaticGet___9__53_4()
	{
		return (::System::Func_2<::System::ValueTuple_2<::System::Int32, ::RPG::Client::MechCraft::MechCraftChipTraitType>, ::RPG::Client::MechCraft::MechCraftChipTraitType>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_581762AE8CB44C88___c_TypeDefinitionIndex)->GetStaticField(0x584B8);
	}
	static ::System::Func_2<::__f__AnonymousType0_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::System::Int32>, ::System::Int32>*, ::System::Boolean>** StaticGet___9__51_1()
	{
		return (::System::Func_2<::__f__AnonymousType0_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::System::Int32>, ::System::Int32>*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_581762AE8CB44C88___c_TypeDefinitionIndex)->GetStaticField(0x584C0);
	}
	static ::Class_1_581762AE8CB44C88___c** StaticGet___9()
	{
		return (::Class_1_581762AE8CB44C88___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_581762AE8CB44C88___c_TypeDefinitionIndex)->GetStaticField(0x584C8);
	}
	static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::RPG::Client::MechCraft::MechCraftAttributeType, ::System::Int32>, ::System::Collections::Generic::KeyValuePair_2<::RPG::Client::MechCraft::MechCraftAttributeType, ::System::Int32>>** StaticGet___9__54_1()
	{
		return (::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::RPG::Client::MechCraft::MechCraftAttributeType, ::System::Int32>, ::System::Collections::Generic::KeyValuePair_2<::RPG::Client::MechCraft::MechCraftAttributeType, ::System::Int32>>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_581762AE8CB44C88___c_TypeDefinitionIndex)->GetStaticField(0x584D0);
	}
	static ::System::Func_3<::System::Collections::Generic::KeyValuePair_2<::RPG::Client::MechCraft::MechCraftAttributeType, ::System::Int32>, ::System::Int32, ::System::ValueTuple_2<::System::Int32, ::RPG::Client::MechCraft::MechCraftAttributeType>>** StaticGet___9__54_2()
	{
		return (::System::Func_3<::System::Collections::Generic::KeyValuePair_2<::RPG::Client::MechCraft::MechCraftAttributeType, ::System::Int32>, ::System::Int32, ::System::ValueTuple_2<::System::Int32, ::RPG::Client::MechCraft::MechCraftAttributeType>>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_581762AE8CB44C88___c_TypeDefinitionIndex)->GetStaticField(0x584D8);
	}
	static ::System::Func_2<::Class_1_D05699509194BF9B*, ::System::Int32>** StaticGet___9__53_10()
	{
		return (::System::Func_2<::Class_1_D05699509194BF9B*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_581762AE8CB44C88___c_TypeDefinitionIndex)->GetStaticField(0x584E0);
	}
	static ::System::Func_2<::RPG::Client::MechCraft::MechCraftChipTraitType, ::RPG::Client::MechCraft::MechCraftChipTraitType>** StaticGet___9__53_2()
	{
		return (::System::Func_2<::RPG::Client::MechCraft::MechCraftChipTraitType, ::RPG::Client::MechCraft::MechCraftChipTraitType>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_581762AE8CB44C88___c_TypeDefinitionIndex)->GetStaticField(0x584E8);
	}
	static ::System::Func_2<::Class_1_D05699509194BF9B*, ::System::Boolean>** StaticGet___9__54_10()
	{
		return (::System::Func_2<::Class_1_D05699509194BF9B*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_581762AE8CB44C88___c_TypeDefinitionIndex)->GetStaticField(0x584F0);
	}
	static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::RPG::Client::MechCraft::MechCraftAttributeType, ::System::Int32>, ::System::Collections::Generic::KeyValuePair_2<::RPG::Client::MechCraft::MechCraftAttributeType, ::System::Int32>>** StaticGet___9__52_1()
	{
		return (::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::RPG::Client::MechCraft::MechCraftAttributeType, ::System::Int32>, ::System::Collections::Generic::KeyValuePair_2<::RPG::Client::MechCraft::MechCraftAttributeType, ::System::Int32>>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_581762AE8CB44C88___c_TypeDefinitionIndex)->GetStaticField(0x584F8);
	}
	static ::System::Func_2<::System::ValueTuple_2<::System::Int32, ::RPG::Client::MechCraft::MechCraftAttributeType>, ::RPG::Client::MechCraft::MechCraftAttributeType>** StaticGet___9__54_3()
	{
		return (::System::Func_2<::System::ValueTuple_2<::System::Int32, ::RPG::Client::MechCraft::MechCraftAttributeType>, ::RPG::Client::MechCraft::MechCraftAttributeType>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_581762AE8CB44C88___c_TypeDefinitionIndex)->GetStaticField(0x58500);
	}
	static ::System::Func_3<::System::Collections::Generic::KeyValuePair_2<::RPG::Client::MechCraft::MechCraftAttributeType, ::System::Int32>, ::System::Int32, ::System::ValueTuple_2<::System::Int32, ::RPG::Client::MechCraft::MechCraftAttributeType>>** StaticGet___9__52_2()
	{
		return (::System::Func_3<::System::Collections::Generic::KeyValuePair_2<::RPG::Client::MechCraft::MechCraftAttributeType, ::System::Int32>, ::System::Int32, ::System::ValueTuple_2<::System::Int32, ::RPG::Client::MechCraft::MechCraftAttributeType>>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_581762AE8CB44C88___c_TypeDefinitionIndex)->GetStaticField(0x58508);
	}
	static ::System::Func_2<::Class_1_581762AE8CB44C88_Class_1_F7D5EE28D668399A*, ::System::Boolean>** StaticGet___9__32_0()
	{
		return (::System::Func_2<::Class_1_581762AE8CB44C88_Class_1_F7D5EE28D668399A*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_581762AE8CB44C88___c_TypeDefinitionIndex)->GetStaticField(0x58510);
	}
	static ::System::Func_2<::Class_1_581762AE8CB44C88_Class_1_F7D5EE28D668399A*, ::System::Boolean>** StaticGet___9__27_0()
	{
		return (::System::Func_2<::Class_1_581762AE8CB44C88_Class_1_F7D5EE28D668399A*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_581762AE8CB44C88___c_TypeDefinitionIndex)->GetStaticField(0x58518);
	}
	static ::System::Func_2<::Class_1_D05699509194BF9B*, ::System::Int32>** StaticGet___9__54_13()
	{
		return (::System::Func_2<::Class_1_D05699509194BF9B*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_581762AE8CB44C88___c_TypeDefinitionIndex)->GetStaticField(0x58520);
	}
	static ::System::Func_3<::RPG::Client::MechCraft::MechCraftChipTraitType, ::System::Int32, ::System::ValueTuple_2<::System::Int32, ::RPG::Client::MechCraft::MechCraftChipTraitType>>** StaticGet___9__53_3()
	{
		return (::System::Func_3<::RPG::Client::MechCraft::MechCraftChipTraitType, ::System::Int32, ::System::ValueTuple_2<::System::Int32, ::RPG::Client::MechCraft::MechCraftChipTraitType>>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_581762AE8CB44C88___c_TypeDefinitionIndex)->GetStaticField(0x58528);
	}
	static ::System::Func_3<::RPG::Client::MechCraft::MechCraftChipTraitType, ::System::Int32, ::System::ValueTuple_2<::System::Int32, ::RPG::Client::MechCraft::MechCraftChipTraitType>>** StaticGet___9__54_7()
	{
		return (::System::Func_3<::RPG::Client::MechCraft::MechCraftChipTraitType, ::System::Int32, ::System::ValueTuple_2<::System::Int32, ::RPG::Client::MechCraft::MechCraftChipTraitType>>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_581762AE8CB44C88___c_TypeDefinitionIndex)->GetStaticField(0x58530);
	}
	static ::System::Func_2<::System::ValueTuple_2<::System::Int32, ::RPG::Client::MechCraft::MechCraftChipTraitType>, ::System::Int32>** StaticGet___9__53_5()
	{
		return (::System::Func_2<::System::ValueTuple_2<::System::Int32, ::RPG::Client::MechCraft::MechCraftChipTraitType>, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_581762AE8CB44C88___c_TypeDefinitionIndex)->GetStaticField(0x58538);
	}
	static ::System::Func_2<::System::ValueTuple_2<::System::Int32, ::RPG::Client::MechCraft::MechCraftChipTraitType>, ::RPG::Client::MechCraft::MechCraftChipTraitType>** StaticGet___9__54_8()
	{
		return (::System::Func_2<::System::ValueTuple_2<::System::Int32, ::RPG::Client::MechCraft::MechCraftChipTraitType>, ::RPG::Client::MechCraft::MechCraftChipTraitType>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_581762AE8CB44C88___c_TypeDefinitionIndex)->GetStaticField(0x58540);
	}
	static ::System::Func_2<::System::ValueTuple_2<::System::Int32, ::RPG::Client::MechCraft::MechCraftAttributeType>, ::System::Int32>** StaticGet___9__54_4()
	{
		return (::System::Func_2<::System::ValueTuple_2<::System::Int32, ::RPG::Client::MechCraft::MechCraftAttributeType>, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_581762AE8CB44C88___c_TypeDefinitionIndex)->GetStaticField(0x58548);
	}
	static ::System::Func_2<::Class_1_D05699509194BF9B*, ::System::Boolean>** StaticGet___9__53_6()
	{
		return (::System::Func_2<::Class_1_D05699509194BF9B*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_581762AE8CB44C88___c_TypeDefinitionIndex)->GetStaticField(0x58550);
	}
	static ::System::Func_2<::System::ValueTuple_2<::System::Int32, ::RPG::Client::MechCraft::MechCraftChipTraitType>, ::System::Int32>** StaticGet___9__54_9()
	{
		return (::System::Func_2<::System::ValueTuple_2<::System::Int32, ::RPG::Client::MechCraft::MechCraftChipTraitType>, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_581762AE8CB44C88___c_TypeDefinitionIndex)->GetStaticField(0x58558);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_581762AE8CB44C88___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_581762AE8CB44C88___C__CTOR_OFFSET))(this);
	}

	::Class_1_D05699509194BF9B* _get_RecommendedMold_b__17_0(::Class_1_581762AE8CB44C88_Class_1_F7D5EE28D668399A* a1)
	{
		return ((::Class_1_D05699509194BF9B*(*)(::PVOID, ::Class_1_581762AE8CB44C88_Class_1_F7D5EE28D668399A*))((::PBYTE)hIl2Cpp + CLASS_1_581762AE8CB44C88___C__GET_RECOMMENDEDMOLD_B__17_0_OFFSET))(this, a1);
	}

	::System::Boolean _get_IsTalkVisible_b__27_0(::Class_1_581762AE8CB44C88_Class_1_F7D5EE28D668399A* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_581762AE8CB44C88_Class_1_F7D5EE28D668399A*))((::PBYTE)hIl2Cpp + CLASS_1_581762AE8CB44C88___C__GET_ISTALKVISIBLE_B__27_0_OFFSET))(this, a1);
	}

	::System::Boolean _get_CanClick_b__32_0(::Class_1_581762AE8CB44C88_Class_1_F7D5EE28D668399A* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_581762AE8CB44C88_Class_1_F7D5EE28D668399A*))((::PBYTE)hIl2Cpp + CLASS_1_581762AE8CB44C88___C__GET_CANCLICK_B__32_0_OFFSET))(this, a1);
	}

	::System::Boolean __TryRecommendMoldForExam_b__51_1(::__f__AnonymousType0_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::System::Int32>, ::System::Int32>* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::__f__AnonymousType0_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::System::Int32>, ::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_1_581762AE8CB44C88___C___TRYRECOMMENDMOLDFOREXAM_B__51_1_OFFSET))(this, a1);
	}

	::System::Boolean __TryRecommendMoldForExam_b__51_3(::Class_1_D05699509194BF9B* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_D05699509194BF9B*))((::PBYTE)hIl2Cpp + CLASS_1_581762AE8CB44C88___C___TRYRECOMMENDMOLDFOREXAM_B__51_3_OFFSET))(this, a1);
	}

	::System::Collections::Generic::KeyValuePair_2<::RPG::Client::MechCraft::MechCraftAttributeType, ::System::Int32> __TryRecommendMoldForAttrNotMetOnly_b__52_1(::System::Collections::Generic::KeyValuePair_2<::RPG::Client::MechCraft::MechCraftAttributeType, ::System::Int32> a1)
	{
		return ((::System::Collections::Generic::KeyValuePair_2<::RPG::Client::MechCraft::MechCraftAttributeType, ::System::Int32>(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::RPG::Client::MechCraft::MechCraftAttributeType, ::System::Int32>))((::PBYTE)hIl2Cpp + CLASS_1_581762AE8CB44C88___C___TRYRECOMMENDMOLDFORATTRNOTMETONLY_B__52_1_OFFSET))(this, a1);
	}

	::System::ValueTuple_2<::System::Int32, ::RPG::Client::MechCraft::MechCraftAttributeType> __TryRecommendMoldForAttrNotMetOnly_b__52_2(::System::Collections::Generic::KeyValuePair_2<::RPG::Client::MechCraft::MechCraftAttributeType, ::System::Int32> a1, ::System::Int32 a2)
	{
		return ((::System::ValueTuple_2<::System::Int32, ::RPG::Client::MechCraft::MechCraftAttributeType>(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::RPG::Client::MechCraft::MechCraftAttributeType, ::System::Int32>, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_581762AE8CB44C88___C___TRYRECOMMENDMOLDFORATTRNOTMETONLY_B__52_2_OFFSET))(this, a1, a2);
	}

	::RPG::Client::MechCraft::MechCraftAttributeType __TryRecommendMoldForAttrNotMetOnly_b__52_3(::System::ValueTuple_2<::System::Int32, ::RPG::Client::MechCraft::MechCraftAttributeType> a1)
	{
		return ((::RPG::Client::MechCraft::MechCraftAttributeType(*)(::PVOID, ::System::ValueTuple_2<::System::Int32, ::RPG::Client::MechCraft::MechCraftAttributeType>))((::PBYTE)hIl2Cpp + CLASS_1_581762AE8CB44C88___C___TRYRECOMMENDMOLDFORATTRNOTMETONLY_B__52_3_OFFSET))(this, a1);
	}

	::System::Int32 __TryRecommendMoldForAttrNotMetOnly_b__52_4(::System::ValueTuple_2<::System::Int32, ::RPG::Client::MechCraft::MechCraftAttributeType> a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::ValueTuple_2<::System::Int32, ::RPG::Client::MechCraft::MechCraftAttributeType>))((::PBYTE)hIl2Cpp + CLASS_1_581762AE8CB44C88___C___TRYRECOMMENDMOLDFORATTRNOTMETONLY_B__52_4_OFFSET))(this, a1);
	}

	::System::Boolean __TryRecommendMoldForAttrNotMetOnly_b__52_5(::Class_1_D05699509194BF9B* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_D05699509194BF9B*))((::PBYTE)hIl2Cpp + CLASS_1_581762AE8CB44C88___C___TRYRECOMMENDMOLDFORATTRNOTMETONLY_B__52_5_OFFSET))(this, a1);
	}

	::System::Int32 __TryRecommendMoldForAttrNotMetOnly_b__52_7(::Class_1_D05699509194BF9B* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_1_D05699509194BF9B*))((::PBYTE)hIl2Cpp + CLASS_1_581762AE8CB44C88___C___TRYRECOMMENDMOLDFORATTRNOTMETONLY_B__52_7_OFFSET))(this, a1);
	}

	::RPG::Client::MechCraft::MechCraftAttributeType __TryRecommendMoldForTraitNotMetOnly_b__53_0(::System::Collections::Generic::KeyValuePair_2<::RPG::Client::MechCraft::MechCraftAttributeType, ::System::Int32> a1)
	{
		return ((::RPG::Client::MechCraft::MechCraftAttributeType(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::RPG::Client::MechCraft::MechCraftAttributeType, ::System::Int32>))((::PBYTE)hIl2Cpp + CLASS_1_581762AE8CB44C88___C___TRYRECOMMENDMOLDFORTRAITNOTMETONLY_B__53_0_OFFSET))(this, a1);
	}

	::RPG::Client::MechCraft::MechCraftChipTraitType __TryRecommendMoldForTraitNotMetOnly_b__53_2(::RPG::Client::MechCraft::MechCraftChipTraitType a1)
	{
		return ((::RPG::Client::MechCraft::MechCraftChipTraitType(*)(::PVOID, ::RPG::Client::MechCraft::MechCraftChipTraitType))((::PBYTE)hIl2Cpp + CLASS_1_581762AE8CB44C88___C___TRYRECOMMENDMOLDFORTRAITNOTMETONLY_B__53_2_OFFSET))(this, a1);
	}

	::System::ValueTuple_2<::System::Int32, ::RPG::Client::MechCraft::MechCraftChipTraitType> __TryRecommendMoldForTraitNotMetOnly_b__53_3(::RPG::Client::MechCraft::MechCraftChipTraitType a1, ::System::Int32 a2)
	{
		return ((::System::ValueTuple_2<::System::Int32, ::RPG::Client::MechCraft::MechCraftChipTraitType>(*)(::PVOID, ::RPG::Client::MechCraft::MechCraftChipTraitType, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_581762AE8CB44C88___C___TRYRECOMMENDMOLDFORTRAITNOTMETONLY_B__53_3_OFFSET))(this, a1, a2);
	}

	::RPG::Client::MechCraft::MechCraftChipTraitType __TryRecommendMoldForTraitNotMetOnly_b__53_4(::System::ValueTuple_2<::System::Int32, ::RPG::Client::MechCraft::MechCraftChipTraitType> a1)
	{
		return ((::RPG::Client::MechCraft::MechCraftChipTraitType(*)(::PVOID, ::System::ValueTuple_2<::System::Int32, ::RPG::Client::MechCraft::MechCraftChipTraitType>))((::PBYTE)hIl2Cpp + CLASS_1_581762AE8CB44C88___C___TRYRECOMMENDMOLDFORTRAITNOTMETONLY_B__53_4_OFFSET))(this, a1);
	}

	::System::Int32 __TryRecommendMoldForTraitNotMetOnly_b__53_5(::System::ValueTuple_2<::System::Int32, ::RPG::Client::MechCraft::MechCraftChipTraitType> a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::ValueTuple_2<::System::Int32, ::RPG::Client::MechCraft::MechCraftChipTraitType>))((::PBYTE)hIl2Cpp + CLASS_1_581762AE8CB44C88___C___TRYRECOMMENDMOLDFORTRAITNOTMETONLY_B__53_5_OFFSET))(this, a1);
	}

	::System::Boolean __TryRecommendMoldForTraitNotMetOnly_b__53_6(::Class_1_D05699509194BF9B* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_D05699509194BF9B*))((::PBYTE)hIl2Cpp + CLASS_1_581762AE8CB44C88___C___TRYRECOMMENDMOLDFORTRAITNOTMETONLY_B__53_6_OFFSET))(this, a1);
	}

	::System::Boolean __TryRecommendMoldForTraitNotMetOnly_b__53_9(::Class_1_D05699509194BF9B* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_D05699509194BF9B*))((::PBYTE)hIl2Cpp + CLASS_1_581762AE8CB44C88___C___TRYRECOMMENDMOLDFORTRAITNOTMETONLY_B__53_9_OFFSET))(this, a1);
	}

	::System::Int32 __TryRecommendMoldForTraitNotMetOnly_b__53_10(::Class_1_D05699509194BF9B* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_1_D05699509194BF9B*))((::PBYTE)hIl2Cpp + CLASS_1_581762AE8CB44C88___C___TRYRECOMMENDMOLDFORTRAITNOTMETONLY_B__53_10_OFFSET))(this, a1);
	}

	::System::Collections::Generic::KeyValuePair_2<::RPG::Client::MechCraft::MechCraftAttributeType, ::System::Int32> __TryRecommendMoldForAttrTraitNeitherMet_b__54_1(::System::Collections::Generic::KeyValuePair_2<::RPG::Client::MechCraft::MechCraftAttributeType, ::System::Int32> a1)
	{
		return ((::System::Collections::Generic::KeyValuePair_2<::RPG::Client::MechCraft::MechCraftAttributeType, ::System::Int32>(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::RPG::Client::MechCraft::MechCraftAttributeType, ::System::Int32>))((::PBYTE)hIl2Cpp + CLASS_1_581762AE8CB44C88___C___TRYRECOMMENDMOLDFORATTRTRAITNEITHERMET_B__54_1_OFFSET))(this, a1);
	}

	::System::ValueTuple_2<::System::Int32, ::RPG::Client::MechCraft::MechCraftAttributeType> __TryRecommendMoldForAttrTraitNeitherMet_b__54_2(::System::Collections::Generic::KeyValuePair_2<::RPG::Client::MechCraft::MechCraftAttributeType, ::System::Int32> a1, ::System::Int32 a2)
	{
		return ((::System::ValueTuple_2<::System::Int32, ::RPG::Client::MechCraft::MechCraftAttributeType>(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::RPG::Client::MechCraft::MechCraftAttributeType, ::System::Int32>, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_581762AE8CB44C88___C___TRYRECOMMENDMOLDFORATTRTRAITNEITHERMET_B__54_2_OFFSET))(this, a1, a2);
	}

	::RPG::Client::MechCraft::MechCraftAttributeType __TryRecommendMoldForAttrTraitNeitherMet_b__54_3(::System::ValueTuple_2<::System::Int32, ::RPG::Client::MechCraft::MechCraftAttributeType> a1)
	{
		return ((::RPG::Client::MechCraft::MechCraftAttributeType(*)(::PVOID, ::System::ValueTuple_2<::System::Int32, ::RPG::Client::MechCraft::MechCraftAttributeType>))((::PBYTE)hIl2Cpp + CLASS_1_581762AE8CB44C88___C___TRYRECOMMENDMOLDFORATTRTRAITNEITHERMET_B__54_3_OFFSET))(this, a1);
	}

	::System::Int32 __TryRecommendMoldForAttrTraitNeitherMet_b__54_4(::System::ValueTuple_2<::System::Int32, ::RPG::Client::MechCraft::MechCraftAttributeType> a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::ValueTuple_2<::System::Int32, ::RPG::Client::MechCraft::MechCraftAttributeType>))((::PBYTE)hIl2Cpp + CLASS_1_581762AE8CB44C88___C___TRYRECOMMENDMOLDFORATTRTRAITNEITHERMET_B__54_4_OFFSET))(this, a1);
	}

	::RPG::Client::MechCraft::MechCraftChipTraitType __TryRecommendMoldForAttrTraitNeitherMet_b__54_6(::RPG::Client::MechCraft::MechCraftChipTraitType a1)
	{
		return ((::RPG::Client::MechCraft::MechCraftChipTraitType(*)(::PVOID, ::RPG::Client::MechCraft::MechCraftChipTraitType))((::PBYTE)hIl2Cpp + CLASS_1_581762AE8CB44C88___C___TRYRECOMMENDMOLDFORATTRTRAITNEITHERMET_B__54_6_OFFSET))(this, a1);
	}

	::System::ValueTuple_2<::System::Int32, ::RPG::Client::MechCraft::MechCraftChipTraitType> __TryRecommendMoldForAttrTraitNeitherMet_b__54_7(::RPG::Client::MechCraft::MechCraftChipTraitType a1, ::System::Int32 a2)
	{
		return ((::System::ValueTuple_2<::System::Int32, ::RPG::Client::MechCraft::MechCraftChipTraitType>(*)(::PVOID, ::RPG::Client::MechCraft::MechCraftChipTraitType, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_581762AE8CB44C88___C___TRYRECOMMENDMOLDFORATTRTRAITNEITHERMET_B__54_7_OFFSET))(this, a1, a2);
	}

	::RPG::Client::MechCraft::MechCraftChipTraitType __TryRecommendMoldForAttrTraitNeitherMet_b__54_8(::System::ValueTuple_2<::System::Int32, ::RPG::Client::MechCraft::MechCraftChipTraitType> a1)
	{
		return ((::RPG::Client::MechCraft::MechCraftChipTraitType(*)(::PVOID, ::System::ValueTuple_2<::System::Int32, ::RPG::Client::MechCraft::MechCraftChipTraitType>))((::PBYTE)hIl2Cpp + CLASS_1_581762AE8CB44C88___C___TRYRECOMMENDMOLDFORATTRTRAITNEITHERMET_B__54_8_OFFSET))(this, a1);
	}

	::System::Int32 __TryRecommendMoldForAttrTraitNeitherMet_b__54_9(::System::ValueTuple_2<::System::Int32, ::RPG::Client::MechCraft::MechCraftChipTraitType> a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::ValueTuple_2<::System::Int32, ::RPG::Client::MechCraft::MechCraftChipTraitType>))((::PBYTE)hIl2Cpp + CLASS_1_581762AE8CB44C88___C___TRYRECOMMENDMOLDFORATTRTRAITNEITHERMET_B__54_9_OFFSET))(this, a1);
	}

	::System::Boolean __TryRecommendMoldForAttrTraitNeitherMet_b__54_10(::Class_1_D05699509194BF9B* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_D05699509194BF9B*))((::PBYTE)hIl2Cpp + CLASS_1_581762AE8CB44C88___C___TRYRECOMMENDMOLDFORATTRTRAITNEITHERMET_B__54_10_OFFSET))(this, a1);
	}

	::System::Int32 __TryRecommendMoldForAttrTraitNeitherMet_b__54_13(::Class_1_D05699509194BF9B* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_1_D05699509194BF9B*))((::PBYTE)hIl2Cpp + CLASS_1_581762AE8CB44C88___C___TRYRECOMMENDMOLDFORATTRTRAITNEITHERMET_B__54_13_OFFSET))(this, a1);
	}
};
