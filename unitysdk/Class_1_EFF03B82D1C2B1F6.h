#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_BAC064D277DD99F1.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_507;
class Class_0_16E4307DCC419505_508;
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define CLASS_1_EFF03B82D1C2B1F6_EQUALS_1_OFFSET UNITYSDK_OFFSET(0xBCCF450)
#define CLASS_1_EFF03B82D1C2B1F6_EQUALS_OFFSET UNITYSDK_OFFSET(0xBCCF3C0)
#define CLASS_1_EFF03B82D1C2B1F6_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xBCCF560)
#define CLASS_1_EFF03B82D1C2B1F6_GET_CURRENTEXP_OFFSET UNITYSDK_OFFSET(0xBCCF320)
#define CLASS_1_EFF03B82D1C2B1F6_GET_DRESSEDSKINID_OFFSET UNITYSDK_OFFSET(0xBCCF340)
#define CLASS_1_EFF03B82D1C2B1F6_GET_EIDOLONLEVEL_OFFSET UNITYSDK_OFFSET(0xBCCF300)
#define CLASS_1_EFF03B82D1C2B1F6_GET_EQUIPPEDLIGHTCONE_OFFSET UNITYSDK_OFFSET(0xBCCF380)
#define CLASS_1_EFF03B82D1C2B1F6_GET_EQUIPPEDRELICS_OFFSET UNITYSDK_OFFSET(0xBCCF360)
#define CLASS_1_EFF03B82D1C2B1F6_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0xBCCF2C0)
#define CLASS_1_EFF03B82D1C2B1F6_GET_PROMOTIONLEVEL_OFFSET UNITYSDK_OFFSET(0xBCCF2E0)
#define CLASS_1_EFF03B82D1C2B1F6_GET_TRACENODES_OFFSET UNITYSDK_OFFSET(0xBCCF3A0)
#define CLASS_1_EFF03B82D1C2B1F6_METHOD_1_148214CEA2F00B70_OFFSET UNITYSDK_OFFSET(0xBCCF7F0)
#define CLASS_1_EFF03B82D1C2B1F6_METHOD_1_6062BB7D9634C869_OFFSET UNITYSDK_OFFSET(0xBCCF710)
#define CLASS_1_EFF03B82D1C2B1F6_SET_CURRENTEXP_OFFSET UNITYSDK_OFFSET(0xBCCF330)
#define CLASS_1_EFF03B82D1C2B1F6_SET_DRESSEDSKINID_OFFSET UNITYSDK_OFFSET(0xBCCF350)
#define CLASS_1_EFF03B82D1C2B1F6_SET_EIDOLONLEVEL_OFFSET UNITYSDK_OFFSET(0xBCCF310)
#define CLASS_1_EFF03B82D1C2B1F6_SET_EQUIPPEDLIGHTCONE_OFFSET UNITYSDK_OFFSET(0xBCCF390)
#define CLASS_1_EFF03B82D1C2B1F6_SET_EQUIPPEDRELICS_OFFSET UNITYSDK_OFFSET(0xBCCF370)
#define CLASS_1_EFF03B82D1C2B1F6_SET_LEVEL_OFFSET UNITYSDK_OFFSET(0xBCCF2D0)
#define CLASS_1_EFF03B82D1C2B1F6_SET_PROMOTIONLEVEL_OFFSET UNITYSDK_OFFSET(0xBCCF2F0)
#define CLASS_1_EFF03B82D1C2B1F6_SET_TRACENODES_OFFSET UNITYSDK_OFFSET(0xBCCF3B0)
#define CLASS_1_EFF03B82D1C2B1F6__CCTOR_OFFSET UNITYSDK_OFFSET(0xBCCF8E0)
#define CLASS_1_EFF03B82D1C2B1F6__CTOR_OFFSET UNITYSDK_OFFSET(0xBCCF8D0)

inline static constexpr unsigned int Class_1_EFF03B82D1C2B1F6_TypeDefinitionIndex = 51897;

class Class_1_EFF03B82D1C2B1F6 : public ::System::Object
{
public:
	static ::Class_1_EFF03B82D1C2B1F6** StaticGet_COAHELMPGLI()
	{
		return (::Class_1_EFF03B82D1C2B1F6**)Il2CppClass::FromTypeDefinitionIndex(Class_1_EFF03B82D1C2B1F6_TypeDefinitionIndex)->GetStaticField(0x16290);
	}
	::System::Collections::Generic::IReadOnlyList_1<::Class_0_16E4307DCC419505_507*>* _EquippedRelics_k__BackingField; // 0x10
	::System::Collections::Generic::IReadOnlyList_1<::Struct_2_BAC064D277DD99F1>* _TraceNodes_k__BackingField; // 0x18
	::Class_0_16E4307DCC419505_508* _EquippedLightCone_k__BackingField; // 0x20
	::System::UInt32 _PromotionLevel_k__BackingField; // 0x28
	::System::UInt32 _EidolonLevel_k__BackingField; // 0x2C
	::System::UInt32 _DressedSkinID_k__BackingField; // 0x30
	::System::UInt32 _CurrentExp_k__BackingField; // 0x34
	::System::UInt32 _Level_k__BackingField; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EFF03B82D1C2B1F6__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_EFF03B82D1C2B1F6__CCTOR_OFFSET))();
	}

	::System::UInt32 get_Level()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EFF03B82D1C2B1F6_GET_LEVEL_OFFSET))(this);
	}

	::System::Void set_Level(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_EFF03B82D1C2B1F6_SET_LEVEL_OFFSET))(this, a1);
	}

	::System::UInt32 get_PromotionLevel()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EFF03B82D1C2B1F6_GET_PROMOTIONLEVEL_OFFSET))(this);
	}

	::System::Void set_PromotionLevel(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_EFF03B82D1C2B1F6_SET_PROMOTIONLEVEL_OFFSET))(this, a1);
	}

	::System::UInt32 get_EidolonLevel()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EFF03B82D1C2B1F6_GET_EIDOLONLEVEL_OFFSET))(this);
	}

	::System::Void set_EidolonLevel(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_EFF03B82D1C2B1F6_SET_EIDOLONLEVEL_OFFSET))(this, a1);
	}

	::System::UInt32 get_CurrentExp()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EFF03B82D1C2B1F6_GET_CURRENTEXP_OFFSET))(this);
	}

	::System::Void set_CurrentExp(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_EFF03B82D1C2B1F6_SET_CURRENTEXP_OFFSET))(this, a1);
	}

	::System::UInt32 get_DressedSkinID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EFF03B82D1C2B1F6_GET_DRESSEDSKINID_OFFSET))(this);
	}

	::System::Void set_DressedSkinID(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_EFF03B82D1C2B1F6_SET_DRESSEDSKINID_OFFSET))(this, a1);
	}

	::System::Collections::Generic::IReadOnlyList_1<::Class_0_16E4307DCC419505_507*>* get_EquippedRelics()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::Class_0_16E4307DCC419505_507*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EFF03B82D1C2B1F6_GET_EQUIPPEDRELICS_OFFSET))(this);
	}

	::System::Void set_EquippedRelics(::System::Collections::Generic::IReadOnlyList_1<::Class_0_16E4307DCC419505_507*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::Class_0_16E4307DCC419505_507*>*))((::PBYTE)hIl2Cpp + CLASS_1_EFF03B82D1C2B1F6_SET_EQUIPPEDRELICS_OFFSET))(this, a1);
	}

	::Class_0_16E4307DCC419505_508* get_EquippedLightCone()
	{
		return ((::Class_0_16E4307DCC419505_508*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EFF03B82D1C2B1F6_GET_EQUIPPEDLIGHTCONE_OFFSET))(this);
	}

	::System::Void set_EquippedLightCone(::Class_0_16E4307DCC419505_508* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_508*))((::PBYTE)hIl2Cpp + CLASS_1_EFF03B82D1C2B1F6_SET_EQUIPPEDLIGHTCONE_OFFSET))(this, a1);
	}

	::System::Collections::Generic::IReadOnlyList_1<::Struct_2_BAC064D277DD99F1>* get_TraceNodes()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::Struct_2_BAC064D277DD99F1>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EFF03B82D1C2B1F6_GET_TRACENODES_OFFSET))(this);
	}

	::System::Void set_TraceNodes(::System::Collections::Generic::IReadOnlyList_1<::Struct_2_BAC064D277DD99F1>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::Struct_2_BAC064D277DD99F1>*))((::PBYTE)hIl2Cpp + CLASS_1_EFF03B82D1C2B1F6_SET_TRACENODES_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_EFF03B82D1C2B1F6_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_EFF03B82D1C2B1F6* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_EFF03B82D1C2B1F6*))((::PBYTE)hIl2Cpp + CLASS_1_EFF03B82D1C2B1F6_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EFF03B82D1C2B1F6_GETHASHCODE_OFFSET))(this);
	}

	static ::System::Boolean Method_1_6062BB7D9634C869(::Class_1_EFF03B82D1C2B1F6* a1, ::Class_1_EFF03B82D1C2B1F6* a2)
	{
		return ((::System::Boolean(*)(::Class_1_EFF03B82D1C2B1F6*, ::Class_1_EFF03B82D1C2B1F6*))((::PBYTE)hIl2Cpp + CLASS_1_EFF03B82D1C2B1F6_METHOD_1_6062BB7D9634C869_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_148214CEA2F00B70(::Class_1_EFF03B82D1C2B1F6* a1, ::Class_1_EFF03B82D1C2B1F6* a2)
	{
		return ((::System::Boolean(*)(::Class_1_EFF03B82D1C2B1F6*, ::Class_1_EFF03B82D1C2B1F6*))((::PBYTE)hIl2Cpp + CLASS_1_EFF03B82D1C2B1F6_METHOD_1_148214CEA2F00B70_OFFSET))(a1, a2);
	}
};
