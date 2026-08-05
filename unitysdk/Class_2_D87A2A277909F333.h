#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_BE149A7D6310B037.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1.h"
#include "unitysdk/Enum_3_DBF2701137F18AA6.h"
#include "unitysdk/System/Threading/CancellationToken.h"

class Class_3_102FCE4946933EAB;
class Class_3_48A3D3A34C52331D_6;
class Class_3_60C0CD999D954B02;
class Class_3_C3F0E3B5AB5977AE_55;
class Class_3_C5245CCA4822DD39_11;
class Class_3_D44B7E10FC746152;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class Class_1_27F786FF2A30778C;

#define CLASS_2_D87A2A277909F333_METHOD_2_0253157EDF1A98D6_OFFSET UNITYSDK_OFFSET(0x165EE980)
#define CLASS_2_D87A2A277909F333_METHOD_2_2CAAA58EB429FD63_OFFSET UNITYSDK_OFFSET(0x165EE440)
#define CLASS_2_D87A2A277909F333_METHOD_2_51DEC44B986280C0_OFFSET UNITYSDK_OFFSET(0x165EF230)
#define CLASS_2_D87A2A277909F333_METHOD_2_5335C253389036A9_1_OFFSET UNITYSDK_OFFSET(0x165EF380)
#define CLASS_2_D87A2A277909F333_METHOD_2_5335C253389036A9_OFFSET UNITYSDK_OFFSET(0x165EF070)
#define CLASS_2_D87A2A277909F333_METHOD_2_6DB0CBC8B59AD1F4_OFFSET UNITYSDK_OFFSET(0x165EF1D0)
#define CLASS_2_D87A2A277909F333_METHOD_2_6E205B0EA69BA463_OFFSET UNITYSDK_OFFSET(0x165EEEE0)
#define CLASS_2_D87A2A277909F333_METHOD_2_95780ED94B90ED36_OFFSET UNITYSDK_OFFSET(0x165EE390)
#define CLASS_2_D87A2A277909F333_METHOD_2_962B1B454150E4E3_OFFSET UNITYSDK_OFFSET(0x165EE450)
#define CLASS_2_D87A2A277909F333_METHOD_2_975353FE2FA1A355_OFFSET UNITYSDK_OFFSET(0x165EF390)
#define CLASS_2_D87A2A277909F333_METHOD_2_996932E5C2221898_OFFSET UNITYSDK_OFFSET(0x165EF080)
#define CLASS_2_D87A2A277909F333_METHOD_2_C33EFB987A00DE40_OFFSET UNITYSDK_OFFSET(0x165EE2B0)
#define CLASS_2_D87A2A277909F333_METHOD_2_D256220471FB9035_OFFSET UNITYSDK_OFFSET(0x165EE3E0)
#define CLASS_2_D87A2A277909F333_METHOD_2_F5599B7DA8E7E53C_OFFSET UNITYSDK_OFFSET(0x165EE290)
#define CLASS_2_D87A2A277909F333__CTOR_OFFSET UNITYSDK_OFFSET(0x165EE170)

inline static constexpr unsigned int Class_2_D87A2A277909F333_TypeDefinitionIndex = 41601;

class Class_2_D87A2A277909F333 : public ::Class_1_BE149A7D6310B037
{
public:
	::Class_3_60C0CD999D954B02* Field_2_7; // 0x18
	::System::Collections::Generic::HashSet_1<::System::Int32>* Field_2_2; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_3_C5245CCA4822DD39_11*>* Field_2_0; // 0x28
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_3_48A3D3A34C52331D_6*>* Field_2_1; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D87A2A277909F333__CTOR_OFFSET))(this);
	}

	::System::Int32 Method_2_F5599B7DA8E7E53C()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D87A2A277909F333_METHOD_2_F5599B7DA8E7E53C_OFFSET))(this);
	}

	::Class_3_48A3D3A34C52331D_6* Method_2_C33EFB987A00DE40(::System::Int32 a1)
	{
		return ((::Class_3_48A3D3A34C52331D_6*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_D87A2A277909F333_METHOD_2_C33EFB987A00DE40_OFFSET))(this, a1);
	}

	::System::Int32 Method_2_95780ED94B90ED36()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D87A2A277909F333_METHOD_2_95780ED94B90ED36_OFFSET))(this);
	}

	::Class_1_27F786FF2A30778C<::Class_3_C3F0E3B5AB5977AE_55*>* Method_2_D256220471FB9035()
	{
		return ((::Class_1_27F786FF2A30778C<::Class_3_C3F0E3B5AB5977AE_55*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D87A2A277909F333_METHOD_2_D256220471FB9035_OFFSET))(this);
	}

	::System::Collections::Generic::HashSet_1<::System::Int32>* Method_2_2CAAA58EB429FD63()
	{
		return ((::System::Collections::Generic::HashSet_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D87A2A277909F333_METHOD_2_2CAAA58EB429FD63_OFFSET))(this);
	}

	::System::Void Method_2_962B1B454150E4E3(::Class_3_D44B7E10FC746152* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_D44B7E10FC746152*))((::PBYTE)hIl2Cpp + CLASS_2_D87A2A277909F333_METHOD_2_962B1B454150E4E3_OFFSET))(this, a1);
	}

	::System::Void Method_2_0253157EDF1A98D6(::Class_3_102FCE4946933EAB* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_102FCE4946933EAB*))((::PBYTE)hIl2Cpp + CLASS_2_D87A2A277909F333_METHOD_2_0253157EDF1A98D6_OFFSET))(this, a1);
	}

	::Cysharp::Threading::Tasks::UniTask_1<::System::Boolean> Method_2_6E205B0EA69BA463(::System::Int32 a1, ::System::Int32 a2, ::System::Boolean a3, ::System::Int32 a4, ::System::Int32 a5, ::System::Int32 a6, ::System::Int32 a7, ::System::Threading::CancellationToken a8, ::System::Collections::Generic::List_1<::System::Int32>* a9)
	{
		return ((::Cysharp::Threading::Tasks::UniTask_1<::System::Boolean>(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Boolean, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Threading::CancellationToken, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_2_D87A2A277909F333_METHOD_2_6E205B0EA69BA463_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9);
	}

	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_3_C5245CCA4822DD39_11*>* Method_2_5335C253389036A9()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_3_C5245CCA4822DD39_11*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D87A2A277909F333_METHOD_2_5335C253389036A9_OFFSET))(this);
	}

	::System::Void Method_2_996932E5C2221898(::System::Int32 a1, ::System::Action* a2, ::System::Action* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Action*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_2_D87A2A277909F333_METHOD_2_996932E5C2221898_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_2_6DB0CBC8B59AD1F4(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_D87A2A277909F333_METHOD_2_6DB0CBC8B59AD1F4_OFFSET))(this, a1);
	}

	::System::Void Method_2_51DEC44B986280C0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D87A2A277909F333_METHOD_2_51DEC44B986280C0_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_3_48A3D3A34C52331D_6*>* Method_2_5335C253389036A9_1()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_3_48A3D3A34C52331D_6*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D87A2A277909F333_METHOD_2_5335C253389036A9_1_OFFSET))(this);
	}

	::System::Boolean Method_2_975353FE2FA1A355(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_D87A2A277909F333_METHOD_2_975353FE2FA1A355_OFFSET))(this, a1);
	}
};
