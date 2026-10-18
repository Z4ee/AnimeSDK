#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_1596;
class Class_1_45BB92167AED63A0_18;
class Class_1_716D4EDAC9A9FD0E;
class Class_1_97E659ED8D5D259C_23;
class Class_1_B1410BF5E86A477D_1;
class Class_1_D17272E82AE804C2_207;
class Class_1_EA3716A61EF929AB;
class Class_1_F0E9DD085BA6740E_1;
class Class_1_F963C9FA5FC80637;
namespace RPG::Client::Promises { class IPromise; }
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define CLASS_1_DFB5A9B3A6CD66C9_ADD_ONCHANGED_OFFSET UNITYSDK_OFFSET(0x158A7400)
#define CLASS_1_DFB5A9B3A6CD66C9_ADD_ONPLANCHANGED_OFFSET UNITYSDK_OFFSET(0x158A7330)
#define CLASS_1_DFB5A9B3A6CD66C9_GET_PROGRESS_OFFSET UNITYSDK_OFFSET(0x158A73F0)
#define CLASS_1_DFB5A9B3A6CD66C9_METHOD_1_0AB718BEE9EA06D7_OFFSET UNITYSDK_OFFSET(0x158A79F0)
#define CLASS_1_DFB5A9B3A6CD66C9_METHOD_1_5110E061C0DF5692_OFFSET UNITYSDK_OFFSET(0x158A7780)
#define CLASS_1_DFB5A9B3A6CD66C9_METHOD_1_9636FCCD0F2A7398_OFFSET UNITYSDK_OFFSET(0x158A7230)
#define CLASS_1_DFB5A9B3A6CD66C9_METHOD_1_9EFCD41280934CE0_1_OFFSET UNITYSDK_OFFSET(0x158A7960)
#define CLASS_1_DFB5A9B3A6CD66C9_METHOD_1_9EFCD41280934CE0_OFFSET UNITYSDK_OFFSET(0x158A7520)
#define CLASS_1_DFB5A9B3A6CD66C9_METHOD_1_CF467815C3AD4755_OFFSET UNITYSDK_OFFSET(0x158A7A70)
#define CLASS_1_DFB5A9B3A6CD66C9_METHOD_1_DCD7862A729EBDDD_OFFSET UNITYSDK_OFFSET(0x158A75B0)
#define CLASS_1_DFB5A9B3A6CD66C9_METHOD_1_E73A89A53EDEB864_OFFSET UNITYSDK_OFFSET(0x158A78D0)
#define CLASS_1_DFB5A9B3A6CD66C9_METHOD_1_F8B73ECE7F883AC1_OFFSET UNITYSDK_OFFSET(0x158A71F0)
#define CLASS_1_DFB5A9B3A6CD66C9_REMOVE_ONCHANGED_OFFSET UNITYSDK_OFFSET(0x158A7460)
#define CLASS_1_DFB5A9B3A6CD66C9_REMOVE_ONPLANCHANGED_OFFSET UNITYSDK_OFFSET(0x158A7390)
#define CLASS_1_DFB5A9B3A6CD66C9__CTOR_OFFSET UNITYSDK_OFFSET(0x158A74C0)

inline static constexpr unsigned int Class_1_DFB5A9B3A6CD66C9_TypeDefinitionIndex = 81474;

class Class_1_DFB5A9B3A6CD66C9 : public ::System::Object
{
public:
	::System::Action* OnPlanChanged; // 0x10
	::Class_1_716D4EDAC9A9FD0E* _Progress_k__BackingField; // 0x18
	::System::Action* OnChanged; // 0x20
	::Class_1_F963C9FA5FC80637* JEDPHGCLJBL; // 0x28
	::Class_0_16E4307DCC419505_1596* ECKBBFILCDB; // 0x30

	::System::Void _ctor(::System::Int32 a1, ::Class_0_16E4307DCC419505_1596* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::Class_0_16E4307DCC419505_1596*))((::PBYTE)hIl2Cpp + CLASS_1_DFB5A9B3A6CD66C9__CTOR_OFFSET))(this, a1, a2);
	}

	::Class_1_F963C9FA5FC80637* Method_1_F8B73ECE7F883AC1()
	{
		return ((::Class_1_F963C9FA5FC80637*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DFB5A9B3A6CD66C9_METHOD_1_F8B73ECE7F883AC1_OFFSET))(this);
	}

	::System::Void Method_1_9636FCCD0F2A7398(::Class_1_F963C9FA5FC80637* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_F963C9FA5FC80637*))((::PBYTE)hIl2Cpp + CLASS_1_DFB5A9B3A6CD66C9_METHOD_1_9636FCCD0F2A7398_OFFSET))(this, a1);
	}

	::System::Void add_OnPlanChanged(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_DFB5A9B3A6CD66C9_ADD_ONPLANCHANGED_OFFSET))(this, a1);
	}

	::System::Void remove_OnPlanChanged(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_DFB5A9B3A6CD66C9_REMOVE_ONPLANCHANGED_OFFSET))(this, a1);
	}

	::Class_1_716D4EDAC9A9FD0E* get_Progress()
	{
		return ((::Class_1_716D4EDAC9A9FD0E*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DFB5A9B3A6CD66C9_GET_PROGRESS_OFFSET))(this);
	}

	::System::Void add_OnChanged(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_DFB5A9B3A6CD66C9_ADD_ONCHANGED_OFFSET))(this, a1);
	}

	::System::Void remove_OnChanged(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_DFB5A9B3A6CD66C9_REMOVE_ONCHANGED_OFFSET))(this, a1);
	}

	::System::Void Method_1_9EFCD41280934CE0(::Class_1_97E659ED8D5D259C_23* a1, ::System::Collections::Generic::IReadOnlyList_1<::Class_1_D17272E82AE804C2_207*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_97E659ED8D5D259C_23*, ::System::Collections::Generic::IReadOnlyList_1<::Class_1_D17272E82AE804C2_207*>*))((::PBYTE)hIl2Cpp + CLASS_1_DFB5A9B3A6CD66C9_METHOD_1_9EFCD41280934CE0_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_DCD7862A729EBDDD(::Class_1_97E659ED8D5D259C_23* a1, ::System::Collections::Generic::IEnumerable_1<::Class_1_F0E9DD085BA6740E_1*>* a2, ::System::Collections::Generic::IReadOnlyList_1<::Class_1_EA3716A61EF929AB*>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_97E659ED8D5D259C_23*, ::System::Collections::Generic::IEnumerable_1<::Class_1_F0E9DD085BA6740E_1*>*, ::System::Collections::Generic::IReadOnlyList_1<::Class_1_EA3716A61EF929AB*>*))((::PBYTE)hIl2Cpp + CLASS_1_DFB5A9B3A6CD66C9_METHOD_1_DCD7862A729EBDDD_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_5110E061C0DF5692(::Class_1_F963C9FA5FC80637* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_F963C9FA5FC80637*))((::PBYTE)hIl2Cpp + CLASS_1_DFB5A9B3A6CD66C9_METHOD_1_5110E061C0DF5692_OFFSET))(this, a1);
	}

	::System::Void Method_1_E73A89A53EDEB864(::Class_1_97E659ED8D5D259C_23* a1, ::Class_1_B1410BF5E86A477D_1* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_97E659ED8D5D259C_23*, ::Class_1_B1410BF5E86A477D_1*))((::PBYTE)hIl2Cpp + CLASS_1_DFB5A9B3A6CD66C9_METHOD_1_E73A89A53EDEB864_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_9EFCD41280934CE0_1(::Class_1_97E659ED8D5D259C_23* a1, ::System::Collections::Generic::IReadOnlyList_1<::Class_1_EA3716A61EF929AB*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_97E659ED8D5D259C_23*, ::System::Collections::Generic::IReadOnlyList_1<::Class_1_EA3716A61EF929AB*>*))((::PBYTE)hIl2Cpp + CLASS_1_DFB5A9B3A6CD66C9_METHOD_1_9EFCD41280934CE0_1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_0AB718BEE9EA06D7(::Class_1_45BB92167AED63A0_18* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_45BB92167AED63A0_18*))((::PBYTE)hIl2Cpp + CLASS_1_DFB5A9B3A6CD66C9_METHOD_1_0AB718BEE9EA06D7_OFFSET))(this, a1);
	}

	::RPG::Client::Promises::IPromise* Method_1_CF467815C3AD4755(::Class_1_F963C9FA5FC80637* a1)
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::Class_1_F963C9FA5FC80637*))((::PBYTE)hIl2Cpp + CLASS_1_DFB5A9B3A6CD66C9_METHOD_1_CF467815C3AD4755_OFFSET))(this, a1);
	}
};
