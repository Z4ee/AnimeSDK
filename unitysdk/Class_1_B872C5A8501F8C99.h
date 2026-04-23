#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_14E02E1F6D70E487_10;
class Class_1_455008579EB95638_89;
class Class_1_477DBC7B6CD0F332;
class Class_1_C74059A83466814F;
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Proto { class ItemCost; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_B872C5A8501F8C99_DISPOSE_OFFSET UNITYSDK_OFFSET(0x98C8FF0)
#define CLASS_1_B872C5A8501F8C99_GET_CANROLL_OFFSET UNITYSDK_OFFSET(0x98C9780)
#define CLASS_1_B872C5A8501F8C99_GET_FORCESELECTBUFFID_OFFSET UNITYSDK_OFFSET(0x98C9970)
#define CLASS_1_B872C5A8501F8C99_GET_ROLLBUFFCOSTS_OFFSET UNITYSDK_OFFSET(0x98C97E0)
#define CLASS_1_B872C5A8501F8C99_GET_ROLLBUFFMAXTIMES_OFFSET UNITYSDK_OFFSET(0x98C97C0)
#define CLASS_1_B872C5A8501F8C99_GET_ROLLBUFFTIMES_OFFSET UNITYSDK_OFFSET(0x98C97A0)
#define CLASS_1_B872C5A8501F8C99_GET_SELECTBUFFSOURCECURCOUNT_OFFSET UNITYSDK_OFFSET(0x98C9740)
#define CLASS_1_B872C5A8501F8C99_GET_SELECTBUFFSOURCEHINTID_OFFSET UNITYSDK_OFFSET(0x98C9720)
#define CLASS_1_B872C5A8501F8C99_GET_SELECTBUFFSOURCETOTALCOUNT_OFFSET UNITYSDK_OFFSET(0x98C9760)
#define CLASS_1_B872C5A8501F8C99_GET_SELECTBUFFS_OFFSET UNITYSDK_OFFSET(0x98C9700)
#define CLASS_1_B872C5A8501F8C99_GET_SELECTFIRSTBUFFTYPELIST_OFFSET UNITYSDK_OFFSET(0x98C9800)
#define CLASS_1_B872C5A8501F8C99_METHOD_1_19894139BD3115FC_OFFSET UNITYSDK_OFFSET(0x98C9330)
#define CLASS_1_B872C5A8501F8C99_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x98C9670)
#define CLASS_1_B872C5A8501F8C99_METHOD_1_6E57D3559C10FFA9_OFFSET UNITYSDK_OFFSET(0x98C9990)
#define CLASS_1_B872C5A8501F8C99_METHOD_1_7CBC6699BC67CE6E_OFFSET UNITYSDK_OFFSET(0x98C9190)
#define CLASS_1_B872C5A8501F8C99_METHOD_1_7E950285BD871BF3_OFFSET UNITYSDK_OFFSET(0x98C92D0)
#define CLASS_1_B872C5A8501F8C99_METHOD_1_842446766C7EDE9B_OFFSET UNITYSDK_OFFSET(0x98C9470)
#define CLASS_1_B872C5A8501F8C99_METHOD_1_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x98C9900)
#define CLASS_1_B872C5A8501F8C99_METHOD_1_BAE66D5654320160_OFFSET UNITYSDK_OFFSET(0x98C94D0)
#define CLASS_1_B872C5A8501F8C99_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x98C9140)
#define CLASS_1_B872C5A8501F8C99_METHOD_1_D22235F5FA0589E4_OFFSET UNITYSDK_OFFSET(0x98C9820)
#define CLASS_1_B872C5A8501F8C99_SET_CANROLL_OFFSET UNITYSDK_OFFSET(0x98C9790)
#define CLASS_1_B872C5A8501F8C99_SET_FORCESELECTBUFFID_OFFSET UNITYSDK_OFFSET(0x98C9980)
#define CLASS_1_B872C5A8501F8C99_SET_ROLLBUFFCOSTS_OFFSET UNITYSDK_OFFSET(0x98C97F0)
#define CLASS_1_B872C5A8501F8C99_SET_ROLLBUFFMAXTIMES_OFFSET UNITYSDK_OFFSET(0x98C97D0)
#define CLASS_1_B872C5A8501F8C99_SET_ROLLBUFFTIMES_OFFSET UNITYSDK_OFFSET(0x98C97B0)
#define CLASS_1_B872C5A8501F8C99_SET_SELECTBUFFSOURCECURCOUNT_OFFSET UNITYSDK_OFFSET(0x98C9750)
#define CLASS_1_B872C5A8501F8C99_SET_SELECTBUFFSOURCEHINTID_OFFSET UNITYSDK_OFFSET(0x98C9730)
#define CLASS_1_B872C5A8501F8C99_SET_SELECTBUFFSOURCETOTALCOUNT_OFFSET UNITYSDK_OFFSET(0x98C9770)
#define CLASS_1_B872C5A8501F8C99_SET_SELECTBUFFS_OFFSET UNITYSDK_OFFSET(0x98C9710)
#define CLASS_1_B872C5A8501F8C99_SET_SELECTFIRSTBUFFTYPELIST_OFFSET UNITYSDK_OFFSET(0x98C9810)
#define CLASS_1_B872C5A8501F8C99__CTOR_OFFSET UNITYSDK_OFFSET(0x98C8FD0)

inline static constexpr unsigned int Class_1_B872C5A8501F8C99_TypeDefinitionIndex = 61905;

class Class_1_B872C5A8501F8C99 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::UInt32>* _SelectFirstBuffTypeList_k__BackingField; // 0x10
	::System::Collections::Generic::List_1<::Proto::ItemCost*>* _RollBuffCosts_k__BackingField; // 0x18
	::Class_1_477DBC7B6CD0F332* _SelectBuffs_k__BackingField; // 0x20
	::System::UInt32 _RollBuffTimes_k__BackingField; // 0x28
	::System::Boolean _CanRoll_k__BackingField; // 0x2C
	::System::UInt32 _SelectBuffSourceCurCount_k__BackingField; // 0x30
	::System::UInt32 _SelectBuffSourceHintID_k__BackingField; // 0x34
	::System::UInt32 _RollBuffMaxTimes_k__BackingField; // 0x38
	::System::UInt32 _ForceSelectBuffID_k__BackingField; // 0x3C
	::System::UInt32 _SelectBuffSourceTotalCount_k__BackingField; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B872C5A8501F8C99__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B872C5A8501F8C99_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_7CBC6699BC67CE6E(::Class_1_14E02E1F6D70E487_10* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_14E02E1F6D70E487_10*))((::PBYTE)hIl2Cpp + CLASS_1_B872C5A8501F8C99_METHOD_1_7CBC6699BC67CE6E_OFFSET))(this, a1);
	}

	::System::Void Method_1_BAE66D5654320160(::Class_1_455008579EB95638_89* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_455008579EB95638_89*))((::PBYTE)hIl2Cpp + CLASS_1_B872C5A8501F8C99_METHOD_1_BAE66D5654320160_OFFSET))(this, a1);
	}

	::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B872C5A8501F8C99_METHOD_1_30D1209326FA87FC_OFFSET))(this);
	}

	::System::Void Method_1_7E950285BD871BF3(::System::Boolean a1, ::System::UInt32 a2, ::System::UInt32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_B872C5A8501F8C99_METHOD_1_7E950285BD871BF3_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_19894139BD3115FC(::Class_1_C74059A83466814F* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C74059A83466814F*))((::PBYTE)hIl2Cpp + CLASS_1_B872C5A8501F8C99_METHOD_1_19894139BD3115FC_OFFSET))(this, a1);
	}

	::System::Void Method_1_842446766C7EDE9B(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_B872C5A8501F8C99_METHOD_1_842446766C7EDE9B_OFFSET))(this, a1, a2, a3);
	}

	::Class_1_477DBC7B6CD0F332* get_SelectBuffs()
	{
		return ((::Class_1_477DBC7B6CD0F332*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B872C5A8501F8C99_GET_SELECTBUFFS_OFFSET))(this);
	}

	::System::Void set_SelectBuffs(::Class_1_477DBC7B6CD0F332* value)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_477DBC7B6CD0F332*))((::PBYTE)hIl2Cpp + CLASS_1_B872C5A8501F8C99_SET_SELECTBUFFS_OFFSET))(this, value);
	}

	::System::UInt32 get_SelectBuffSourceHintID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B872C5A8501F8C99_GET_SELECTBUFFSOURCEHINTID_OFFSET))(this);
	}

	::System::Void set_SelectBuffSourceHintID(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_B872C5A8501F8C99_SET_SELECTBUFFSOURCEHINTID_OFFSET))(this, value);
	}

	::System::UInt32 get_SelectBuffSourceCurCount()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B872C5A8501F8C99_GET_SELECTBUFFSOURCECURCOUNT_OFFSET))(this);
	}

	::System::Void set_SelectBuffSourceCurCount(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_B872C5A8501F8C99_SET_SELECTBUFFSOURCECURCOUNT_OFFSET))(this, value);
	}

	::System::UInt32 get_SelectBuffSourceTotalCount()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B872C5A8501F8C99_GET_SELECTBUFFSOURCETOTALCOUNT_OFFSET))(this);
	}

	::System::Void set_SelectBuffSourceTotalCount(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_B872C5A8501F8C99_SET_SELECTBUFFSOURCETOTALCOUNT_OFFSET))(this, value);
	}

	::System::Boolean get_CanRoll()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B872C5A8501F8C99_GET_CANROLL_OFFSET))(this);
	}

	::System::Void set_CanRoll(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_B872C5A8501F8C99_SET_CANROLL_OFFSET))(this, value);
	}

	::System::UInt32 get_RollBuffTimes()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B872C5A8501F8C99_GET_ROLLBUFFTIMES_OFFSET))(this);
	}

	::System::Void set_RollBuffTimes(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_B872C5A8501F8C99_SET_ROLLBUFFTIMES_OFFSET))(this, value);
	}

	::System::UInt32 get_RollBuffMaxTimes()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B872C5A8501F8C99_GET_ROLLBUFFMAXTIMES_OFFSET))(this);
	}

	::System::Void set_RollBuffMaxTimes(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_B872C5A8501F8C99_SET_ROLLBUFFMAXTIMES_OFFSET))(this, value);
	}

	::System::Collections::Generic::List_1<::Proto::ItemCost*>* get_RollBuffCosts()
	{
		return ((::System::Collections::Generic::List_1<::Proto::ItemCost*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B872C5A8501F8C99_GET_ROLLBUFFCOSTS_OFFSET))(this);
	}

	::System::Void set_RollBuffCosts(::System::Collections::Generic::List_1<::Proto::ItemCost*>* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Proto::ItemCost*>*))((::PBYTE)hIl2Cpp + CLASS_1_B872C5A8501F8C99_SET_ROLLBUFFCOSTS_OFFSET))(this, value);
	}

	::System::Collections::Generic::List_1<::System::UInt32>* get_SelectFirstBuffTypeList()
	{
		return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B872C5A8501F8C99_GET_SELECTFIRSTBUFFTYPELIST_OFFSET))(this);
	}

	::System::Void set_SelectFirstBuffTypeList(::System::Collections::Generic::List_1<::System::UInt32>* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_B872C5A8501F8C99_SET_SELECTFIRSTBUFFTYPELIST_OFFSET))(this, value);
	}

	::System::Void Method_1_D22235F5FA0589E4(::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_B872C5A8501F8C99_METHOD_1_D22235F5FA0589E4_OFFSET))(this, a1);
	}

	::System::Void Method_1_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B872C5A8501F8C99_METHOD_1_9681042564541CD6_OFFSET))(this);
	}

	::System::UInt32 get_ForceSelectBuffID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B872C5A8501F8C99_GET_FORCESELECTBUFFID_OFFSET))(this);
	}

	::System::Void set_ForceSelectBuffID(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_B872C5A8501F8C99_SET_FORCESELECTBUFFID_OFFSET))(this, value);
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
