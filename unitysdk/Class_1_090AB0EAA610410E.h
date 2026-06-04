#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_BAC064D277DD99F1.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_361;
class Class_0_16E4307DCC419505_362;
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define CLASS_1_090AB0EAA610410E_EQUALS_1_OFFSET UNITYSDK_OFFSET(0xAA97F80)
#define CLASS_1_090AB0EAA610410E_EQUALS_OFFSET UNITYSDK_OFFSET(0xAA97EF0)
#define CLASS_1_090AB0EAA610410E_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xAA98090)
#define CLASS_1_090AB0EAA610410E_GET_CURRENTEXP_OFFSET UNITYSDK_OFFSET(0xAA97E50)
#define CLASS_1_090AB0EAA610410E_GET_DRESSEDSKINID_OFFSET UNITYSDK_OFFSET(0xAA97E70)
#define CLASS_1_090AB0EAA610410E_GET_EIDOLONLEVEL_OFFSET UNITYSDK_OFFSET(0xAA97E30)
#define CLASS_1_090AB0EAA610410E_GET_EQUIPPEDLIGHTCONE_OFFSET UNITYSDK_OFFSET(0xAA97EB0)
#define CLASS_1_090AB0EAA610410E_GET_EQUIPPEDRELICS_OFFSET UNITYSDK_OFFSET(0xAA97E90)
#define CLASS_1_090AB0EAA610410E_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0xAA97DF0)
#define CLASS_1_090AB0EAA610410E_GET_PROMOTIONLEVEL_OFFSET UNITYSDK_OFFSET(0xAA97E10)
#define CLASS_1_090AB0EAA610410E_GET_TRACENODES_OFFSET UNITYSDK_OFFSET(0xAA97ED0)
#define CLASS_1_090AB0EAA610410E_METHOD_1_09C3DBB624A973FC_OFFSET UNITYSDK_OFFSET(0xAA98260)
#define CLASS_1_090AB0EAA610410E_METHOD_1_E85CA50D622B92B5_OFFSET UNITYSDK_OFFSET(0xAA981E0)
#define CLASS_1_090AB0EAA610410E_SET_CURRENTEXP_OFFSET UNITYSDK_OFFSET(0xAA97E60)
#define CLASS_1_090AB0EAA610410E_SET_DRESSEDSKINID_OFFSET UNITYSDK_OFFSET(0xAA97E80)
#define CLASS_1_090AB0EAA610410E_SET_EIDOLONLEVEL_OFFSET UNITYSDK_OFFSET(0xAA97E40)
#define CLASS_1_090AB0EAA610410E_SET_EQUIPPEDLIGHTCONE_OFFSET UNITYSDK_OFFSET(0xAA97EC0)
#define CLASS_1_090AB0EAA610410E_SET_EQUIPPEDRELICS_OFFSET UNITYSDK_OFFSET(0xAA97EA0)
#define CLASS_1_090AB0EAA610410E_SET_LEVEL_OFFSET UNITYSDK_OFFSET(0xAA97E00)
#define CLASS_1_090AB0EAA610410E_SET_PROMOTIONLEVEL_OFFSET UNITYSDK_OFFSET(0xAA97E20)
#define CLASS_1_090AB0EAA610410E_SET_TRACENODES_OFFSET UNITYSDK_OFFSET(0xAA97EE0)
#define CLASS_1_090AB0EAA610410E__CCTOR_OFFSET UNITYSDK_OFFSET(0xAA982F0)
#define CLASS_1_090AB0EAA610410E__CTOR_OFFSET UNITYSDK_OFFSET(0xAA982E0)
#define CLASS_1_090AB0EAA610410E___IFIXBASEPROXY_EQUALS_OFFSET UNITYSDK_OFFSET(0xAA98350)
#define CLASS_1_090AB0EAA610410E___IFIXBASEPROXY_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xAA98360)

inline static constexpr unsigned int Class_1_090AB0EAA610410E_TypeDefinitionIndex = 48520;

class Class_1_090AB0EAA610410E : public ::System::Object
{
public:
	static ::Class_1_090AB0EAA610410E** StaticGet_Field_1_0()
	{
		return (::Class_1_090AB0EAA610410E**)Il2CppClass::FromTypeDefinitionIndex(Class_1_090AB0EAA610410E_TypeDefinitionIndex)->GetStaticField(0x1C00);
	}
	::Class_0_16E4307DCC419505_361* _EquippedLightCone_k__BackingField; // 0x10
	::System::Collections::Generic::IReadOnlyList_1<::Struct_2_BAC064D277DD99F1>* _TraceNodes_k__BackingField; // 0x18
	::System::Collections::Generic::IReadOnlyList_1<::Class_0_16E4307DCC419505_362*>* _EquippedRelics_k__BackingField; // 0x20
	::System::UInt32 _PromotionLevel_k__BackingField; // 0x28
	::System::UInt32 _CurrentExp_k__BackingField; // 0x2C
	::System::UInt32 _Level_k__BackingField; // 0x30
	::System::UInt32 _EidolonLevel_k__BackingField; // 0x34
	::System::UInt32 _DressedSkinID_k__BackingField; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_090AB0EAA610410E__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_090AB0EAA610410E__CCTOR_OFFSET))();
	}

	::System::UInt32 get_Level()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_090AB0EAA610410E_GET_LEVEL_OFFSET))(this);
	}

	::System::Void set_Level(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_090AB0EAA610410E_SET_LEVEL_OFFSET))(this, a1);
	}

	::System::UInt32 get_PromotionLevel()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_090AB0EAA610410E_GET_PROMOTIONLEVEL_OFFSET))(this);
	}

	::System::Void set_PromotionLevel(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_090AB0EAA610410E_SET_PROMOTIONLEVEL_OFFSET))(this, a1);
	}

	::System::UInt32 get_EidolonLevel()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_090AB0EAA610410E_GET_EIDOLONLEVEL_OFFSET))(this);
	}

	::System::Void set_EidolonLevel(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_090AB0EAA610410E_SET_EIDOLONLEVEL_OFFSET))(this, a1);
	}

	::System::UInt32 get_CurrentExp()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_090AB0EAA610410E_GET_CURRENTEXP_OFFSET))(this);
	}

	::System::Void set_CurrentExp(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_090AB0EAA610410E_SET_CURRENTEXP_OFFSET))(this, a1);
	}

	::System::UInt32 get_DressedSkinID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_090AB0EAA610410E_GET_DRESSEDSKINID_OFFSET))(this);
	}

	::System::Void set_DressedSkinID(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_090AB0EAA610410E_SET_DRESSEDSKINID_OFFSET))(this, a1);
	}

	::System::Collections::Generic::IReadOnlyList_1<::Class_0_16E4307DCC419505_362*>* get_EquippedRelics()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::Class_0_16E4307DCC419505_362*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_090AB0EAA610410E_GET_EQUIPPEDRELICS_OFFSET))(this);
	}

	::System::Void set_EquippedRelics(::System::Collections::Generic::IReadOnlyList_1<::Class_0_16E4307DCC419505_362*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::Class_0_16E4307DCC419505_362*>*))((::PBYTE)hIl2Cpp + CLASS_1_090AB0EAA610410E_SET_EQUIPPEDRELICS_OFFSET))(this, a1);
	}

	::Class_0_16E4307DCC419505_361* get_EquippedLightCone()
	{
		return ((::Class_0_16E4307DCC419505_361*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_090AB0EAA610410E_GET_EQUIPPEDLIGHTCONE_OFFSET))(this);
	}

	::System::Void set_EquippedLightCone(::Class_0_16E4307DCC419505_361* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_361*))((::PBYTE)hIl2Cpp + CLASS_1_090AB0EAA610410E_SET_EQUIPPEDLIGHTCONE_OFFSET))(this, a1);
	}

	::System::Collections::Generic::IReadOnlyList_1<::Struct_2_BAC064D277DD99F1>* get_TraceNodes()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::Struct_2_BAC064D277DD99F1>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_090AB0EAA610410E_GET_TRACENODES_OFFSET))(this);
	}

	::System::Void set_TraceNodes(::System::Collections::Generic::IReadOnlyList_1<::Struct_2_BAC064D277DD99F1>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::Struct_2_BAC064D277DD99F1>*))((::PBYTE)hIl2Cpp + CLASS_1_090AB0EAA610410E_SET_TRACENODES_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_090AB0EAA610410E_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_090AB0EAA610410E* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_090AB0EAA610410E*))((::PBYTE)hIl2Cpp + CLASS_1_090AB0EAA610410E_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_090AB0EAA610410E_GETHASHCODE_OFFSET))(this);
	}

	static ::System::Boolean Method_1_E85CA50D622B92B5(::Class_1_090AB0EAA610410E* a1, ::Class_1_090AB0EAA610410E* a2)
	{
		return ((::System::Boolean(*)(::Class_1_090AB0EAA610410E*, ::Class_1_090AB0EAA610410E*))((::PBYTE)hIl2Cpp + CLASS_1_090AB0EAA610410E_METHOD_1_E85CA50D622B92B5_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_09C3DBB624A973FC(::Class_1_090AB0EAA610410E* a1, ::Class_1_090AB0EAA610410E* a2)
	{
		return ((::System::Boolean(*)(::Class_1_090AB0EAA610410E*, ::Class_1_090AB0EAA610410E*))((::PBYTE)hIl2Cpp + CLASS_1_090AB0EAA610410E_METHOD_1_09C3DBB624A973FC_OFFSET))(a1, a2);
	}

	::System::Boolean __iFixBaseProxy_Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_090AB0EAA610410E___IFIXBASEPROXY_EQUALS_OFFSET))(this, a1);
	}

	::System::Int32 __iFixBaseProxy_GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_090AB0EAA610410E___IFIXBASEPROXY_GETHASHCODE_OFFSET))(this);
	}
};
