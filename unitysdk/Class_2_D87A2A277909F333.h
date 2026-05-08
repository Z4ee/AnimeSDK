#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_BE149A7D6310B037.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1.h"
#include "unitysdk/Enum_3_81A3942BCC6E42B5.h"
#include "unitysdk/System/Threading/CancellationToken.h"

class Class_3_0E7EF0781F9BE53A_6;
class Class_3_22AF8254D8CB7E50;
class Class_3_48A3D3A34C52331D_14;
class Class_3_60C0CD999D954B02_1;
class Class_3_C3F0E3B5AB5977AE_4;
class Class_3_F8DF1CCE40B655F3_2;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class Class_1_DD0DD411D84DAED3;

#define CLASS_2_D87A2A277909F333_METHOD_2_0253157EDF1A98D6_OFFSET UNITYSDK_OFFSET(0x12093340)
#define CLASS_2_D87A2A277909F333_METHOD_2_2CAAA58EB429FD63_OFFSET UNITYSDK_OFFSET(0x12092C80)
#define CLASS_2_D87A2A277909F333_METHOD_2_51DEC44B986280C0_OFFSET UNITYSDK_OFFSET(0x12092DF0)
#define CLASS_2_D87A2A277909F333_METHOD_2_5335C253389036A9_1_OFFSET UNITYSDK_OFFSET(0x12093330)
#define CLASS_2_D87A2A277909F333_METHOD_2_5335C253389036A9_OFFSET UNITYSDK_OFFSET(0x12092C90)
#define CLASS_2_D87A2A277909F333_METHOD_2_6E205B0EA69BA463_OFFSET UNITYSDK_OFFSET(0x12092F40)
#define CLASS_2_D87A2A277909F333_METHOD_2_719B6D1C021A5843_OFFSET UNITYSDK_OFFSET(0x12092CA0)
#define CLASS_2_D87A2A277909F333_METHOD_2_95780ED94B90ED36_OFFSET UNITYSDK_OFFSET(0x120938A0)
#define CLASS_2_D87A2A277909F333_METHOD_2_962B1B454150E4E3_OFFSET UNITYSDK_OFFSET(0x120939D0)
#define CLASS_2_D87A2A277909F333_METHOD_2_975353FE2FA1A355_OFFSET UNITYSDK_OFFSET(0x120930F0)
#define CLASS_2_D87A2A277909F333_METHOD_2_C33EFB987A00DE40_OFFSET UNITYSDK_OFFSET(0x120938F0)
#define CLASS_2_D87A2A277909F333_METHOD_2_C9D0123A0E55D14F_OFFSET UNITYSDK_OFFSET(0x12092BA0)
#define CLASS_2_D87A2A277909F333_METHOD_2_D256220471FB9035_OFFSET UNITYSDK_OFFSET(0x12092C20)
#define CLASS_2_D87A2A277909F333_METHOD_2_F5599B7DA8E7E53C_OFFSET UNITYSDK_OFFSET(0x12092C00)
#define CLASS_2_D87A2A277909F333__CTOR_OFFSET UNITYSDK_OFFSET(0x12092A80)

inline static constexpr unsigned int Class_2_D87A2A277909F333_TypeDefinitionIndex = 68917;

class Class_2_D87A2A277909F333 : public ::Class_1_BE149A7D6310B037
{
public:
	::Class_3_60C0CD999D954B02_1* Field_2_3; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_3_48A3D3A34C52331D_14*>* Field_2_1; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_3_0E7EF0781F9BE53A_6*>* Field_2_2; // 0x28
	::System::Collections::Generic::HashSet_1<::System::Int32>* Field_2_0; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D87A2A277909F333__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_2_C9D0123A0E55D14F(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_D87A2A277909F333_METHOD_2_C9D0123A0E55D14F_OFFSET))(this, a1);
	}

	::System::Int32 Method_2_F5599B7DA8E7E53C()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D87A2A277909F333_METHOD_2_F5599B7DA8E7E53C_OFFSET))(this);
	}

	::Class_1_DD0DD411D84DAED3<::Class_3_C3F0E3B5AB5977AE_4*>* Method_2_D256220471FB9035()
	{
		return ((::Class_1_DD0DD411D84DAED3<::Class_3_C3F0E3B5AB5977AE_4*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D87A2A277909F333_METHOD_2_D256220471FB9035_OFFSET))(this);
	}

	::System::Collections::Generic::HashSet_1<::System::Int32>* Method_2_2CAAA58EB429FD63()
	{
		return ((::System::Collections::Generic::HashSet_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D87A2A277909F333_METHOD_2_2CAAA58EB429FD63_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_3_48A3D3A34C52331D_14*>* Method_2_5335C253389036A9()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_3_48A3D3A34C52331D_14*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D87A2A277909F333_METHOD_2_5335C253389036A9_OFFSET))(this);
	}

	::System::Void Method_2_719B6D1C021A5843(::System::Int32 a1, ::System::Action* a2, ::System::Action* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Action*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_2_D87A2A277909F333_METHOD_2_719B6D1C021A5843_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_51DEC44B986280C0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D87A2A277909F333_METHOD_2_51DEC44B986280C0_OFFSET))(this);
	}

	::Cysharp::Threading::Tasks::UniTask_1<::System::Boolean> Method_2_6E205B0EA69BA463(::System::Int32 a1, ::System::Int32 a2, ::System::Boolean a3, ::System::Int32 a4, ::System::Int32 a5, ::System::Int32 a6, ::System::Int32 a7, ::System::Threading::CancellationToken a8, ::System::Collections::Generic::List_1<::System::Int32>* a9)
	{
		return ((::Cysharp::Threading::Tasks::UniTask_1<::System::Boolean>(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Boolean, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Threading::CancellationToken, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_2_D87A2A277909F333_METHOD_2_6E205B0EA69BA463_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9);
	}

	::System::Boolean Method_2_975353FE2FA1A355(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_D87A2A277909F333_METHOD_2_975353FE2FA1A355_OFFSET))(this, a1);
	}

	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_3_0E7EF0781F9BE53A_6*>* Method_2_5335C253389036A9_1()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_3_0E7EF0781F9BE53A_6*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D87A2A277909F333_METHOD_2_5335C253389036A9_1_OFFSET))(this);
	}

	::System::Void Method_2_0253157EDF1A98D6(::Class_3_F8DF1CCE40B655F3_2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_F8DF1CCE40B655F3_2*))((::PBYTE)hIl2Cpp + CLASS_2_D87A2A277909F333_METHOD_2_0253157EDF1A98D6_OFFSET))(this, a1);
	}

	::System::Int32 Method_2_95780ED94B90ED36()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D87A2A277909F333_METHOD_2_95780ED94B90ED36_OFFSET))(this);
	}

	::Class_3_48A3D3A34C52331D_14* Method_2_C33EFB987A00DE40(::System::Int32 a1)
	{
		return ((::Class_3_48A3D3A34C52331D_14*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_D87A2A277909F333_METHOD_2_C33EFB987A00DE40_OFFSET))(this, a1);
	}

	::System::Void Method_2_962B1B454150E4E3(::Class_3_22AF8254D8CB7E50* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_22AF8254D8CB7E50*))((::PBYTE)hIl2Cpp + CLASS_2_D87A2A277909F333_METHOD_2_962B1B454150E4E3_OFFSET))(this, a1);
	}
};
