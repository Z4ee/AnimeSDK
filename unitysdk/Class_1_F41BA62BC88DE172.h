#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_F41BA62BC88DE172_Struct_2_03276480187CD220.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_400;
class Class_0_16E4307DCC419505_409;
class Class_0_16E4307DCC419505_410;
class Class_0_16E4307DCC419505_411;
class Class_0_16E4307DCC419505_412;
class Class_1_BEBC154769C05C35;
namespace System { class Action; }
namespace System { class IDisposable; }
namespace System { class String; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_F41BA62BC88DE172_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1EC61CD0)
#define CLASS_1_F41BA62BC88DE172_GET_LOGGER_OFFSET UNITYSDK_OFFSET(0x1EC5E870)
#define CLASS_1_F41BA62BC88DE172_GET_MESSENGER_OFFSET UNITYSDK_OFFSET(0x1EC5E850)
#define CLASS_1_F41BA62BC88DE172_GET_TICKDRIVER_OFFSET UNITYSDK_OFFSET(0x1EC5E890)
#define CLASS_1_F41BA62BC88DE172_METHOD_1_0CA662A0A4CAE17A_OFFSET UNITYSDK_OFFSET(0x1EC60470)
#define CLASS_1_F41BA62BC88DE172_METHOD_1_2ADB5DC98BF78E9D_OFFSET UNITYSDK_OFFSET(0x1EC5ED00)
#define CLASS_1_F41BA62BC88DE172_METHOD_1_335C3589A4AF92A4_OFFSET UNITYSDK_OFFSET(0x1EC619F0)
#define CLASS_1_F41BA62BC88DE172_METHOD_1_37D0382D0C30A2DC_OFFSET UNITYSDK_OFFSET(0x1EC5EB00)
#define CLASS_1_F41BA62BC88DE172_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x1EC5F110)
#define CLASS_1_F41BA62BC88DE172_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x1EC5EB80)
#define CLASS_1_F41BA62BC88DE172_METHOD_1_6E746B545E376638_OFFSET UNITYSDK_OFFSET(0x1EC5E8B0)
#define CLASS_1_F41BA62BC88DE172_METHOD_1_75A5EA2244F26196_OFFSET UNITYSDK_OFFSET(0x1EC609E0)
#define CLASS_1_F41BA62BC88DE172_METHOD_1_82E992240300FB30_OFFSET UNITYSDK_OFFSET(0x1EC61B90)
#define CLASS_1_F41BA62BC88DE172_METHOD_1_95A26C043D34F28B_OFFSET UNITYSDK_OFFSET(0x1EC60CA0)
#define CLASS_1_F41BA62BC88DE172_METHOD_1_C9D7A49D5572A0FA_OFFSET UNITYSDK_OFFSET(0x1EC5F160)
#define CLASS_1_F41BA62BC88DE172_METHOD_1_CA6BDDCC5F7CE11E_OFFSET UNITYSDK_OFFSET(0x1EC616F0)
#define CLASS_1_F41BA62BC88DE172_METHOD_1_D09831639F615812_OFFSET UNITYSDK_OFFSET(0x1EC5F060)
#define CLASS_1_F41BA62BC88DE172_METHOD_1_D9F4C5F2CDB3FA54_OFFSET UNITYSDK_OFFSET(0x1EC5F710)
#define CLASS_1_F41BA62BC88DE172_METHOD_1_DF193DDA46FA2549_OFFSET UNITYSDK_OFFSET(0x1EC5EBE0)
#define CLASS_1_F41BA62BC88DE172_METHOD_1_ECFF589EB1DADEC4_OFFSET UNITYSDK_OFFSET(0x1EC5FFF0)
#define CLASS_1_F41BA62BC88DE172_METHOD_1_F0BD65B017F2AC0B_OFFSET UNITYSDK_OFFSET(0x1EC5E9C0)
#define CLASS_1_F41BA62BC88DE172_METHOD_1_F451286FFA20853A_OFFSET UNITYSDK_OFFSET(0x1EC5FF00)
#define CLASS_1_F41BA62BC88DE172_METHOD_1_FB741FB5C48508A1_OFFSET UNITYSDK_OFFSET(0x1EC60F50)
#define CLASS_1_F41BA62BC88DE172_SET_LOGGER_OFFSET UNITYSDK_OFFSET(0x1EC5E880)
#define CLASS_1_F41BA62BC88DE172_SET_MESSENGER_OFFSET UNITYSDK_OFFSET(0x1EC5E860)
#define CLASS_1_F41BA62BC88DE172_SET_TICKDRIVER_OFFSET UNITYSDK_OFFSET(0x1EC5E8A0)
#define CLASS_1_F41BA62BC88DE172__CTOR_OFFSET UNITYSDK_OFFSET(0x1EC61F90)

inline static constexpr unsigned int Class_1_F41BA62BC88DE172_TypeDefinitionIndex = 44174;

class Class_1_F41BA62BC88DE172 : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_400* _Logger_k__BackingField; // 0x10
	::Class_0_16E4307DCC419505_409* _Messenger_k__BackingField; // 0x18
	::Class_0_16E4307DCC419505_411* KGFHGAKBIHL; // 0x20
	::Class_1_BEBC154769C05C35* _TickDriver_k__BackingField; // 0x28
	::System::IDisposable* PEECNACBFMH; // 0x30
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::Object*, ::System::Collections::Generic::List_1<::Class_1_F41BA62BC88DE172_Struct_2_03276480187CD220>*>*>* JKFGIFPGLFD; // 0x38
	::System::Boolean GFAMGLFOMGI; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F41BA62BC88DE172__CTOR_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_409* get_Messenger()
	{
		return ((::Class_0_16E4307DCC419505_409*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F41BA62BC88DE172_GET_MESSENGER_OFFSET))(this);
	}

	::System::Void set_Messenger(::Class_0_16E4307DCC419505_409* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_409*))((::PBYTE)hIl2Cpp + CLASS_1_F41BA62BC88DE172_SET_MESSENGER_OFFSET))(this, a1);
	}

	::Class_0_16E4307DCC419505_400* get_Logger()
	{
		return ((::Class_0_16E4307DCC419505_400*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F41BA62BC88DE172_GET_LOGGER_OFFSET))(this);
	}

	::System::Void set_Logger(::Class_0_16E4307DCC419505_400* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_400*))((::PBYTE)hIl2Cpp + CLASS_1_F41BA62BC88DE172_SET_LOGGER_OFFSET))(this, a1);
	}

	::Class_1_BEBC154769C05C35* get_TickDriver()
	{
		return ((::Class_1_BEBC154769C05C35*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F41BA62BC88DE172_GET_TICKDRIVER_OFFSET))(this);
	}

	::System::Void set_TickDriver(::Class_1_BEBC154769C05C35* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_BEBC154769C05C35*))((::PBYTE)hIl2Cpp + CLASS_1_F41BA62BC88DE172_SET_TICKDRIVER_OFFSET))(this, a1);
	}

	::System::Void Method_1_6E746B545E376638(::System::Action* a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_F41BA62BC88DE172_METHOD_1_6E746B545E376638_OFFSET))(this, a1, a2);
	}

	::Class_0_16E4307DCC419505_411* Method_1_DF193DDA46FA2549()
	{
		return ((::Class_0_16E4307DCC419505_411*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F41BA62BC88DE172_METHOD_1_DF193DDA46FA2549_OFFSET))(this);
	}

	::System::Void Method_1_2ADB5DC98BF78E9D(::Class_0_16E4307DCC419505_411* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_411*))((::PBYTE)hIl2Cpp + CLASS_1_F41BA62BC88DE172_METHOD_1_2ADB5DC98BF78E9D_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F41BA62BC88DE172_METHOD_1_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Int32 Method_1_37D0382D0C30A2DC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F41BA62BC88DE172_METHOD_1_37D0382D0C30A2DC_OFFSET))(this);
	}

	::System::IDisposable* Method_1_C9D7A49D5572A0FA(::System::Object* a1, ::Class_0_16E4307DCC419505_412* a2)
	{
		return ((::System::IDisposable*(*)(::PVOID, ::System::Object*, ::Class_0_16E4307DCC419505_412*))((::PBYTE)hIl2Cpp + CLASS_1_F41BA62BC88DE172_METHOD_1_C9D7A49D5572A0FA_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_D9F4C5F2CDB3FA54(::System::Object* a1, ::System::Object* a2, ::Class_0_16E4307DCC419505_410* a3, ::System::Func_1<::System::Boolean>* a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Object*, ::Class_0_16E4307DCC419505_410*, ::System::Func_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + CLASS_1_F41BA62BC88DE172_METHOD_1_D9F4C5F2CDB3FA54_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Collections::Generic::IReadOnlyList_1<::Class_0_16E4307DCC419505_410*>* Method_1_F451286FFA20853A(::System::String* a1, ::System::Object* a2)
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::Class_0_16E4307DCC419505_410*>*(*)(::PVOID, ::System::String*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_F41BA62BC88DE172_METHOD_1_F451286FFA20853A_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::IReadOnlyList_1<::Class_0_16E4307DCC419505_410*>* Method_1_ECFF589EB1DADEC4(::System::String* a1, ::System::Collections::Generic::IEnumerable_1<::System::Object*>* a2)
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::Class_0_16E4307DCC419505_410*>*(*)(::PVOID, ::System::String*, ::System::Collections::Generic::IEnumerable_1<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_1_F41BA62BC88DE172_METHOD_1_ECFF589EB1DADEC4_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::IReadOnlyList_1<::Class_0_16E4307DCC419505_410*>* Method_1_75A5EA2244F26196(::System::String* a1, ::System::Collections::Generic::Dictionary_2<::System::Object*, ::System::Collections::Generic::List_1<::Class_1_F41BA62BC88DE172_Struct_2_03276480187CD220>*>* a2)
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::Class_0_16E4307DCC419505_410*>*(*)(::PVOID, ::System::String*, ::System::Collections::Generic::Dictionary_2<::System::Object*, ::System::Collections::Generic::List_1<::Class_1_F41BA62BC88DE172_Struct_2_03276480187CD220>*>*))((::PBYTE)hIl2Cpp + CLASS_1_F41BA62BC88DE172_METHOD_1_75A5EA2244F26196_OFFSET))(this, a1, a2);
	}

	static ::System::Collections::Generic::List_1<::System::Object*>* Method_1_0CA662A0A4CAE17A(::System::Collections::Generic::IEnumerable_1<::System::Object*>* a1)
	{
		return ((::System::Collections::Generic::List_1<::System::Object*>*(*)(::System::Collections::Generic::IEnumerable_1<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_1_F41BA62BC88DE172_METHOD_1_0CA662A0A4CAE17A_OFFSET))(a1);
	}

	static ::System::Void Method_1_95A26C043D34F28B(::System::Collections::Generic::List_1<::Class_1_F41BA62BC88DE172_Struct_2_03276480187CD220>* a1, ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_410*>* a2)
	{
		return ((::System::Void(*)(::System::Collections::Generic::List_1<::Class_1_F41BA62BC88DE172_Struct_2_03276480187CD220>*, ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_410*>*))((::PBYTE)hIl2Cpp + CLASS_1_F41BA62BC88DE172_METHOD_1_95A26C043D34F28B_OFFSET))(a1, a2);
	}

	::System::Void Method_1_FB741FB5C48508A1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_F41BA62BC88DE172_METHOD_1_FB741FB5C48508A1_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA6BDDCC5F7CE11E(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_F41BA62BC88DE172_METHOD_1_CA6BDDCC5F7CE11E_OFFSET))(this, a1);
	}

	::System::Void Method_1_335C3589A4AF92A4(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_F41BA62BC88DE172_METHOD_1_335C3589A4AF92A4_OFFSET))(this, a1);
	}

	::System::Void Method_1_82E992240300FB30()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F41BA62BC88DE172_METHOD_1_82E992240300FB30_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F41BA62BC88DE172_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_D09831639F615812(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_F41BA62BC88DE172_METHOD_1_D09831639F615812_OFFSET))(this, a1);
	}

	::System::Void Method_1_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F41BA62BC88DE172_METHOD_1_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_1_F0BD65B017F2AC0B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F41BA62BC88DE172_METHOD_1_F0BD65B017F2AC0B_OFFSET))(this);
	}
};
