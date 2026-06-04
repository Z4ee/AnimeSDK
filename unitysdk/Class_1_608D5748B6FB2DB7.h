#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_1218;
class Class_1_45BB92167AED63A0_15;
class Class_1_716D4EDAC9A9FD0E;
class Class_1_7F6A638FBAAEC90B;
class Class_1_97E659ED8D5D259C_20;
class Class_1_A16A135FC5A0DDB9;
class Class_1_B1410BF5E86A477D;
class Class_1_D17272E82AE804C2_161;
class Class_1_F963C9FA5FC80637;
namespace RPG::Client::Promises { class IPromise; }
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define CLASS_1_608D5748B6FB2DB7_ADD_ONCHANGED_OFFSET UNITYSDK_OFFSET(0x136B0A90)
#define CLASS_1_608D5748B6FB2DB7_ADD_ONPLANCHANGED_OFFSET UNITYSDK_OFFSET(0x136B09C0)
#define CLASS_1_608D5748B6FB2DB7_GET_PROGRESS_OFFSET UNITYSDK_OFFSET(0x136B0A80)
#define CLASS_1_608D5748B6FB2DB7_METHOD_1_0AB718BEE9EA06D7_OFFSET UNITYSDK_OFFSET(0x136B0F90)
#define CLASS_1_608D5748B6FB2DB7_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x136B0920)
#define CLASS_1_608D5748B6FB2DB7_METHOD_1_5DB932E16B11C468_OFFSET UNITYSDK_OFFSET(0x136B0C40)
#define CLASS_1_608D5748B6FB2DB7_METHOD_1_70603E2AE56EBD6B_OFFSET UNITYSDK_OFFSET(0x136B0DA0)
#define CLASS_1_608D5748B6FB2DB7_METHOD_1_9EFCD41280934CE0_1_OFFSET UNITYSDK_OFFSET(0x136B0F00)
#define CLASS_1_608D5748B6FB2DB7_METHOD_1_9EFCD41280934CE0_OFFSET UNITYSDK_OFFSET(0x136B0BB0)
#define CLASS_1_608D5748B6FB2DB7_METHOD_1_CF467815C3AD4755_OFFSET UNITYSDK_OFFSET(0x136B1010)
#define CLASS_1_608D5748B6FB2DB7_METHOD_1_CFC95121222309BD_OFFSET UNITYSDK_OFFSET(0x136B0930)
#define CLASS_1_608D5748B6FB2DB7_METHOD_1_E73A89A53EDEB864_OFFSET UNITYSDK_OFFSET(0x136B0E70)
#define CLASS_1_608D5748B6FB2DB7_REMOVE_ONCHANGED_OFFSET UNITYSDK_OFFSET(0x136B0AF0)
#define CLASS_1_608D5748B6FB2DB7_REMOVE_ONPLANCHANGED_OFFSET UNITYSDK_OFFSET(0x136B0A20)
#define CLASS_1_608D5748B6FB2DB7__CTOR_OFFSET UNITYSDK_OFFSET(0x136B0B50)

inline static constexpr unsigned int Class_1_608D5748B6FB2DB7_TypeDefinitionIndex = 74129;

class Class_1_608D5748B6FB2DB7 : public ::System::Object
{
public:
	::Class_1_716D4EDAC9A9FD0E* _Progress_k__BackingField; // 0x10
	::System::Action* OnPlanChanged; // 0x18
	::System::Action* OnChanged; // 0x20
	::Class_0_16E4307DCC419505_1218* Field_1_3; // 0x28
	::Class_1_F963C9FA5FC80637* Field_1_4; // 0x30

	::System::Void _ctor(::System::Int32 a1, ::Class_0_16E4307DCC419505_1218* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::Class_0_16E4307DCC419505_1218*))((::PBYTE)hIl2Cpp + CLASS_1_608D5748B6FB2DB7__CTOR_OFFSET))(this, a1, a2);
	}

	::Class_1_F963C9FA5FC80637* Method_1_24748FC20F375725()
	{
		return ((::Class_1_F963C9FA5FC80637*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_608D5748B6FB2DB7_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_CFC95121222309BD(::Class_1_F963C9FA5FC80637* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_F963C9FA5FC80637*))((::PBYTE)hIl2Cpp + CLASS_1_608D5748B6FB2DB7_METHOD_1_CFC95121222309BD_OFFSET))(this, a1);
	}

	::System::Void add_OnPlanChanged(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_608D5748B6FB2DB7_ADD_ONPLANCHANGED_OFFSET))(this, a1);
	}

	::System::Void remove_OnPlanChanged(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_608D5748B6FB2DB7_REMOVE_ONPLANCHANGED_OFFSET))(this, a1);
	}

	::Class_1_716D4EDAC9A9FD0E* get_Progress()
	{
		return ((::Class_1_716D4EDAC9A9FD0E*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_608D5748B6FB2DB7_GET_PROGRESS_OFFSET))(this);
	}

	::System::Void add_OnChanged(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_608D5748B6FB2DB7_ADD_ONCHANGED_OFFSET))(this, a1);
	}

	::System::Void remove_OnChanged(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_608D5748B6FB2DB7_REMOVE_ONCHANGED_OFFSET))(this, a1);
	}

	::System::Void Method_1_9EFCD41280934CE0(::Class_1_97E659ED8D5D259C_20* a1, ::System::Collections::Generic::IReadOnlyList_1<::Class_1_D17272E82AE804C2_161*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_97E659ED8D5D259C_20*, ::System::Collections::Generic::IReadOnlyList_1<::Class_1_D17272E82AE804C2_161*>*))((::PBYTE)hIl2Cpp + CLASS_1_608D5748B6FB2DB7_METHOD_1_9EFCD41280934CE0_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_5DB932E16B11C468(::Class_1_97E659ED8D5D259C_20* a1, ::System::Collections::Generic::IEnumerable_1<::Class_1_7F6A638FBAAEC90B*>* a2, ::System::Collections::Generic::IReadOnlyList_1<::Class_1_A16A135FC5A0DDB9*>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_97E659ED8D5D259C_20*, ::System::Collections::Generic::IEnumerable_1<::Class_1_7F6A638FBAAEC90B*>*, ::System::Collections::Generic::IReadOnlyList_1<::Class_1_A16A135FC5A0DDB9*>*))((::PBYTE)hIl2Cpp + CLASS_1_608D5748B6FB2DB7_METHOD_1_5DB932E16B11C468_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_70603E2AE56EBD6B(::Class_1_F963C9FA5FC80637* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_F963C9FA5FC80637*))((::PBYTE)hIl2Cpp + CLASS_1_608D5748B6FB2DB7_METHOD_1_70603E2AE56EBD6B_OFFSET))(this, a1);
	}

	::System::Void Method_1_E73A89A53EDEB864(::Class_1_97E659ED8D5D259C_20* a1, ::Class_1_B1410BF5E86A477D* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_97E659ED8D5D259C_20*, ::Class_1_B1410BF5E86A477D*))((::PBYTE)hIl2Cpp + CLASS_1_608D5748B6FB2DB7_METHOD_1_E73A89A53EDEB864_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_9EFCD41280934CE0_1(::Class_1_97E659ED8D5D259C_20* a1, ::System::Collections::Generic::IReadOnlyList_1<::Class_1_A16A135FC5A0DDB9*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_97E659ED8D5D259C_20*, ::System::Collections::Generic::IReadOnlyList_1<::Class_1_A16A135FC5A0DDB9*>*))((::PBYTE)hIl2Cpp + CLASS_1_608D5748B6FB2DB7_METHOD_1_9EFCD41280934CE0_1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_0AB718BEE9EA06D7(::Class_1_45BB92167AED63A0_15* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_45BB92167AED63A0_15*))((::PBYTE)hIl2Cpp + CLASS_1_608D5748B6FB2DB7_METHOD_1_0AB718BEE9EA06D7_OFFSET))(this, a1);
	}

	::RPG::Client::Promises::IPromise* Method_1_CF467815C3AD4755(::Class_1_F963C9FA5FC80637* a1)
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::Class_1_F963C9FA5FC80637*))((::PBYTE)hIl2Cpp + CLASS_1_608D5748B6FB2DB7_METHOD_1_CF467815C3AD4755_OFFSET))(this, a1);
	}
};
