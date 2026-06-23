#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_C2937544035FD07F.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1.h"
#include "unitysdk/System/Threading/CancellationToken.h"

class Class_3_025FF4981524A424_207;
class Class_3_025FF4981524A424_212;
class Class_3_025FF4981524A424_231;
class Class_3_025FF4981524A424_337;
class Class_3_025FF4981524A424_356;
class Class_3_025FF4981524A424_382;
class Class_3_025FF4981524A424_421;
class Class_3_025FF4981524A424_537;
class Class_3_025FF4981524A424_607;
class Class_3_025FF4981524A424_615;
class Class_3_102B2E1BD40C178D;
class Class_3_1A345EAE5F749316_84;
class Class_3_472679C84451629A_4;
class Class_3_4A628DAD59F70BCB_4;
class Class_3_6EF456A21AE85EEC_190;
class Class_3_920D00A4D2C57DD8_1;
class Class_3_C1714D5E615D4B4B_27;
class Class_3_D9D63EA7AE1CDA9C;
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_0E25B4D32AABF9BB_METHOD_2_049A3EE49925C1AC_OFFSET UNITYSDK_OFFSET(0x1586F340)
#define CLASS_2_0E25B4D32AABF9BB_METHOD_2_17B1023D1F151155_OFFSET UNITYSDK_OFFSET(0x15871D10)
#define CLASS_2_0E25B4D32AABF9BB_METHOD_2_196CC2CA5A0F8778_OFFSET UNITYSDK_OFFSET(0x15872610)
#define CLASS_2_0E25B4D32AABF9BB_METHOD_2_19D780F0AC40EDA3_OFFSET UNITYSDK_OFFSET(0x1586FB00)
#define CLASS_2_0E25B4D32AABF9BB_METHOD_2_1E6A36F60BE36BF8_OFFSET UNITYSDK_OFFSET(0x158724F0)
#define CLASS_2_0E25B4D32AABF9BB_METHOD_2_2E1C7645BF3151CA_OFFSET UNITYSDK_OFFSET(0x15871B10)
#define CLASS_2_0E25B4D32AABF9BB_METHOD_2_351EC58F05947F54_1_OFFSET UNITYSDK_OFFSET(0x15871980)
#define CLASS_2_0E25B4D32AABF9BB_METHOD_2_351EC58F05947F54_OFFSET UNITYSDK_OFFSET(0x1586F770)
#define CLASS_2_0E25B4D32AABF9BB_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x1586D880)
#define CLASS_2_0E25B4D32AABF9BB_METHOD_2_4FC343344A9FFDE8_OFFSET UNITYSDK_OFFSET(0x1586DDC0)
#define CLASS_2_0E25B4D32AABF9BB_METHOD_2_57646EF453B429AC_OFFSET UNITYSDK_OFFSET(0x15872B00)
#define CLASS_2_0E25B4D32AABF9BB_METHOD_2_57BD4CBCF4B8444B_OFFSET UNITYSDK_OFFSET(0x1586EAA0)
#define CLASS_2_0E25B4D32AABF9BB_METHOD_2_6B07B799C78BB1C1_OFFSET UNITYSDK_OFFSET(0x158721C0)
#define CLASS_2_0E25B4D32AABF9BB_METHOD_2_6B1286ADBC0D23BD_OFFSET UNITYSDK_OFFSET(0x15870590)
#define CLASS_2_0E25B4D32AABF9BB_METHOD_2_6D48D7DC367E9159_OFFSET UNITYSDK_OFFSET(0x158703C0)
#define CLASS_2_0E25B4D32AABF9BB_METHOD_2_7E9B60CB6094CC91_OFFSET UNITYSDK_OFFSET(0x1586DA40)
#define CLASS_2_0E25B4D32AABF9BB_METHOD_2_8655E9606B39429B_OFFSET UNITYSDK_OFFSET(0x1586F520)
#define CLASS_2_0E25B4D32AABF9BB_METHOD_2_8CF7B05B4F544034_OFFSET UNITYSDK_OFFSET(0x1586EE20)
#define CLASS_2_0E25B4D32AABF9BB_METHOD_2_90C2AE4A260B3C09_OFFSET UNITYSDK_OFFSET(0x15871620)
#define CLASS_2_0E25B4D32AABF9BB_METHOD_2_AE77C03C8B6D1BBB_OFFSET UNITYSDK_OFFSET(0x1586E110)
#define CLASS_2_0E25B4D32AABF9BB_METHOD_2_AEE733C6AA7B5B17_OFFSET UNITYSDK_OFFSET(0x1586E930)
#define CLASS_2_0E25B4D32AABF9BB_METHOD_2_B57D4E4C0D48FC7B_OFFSET UNITYSDK_OFFSET(0x1586FCD0)
#define CLASS_2_0E25B4D32AABF9BB_METHOD_2_BC1CF220A719CC82_OFFSET UNITYSDK_OFFSET(0x15871190)
#define CLASS_2_0E25B4D32AABF9BB_METHOD_2_C4944CF8B0C158A6_OFFSET UNITYSDK_OFFSET(0x15872370)
#define CLASS_2_0E25B4D32AABF9BB_METHOD_2_C6FA776B2F1B31A6_1_OFFSET UNITYSDK_OFFSET(0x158701C0)
#define CLASS_2_0E25B4D32AABF9BB_METHOD_2_C6FA776B2F1B31A6_2_OFFSET UNITYSDK_OFFSET(0x15871E30)
#define CLASS_2_0E25B4D32AABF9BB_METHOD_2_C6FA776B2F1B31A6_3_OFFSET UNITYSDK_OFFSET(0x15872DF0)
#define CLASS_2_0E25B4D32AABF9BB_METHOD_2_C6FA776B2F1B31A6_OFFSET UNITYSDK_OFFSET(0x1586F900)
#define CLASS_2_0E25B4D32AABF9BB_METHOD_2_D1EC52CB7AB32A1C_OFFSET UNITYSDK_OFFSET(0x158717E0)
#define CLASS_2_0E25B4D32AABF9BB_METHOD_2_D3A520F720D8FADC_OFFSET UNITYSDK_OFFSET(0x15871480)
#define CLASS_2_0E25B4D32AABF9BB_METHOD_2_E11AC65AA0DC2249_1_OFFSET UNITYSDK_OFFSET(0x1586E750)
#define CLASS_2_0E25B4D32AABF9BB_METHOD_2_E11AC65AA0DC2249_OFFSET UNITYSDK_OFFSET(0x1586E240)
#define CLASS_2_0E25B4D32AABF9BB_METHOD_2_E5AF221CEEC8094C_OFFSET UNITYSDK_OFFSET(0x15872030)
#define CLASS_2_0E25B4D32AABF9BB_METHOD_2_EC420EED3210745D_OFFSET UNITYSDK_OFFSET(0x1586DBF0)
#define CLASS_2_0E25B4D32AABF9BB_METHOD_2_EDE0ABC7E93DD550_OFFSET UNITYSDK_OFFSET(0x1586FE40)
#define CLASS_2_0E25B4D32AABF9BB_METHOD_2_F1F720B6AB8A612D_OFFSET UNITYSDK_OFFSET(0x1586F000)
#define CLASS_2_0E25B4D32AABF9BB_METHOD_2_F8377ADE4337CDAD_OFFSET UNITYSDK_OFFSET(0x1586E420)
#define CLASS_2_0E25B4D32AABF9BB_METHOD_2_F84C45E5D7C025B0_1_OFFSET UNITYSDK_OFFSET(0x15872970)
#define CLASS_2_0E25B4D32AABF9BB_METHOD_2_F84C45E5D7C025B0_OFFSET UNITYSDK_OFFSET(0x1586EC90)
#define CLASS_2_0E25B4D32AABF9BB_ONSTART_OFFSET UNITYSDK_OFFSET(0x1586D840)
#define CLASS_2_0E25B4D32AABF9BB__CTOR_OFFSET UNITYSDK_OFFSET(0x1586DA30)

inline static constexpr unsigned int Class_2_0E25B4D32AABF9BB_TypeDefinitionIndex = 52951;

class Class_2_0E25B4D32AABF9BB : public ::Class_1_C2937544035FD07F
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0E25B4D32AABF9BB__CTOR_OFFSET))(this);
	}

	::System::Void OnStart()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0E25B4D32AABF9BB_ONSTART_OFFSET))(this);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0E25B4D32AABF9BB_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_2_7E9B60CB6094CC91(::System::UInt32 a1, ::System::UInt32 a2, ::System::Action_1<::Class_3_025FF4981524A424_207*>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::Action_1<::Class_3_025FF4981524A424_207*>*))((::PBYTE)hIl2Cpp + CLASS_2_0E25B4D32AABF9BB_METHOD_2_7E9B60CB6094CC91_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_EC420EED3210745D(::System::Int32 a1, ::System::Action_1<::System::Boolean>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Action_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + CLASS_2_0E25B4D32AABF9BB_METHOD_2_EC420EED3210745D_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_4FC343344A9FFDE8(::System::UInt32 a1, ::System::Action_1<::System::Int32>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Action_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_2_0E25B4D32AABF9BB_METHOD_2_4FC343344A9FFDE8_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_AE77C03C8B6D1BBB(::Class_3_D9D63EA7AE1CDA9C* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_D9D63EA7AE1CDA9C*))((::PBYTE)hIl2Cpp + CLASS_2_0E25B4D32AABF9BB_METHOD_2_AE77C03C8B6D1BBB_OFFSET))(this, a1);
	}

	::System::Void Method_2_E11AC65AA0DC2249()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0E25B4D32AABF9BB_METHOD_2_E11AC65AA0DC2249_OFFSET))(this);
	}

	::System::Void Method_2_F8377ADE4337CDAD(::System::UInt32 a1, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* a2, ::System::Action_1<::System::Int32>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>*, ::System::Action_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_2_0E25B4D32AABF9BB_METHOD_2_F8377ADE4337CDAD_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_E11AC65AA0DC2249_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0E25B4D32AABF9BB_METHOD_2_E11AC65AA0DC2249_1_OFFSET))(this);
	}

	::Cysharp::Threading::Tasks::UniTask_1<::System::Int32> Method_2_AEE733C6AA7B5B17(::System::Threading::CancellationToken a1, ::System::Collections::Generic::List_1<::System::UInt32>* a2)
	{
		return ((::Cysharp::Threading::Tasks::UniTask_1<::System::Int32>(*)(::PVOID, ::System::Threading::CancellationToken, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_2_0E25B4D32AABF9BB_METHOD_2_AEE733C6AA7B5B17_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_57BD4CBCF4B8444B(::System::Collections::Generic::List_1<::System::UInt32>* a1, ::System::Action_1<::System::Int32>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Action_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_2_0E25B4D32AABF9BB_METHOD_2_57BD4CBCF4B8444B_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_F84C45E5D7C025B0(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_2_0E25B4D32AABF9BB_METHOD_2_F84C45E5D7C025B0_OFFSET))(this, a1);
	}

	::Cysharp::Threading::Tasks::UniTask_1<::Class_3_C1714D5E615D4B4B_27*> Method_2_8CF7B05B4F544034(::System::Threading::CancellationToken a1, ::System::UInt32 a2, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* a3, ::System::Int32 a4)
	{
		return ((::Cysharp::Threading::Tasks::UniTask_1<::Class_3_C1714D5E615D4B4B_27*>(*)(::PVOID, ::System::Threading::CancellationToken, ::System::UInt32, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_0E25B4D32AABF9BB_METHOD_2_8CF7B05B4F544034_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_049A3EE49925C1AC(::System::Int32 a1, ::System::UInt32 a2, ::System::Int32 a3, ::System::UInt32 a4, ::System::Action_1<::Class_3_025FF4981524A424_337*>* a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::UInt32, ::System::Int32, ::System::UInt32, ::System::Action_1<::Class_3_025FF4981524A424_337*>*))((::PBYTE)hIl2Cpp + CLASS_2_0E25B4D32AABF9BB_METHOD_2_049A3EE49925C1AC_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_2_F1F720B6AB8A612D(::System::UInt32 a1, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* a2, ::System::Int32 a3, ::System::Action_1<::Class_3_C1714D5E615D4B4B_27*>* a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>*, ::System::Int32, ::System::Action_1<::Class_3_C1714D5E615D4B4B_27*>*))((::PBYTE)hIl2Cpp + CLASS_2_0E25B4D32AABF9BB_METHOD_2_F1F720B6AB8A612D_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_8655E9606B39429B(::System::Int32 a1, ::System::Collections::Generic::List_1<::System::Int32>* a2, ::System::Int32 a3, ::System::Action_1<::System::Boolean>* a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::List_1<::System::Int32>*, ::System::Int32, ::System::Action_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + CLASS_2_0E25B4D32AABF9BB_METHOD_2_8655E9606B39429B_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_351EC58F05947F54(::System::Action_1<::Class_3_025FF4981524A424_212*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::Class_3_025FF4981524A424_212*>*))((::PBYTE)hIl2Cpp + CLASS_2_0E25B4D32AABF9BB_METHOD_2_351EC58F05947F54_OFFSET))(this, a1);
	}

	::System::Void Method_2_C6FA776B2F1B31A6(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_0E25B4D32AABF9BB_METHOD_2_C6FA776B2F1B31A6_OFFSET))(this, a1);
	}

	::System::Void Method_2_19D780F0AC40EDA3(::System::UInt32 a1, ::System::Action_1<::Class_3_025FF4981524A424_382*>* a2, ::System::Action* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Action_1<::Class_3_025FF4981524A424_382*>*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_2_0E25B4D32AABF9BB_METHOD_2_19D780F0AC40EDA3_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_B57D4E4C0D48FC7B(::Class_3_102B2E1BD40C178D* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_102B2E1BD40C178D*))((::PBYTE)hIl2Cpp + CLASS_2_0E25B4D32AABF9BB_METHOD_2_B57D4E4C0D48FC7B_OFFSET))(this, a1);
	}

	::System::Void Method_2_EDE0ABC7E93DD550(::System::UInt32 a1, ::System::UInt32 a2, ::System::Action_1<::System::Int32>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::Action_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_2_0E25B4D32AABF9BB_METHOD_2_EDE0ABC7E93DD550_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_C6FA776B2F1B31A6_1(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_0E25B4D32AABF9BB_METHOD_2_C6FA776B2F1B31A6_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_6D48D7DC367E9159(::System::Int32 a1, ::System::Action_1<::Class_3_025FF4981524A424_615*>* a2, ::System::Action_1<::Class_3_025FF4981524A424_615*>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Action_1<::Class_3_025FF4981524A424_615*>*, ::System::Action_1<::Class_3_025FF4981524A424_615*>*))((::PBYTE)hIl2Cpp + CLASS_2_0E25B4D32AABF9BB_METHOD_2_6D48D7DC367E9159_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_6B1286ADBC0D23BD(::System::Action_1<::Class_3_472679C84451629A_4*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::Class_3_472679C84451629A_4*>*))((::PBYTE)hIl2Cpp + CLASS_2_0E25B4D32AABF9BB_METHOD_2_6B1286ADBC0D23BD_OFFSET))(this, a1);
	}

	::System::Void Method_2_BC1CF220A719CC82(::System::UInt32 a1, ::System::Action_1<::Class_3_025FF4981524A424_356*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Action_1<::Class_3_025FF4981524A424_356*>*))((::PBYTE)hIl2Cpp + CLASS_2_0E25B4D32AABF9BB_METHOD_2_BC1CF220A719CC82_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_D3A520F720D8FADC(::System::UInt32 a1, ::System::Action_1<::Class_3_4A628DAD59F70BCB_4*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Action_1<::Class_3_4A628DAD59F70BCB_4*>*))((::PBYTE)hIl2Cpp + CLASS_2_0E25B4D32AABF9BB_METHOD_2_D3A520F720D8FADC_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_90C2AE4A260B3C09(::System::Collections::Generic::List_1<::System::UInt32>* a1, ::System::Action_1<::Class_3_025FF4981524A424_537*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Action_1<::Class_3_025FF4981524A424_537*>*))((::PBYTE)hIl2Cpp + CLASS_2_0E25B4D32AABF9BB_METHOD_2_90C2AE4A260B3C09_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_D1EC52CB7AB32A1C(::System::UInt32 a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_2_0E25B4D32AABF9BB_METHOD_2_D1EC52CB7AB32A1C_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_351EC58F05947F54_1(::System::Action_1<::Class_3_025FF4981524A424_607*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::Class_3_025FF4981524A424_607*>*))((::PBYTE)hIl2Cpp + CLASS_2_0E25B4D32AABF9BB_METHOD_2_351EC58F05947F54_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_2E1C7645BF3151CA(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_0E25B4D32AABF9BB_METHOD_2_2E1C7645BF3151CA_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_17B1023D1F151155(::Class_3_1A345EAE5F749316_84* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_1A345EAE5F749316_84*))((::PBYTE)hIl2Cpp + CLASS_2_0E25B4D32AABF9BB_METHOD_2_17B1023D1F151155_OFFSET))(this, a1);
	}

	::System::Void Method_2_C6FA776B2F1B31A6_2(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_0E25B4D32AABF9BB_METHOD_2_C6FA776B2F1B31A6_2_OFFSET))(this, a1);
	}

	::Cysharp::Threading::Tasks::UniTask_1<::System::Int32> Method_2_E5AF221CEEC8094C(::System::Threading::CancellationToken a1, ::System::UInt32 a2, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* a3)
	{
		return ((::Cysharp::Threading::Tasks::UniTask_1<::System::Int32>(*)(::PVOID, ::System::Threading::CancellationToken, ::System::UInt32, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_2_0E25B4D32AABF9BB_METHOD_2_E5AF221CEEC8094C_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_6B07B799C78BB1C1(::System::Action_1<::System::Boolean>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + CLASS_2_0E25B4D32AABF9BB_METHOD_2_6B07B799C78BB1C1_OFFSET))(this, a1);
	}

	::System::Void Method_2_C4944CF8B0C158A6(::Class_3_6EF456A21AE85EEC_190* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_6EF456A21AE85EEC_190*))((::PBYTE)hIl2Cpp + CLASS_2_0E25B4D32AABF9BB_METHOD_2_C4944CF8B0C158A6_OFFSET))(this, a1);
	}

	::System::Void Method_2_1E6A36F60BE36BF8(::Class_3_920D00A4D2C57DD8_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_920D00A4D2C57DD8_1*))((::PBYTE)hIl2Cpp + CLASS_2_0E25B4D32AABF9BB_METHOD_2_1E6A36F60BE36BF8_OFFSET))(this, a1);
	}

	::System::Void Method_2_196CC2CA5A0F8778(::System::UInt32 a1, ::System::Action_1<::Class_3_025FF4981524A424_421*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Action_1<::Class_3_025FF4981524A424_421*>*))((::PBYTE)hIl2Cpp + CLASS_2_0E25B4D32AABF9BB_METHOD_2_196CC2CA5A0F8778_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_F84C45E5D7C025B0_1(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_2_0E25B4D32AABF9BB_METHOD_2_F84C45E5D7C025B0_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_57646EF453B429AC(::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* a1, ::System::Action_1<::Class_3_025FF4981524A424_231*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>*, ::System::Action_1<::Class_3_025FF4981524A424_231*>*))((::PBYTE)hIl2Cpp + CLASS_2_0E25B4D32AABF9BB_METHOD_2_57646EF453B429AC_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C6FA776B2F1B31A6_3(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_0E25B4D32AABF9BB_METHOD_2_C6FA776B2F1B31A6_3_OFFSET))(this, a1);
	}
};
