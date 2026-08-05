#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_C353FCD1325B3415_Enum_3_29972EC214FAAE12.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTaskVoid.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Threading/CancellationToken.h"

class ReplayChangeEvent;
class ReplayCheckpoint;
class ReplayFullData;
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System::Threading { class CancellationTokenSource; }
template <typename T> class Class_1_0D912EB8FF0B361F_2;

#define CLASS_1_C353FCD1325B3415_METHOD_1_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0x1D923670)
#define CLASS_1_C353FCD1325B3415_METHOD_1_45AA2F5085C2C40D_OFFSET UNITYSDK_OFFSET(0x1D923210)
#define CLASS_1_C353FCD1325B3415_METHOD_1_495ADD73A5890CEE_OFFSET UNITYSDK_OFFSET(0x1D9235C0)
#define CLASS_1_C353FCD1325B3415_METHOD_1_7C8442CB7C5D276D_OFFSET UNITYSDK_OFFSET(0x1D9232D0)
#define CLASS_1_C353FCD1325B3415_METHOD_1_98995A244DD299C0_OFFSET UNITYSDK_OFFSET(0x1D922AA0)
#define CLASS_1_C353FCD1325B3415_METHOD_1_A15DC766AD5FFB2F_OFFSET UNITYSDK_OFFSET(0x1D923680)
#define CLASS_1_C353FCD1325B3415_METHOD_1_B87FEA819DC357D3_OFFSET UNITYSDK_OFFSET(0x1D922D80)
#define CLASS_1_C353FCD1325B3415_METHOD_1_C52BAFC5ED31B9EB_1_OFFSET UNITYSDK_OFFSET(0x1D923710)
#define CLASS_1_C353FCD1325B3415_METHOD_1_C52BAFC5ED31B9EB_OFFSET UNITYSDK_OFFSET(0x1D923570)
#define CLASS_1_C353FCD1325B3415_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x1D923550)
#define CLASS_1_C353FCD1325B3415__CTOR_OFFSET UNITYSDK_OFFSET(0x1D922A90)

inline static constexpr unsigned int Class_1_C353FCD1325B3415_TypeDefinitionIndex = 35225;

class Class_1_C353FCD1325B3415 : public ::System::Object
{
public:
	::System::Threading::CancellationTokenSource* Field_1_4; // 0x10
	::System::Threading::CancellationToken Field_1_5; // 0x18
	::System::Action_2<::System::String*, ::System::Object*>* Field_1_9; // 0x20
	::ReplayFullData* Field_1_0; // 0x28
	::System::String* Field_1_11; // 0x30
	::System::Action_2<::System::String*, ::System::Object*>* Field_1_10; // 0x38
	::Class_1_0D912EB8FF0B361F_2<::ReplayChangeEvent*>* Field_1_6; // 0x40
	::Class_1_C353FCD1325B3415_Enum_3_29972EC214FAAE12 Field_1_3; // 0x48
	::System::Single Field_1_1; // 0x4C
	::System::Boolean Field_1_2; // 0x50
	::System::Boolean Field_1_8; // 0x51
	::System::Int32 Field_1_7; // 0x54

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C353FCD1325B3415__CTOR_OFFSET))(this);
	}

	::System::String* Method_1_98995A244DD299C0()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C353FCD1325B3415_METHOD_1_98995A244DD299C0_OFFSET))(this);
	}

	::System::Void Method_1_B87FEA819DC357D3(::ReplayCheckpoint* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::ReplayCheckpoint*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_C353FCD1325B3415_METHOD_1_B87FEA819DC357D3_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_45AA2F5085C2C40D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C353FCD1325B3415_METHOD_1_45AA2F5085C2C40D_OFFSET))(this);
	}

	::System::Void Method_1_7C8442CB7C5D276D(::System::String* a1, ::System::Object* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_C353FCD1325B3415_METHOD_1_7C8442CB7C5D276D_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_C52BAFC5ED31B9EB(::System::Action_2<::System::String*, ::System::Object*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_2<::System::String*, ::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_1_C353FCD1325B3415_METHOD_1_C52BAFC5ED31B9EB_OFFSET))(this, a1);
	}

	::ReplayFullData* Method_1_495ADD73A5890CEE()
	{
		return ((::ReplayFullData*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C353FCD1325B3415_METHOD_1_495ADD73A5890CEE_OFFSET))(this);
	}

	::System::String* Method_1_126AB3935214AA22()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C353FCD1325B3415_METHOD_1_126AB3935214AA22_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C353FCD1325B3415_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::Cysharp::Threading::Tasks::UniTaskVoid Method_1_A15DC766AD5FFB2F(::ReplayFullData* a1)
	{
		return ((::Cysharp::Threading::Tasks::UniTaskVoid(*)(::PVOID, ::ReplayFullData*))((::PBYTE)hIl2Cpp + CLASS_1_C353FCD1325B3415_METHOD_1_A15DC766AD5FFB2F_OFFSET))(this, a1);
	}

	::System::Void Method_1_C52BAFC5ED31B9EB_1(::System::Action_2<::System::String*, ::System::Object*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_2<::System::String*, ::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_1_C353FCD1325B3415_METHOD_1_C52BAFC5ED31B9EB_1_OFFSET))(this, a1);
	}
};
