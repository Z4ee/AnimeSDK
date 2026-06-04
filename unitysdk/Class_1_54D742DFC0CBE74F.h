#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_22B4C7CF09D1BAC1_5;
class Class_1_9E825E3D3A62B6E0;
class Class_1_D17272E82AE804C2_681;
class Class_1_D40936EF3BF54118_64;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_54D742DFC0CBE74F_GET_BAGEQUIPITEMS_OFFSET UNITYSDK_OFFSET(0x14149700)
#define CLASS_1_54D742DFC0CBE74F_GET_BATTLEEQUIPITEMS_OFFSET UNITYSDK_OFFSET(0x141496F0)
#define CLASS_1_54D742DFC0CBE74F_GET_SLOTNUM_OFFSET UNITYSDK_OFFSET(0x141496D0)
#define CLASS_1_54D742DFC0CBE74F_METHOD_1_00A4B38C951C5BD5_OFFSET UNITYSDK_OFFSET(0x14148A10)
#define CLASS_1_54D742DFC0CBE74F_METHOD_1_5C28A8AFAFD92C5B_OFFSET UNITYSDK_OFFSET(0x141495E0)
#define CLASS_1_54D742DFC0CBE74F_METHOD_1_6E57D3559C10FFA9_OFFSET UNITYSDK_OFFSET(0x14149190)
#define CLASS_1_54D742DFC0CBE74F_METHOD_1_79888F670E780AFF_OFFSET UNITYSDK_OFFSET(0x14149480)
#define CLASS_1_54D742DFC0CBE74F_METHOD_1_8DA3FEE3379AFF0E_OFFSET UNITYSDK_OFFSET(0x141491E0)
#define CLASS_1_54D742DFC0CBE74F_METHOD_1_92EB806315DCB90E_OFFSET UNITYSDK_OFFSET(0x14149320)
#define CLASS_1_54D742DFC0CBE74F_SET_SLOTNUM_OFFSET UNITYSDK_OFFSET(0x141496E0)
#define CLASS_1_54D742DFC0CBE74F__CTOR_OFFSET UNITYSDK_OFFSET(0x14149710)

inline static constexpr unsigned int Class_1_54D742DFC0CBE74F_TypeDefinitionIndex = 73539;

class Class_1_54D742DFC0CBE74F : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_9E825E3D3A62B6E0*>* _BagEquipItems_k__BackingField; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_9E825E3D3A62B6E0*>* _BattleEquipItems_k__BackingField; // 0x18
	::System::UInt32 _SlotNum_k__BackingField; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_54D742DFC0CBE74F__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_00A4B38C951C5BD5(::Class_1_22B4C7CF09D1BAC1_5* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_22B4C7CF09D1BAC1_5*))((::PBYTE)hIl2Cpp + CLASS_1_54D742DFC0CBE74F_METHOD_1_00A4B38C951C5BD5_OFFSET))(this, a1);
	}

	::System::Void Method_1_6E57D3559C10FFA9(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_54D742DFC0CBE74F_METHOD_1_6E57D3559C10FFA9_OFFSET))(this, a1);
	}

	::System::Void Method_1_8DA3FEE3379AFF0E(::Class_1_D40936EF3BF54118_64* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D40936EF3BF54118_64*))((::PBYTE)hIl2Cpp + CLASS_1_54D742DFC0CBE74F_METHOD_1_8DA3FEE3379AFF0E_OFFSET))(this, a1);
	}

	::System::Void Method_1_92EB806315DCB90E(::Class_1_D17272E82AE804C2_681* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_681*))((::PBYTE)hIl2Cpp + CLASS_1_54D742DFC0CBE74F_METHOD_1_92EB806315DCB90E_OFFSET))(this, a1);
	}

	::System::Void Method_1_5C28A8AFAFD92C5B(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_54D742DFC0CBE74F_METHOD_1_5C28A8AFAFD92C5B_OFFSET))(this, a1);
	}

	::Class_1_9E825E3D3A62B6E0* Method_1_79888F670E780AFF(::System::UInt32 a1)
	{
		return ((::Class_1_9E825E3D3A62B6E0*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_54D742DFC0CBE74F_METHOD_1_79888F670E780AFF_OFFSET))(this, a1);
	}

	::System::UInt32 get_SlotNum()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_54D742DFC0CBE74F_GET_SLOTNUM_OFFSET))(this);
	}

	::System::Void set_SlotNum(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_54D742DFC0CBE74F_SET_SLOTNUM_OFFSET))(this, a1);
	}

	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_9E825E3D3A62B6E0*>* get_BattleEquipItems()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_9E825E3D3A62B6E0*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_54D742DFC0CBE74F_GET_BATTLEEQUIPITEMS_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_9E825E3D3A62B6E0*>* get_BagEquipItems()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_9E825E3D3A62B6E0*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_54D742DFC0CBE74F_GET_BAGEQUIPITEMS_OFFSET))(this);
	}
};
