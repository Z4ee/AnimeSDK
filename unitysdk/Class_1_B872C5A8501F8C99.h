#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_5A58B1D113B4F87B;
class Class_1_7FF19F6206AF6DD7_95;
class Class_1_C3162D2F7EA647B9;
class Class_1_C9DFE5EE7107C629_17;
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Proto { class ItemCost; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_B872C5A8501F8C99_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15F0AFC0)
#define CLASS_1_B872C5A8501F8C99_GET_CANROLL_OFFSET UNITYSDK_OFFSET(0x15F0B820)
#define CLASS_1_B872C5A8501F8C99_GET_FORCESELECTBUFFID_OFFSET UNITYSDK_OFFSET(0x15F0B9D0)
#define CLASS_1_B872C5A8501F8C99_GET_ROLLBUFFCOSTS_OFFSET UNITYSDK_OFFSET(0x15F0B880)
#define CLASS_1_B872C5A8501F8C99_GET_ROLLBUFFMAXTIMES_OFFSET UNITYSDK_OFFSET(0x15F0B860)
#define CLASS_1_B872C5A8501F8C99_GET_ROLLBUFFTIMES_OFFSET UNITYSDK_OFFSET(0x15F0B840)
#define CLASS_1_B872C5A8501F8C99_GET_SELECTBUFFSOURCECURCOUNT_OFFSET UNITYSDK_OFFSET(0x15F0B7E0)
#define CLASS_1_B872C5A8501F8C99_GET_SELECTBUFFSOURCEHINTID_OFFSET UNITYSDK_OFFSET(0x15F0B7C0)
#define CLASS_1_B872C5A8501F8C99_GET_SELECTBUFFSOURCETOTALCOUNT_OFFSET UNITYSDK_OFFSET(0x15F0B800)
#define CLASS_1_B872C5A8501F8C99_GET_SELECTBUFFS_OFFSET UNITYSDK_OFFSET(0x15F0B7A0)
#define CLASS_1_B872C5A8501F8C99_GET_SELECTFIRSTBUFFTYPELIST_OFFSET UNITYSDK_OFFSET(0x15F0B8A0)
#define CLASS_1_B872C5A8501F8C99_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x15F0B980)
#define CLASS_1_B872C5A8501F8C99_METHOD_1_6E57D3559C10FFA9_OFFSET UNITYSDK_OFFSET(0x15F0B9F0)
#define CLASS_1_B872C5A8501F8C99_METHOD_1_7CBC6699BC67CE6E_OFFSET UNITYSDK_OFFSET(0x15F0B150)
#define CLASS_1_B872C5A8501F8C99_METHOD_1_7E950285BD871BF3_OFFSET UNITYSDK_OFFSET(0x15F0B290)
#define CLASS_1_B872C5A8501F8C99_METHOD_1_842446766C7EDE9B_OFFSET UNITYSDK_OFFSET(0x15F0B510)
#define CLASS_1_B872C5A8501F8C99_METHOD_1_90D2A480F48CF56F_OFFSET UNITYSDK_OFFSET(0x15F0B2F0)
#define CLASS_1_B872C5A8501F8C99_METHOD_1_BAE66D5654320160_OFFSET UNITYSDK_OFFSET(0x15F0B570)
#define CLASS_1_B872C5A8501F8C99_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x15F0B100)
#define CLASS_1_B872C5A8501F8C99_METHOD_1_CFE6FB160FFF5938_OFFSET UNITYSDK_OFFSET(0x15F0B710)
#define CLASS_1_B872C5A8501F8C99_METHOD_1_F42298380B1E0FA3_OFFSET UNITYSDK_OFFSET(0x15F0B8C0)
#define CLASS_1_B872C5A8501F8C99_SET_CANROLL_OFFSET UNITYSDK_OFFSET(0x15F0B830)
#define CLASS_1_B872C5A8501F8C99_SET_FORCESELECTBUFFID_OFFSET UNITYSDK_OFFSET(0x15F0B9E0)
#define CLASS_1_B872C5A8501F8C99_SET_ROLLBUFFCOSTS_OFFSET UNITYSDK_OFFSET(0x15F0B890)
#define CLASS_1_B872C5A8501F8C99_SET_ROLLBUFFMAXTIMES_OFFSET UNITYSDK_OFFSET(0x15F0B870)
#define CLASS_1_B872C5A8501F8C99_SET_ROLLBUFFTIMES_OFFSET UNITYSDK_OFFSET(0x15F0B850)
#define CLASS_1_B872C5A8501F8C99_SET_SELECTBUFFSOURCECURCOUNT_OFFSET UNITYSDK_OFFSET(0x15F0B7F0)
#define CLASS_1_B872C5A8501F8C99_SET_SELECTBUFFSOURCEHINTID_OFFSET UNITYSDK_OFFSET(0x15F0B7D0)
#define CLASS_1_B872C5A8501F8C99_SET_SELECTBUFFSOURCETOTALCOUNT_OFFSET UNITYSDK_OFFSET(0x15F0B810)
#define CLASS_1_B872C5A8501F8C99_SET_SELECTBUFFS_OFFSET UNITYSDK_OFFSET(0x15F0B7B0)
#define CLASS_1_B872C5A8501F8C99_SET_SELECTFIRSTBUFFTYPELIST_OFFSET UNITYSDK_OFFSET(0x15F0B8B0)
#define CLASS_1_B872C5A8501F8C99__CTOR_OFFSET UNITYSDK_OFFSET(0x15F0AFA0)

inline static constexpr unsigned int Class_1_B872C5A8501F8C99_TypeDefinitionIndex = 67202;

class Class_1_B872C5A8501F8C99 : public ::System::Object
{
public:
	::Class_1_5A58B1D113B4F87B* _SelectBuffs_k__BackingField; // 0x10
	::System::Collections::Generic::List_1<::Proto::ItemCost*>* _RollBuffCosts_k__BackingField; // 0x18
	::System::Collections::Generic::List_1<::System::UInt32>* _SelectFirstBuffTypeList_k__BackingField; // 0x20
	::System::UInt32 _RollBuffMaxTimes_k__BackingField; // 0x28
	::System::UInt32 _SelectBuffSourceCurCount_k__BackingField; // 0x2C
	::System::UInt32 _SelectBuffSourceHintID_k__BackingField; // 0x30
	::System::UInt32 _RollBuffTimes_k__BackingField; // 0x34
	::System::Boolean _CanRoll_k__BackingField; // 0x38
	::System::UInt32 _SelectBuffSourceTotalCount_k__BackingField; // 0x3C
	::System::UInt32 _ForceSelectBuffID_k__BackingField; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B872C5A8501F8C99__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B872C5A8501F8C99_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_7CBC6699BC67CE6E(::Class_1_C9DFE5EE7107C629_17* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C9DFE5EE7107C629_17*))((::PBYTE)hIl2Cpp + CLASS_1_B872C5A8501F8C99_METHOD_1_7CBC6699BC67CE6E_OFFSET))(this, a1);
	}

	::System::Void Method_1_BAE66D5654320160(::Class_1_7FF19F6206AF6DD7_95* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_7FF19F6206AF6DD7_95*))((::PBYTE)hIl2Cpp + CLASS_1_B872C5A8501F8C99_METHOD_1_BAE66D5654320160_OFFSET))(this, a1);
	}

	::System::Void Method_1_CFE6FB160FFF5938()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B872C5A8501F8C99_METHOD_1_CFE6FB160FFF5938_OFFSET))(this);
	}

	::System::Void Method_1_7E950285BD871BF3(::System::Boolean a1, ::System::UInt32 a2, ::System::UInt32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_B872C5A8501F8C99_METHOD_1_7E950285BD871BF3_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_90D2A480F48CF56F(::Class_1_C3162D2F7EA647B9* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C3162D2F7EA647B9*))((::PBYTE)hIl2Cpp + CLASS_1_B872C5A8501F8C99_METHOD_1_90D2A480F48CF56F_OFFSET))(this, a1);
	}

	::System::Void Method_1_842446766C7EDE9B(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_B872C5A8501F8C99_METHOD_1_842446766C7EDE9B_OFFSET))(this, a1, a2, a3);
	}

	::Class_1_5A58B1D113B4F87B* get_SelectBuffs()
	{
		return ((::Class_1_5A58B1D113B4F87B*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B872C5A8501F8C99_GET_SELECTBUFFS_OFFSET))(this);
	}

	::System::Void set_SelectBuffs(::Class_1_5A58B1D113B4F87B* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5A58B1D113B4F87B*))((::PBYTE)hIl2Cpp + CLASS_1_B872C5A8501F8C99_SET_SELECTBUFFS_OFFSET))(this, a1);
	}

	::System::UInt32 get_SelectBuffSourceHintID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B872C5A8501F8C99_GET_SELECTBUFFSOURCEHINTID_OFFSET))(this);
	}

	::System::Void set_SelectBuffSourceHintID(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_B872C5A8501F8C99_SET_SELECTBUFFSOURCEHINTID_OFFSET))(this, a1);
	}

	::System::UInt32 get_SelectBuffSourceCurCount()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B872C5A8501F8C99_GET_SELECTBUFFSOURCECURCOUNT_OFFSET))(this);
	}

	::System::Void set_SelectBuffSourceCurCount(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_B872C5A8501F8C99_SET_SELECTBUFFSOURCECURCOUNT_OFFSET))(this, a1);
	}

	::System::UInt32 get_SelectBuffSourceTotalCount()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B872C5A8501F8C99_GET_SELECTBUFFSOURCETOTALCOUNT_OFFSET))(this);
	}

	::System::Void set_SelectBuffSourceTotalCount(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_B872C5A8501F8C99_SET_SELECTBUFFSOURCETOTALCOUNT_OFFSET))(this, a1);
	}

	::System::Boolean get_CanRoll()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B872C5A8501F8C99_GET_CANROLL_OFFSET))(this);
	}

	::System::Void set_CanRoll(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_B872C5A8501F8C99_SET_CANROLL_OFFSET))(this, a1);
	}

	::System::UInt32 get_RollBuffTimes()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B872C5A8501F8C99_GET_ROLLBUFFTIMES_OFFSET))(this);
	}

	::System::Void set_RollBuffTimes(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_B872C5A8501F8C99_SET_ROLLBUFFTIMES_OFFSET))(this, a1);
	}

	::System::UInt32 get_RollBuffMaxTimes()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B872C5A8501F8C99_GET_ROLLBUFFMAXTIMES_OFFSET))(this);
	}

	::System::Void set_RollBuffMaxTimes(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_B872C5A8501F8C99_SET_ROLLBUFFMAXTIMES_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::Proto::ItemCost*>* get_RollBuffCosts()
	{
		return ((::System::Collections::Generic::List_1<::Proto::ItemCost*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B872C5A8501F8C99_GET_ROLLBUFFCOSTS_OFFSET))(this);
	}

	::System::Void set_RollBuffCosts(::System::Collections::Generic::List_1<::Proto::ItemCost*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Proto::ItemCost*>*))((::PBYTE)hIl2Cpp + CLASS_1_B872C5A8501F8C99_SET_ROLLBUFFCOSTS_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::System::UInt32>* get_SelectFirstBuffTypeList()
	{
		return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B872C5A8501F8C99_GET_SELECTFIRSTBUFFTYPELIST_OFFSET))(this);
	}

	::System::Void set_SelectFirstBuffTypeList(::System::Collections::Generic::List_1<::System::UInt32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_B872C5A8501F8C99_SET_SELECTFIRSTBUFFTYPELIST_OFFSET))(this, a1);
	}

	::System::Void Method_1_F42298380B1E0FA3(::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_B872C5A8501F8C99_METHOD_1_F42298380B1E0FA3_OFFSET))(this, a1);
	}

	::System::Void Method_1_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B872C5A8501F8C99_METHOD_1_4343F372F34C05BF_OFFSET))(this);
	}

	::System::UInt32 get_ForceSelectBuffID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B872C5A8501F8C99_GET_FORCESELECTBUFFID_OFFSET))(this);
	}

	::System::Void set_ForceSelectBuffID(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_B872C5A8501F8C99_SET_FORCESELECTBUFFID_OFFSET))(this, a1);
	}

	::System::Void Method_1_6E57D3559C10FFA9(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_B872C5A8501F8C99_METHOD_1_6E57D3559C10FFA9_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B872C5A8501F8C99_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}
};
