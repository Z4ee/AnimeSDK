#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_6CB0D6BA6DCFD8B7_Enum_3_0A08934EBA2D58A6.h"
#include "unitysdk/Struct_2_DAA84C1CDD754F37.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_3.h"

class Class_0_16E4307DCC419505_264;
class Class_1_6CB0D6BA6DCFD8B7_Class_1_689E6C8884B689E1;
namespace Foundation { class DownloadDiffPatcher; }
namespace Foundation { class ExceptionInfo; }
namespace Foundation { class IDownloader; }
namespace Foundation { class ParallelFileVerifier; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_6CB0D6BA6DCFD8B7_DISPOSE_OFFSET UNITYSDK_OFFSET(0x122AA340)
#define CLASS_1_6CB0D6BA6DCFD8B7_METHOD_1_02C1E5A7A8AB1938_OFFSET UNITYSDK_OFFSET(0x122ABCC0)
#define CLASS_1_6CB0D6BA6DCFD8B7_METHOD_1_092CD57850778EFC_OFFSET UNITYSDK_OFFSET(0x122B25C0)
#define CLASS_1_6CB0D6BA6DCFD8B7_METHOD_1_289F28027FF47717_OFFSET UNITYSDK_OFFSET(0x122AF620)
#define CLASS_1_6CB0D6BA6DCFD8B7_METHOD_1_2C95AFAD0256302F_OFFSET UNITYSDK_OFFSET(0x122AF130)
#define CLASS_1_6CB0D6BA6DCFD8B7_METHOD_1_3E79BE8A77919DC4_OFFSET UNITYSDK_OFFSET(0x122AFEE0)
#define CLASS_1_6CB0D6BA6DCFD8B7_METHOD_1_40E03D354D1ACC85_OFFSET UNITYSDK_OFFSET(0x122AEDF0)
#define CLASS_1_6CB0D6BA6DCFD8B7_METHOD_1_41146E620D694011_OFFSET UNITYSDK_OFFSET(0x122B0090)
#define CLASS_1_6CB0D6BA6DCFD8B7_METHOD_1_56CE4AFC5339F746_1_OFFSET UNITYSDK_OFFSET(0x122AFD40)
#define CLASS_1_6CB0D6BA6DCFD8B7_METHOD_1_56CE4AFC5339F746_OFFSET UNITYSDK_OFFSET(0x122AF360)
#define CLASS_1_6CB0D6BA6DCFD8B7_METHOD_1_5C00C2EE4FCF347E_OFFSET UNITYSDK_OFFSET(0x122AEDE0)
#define CLASS_1_6CB0D6BA6DCFD8B7_METHOD_1_65479C04535824AE_OFFSET UNITYSDK_OFFSET(0x122ADD90)
#define CLASS_1_6CB0D6BA6DCFD8B7_METHOD_1_6B54F9D9BE7B78BC_OFFSET UNITYSDK_OFFSET(0x122B2750)
#define CLASS_1_6CB0D6BA6DCFD8B7_METHOD_1_749948B663FCCCEF_1_OFFSET UNITYSDK_OFFSET(0x122ABD40)
#define CLASS_1_6CB0D6BA6DCFD8B7_METHOD_1_749948B663FCCCEF_OFFSET UNITYSDK_OFFSET(0x122AA640)
#define CLASS_1_6CB0D6BA6DCFD8B7_METHOD_1_749B802C7FBE9257_OFFSET UNITYSDK_OFFSET(0x122B26F0)
#define CLASS_1_6CB0D6BA6DCFD8B7_METHOD_1_7CC82476E811FF95_OFFSET UNITYSDK_OFFSET(0x122B27D0)
#define CLASS_1_6CB0D6BA6DCFD8B7_METHOD_1_805C56F44231AEF9_OFFSET UNITYSDK_OFFSET(0x122AD3C0)
#define CLASS_1_6CB0D6BA6DCFD8B7_METHOD_1_A71D90A5ECEC011E_OFFSET UNITYSDK_OFFSET(0x122AF300)
#define CLASS_1_6CB0D6BA6DCFD8B7_METHOD_1_AEB676AEFEBB8838_OFFSET UNITYSDK_OFFSET(0x122B1F70)
#define CLASS_1_6CB0D6BA6DCFD8B7_METHOD_1_B235E757922104A8_OFFSET UNITYSDK_OFFSET(0x122ACF50)
#define CLASS_1_6CB0D6BA6DCFD8B7_METHOD_1_BA311457E5768EF6_1_OFFSET UNITYSDK_OFFSET(0x122AFF60)
#define CLASS_1_6CB0D6BA6DCFD8B7_METHOD_1_BA311457E5768EF6_OFFSET UNITYSDK_OFFSET(0x122AE4B0)
#define CLASS_1_6CB0D6BA6DCFD8B7_METHOD_1_BB2928BEC244DEB7_OFFSET UNITYSDK_OFFSET(0x122AFCF0)
#define CLASS_1_6CB0D6BA6DCFD8B7_METHOD_1_BC6BFFDCB4FF191F_OFFSET UNITYSDK_OFFSET(0x122B0260)
#define CLASS_1_6CB0D6BA6DCFD8B7_METHOD_1_C7185BC0ED550293_OFFSET UNITYSDK_OFFSET(0x122AE5E0)
#define CLASS_1_6CB0D6BA6DCFD8B7_METHOD_1_CB4D4F3473DEBF8D_OFFSET UNITYSDK_OFFSET(0x122B1280)
#define CLASS_1_6CB0D6BA6DCFD8B7_METHOD_1_D460587695D41831_OFFSET UNITYSDK_OFFSET(0x122AF8F0)
#define CLASS_1_6CB0D6BA6DCFD8B7_METHOD_1_D7924FE52B50B418_1_OFFSET UNITYSDK_OFFSET(0x122AFC60)
#define CLASS_1_6CB0D6BA6DCFD8B7_METHOD_1_D7924FE52B50B418_OFFSET UNITYSDK_OFFSET(0x122AFBD0)
#define CLASS_1_6CB0D6BA6DCFD8B7_METHOD_1_DAD8439560D0861E_OFFSET UNITYSDK_OFFSET(0x122AE990)
#define CLASS_1_6CB0D6BA6DCFD8B7_METHOD_1_DB7657F95BADD149_OFFSET UNITYSDK_OFFSET(0x122B2680)
#define CLASS_1_6CB0D6BA6DCFD8B7_METHOD_1_DF1222D68715BB4B_OFFSET UNITYSDK_OFFSET(0x122AD7E0)
#define CLASS_1_6CB0D6BA6DCFD8B7_METHOD_1_E0492FF50E9027C9_OFFSET UNITYSDK_OFFSET(0x122AD580)
#define CLASS_1_6CB0D6BA6DCFD8B7_METHOD_1_E10F3359B5E0D724_OFFSET UNITYSDK_OFFSET(0x122AF500)
#define CLASS_1_6CB0D6BA6DCFD8B7_METHOD_1_E69F3DFB7CDFE412_OFFSET UNITYSDK_OFFSET(0x122B2470)
#define CLASS_1_6CB0D6BA6DCFD8B7_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x122B26E0)
#define CLASS_1_6CB0D6BA6DCFD8B7_METHOD_1_F3FF4684D3BACB41_OFFSET UNITYSDK_OFFSET(0x122AE870)
#define CLASS_1_6CB0D6BA6DCFD8B7_METHOD_1_F620DD2FD48DDF53_OFFSET UNITYSDK_OFFSET(0x122ADDE0)
#define CLASS_1_6CB0D6BA6DCFD8B7_METHOD_1_F663C056B6AEF427_OFFSET UNITYSDK_OFFSET(0x122B1EE0)
#define CLASS_1_6CB0D6BA6DCFD8B7_METHOD_1_F867258BF8AE15B3_OFFSET UNITYSDK_OFFSET(0x122AED50)
#define CLASS_1_6CB0D6BA6DCFD8B7_ONCREATE_OFFSET UNITYSDK_OFFSET(0x122AA300)
#define CLASS_1_6CB0D6BA6DCFD8B7_UPDATE_OFFSET UNITYSDK_OFFSET(0x122AA4D0)
#define CLASS_1_6CB0D6BA6DCFD8B7__CTOR_OFFSET UNITYSDK_OFFSET(0x122AA550)

inline static constexpr unsigned int Class_1_6CB0D6BA6DCFD8B7_TypeDefinitionIndex = 56197;

class Class_1_6CB0D6BA6DCFD8B7 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_0 = 0xA; // 0x0
	// static const ::System::Int32 Field_1_1 = 0x1; // 0x0
	::System::Action_2<::Class_1_6CB0D6BA6DCFD8B7_Enum_3_0A08934EBA2D58A6, ::System::Single>* Field_1_3; // 0x10
	::Class_0_16E4307DCC419505_264* Field_1_15; // 0x18
	::System::Action_1<::Class_1_6CB0D6BA6DCFD8B7_Enum_3_0A08934EBA2D58A6>* Field_1_5; // 0x20
	::Foundation::ParallelFileVerifier* Field_1_14; // 0x28
	::System::Action_1<::Class_1_6CB0D6BA6DCFD8B7_Enum_3_0A08934EBA2D58A6>* Field_1_2; // 0x30
	::System::Action_1<::Class_1_6CB0D6BA6DCFD8B7_Enum_3_0A08934EBA2D58A6>* Field_1_6; // 0x38
	::Class_1_6CB0D6BA6DCFD8B7_Class_1_689E6C8884B689E1* Field_1_8; // 0x40
	::System::Action_2<::Class_1_6CB0D6BA6DCFD8B7_Enum_3_0A08934EBA2D58A6, ::System::ValueTuple_3<::System::Int64, ::System::Int64, ::System::Single>>* Field_1_4; // 0x48
	::Foundation::IDownloader* Field_1_16; // 0x50
	::Foundation::DownloadDiffPatcher* Field_1_13; // 0x58
	::Class_1_6CB0D6BA6DCFD8B7_Enum_3_0A08934EBA2D58A6 Field_1_7; // 0x60
	::System::Boolean Field_1_17; // 0x64
	::System::Int32 Field_1_10; // 0x68
	::System::Int32 Field_1_11; // 0x6C
	::System::Int32 Field_1_9; // 0x70
	::System::Int32 Field_1_12; // 0x74

	::System::Void _ctor(::Class_0_16E4307DCC419505_264* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_264*))((::PBYTE)hIl2Cpp + CLASS_1_6CB0D6BA6DCFD8B7__CTOR_OFFSET))(this, a1);
	}

	::System::Void OnCreate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6CB0D6BA6DCFD8B7_ONCREATE_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6CB0D6BA6DCFD8B7_DISPOSE_OFFSET))(this);
	}

	::System::Void Update(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_6CB0D6BA6DCFD8B7_UPDATE_OFFSET))(this, a1);
	}

	::System::Void Method_1_749948B663FCCCEF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6CB0D6BA6DCFD8B7_METHOD_1_749948B663FCCCEF_OFFSET))(this);
	}

	::System::Void Method_1_B235E757922104A8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6CB0D6BA6DCFD8B7_METHOD_1_B235E757922104A8_OFFSET))(this);
	}

	::System::Void Method_1_E0492FF50E9027C9(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_6CB0D6BA6DCFD8B7_METHOD_1_E0492FF50E9027C9_OFFSET))(this, a1);
	}

	::System::Void Method_1_BA311457E5768EF6(::System::Int64 a1, ::System::Int64 a2, ::System::Single a3, ::System::Single a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int64, ::System::Int64, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_6CB0D6BA6DCFD8B7_METHOD_1_BA311457E5768EF6_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_C7185BC0ED550293(::System::Int32 a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_6CB0D6BA6DCFD8B7_METHOD_1_C7185BC0ED550293_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_F3FF4684D3BACB41(::System::Single a1, ::System::Int64 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Int64))((::PBYTE)hIl2Cpp + CLASS_1_6CB0D6BA6DCFD8B7_METHOD_1_F3FF4684D3BACB41_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_749948B663FCCCEF_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6CB0D6BA6DCFD8B7_METHOD_1_749948B663FCCCEF_1_OFFSET))(this);
	}

	::System::Void Method_1_F867258BF8AE15B3(::System::Action_1<::Class_1_6CB0D6BA6DCFD8B7_Enum_3_0A08934EBA2D58A6>* a1, ::System::Action_2<::Class_1_6CB0D6BA6DCFD8B7_Enum_3_0A08934EBA2D58A6, ::System::Single>* a2, ::System::Action_1<::Class_1_6CB0D6BA6DCFD8B7_Enum_3_0A08934EBA2D58A6>* a3, ::System::Action_1<::Class_1_6CB0D6BA6DCFD8B7_Enum_3_0A08934EBA2D58A6>* a4, ::System::Action_2<::Class_1_6CB0D6BA6DCFD8B7_Enum_3_0A08934EBA2D58A6, ::System::ValueTuple_3<::System::Int64, ::System::Int64, ::System::Single>>* a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::Class_1_6CB0D6BA6DCFD8B7_Enum_3_0A08934EBA2D58A6>*, ::System::Action_2<::Class_1_6CB0D6BA6DCFD8B7_Enum_3_0A08934EBA2D58A6, ::System::Single>*, ::System::Action_1<::Class_1_6CB0D6BA6DCFD8B7_Enum_3_0A08934EBA2D58A6>*, ::System::Action_1<::Class_1_6CB0D6BA6DCFD8B7_Enum_3_0A08934EBA2D58A6>*, ::System::Action_2<::Class_1_6CB0D6BA6DCFD8B7_Enum_3_0A08934EBA2D58A6, ::System::ValueTuple_3<::System::Int64, ::System::Int64, ::System::Single>>*))((::PBYTE)hIl2Cpp + CLASS_1_6CB0D6BA6DCFD8B7_METHOD_1_F867258BF8AE15B3_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::Class_0_16E4307DCC419505_264* Method_1_5C00C2EE4FCF347E()
	{
		return ((::Class_0_16E4307DCC419505_264*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6CB0D6BA6DCFD8B7_METHOD_1_5C00C2EE4FCF347E_OFFSET))(this);
	}

	::System::Void Method_1_40E03D354D1ACC85()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6CB0D6BA6DCFD8B7_METHOD_1_40E03D354D1ACC85_OFFSET))(this);
	}

	::System::Void Method_1_805C56F44231AEF9()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6CB0D6BA6DCFD8B7_METHOD_1_805C56F44231AEF9_OFFSET))(this);
	}

	::System::Void Method_1_A71D90A5ECEC011E(::System::Int64 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + CLASS_1_6CB0D6BA6DCFD8B7_METHOD_1_A71D90A5ECEC011E_OFFSET))(this, a1);
	}

	::System::Void Method_1_E10F3359B5E0D724(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_6CB0D6BA6DCFD8B7_METHOD_1_E10F3359B5E0D724_OFFSET))(this, a1);
	}

	::System::Void Method_1_65479C04535824AE(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_6CB0D6BA6DCFD8B7_METHOD_1_65479C04535824AE_OFFSET))(this, a1);
	}

	::System::Void Method_1_DAD8439560D0861E(::System::Collections::Generic::List_1<::Struct_2_DAA84C1CDD754F37>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Struct_2_DAA84C1CDD754F37>*))((::PBYTE)hIl2Cpp + CLASS_1_6CB0D6BA6DCFD8B7_METHOD_1_DAD8439560D0861E_OFFSET))(this, a1);
	}

	::System::Void Method_1_D460587695D41831()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6CB0D6BA6DCFD8B7_METHOD_1_D460587695D41831_OFFSET))(this);
	}

	::System::Void Method_1_D7924FE52B50B418(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_6CB0D6BA6DCFD8B7_METHOD_1_D7924FE52B50B418_OFFSET))(this, a1);
	}

	::System::Void Method_1_D7924FE52B50B418_1(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_6CB0D6BA6DCFD8B7_METHOD_1_D7924FE52B50B418_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_BB2928BEC244DEB7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6CB0D6BA6DCFD8B7_METHOD_1_BB2928BEC244DEB7_OFFSET))(this);
	}

	::System::Void Method_1_DF1222D68715BB4B(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_6CB0D6BA6DCFD8B7_METHOD_1_DF1222D68715BB4B_OFFSET))(this, a1);
	}

	::System::Void Method_1_02C1E5A7A8AB1938(::Class_1_6CB0D6BA6DCFD8B7_Enum_3_0A08934EBA2D58A6 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_6CB0D6BA6DCFD8B7_Enum_3_0A08934EBA2D58A6))((::PBYTE)hIl2Cpp + CLASS_1_6CB0D6BA6DCFD8B7_METHOD_1_02C1E5A7A8AB1938_OFFSET))(this, a1);
	}

	::System::Void Method_1_3E79BE8A77919DC4(::System::Int32 a1, ::System::String* a2, ::System::Action_1<::System::Boolean>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::System::Action_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + CLASS_1_6CB0D6BA6DCFD8B7_METHOD_1_3E79BE8A77919DC4_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_BA311457E5768EF6_1(::System::Int64 a1, ::System::Int64 a2, ::System::Single a3, ::System::Single a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int64, ::System::Int64, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_6CB0D6BA6DCFD8B7_METHOD_1_BA311457E5768EF6_1_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_41146E620D694011()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6CB0D6BA6DCFD8B7_METHOD_1_41146E620D694011_OFFSET))(this);
	}

	::System::Void Method_1_BC6BFFDCB4FF191F(::System::String* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_6CB0D6BA6DCFD8B7_METHOD_1_BC6BFFDCB4FF191F_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_CB4D4F3473DEBF8D(::System::Int64 a1, ::System::Collections::Generic::List_1<::Struct_2_DAA84C1CDD754F37>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int64, ::System::Collections::Generic::List_1<::Struct_2_DAA84C1CDD754F37>*))((::PBYTE)hIl2Cpp + CLASS_1_6CB0D6BA6DCFD8B7_METHOD_1_CB4D4F3473DEBF8D_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_F663C056B6AEF427(::System::Int32 a1, ::System::String* a2, ::System::Action_1<::System::Boolean>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::System::Action_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + CLASS_1_6CB0D6BA6DCFD8B7_METHOD_1_F663C056B6AEF427_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_289F28027FF47717()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6CB0D6BA6DCFD8B7_METHOD_1_289F28027FF47717_OFFSET))(this);
	}

	::System::Void Method_1_56CE4AFC5339F746()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6CB0D6BA6DCFD8B7_METHOD_1_56CE4AFC5339F746_OFFSET))(this);
	}

	::System::Void Method_1_AEB676AEFEBB8838(::System::Boolean a1, ::System::Collections::Generic::List_1<::Foundation::ExceptionInfo*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Collections::Generic::List_1<::Foundation::ExceptionInfo*>*))((::PBYTE)hIl2Cpp + CLASS_1_6CB0D6BA6DCFD8B7_METHOD_1_AEB676AEFEBB8838_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_E69F3DFB7CDFE412()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6CB0D6BA6DCFD8B7_METHOD_1_E69F3DFB7CDFE412_OFFSET))(this);
	}

	::System::Void Method_1_DB7657F95BADD149(::System::Int32 a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_6CB0D6BA6DCFD8B7_METHOD_1_DB7657F95BADD149_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_092CD57850778EFC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6CB0D6BA6DCFD8B7_METHOD_1_092CD57850778EFC_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6CB0D6BA6DCFD8B7_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_F620DD2FD48DDF53(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_6CB0D6BA6DCFD8B7_METHOD_1_F620DD2FD48DDF53_OFFSET))(this, a1);
	}

	::System::Void Method_1_749B802C7FBE9257(::System::Boolean a1, ::System::Collections::Generic::List_1<::Foundation::ExceptionInfo*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Collections::Generic::List_1<::Foundation::ExceptionInfo*>*))((::PBYTE)hIl2Cpp + CLASS_1_6CB0D6BA6DCFD8B7_METHOD_1_749B802C7FBE9257_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_2C95AFAD0256302F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6CB0D6BA6DCFD8B7_METHOD_1_2C95AFAD0256302F_OFFSET))(this);
	}

	::System::Void Method_1_6B54F9D9BE7B78BC(::Class_1_6CB0D6BA6DCFD8B7_Class_1_689E6C8884B689E1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_6CB0D6BA6DCFD8B7_Class_1_689E6C8884B689E1*))((::PBYTE)hIl2Cpp + CLASS_1_6CB0D6BA6DCFD8B7_METHOD_1_6B54F9D9BE7B78BC_OFFSET))(this, a1);
	}

	::System::Void Method_1_7CC82476E811FF95(::System::String* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_6CB0D6BA6DCFD8B7_METHOD_1_7CC82476E811FF95_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_56CE4AFC5339F746_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6CB0D6BA6DCFD8B7_METHOD_1_56CE4AFC5339F746_1_OFFSET))(this);
	}
};
