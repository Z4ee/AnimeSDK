#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_C2937544035FD07F.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1.h"
#include "unitysdk/System/Threading/CancellationToken.h"

class Class_3_41BA658AB33F544B_2;
class Class_3_472679C84451629A_1;
class Class_3_D9FABB598B022DEA;
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_59C132113475898E_METHOD_2_0C83E6E8046CF60D_OFFSET UNITYSDK_OFFSET(0x1615B640)
#define CLASS_2_59C132113475898E_METHOD_2_15615EC7D2F500DB_OFFSET UNITYSDK_OFFSET(0x1615B760)
#define CLASS_2_59C132113475898E_METHOD_2_207146490BB7E633_OFFSET UNITYSDK_OFFSET(0x1615BB90)
#define CLASS_2_59C132113475898E_METHOD_2_35AC29C84DDE105B_OFFSET UNITYSDK_OFFSET(0x1615C0A0)
#define CLASS_2_59C132113475898E_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x1615ADC0)
#define CLASS_2_59C132113475898E_METHOD_2_601F640857BFB221_OFFSET UNITYSDK_OFFSET(0x1615BF00)
#define CLASS_2_59C132113475898E_METHOD_2_B9D37F33E55FF3EE_OFFSET UNITYSDK_OFFSET(0x1615AE80)
#define CLASS_2_59C132113475898E_METHOD_2_C6FA776B2F1B31A6_OFFSET UNITYSDK_OFFSET(0x1615B440)
#define CLASS_2_59C132113475898E_METHOD_2_E11AC65AA0DC2249_OFFSET UNITYSDK_OFFSET(0x1615B170)
#define CLASS_2_59C132113475898E_METHOD_2_E5B9782786FEEDC8_OFFSET UNITYSDK_OFFSET(0x1615BCC0)
#define CLASS_2_59C132113475898E_METHOD_2_EFDE274FAF89F595_OFFSET UNITYSDK_OFFSET(0x1615B0B0)
#define CLASS_2_59C132113475898E_METHOD_2_F611A60586B67028_OFFSET UNITYSDK_OFFSET(0x1615B350)
#define CLASS_2_59C132113475898E_METHOD_2_F84C45E5D7C025B0_OFFSET UNITYSDK_OFFSET(0x1615BA00)
#define CLASS_2_59C132113475898E_ONSTART_OFFSET UNITYSDK_OFFSET(0x1615AD80)
#define CLASS_2_59C132113475898E__CTOR_OFFSET UNITYSDK_OFFSET(0x1615AE70)

inline static constexpr unsigned int Class_2_59C132113475898E_TypeDefinitionIndex = 70769;

class Class_2_59C132113475898E : public ::Class_1_C2937544035FD07F
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_59C132113475898E__CTOR_OFFSET))(this);
	}

	::System::Void OnStart()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_59C132113475898E_ONSTART_OFFSET))(this);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_59C132113475898E_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_2_B9D37F33E55FF3EE(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_2_59C132113475898E_METHOD_2_B9D37F33E55FF3EE_OFFSET))(this, a1);
	}

	::Cysharp::Threading::Tasks::UniTask_1<::System::Boolean> Method_2_EFDE274FAF89F595(::System::Threading::CancellationToken a1)
	{
		return ((::Cysharp::Threading::Tasks::UniTask_1<::System::Boolean>(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CLASS_2_59C132113475898E_METHOD_2_EFDE274FAF89F595_OFFSET))(this, a1);
	}

	::System::Void Method_2_E11AC65AA0DC2249()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_59C132113475898E_METHOD_2_E11AC65AA0DC2249_OFFSET))(this);
	}

	::Cysharp::Threading::Tasks::UniTask_1<::System::Boolean> Method_2_F611A60586B67028(::System::Int32 a1, ::System::UInt32 a2, ::System::Threading::CancellationToken a3)
	{
		return ((::Cysharp::Threading::Tasks::UniTask_1<::System::Boolean>(*)(::PVOID, ::System::Int32, ::System::UInt32, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CLASS_2_59C132113475898E_METHOD_2_F611A60586B67028_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_C6FA776B2F1B31A6(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_59C132113475898E_METHOD_2_C6FA776B2F1B31A6_OFFSET))(this, a1);
	}

	::Cysharp::Threading::Tasks::UniTask_1<::Class_3_472679C84451629A_1*> Method_2_0C83E6E8046CF60D(::System::Int32 a1, ::System::Threading::CancellationToken a2, ::System::Int32 a3)
	{
		return ((::Cysharp::Threading::Tasks::UniTask_1<::Class_3_472679C84451629A_1*>(*)(::PVOID, ::System::Int32, ::System::Threading::CancellationToken, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_59C132113475898E_METHOD_2_0C83E6E8046CF60D_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_15615EC7D2F500DB(::System::Int32 a1, ::System::UInt32 a2, ::System::Boolean a3, ::System::Single a4, ::System::Action* a5, ::System::Action* a6)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::UInt32, ::System::Boolean, ::System::Single, ::System::Action*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_2_59C132113475898E_METHOD_2_15615EC7D2F500DB_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Void Method_2_F84C45E5D7C025B0(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_2_59C132113475898E_METHOD_2_F84C45E5D7C025B0_OFFSET))(this, a1);
	}

	::System::Void Method_2_207146490BB7E633(::Class_3_41BA658AB33F544B_2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_41BA658AB33F544B_2*))((::PBYTE)hIl2Cpp + CLASS_2_59C132113475898E_METHOD_2_207146490BB7E633_OFFSET))(this, a1);
	}

	::System::Void Method_2_E5B9782786FEEDC8(::System::Collections::Generic::List_1<::System::UInt32>* a1, ::System::Action_1<::System::Collections::Generic::List_1<::System::UInt32>*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Action_1<::System::Collections::Generic::List_1<::System::UInt32>*>*))((::PBYTE)hIl2Cpp + CLASS_2_59C132113475898E_METHOD_2_E5B9782786FEEDC8_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_601F640857BFB221(::System::UInt32 a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_2_59C132113475898E_METHOD_2_601F640857BFB221_OFFSET))(this, a1, a2);
	}

	::Cysharp::Threading::Tasks::UniTask_1<::Class_3_D9FABB598B022DEA*> Method_2_35AC29C84DDE105B(::System::Boolean a1, ::System::Boolean a2, ::System::Single a3, ::System::Int32 a4, ::System::Int32 a5, ::System::UInt32 a6, ::System::Int32 a7, ::System::Threading::CancellationToken a8)
	{
		return ((::Cysharp::Threading::Tasks::UniTask_1<::Class_3_D9FABB598B022DEA*>(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::System::Single, ::System::Int32, ::System::Int32, ::System::UInt32, ::System::Int32, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CLASS_2_59C132113475898E_METHOD_2_35AC29C84DDE105B_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
	}
};
