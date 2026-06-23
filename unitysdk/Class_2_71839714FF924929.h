#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_C2937544035FD07F.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_3_025FF4981524A424_129;
class Class_3_025FF4981524A424_535;
class Class_3_025FF4981524A424_587;
class Class_3_025FF4981524A424_64;
class Class_3_472679C84451629A_14;
class Class_3_48A3D3A34C52331D_37;
class Class_3_67103607A6A39393_2;
class Class_3_6EF456A21AE85EEC_101;
class Class_3_7E6E8DD3EAC12A67_16;
class Class_3_8069852B6FA1A544_10;
class Class_3_AE02BC8285203464_19;
class Class_3_BC65147800193919;
class Class_3_E82E721E2B3FD119_1;
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_71839714FF924929_METHOD_2_0717563BAE26355D_OFFSET UNITYSDK_OFFSET(0x1535E8C0)
#define CLASS_2_71839714FF924929_METHOD_2_0C83E6E8046CF60D_OFFSET UNITYSDK_OFFSET(0x1535DF60)
#define CLASS_2_71839714FF924929_METHOD_2_16ABA95E57BC9C8F_OFFSET UNITYSDK_OFFSET(0x1535DBB0)
#define CLASS_2_71839714FF924929_METHOD_2_24BB8FC4536BDA11_OFFSET UNITYSDK_OFFSET(0x1535FDC0)
#define CLASS_2_71839714FF924929_METHOD_2_307E0E274BD9EABC_OFFSET UNITYSDK_OFFSET(0x1535F890)
#define CLASS_2_71839714FF924929_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x1535D760)
#define CLASS_2_71839714FF924929_METHOD_2_7DE8D29A635A488A_OFFSET UNITYSDK_OFFSET(0x1535E160)
#define CLASS_2_71839714FF924929_METHOD_2_7EAE21C21608C867_OFFSET UNITYSDK_OFFSET(0x1535E090)
#define CLASS_2_71839714FF924929_METHOD_2_7FDCBD4366B9EBD1_OFFSET UNITYSDK_OFFSET(0x1535E310)
#define CLASS_2_71839714FF924929_METHOD_2_918194160C9E71CB_1_OFFSET UNITYSDK_OFFSET(0x1535F460)
#define CLASS_2_71839714FF924929_METHOD_2_918194160C9E71CB_OFFSET UNITYSDK_OFFSET(0x1535EA90)
#define CLASS_2_71839714FF924929_METHOD_2_9D24228BDD752992_1_OFFSET UNITYSDK_OFFSET(0x1535DCE0)
#define CLASS_2_71839714FF924929_METHOD_2_9D24228BDD752992_OFFSET UNITYSDK_OFFSET(0x1535D820)
#define CLASS_2_71839714FF924929_METHOD_2_9DCE53F2A478D1A2_1_OFFSET UNITYSDK_OFFSET(0x1535EED0)
#define CLASS_2_71839714FF924929_METHOD_2_9DCE53F2A478D1A2_OFFSET UNITYSDK_OFFSET(0x1535E6F0)
#define CLASS_2_71839714FF924929_METHOD_2_B6BE5B02773966FB_OFFSET UNITYSDK_OFFSET(0x1535DAA0)
#define CLASS_2_71839714FF924929_METHOD_2_B7FDB7CA86BC8D19_1_OFFSET UNITYSDK_OFFSET(0x1535F6D0)
#define CLASS_2_71839714FF924929_METHOD_2_B7FDB7CA86BC8D19_OFFSET UNITYSDK_OFFSET(0x1535ED10)
#define CLASS_2_71839714FF924929_METHOD_2_BDCC197FFEABBFF1_OFFSET UNITYSDK_OFFSET(0x1535F0A0)
#define CLASS_2_71839714FF924929_METHOD_2_D3A520F720D8FADC_OFFSET UNITYSDK_OFFSET(0x1535F2C0)
#define CLASS_2_71839714FF924929_METHOD_2_D44226709B7EAB8A_OFFSET UNITYSDK_OFFSET(0x1535FA80)
#define CLASS_2_71839714FF924929_METHOD_2_E11AC65AA0DC2249_OFFSET UNITYSDK_OFFSET(0x1535E510)
#define CLASS_2_71839714FF924929_ONSTART_OFFSET UNITYSDK_OFFSET(0x1535D720)
#define CLASS_2_71839714FF924929__CTOR_OFFSET UNITYSDK_OFFSET(0x1535D810)

inline static constexpr unsigned int Class_2_71839714FF924929_TypeDefinitionIndex = 66847;

class Class_2_71839714FF924929 : public ::Class_1_C2937544035FD07F
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_71839714FF924929__CTOR_OFFSET))(this);
	}

	::System::Void OnStart()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_71839714FF924929_ONSTART_OFFSET))(this);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_71839714FF924929_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_2_9D24228BDD752992(::System::Collections::Generic::List_1<::System::UInt32>* a1, ::System::Boolean a2, ::System::Action* a3, ::System::Action* a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Boolean, ::System::Action*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_2_71839714FF924929_METHOD_2_9D24228BDD752992_OFFSET))(this, a1, a2, a3, a4);
	}

	::Cysharp::Threading::Tasks::UniTask_1<::System::ValueTuple_2<::System::Boolean, ::Class_3_025FF4981524A424_129*>> Method_2_B6BE5B02773966FB(::System::Int32 a1, ::System::UInt32 a2, ::System::Threading::CancellationToken a3)
	{
		return ((::Cysharp::Threading::Tasks::UniTask_1<::System::ValueTuple_2<::System::Boolean, ::Class_3_025FF4981524A424_129*>>(*)(::PVOID, ::System::Int32, ::System::UInt32, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CLASS_2_71839714FF924929_METHOD_2_B6BE5B02773966FB_OFFSET))(this, a1, a2, a3);
	}

	::Cysharp::Threading::Tasks::UniTask_1<::Class_3_025FF4981524A424_535*> Method_2_16ABA95E57BC9C8F(::System::Single a1, ::System::Threading::CancellationToken a2, ::System::Action* a3, ::System::Action* a4)
	{
		return ((::Cysharp::Threading::Tasks::UniTask_1<::Class_3_025FF4981524A424_535*>(*)(::PVOID, ::System::Single, ::System::Threading::CancellationToken, ::System::Action*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_2_71839714FF924929_METHOD_2_16ABA95E57BC9C8F_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_9D24228BDD752992_1(::System::Collections::Generic::List_1<::System::UInt32>* a1, ::System::Boolean a2, ::System::Action* a3, ::System::Action* a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Boolean, ::System::Action*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_2_71839714FF924929_METHOD_2_9D24228BDD752992_1_OFFSET))(this, a1, a2, a3, a4);
	}

	::Cysharp::Threading::Tasks::UniTask_1<::Class_3_7E6E8DD3EAC12A67_16*> Method_2_0C83E6E8046CF60D(::System::Int32 a1, ::System::Threading::CancellationToken a2, ::System::Int32 a3)
	{
		return ((::Cysharp::Threading::Tasks::UniTask_1<::Class_3_7E6E8DD3EAC12A67_16*>(*)(::PVOID, ::System::Int32, ::System::Threading::CancellationToken, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_71839714FF924929_METHOD_2_0C83E6E8046CF60D_OFFSET))(this, a1, a2, a3);
	}

	::Cysharp::Threading::Tasks::UniTask_1<::System::Boolean> Method_2_7EAE21C21608C867(::System::UInt32 a1, ::System::Threading::CancellationToken a2)
	{
		return ((::Cysharp::Threading::Tasks::UniTask_1<::System::Boolean>(*)(::PVOID, ::System::UInt32, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CLASS_2_71839714FF924929_METHOD_2_7EAE21C21608C867_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_7DE8D29A635A488A(::System::Int32 a1, ::System::Action_1<::Class_3_025FF4981524A424_587*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Action_1<::Class_3_025FF4981524A424_587*>*))((::PBYTE)hIl2Cpp + CLASS_2_71839714FF924929_METHOD_2_7DE8D29A635A488A_OFFSET))(this, a1, a2);
	}

	::Cysharp::Threading::Tasks::UniTask_1<::Class_3_48A3D3A34C52331D_37*> Method_2_7FDCBD4366B9EBD1(::System::Boolean a1, ::System::Boolean a2, ::System::Int32 a3, ::System::Threading::CancellationToken a4, ::System::UInt32 a5, ::System::Single a6, ::System::Int32 a7, ::System::Collections::Generic::List_1<::Class_3_E82E721E2B3FD119_1*>* a8, ::System::Collections::Generic::List_1<::Class_3_6EF456A21AE85EEC_101*>* a9)
	{
		return ((::Cysharp::Threading::Tasks::UniTask_1<::Class_3_48A3D3A34C52331D_37*>(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::System::Int32, ::System::Threading::CancellationToken, ::System::UInt32, ::System::Single, ::System::Int32, ::System::Collections::Generic::List_1<::Class_3_E82E721E2B3FD119_1*>*, ::System::Collections::Generic::List_1<::Class_3_6EF456A21AE85EEC_101*>*))((::PBYTE)hIl2Cpp + CLASS_2_71839714FF924929_METHOD_2_7FDCBD4366B9EBD1_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9);
	}

	::System::Void Method_2_E11AC65AA0DC2249()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_71839714FF924929_METHOD_2_E11AC65AA0DC2249_OFFSET))(this);
	}

	::System::Void Method_2_9DCE53F2A478D1A2(::System::UInt32 a1, ::System::Action* a2, ::System::Action* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Action*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_2_71839714FF924929_METHOD_2_9DCE53F2A478D1A2_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_0717563BAE26355D(::System::Action_1<::Class_3_BC65147800193919*>* a1, ::System::Int64 a2, ::System::Action* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::Class_3_BC65147800193919*>*, ::System::Int64, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_2_71839714FF924929_METHOD_2_0717563BAE26355D_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_918194160C9E71CB(::System::Collections::Generic::List_1<::System::UInt32>* a1, ::System::Action* a2, ::System::Action* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Action*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_2_71839714FF924929_METHOD_2_918194160C9E71CB_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_B7FDB7CA86BC8D19(::System::Action_1<::Class_3_67103607A6A39393_2*>* a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::Class_3_67103607A6A39393_2*>*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_2_71839714FF924929_METHOD_2_B7FDB7CA86BC8D19_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9DCE53F2A478D1A2_1(::System::UInt32 a1, ::System::Action* a2, ::System::Action* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Action*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_2_71839714FF924929_METHOD_2_9DCE53F2A478D1A2_1_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_BDCC197FFEABBFF1(::System::Int32 a1, ::System::UInt32 a2, ::System::Boolean a3, ::System::Single a4, ::System::Action* a5, ::System::Action* a6)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::UInt32, ::System::Boolean, ::System::Single, ::System::Action*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_2_71839714FF924929_METHOD_2_BDCC197FFEABBFF1_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Void Method_2_D3A520F720D8FADC(::System::UInt32 a1, ::System::Action_1<::Class_3_025FF4981524A424_64*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Action_1<::Class_3_025FF4981524A424_64*>*))((::PBYTE)hIl2Cpp + CLASS_2_71839714FF924929_METHOD_2_D3A520F720D8FADC_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_918194160C9E71CB_1(::System::Collections::Generic::List_1<::System::UInt32>* a1, ::System::Action* a2, ::System::Action* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Action*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_2_71839714FF924929_METHOD_2_918194160C9E71CB_1_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_B7FDB7CA86BC8D19_1(::System::Action_1<::Class_3_472679C84451629A_14*>* a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::Class_3_472679C84451629A_14*>*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_2_71839714FF924929_METHOD_2_B7FDB7CA86BC8D19_1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_307E0E274BD9EABC(::System::Int32 a1, ::System::Int32 a2, ::System::Action* a3, ::System::Action* a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Action*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_2_71839714FF924929_METHOD_2_307E0E274BD9EABC_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_D44226709B7EAB8A(::Class_3_AE02BC8285203464_19* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_AE02BC8285203464_19*))((::PBYTE)hIl2Cpp + CLASS_2_71839714FF924929_METHOD_2_D44226709B7EAB8A_OFFSET))(this, a1);
	}

	::System::Void Method_2_24BB8FC4536BDA11(::Class_3_8069852B6FA1A544_10* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_8069852B6FA1A544_10*))((::PBYTE)hIl2Cpp + CLASS_2_71839714FF924929_METHOD_2_24BB8FC4536BDA11_OFFSET))(this, a1);
	}
};
