#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_C2937544035FD07F.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1.h"
#include "unitysdk/System/Threading/CancellationToken.h"

class Class_3_025FF4981524A424_149;
class Class_3_025FF4981524A424_300;
class Class_3_025FF4981524A424_315;
class Class_3_025FF4981524A424_399;
class Class_3_025FF4981524A424_468;
class Class_3_025FF4981524A424_641;
class Class_3_025FF4981524A424_648;
class Class_3_025FF4981524A424_681;
class Class_3_025FF4981524A424_687;
class Class_3_025FF4981524A424_6;
class Class_3_102B2E1BD40C178D_1;
class Class_3_1A345EAE5F749316_69;
class Class_3_4A628DAD59F70BCB_1;
class Class_3_6EF456A21AE85EEC_216;
class Class_3_7E6E8DD3EAC12A67_13;
class Class_3_920D00A4D2C57DD8_22;
class Class_3_BE6F3C2838BC0038_6;
class Class_3_C1714D5E615D4B4B_15;
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_0E25B4D32AABF9BB_METHOD_2_049A3EE49925C1AC_OFFSET UNITYSDK_OFFSET(0x138ADE00)
#define CLASS_2_0E25B4D32AABF9BB_METHOD_2_103CC4D1D719130E_OFFSET UNITYSDK_OFFSET(0x138ACC70)
#define CLASS_2_0E25B4D32AABF9BB_METHOD_2_13809903A2FA7DBE_OFFSET UNITYSDK_OFFSET(0x138AF800)
#define CLASS_2_0E25B4D32AABF9BB_METHOD_2_158E9FB5EBA8D239_OFFSET UNITYSDK_OFFSET(0x138AC5D0)
#define CLASS_2_0E25B4D32AABF9BB_METHOD_2_1715C2F577838A97_OFFSET UNITYSDK_OFFSET(0x138B04F0)
#define CLASS_2_0E25B4D32AABF9BB_METHOD_2_17B1023D1F151155_OFFSET UNITYSDK_OFFSET(0x138B03D0)
#define CLASS_2_0E25B4D32AABF9BB_METHOD_2_1E6A36F60BE36BF8_OFFSET UNITYSDK_OFFSET(0x138AD810)
#define CLASS_2_0E25B4D32AABF9BB_METHOD_2_351EC58F05947F54_1_OFFSET UNITYSDK_OFFSET(0x138B0240)
#define CLASS_2_0E25B4D32AABF9BB_METHOD_2_351EC58F05947F54_OFFSET UNITYSDK_OFFSET(0x138ADC70)
#define CLASS_2_0E25B4D32AABF9BB_METHOD_2_3C0E209C408BD36C_OFFSET UNITYSDK_OFFSET(0x138B0080)
#define CLASS_2_0E25B4D32AABF9BB_METHOD_2_3ED040BF0970FC5A_OFFSET UNITYSDK_OFFSET(0x138B0900)
#define CLASS_2_0E25B4D32AABF9BB_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x138ABF30)
#define CLASS_2_0E25B4D32AABF9BB_METHOD_2_57646EF453B429AC_OFFSET UNITYSDK_OFFSET(0x138B12E0)
#define CLASS_2_0E25B4D32AABF9BB_METHOD_2_57BD4CBCF4B8444B_OFFSET UNITYSDK_OFFSET(0x138AE540)
#define CLASS_2_0E25B4D32AABF9BB_METHOD_2_580608020EE929E8_OFFSET UNITYSDK_OFFSET(0x138AD440)
#define CLASS_2_0E25B4D32AABF9BB_METHOD_2_593A9F82D566F6E1_OFFSET UNITYSDK_OFFSET(0x138AFEE0)
#define CLASS_2_0E25B4D32AABF9BB_METHOD_2_601F640857BFB221_OFFSET UNITYSDK_OFFSET(0x138AC2A0)
#define CLASS_2_0E25B4D32AABF9BB_METHOD_2_6B07B799C78BB1C1_OFFSET UNITYSDK_OFFSET(0x138ACAC0)
#define CLASS_2_0E25B4D32AABF9BB_METHOD_2_6B1286ADBC0D23BD_OFFSET UNITYSDK_OFFSET(0x138AE730)
#define CLASS_2_0E25B4D32AABF9BB_METHOD_2_7E9B60CB6094CC91_OFFSET UNITYSDK_OFFSET(0x138AC0F0)
#define CLASS_2_0E25B4D32AABF9BB_METHOD_2_81B9592DBD3ED7C8_OFFSET UNITYSDK_OFFSET(0x138AF350)
#define CLASS_2_0E25B4D32AABF9BB_METHOD_2_85F782777E5844E3_OFFSET UNITYSDK_OFFSET(0x138AF9D0)
#define CLASS_2_0E25B4D32AABF9BB_METHOD_2_8655E9606B39429B_OFFSET UNITYSDK_OFFSET(0x138B1090)
#define CLASS_2_0E25B4D32AABF9BB_METHOD_2_8CF7B05B4F544034_OFFSET UNITYSDK_OFFSET(0x138AE1E0)
#define CLASS_2_0E25B4D32AABF9BB_METHOD_2_9CC6C786E0D42D1A_OFFSET UNITYSDK_OFFSET(0x138AF6D0)
#define CLASS_2_0E25B4D32AABF9BB_METHOD_2_AEE733C6AA7B5B17_OFFSET UNITYSDK_OFFSET(0x138B15D0)
#define CLASS_2_0E25B4D32AABF9BB_METHOD_2_B57D4E4C0D48FC7B_OFFSET UNITYSDK_OFFSET(0x138AFD60)
#define CLASS_2_0E25B4D32AABF9BB_METHOD_2_BC1CF220A719CC82_OFFSET UNITYSDK_OFFSET(0x138ACF90)
#define CLASS_2_0E25B4D32AABF9BB_METHOD_2_C4944CF8B0C158A6_OFFSET UNITYSDK_OFFSET(0x138AE3C0)
#define CLASS_2_0E25B4D32AABF9BB_METHOD_2_C6FA776B2F1B31A6_1_OFFSET UNITYSDK_OFFSET(0x138ADFE0)
#define CLASS_2_0E25B4D32AABF9BB_METHOD_2_C6FA776B2F1B31A6_2_OFFSET UNITYSDK_OFFSET(0x138B0700)
#define CLASS_2_0E25B4D32AABF9BB_METHOD_2_C6FA776B2F1B31A6_3_OFFSET UNITYSDK_OFFSET(0x138B0E90)
#define CLASS_2_0E25B4D32AABF9BB_METHOD_2_C6FA776B2F1B31A6_OFFSET UNITYSDK_OFFSET(0x138AD610)
#define CLASS_2_0E25B4D32AABF9BB_METHOD_2_E11AC65AA0DC2249_1_OFFSET UNITYSDK_OFFSET(0x138B0CB0)
#define CLASS_2_0E25B4D32AABF9BB_METHOD_2_E11AC65AA0DC2249_OFFSET UNITYSDK_OFFSET(0x138B0AD0)
#define CLASS_2_0E25B4D32AABF9BB_METHOD_2_E5AF221CEEC8094C_OFFSET UNITYSDK_OFFSET(0x138AD2B0)
#define CLASS_2_0E25B4D32AABF9BB_METHOD_2_F1F720B6AB8A612D_OFFSET UNITYSDK_OFFSET(0x138AD930)
#define CLASS_2_0E25B4D32AABF9BB_METHOD_2_F84C45E5D7C025B0_1_OFFSET UNITYSDK_OFFSET(0x138AC930)
#define CLASS_2_0E25B4D32AABF9BB_METHOD_2_F84C45E5D7C025B0_OFFSET UNITYSDK_OFFSET(0x138AC440)
#define CLASS_2_0E25B4D32AABF9BB_ONSTART_OFFSET UNITYSDK_OFFSET(0x138ABEF0)
#define CLASS_2_0E25B4D32AABF9BB__CTOR_OFFSET UNITYSDK_OFFSET(0x138AC0E0)

inline static constexpr unsigned int Class_2_0E25B4D32AABF9BB_TypeDefinitionIndex = 52622;

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

	::System::Void Method_2_7E9B60CB6094CC91(::System::UInt32 a1, ::System::UInt32 a2, ::System::Action_1<::Class_3_025FF4981524A424_681*>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::Action_1<::Class_3_025FF4981524A424_681*>*))((::PBYTE)hIl2Cpp + CLASS_2_0E25B4D32AABF9BB_METHOD_2_7E9B60CB6094CC91_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_601F640857BFB221(::System::UInt32 a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_2_0E25B4D32AABF9BB_METHOD_2_601F640857BFB221_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_F84C45E5D7C025B0(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_2_0E25B4D32AABF9BB_METHOD_2_F84C45E5D7C025B0_OFFSET))(this, a1);
	}

	::System::Void Method_2_158E9FB5EBA8D239(::System::UInt32 a1, ::System::Action_1<::System::Int32>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Action_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_2_0E25B4D32AABF9BB_METHOD_2_158E9FB5EBA8D239_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_F84C45E5D7C025B0_1(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_2_0E25B4D32AABF9BB_METHOD_2_F84C45E5D7C025B0_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_6B07B799C78BB1C1(::System::Action_1<::System::Boolean>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + CLASS_2_0E25B4D32AABF9BB_METHOD_2_6B07B799C78BB1C1_OFFSET))(this, a1);
	}

	::System::Void Method_2_103CC4D1D719130E(::System::UInt32 a1, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* a2, ::System::Action_1<::System::Int32>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>*, ::System::Action_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_2_0E25B4D32AABF9BB_METHOD_2_103CC4D1D719130E_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_BC1CF220A719CC82(::System::UInt32 a1, ::System::Action_1<::Class_3_025FF4981524A424_300*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Action_1<::Class_3_025FF4981524A424_300*>*))((::PBYTE)hIl2Cpp + CLASS_2_0E25B4D32AABF9BB_METHOD_2_BC1CF220A719CC82_OFFSET))(this, a1, a2);
	}

	::Cysharp::Threading::Tasks::UniTask_1<::System::Int32> Method_2_E5AF221CEEC8094C(::System::Threading::CancellationToken a1, ::System::UInt32 a2, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* a3)
	{
		return ((::Cysharp::Threading::Tasks::UniTask_1<::System::Int32>(*)(::PVOID, ::System::Threading::CancellationToken, ::System::UInt32, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_2_0E25B4D32AABF9BB_METHOD_2_E5AF221CEEC8094C_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_580608020EE929E8(::System::UInt32 a1, ::System::Action_1<::Class_3_025FF4981524A424_641*>* a2, ::System::Action* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Action_1<::Class_3_025FF4981524A424_641*>*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_2_0E25B4D32AABF9BB_METHOD_2_580608020EE929E8_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_C6FA776B2F1B31A6(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_0E25B4D32AABF9BB_METHOD_2_C6FA776B2F1B31A6_OFFSET))(this, a1);
	}

	::System::Void Method_2_1E6A36F60BE36BF8(::Class_3_920D00A4D2C57DD8_22* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_920D00A4D2C57DD8_22*))((::PBYTE)hIl2Cpp + CLASS_2_0E25B4D32AABF9BB_METHOD_2_1E6A36F60BE36BF8_OFFSET))(this, a1);
	}

	::System::Void Method_2_F1F720B6AB8A612D(::System::UInt32 a1, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* a2, ::System::Int32 a3, ::System::Action_1<::Class_3_C1714D5E615D4B4B_15*>* a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>*, ::System::Int32, ::System::Action_1<::Class_3_C1714D5E615D4B4B_15*>*))((::PBYTE)hIl2Cpp + CLASS_2_0E25B4D32AABF9BB_METHOD_2_F1F720B6AB8A612D_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_351EC58F05947F54(::System::Action_1<::Class_3_025FF4981524A424_149*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::Class_3_025FF4981524A424_149*>*))((::PBYTE)hIl2Cpp + CLASS_2_0E25B4D32AABF9BB_METHOD_2_351EC58F05947F54_OFFSET))(this, a1);
	}

	::System::Void Method_2_049A3EE49925C1AC(::System::Int32 a1, ::System::UInt32 a2, ::System::Int32 a3, ::System::UInt32 a4, ::System::Action_1<::Class_3_025FF4981524A424_399*>* a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::UInt32, ::System::Int32, ::System::UInt32, ::System::Action_1<::Class_3_025FF4981524A424_399*>*))((::PBYTE)hIl2Cpp + CLASS_2_0E25B4D32AABF9BB_METHOD_2_049A3EE49925C1AC_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_2_C6FA776B2F1B31A6_1(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_0E25B4D32AABF9BB_METHOD_2_C6FA776B2F1B31A6_1_OFFSET))(this, a1);
	}

	::Cysharp::Threading::Tasks::UniTask_1<::Class_3_C1714D5E615D4B4B_15*> Method_2_8CF7B05B4F544034(::System::Threading::CancellationToken a1, ::System::UInt32 a2, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* a3, ::System::Int32 a4)
	{
		return ((::Cysharp::Threading::Tasks::UniTask_1<::Class_3_C1714D5E615D4B4B_15*>(*)(::PVOID, ::System::Threading::CancellationToken, ::System::UInt32, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_0E25B4D32AABF9BB_METHOD_2_8CF7B05B4F544034_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_C4944CF8B0C158A6(::Class_3_6EF456A21AE85EEC_216* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_6EF456A21AE85EEC_216*))((::PBYTE)hIl2Cpp + CLASS_2_0E25B4D32AABF9BB_METHOD_2_C4944CF8B0C158A6_OFFSET))(this, a1);
	}

	::System::Void Method_2_57BD4CBCF4B8444B(::System::Collections::Generic::List_1<::System::UInt32>* a1, ::System::Action_1<::System::Int32>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Action_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_2_0E25B4D32AABF9BB_METHOD_2_57BD4CBCF4B8444B_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_6B1286ADBC0D23BD(::System::Action_1<::Class_3_7E6E8DD3EAC12A67_13*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::Class_3_7E6E8DD3EAC12A67_13*>*))((::PBYTE)hIl2Cpp + CLASS_2_0E25B4D32AABF9BB_METHOD_2_6B1286ADBC0D23BD_OFFSET))(this, a1);
	}

	::System::Void Method_2_81B9592DBD3ED7C8(::System::UInt32 a1, ::System::Action_1<::Class_3_025FF4981524A424_6*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Action_1<::Class_3_025FF4981524A424_6*>*))((::PBYTE)hIl2Cpp + CLASS_2_0E25B4D32AABF9BB_METHOD_2_81B9592DBD3ED7C8_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9CC6C786E0D42D1A(::Class_3_BE6F3C2838BC0038_6* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_BE6F3C2838BC0038_6*))((::PBYTE)hIl2Cpp + CLASS_2_0E25B4D32AABF9BB_METHOD_2_9CC6C786E0D42D1A_OFFSET))(this, a1);
	}

	::System::Void Method_2_13809903A2FA7DBE(::System::Int32 a1, ::System::Action_1<::System::Boolean>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Action_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + CLASS_2_0E25B4D32AABF9BB_METHOD_2_13809903A2FA7DBE_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_85F782777E5844E3(::System::UInt32 a1, ::System::UInt32 a2, ::System::Action_1<::System::Int32>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::Action_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_2_0E25B4D32AABF9BB_METHOD_2_85F782777E5844E3_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_B57D4E4C0D48FC7B(::Class_3_102B2E1BD40C178D_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_102B2E1BD40C178D_1*))((::PBYTE)hIl2Cpp + CLASS_2_0E25B4D32AABF9BB_METHOD_2_B57D4E4C0D48FC7B_OFFSET))(this, a1);
	}

	::System::Void Method_2_593A9F82D566F6E1(::System::UInt32 a1, ::System::Action_1<::Class_3_4A628DAD59F70BCB_1*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Action_1<::Class_3_4A628DAD59F70BCB_1*>*))((::PBYTE)hIl2Cpp + CLASS_2_0E25B4D32AABF9BB_METHOD_2_593A9F82D566F6E1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_3C0E209C408BD36C(::System::Collections::Generic::List_1<::System::UInt32>* a1, ::System::Action_1<::Class_3_025FF4981524A424_687*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Action_1<::Class_3_025FF4981524A424_687*>*))((::PBYTE)hIl2Cpp + CLASS_2_0E25B4D32AABF9BB_METHOD_2_3C0E209C408BD36C_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_351EC58F05947F54_1(::System::Action_1<::Class_3_025FF4981524A424_468*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::Class_3_025FF4981524A424_468*>*))((::PBYTE)hIl2Cpp + CLASS_2_0E25B4D32AABF9BB_METHOD_2_351EC58F05947F54_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_17B1023D1F151155(::Class_3_1A345EAE5F749316_69* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_1A345EAE5F749316_69*))((::PBYTE)hIl2Cpp + CLASS_2_0E25B4D32AABF9BB_METHOD_2_17B1023D1F151155_OFFSET))(this, a1);
	}

	::System::Void Method_2_1715C2F577838A97(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_0E25B4D32AABF9BB_METHOD_2_1715C2F577838A97_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C6FA776B2F1B31A6_2(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_0E25B4D32AABF9BB_METHOD_2_C6FA776B2F1B31A6_2_OFFSET))(this, a1);
	}

	::System::Void Method_2_3ED040BF0970FC5A(::System::Int32 a1, ::System::Action_1<::Class_3_025FF4981524A424_315*>* a2, ::System::Action_1<::Class_3_025FF4981524A424_315*>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Action_1<::Class_3_025FF4981524A424_315*>*, ::System::Action_1<::Class_3_025FF4981524A424_315*>*))((::PBYTE)hIl2Cpp + CLASS_2_0E25B4D32AABF9BB_METHOD_2_3ED040BF0970FC5A_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_E11AC65AA0DC2249()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0E25B4D32AABF9BB_METHOD_2_E11AC65AA0DC2249_OFFSET))(this);
	}

	::System::Void Method_2_E11AC65AA0DC2249_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0E25B4D32AABF9BB_METHOD_2_E11AC65AA0DC2249_1_OFFSET))(this);
	}

	::System::Void Method_2_C6FA776B2F1B31A6_3(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_0E25B4D32AABF9BB_METHOD_2_C6FA776B2F1B31A6_3_OFFSET))(this, a1);
	}

	::System::Void Method_2_8655E9606B39429B(::System::Int32 a1, ::System::Collections::Generic::List_1<::System::Int32>* a2, ::System::Int32 a3, ::System::Action_1<::System::Boolean>* a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::List_1<::System::Int32>*, ::System::Int32, ::System::Action_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + CLASS_2_0E25B4D32AABF9BB_METHOD_2_8655E9606B39429B_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_57646EF453B429AC(::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* a1, ::System::Action_1<::Class_3_025FF4981524A424_648*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>*, ::System::Action_1<::Class_3_025FF4981524A424_648*>*))((::PBYTE)hIl2Cpp + CLASS_2_0E25B4D32AABF9BB_METHOD_2_57646EF453B429AC_OFFSET))(this, a1, a2);
	}

	::Cysharp::Threading::Tasks::UniTask_1<::System::Int32> Method_2_AEE733C6AA7B5B17(::System::Threading::CancellationToken a1, ::System::Collections::Generic::List_1<::System::UInt32>* a2)
	{
		return ((::Cysharp::Threading::Tasks::UniTask_1<::System::Int32>(*)(::PVOID, ::System::Threading::CancellationToken, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_2_0E25B4D32AABF9BB_METHOD_2_AEE733C6AA7B5B17_OFFSET))(this, a1, a2);
	}
};
