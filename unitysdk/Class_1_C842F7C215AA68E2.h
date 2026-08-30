#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_333B902B2174BECA_4;
class Class_1_9E825E3D3A62B6E0;
class Class_1_D17272E82AE804C2_797;
class Class_1_D40936EF3BF54118_66;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_C842F7C215AA68E2_GET_BAGEQUIPITEMS_OFFSET UNITYSDK_OFFSET(0x16062840)
#define CLASS_1_C842F7C215AA68E2_GET_BATTLEEQUIPITEMS_OFFSET UNITYSDK_OFFSET(0x16062830)
#define CLASS_1_C842F7C215AA68E2_GET_SLOTNUM_OFFSET UNITYSDK_OFFSET(0x16062810)
#define CLASS_1_C842F7C215AA68E2_METHOD_1_3783F0665AED1E64_OFFSET UNITYSDK_OFFSET(0x16062720)
#define CLASS_1_C842F7C215AA68E2_METHOD_1_6E57D3559C10FFA9_OFFSET UNITYSDK_OFFSET(0x160622D0)
#define CLASS_1_C842F7C215AA68E2_METHOD_1_79888F670E780AFF_OFFSET UNITYSDK_OFFSET(0x160625C0)
#define CLASS_1_C842F7C215AA68E2_METHOD_1_7AB2A7695E303980_OFFSET UNITYSDK_OFFSET(0x160618F0)
#define CLASS_1_C842F7C215AA68E2_METHOD_1_8DA3FEE3379AFF0E_OFFSET UNITYSDK_OFFSET(0x16062320)
#define CLASS_1_C842F7C215AA68E2_METHOD_1_92EB806315DCB90E_OFFSET UNITYSDK_OFFSET(0x16062460)
#define CLASS_1_C842F7C215AA68E2_SET_SLOTNUM_OFFSET UNITYSDK_OFFSET(0x16062820)
#define CLASS_1_C842F7C215AA68E2__CTOR_OFFSET UNITYSDK_OFFSET(0x16062850)

inline static constexpr unsigned int Class_1_C842F7C215AA68E2_TypeDefinitionIndex = 78736;

class Class_1_C842F7C215AA68E2 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_9E825E3D3A62B6E0*>* _BattleEquipItems_k__BackingField; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_9E825E3D3A62B6E0*>* _BagEquipItems_k__BackingField; // 0x18
	::System::UInt32 _SlotNum_k__BackingField; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C842F7C215AA68E2__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_7AB2A7695E303980(::Class_1_333B902B2174BECA_4* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_333B902B2174BECA_4*))((::PBYTE)hIl2Cpp + CLASS_1_C842F7C215AA68E2_METHOD_1_7AB2A7695E303980_OFFSET))(this, a1);
	}

	::System::Void Method_1_6E57D3559C10FFA9(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C842F7C215AA68E2_METHOD_1_6E57D3559C10FFA9_OFFSET))(this, a1);
	}

	::System::Void Method_1_8DA3FEE3379AFF0E(::Class_1_D40936EF3BF54118_66* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D40936EF3BF54118_66*))((::PBYTE)hIl2Cpp + CLASS_1_C842F7C215AA68E2_METHOD_1_8DA3FEE3379AFF0E_OFFSET))(this, a1);
	}

	::System::Void Method_1_92EB806315DCB90E(::Class_1_D17272E82AE804C2_797* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_797*))((::PBYTE)hIl2Cpp + CLASS_1_C842F7C215AA68E2_METHOD_1_92EB806315DCB90E_OFFSET))(this, a1);
	}

	::System::Void Method_1_3783F0665AED1E64(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C842F7C215AA68E2_METHOD_1_3783F0665AED1E64_OFFSET))(this, a1);
	}

	::Class_1_9E825E3D3A62B6E0* Method_1_79888F670E780AFF(::System::UInt32 a1)
	{
		return ((::Class_1_9E825E3D3A62B6E0*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C842F7C215AA68E2_METHOD_1_79888F670E780AFF_OFFSET))(this, a1);
	}

	::System::UInt32 get_SlotNum()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C842F7C215AA68E2_GET_SLOTNUM_OFFSET))(this);
	}

	::System::Void set_SlotNum(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C842F7C215AA68E2_SET_SLOTNUM_OFFSET))(this, a1);
	}

	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_9E825E3D3A62B6E0*>* get_BattleEquipItems()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_9E825E3D3A62B6E0*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C842F7C215AA68E2_GET_BATTLEEQUIPITEMS_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_9E825E3D3A62B6E0*>* get_BagEquipItems()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_9E825E3D3A62B6E0*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C842F7C215AA68E2_GET_BAGEQUIPITEMS_OFFSET))(this);
	}
};
