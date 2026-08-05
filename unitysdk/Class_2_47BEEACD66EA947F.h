#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_3437E8F8CEFA7AE1_Enum_3_19858567C44E2AEF.h"
#include "unitysdk/Class_1_BE149A7D6310B037.h"
#include "unitysdk/Class_1_C4CB11A2FD957208_Struct_2_98E057419FFAAB00.h"
#include "unitysdk/Enum_3_7B044D15E4826ADC.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/Share/EMainHollowShowType.h"
#include "unitysdk/System/Nullable_1.h"

class Class_1_3437E8F8CEFA7AE1;
class Class_1_5DA2E7556103D5A3_345;
class Class_1_EE462DDB9EDFAFDA;
class Class_1_F24A790D52CF0024;
class Class_2_0A55B5A82A61DAFA_2;
class Class_2_208CC9941471731A_1079;
class Class_2_208CC9941471731A_893;
class Class_3_48A3D3A34C52331D_55;
class Class_3_5B0D01C92C1E671E_2;
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Tuple_2; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_47BEEACD66EA947F_METHOD_2_108DC5F70DD6B507_OFFSET UNITYSDK_OFFSET(0x11B1C5E0)
#define CLASS_2_47BEEACD66EA947F_METHOD_2_1146D8504A091EA9_OFFSET UNITYSDK_OFFSET(0x11B12A50)
#define CLASS_2_47BEEACD66EA947F_METHOD_2_16A99F78B61C8C3C_OFFSET UNITYSDK_OFFSET(0x11B1C880)
#define CLASS_2_47BEEACD66EA947F_METHOD_2_1C0FAAEEA3F0343A_OFFSET UNITYSDK_OFFSET(0x11B15A30)
#define CLASS_2_47BEEACD66EA947F_METHOD_2_2023D0A4C427EC3A_OFFSET UNITYSDK_OFFSET(0x11B1BCB0)
#define CLASS_2_47BEEACD66EA947F_METHOD_2_2062405A8452FD61_OFFSET UNITYSDK_OFFSET(0x11B114B0)
#define CLASS_2_47BEEACD66EA947F_METHOD_2_220D66A1F59587BA_OFFSET UNITYSDK_OFFSET(0x11B10AA0)
#define CLASS_2_47BEEACD66EA947F_METHOD_2_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x11B1B750)
#define CLASS_2_47BEEACD66EA947F_METHOD_2_28E58E3241EFD972_OFFSET UNITYSDK_OFFSET(0x11B1DD60)
#define CLASS_2_47BEEACD66EA947F_METHOD_2_28EB11670A8E5A86_OFFSET UNITYSDK_OFFSET(0x11B18AD0)
#define CLASS_2_47BEEACD66EA947F_METHOD_2_2AEB4369FDB9C34B_OFFSET UNITYSDK_OFFSET(0x11B19D20)
#define CLASS_2_47BEEACD66EA947F_METHOD_2_2F64259250993203_OFFSET UNITYSDK_OFFSET(0x11B191B0)
#define CLASS_2_47BEEACD66EA947F_METHOD_2_328DE0E41CCD45D3_OFFSET UNITYSDK_OFFSET(0x11B133C0)
#define CLASS_2_47BEEACD66EA947F_METHOD_2_3482871D89EFD721_OFFSET UNITYSDK_OFFSET(0x11B16500)
#define CLASS_2_47BEEACD66EA947F_METHOD_2_35D2868F291B8004_OFFSET UNITYSDK_OFFSET(0x11B15160)
#define CLASS_2_47BEEACD66EA947F_METHOD_2_3AC572023154FC7C_OFFSET UNITYSDK_OFFSET(0x11B1D290)
#define CLASS_2_47BEEACD66EA947F_METHOD_2_3BFB96ACC01F03FD_OFFSET UNITYSDK_OFFSET(0x11B16B80)
#define CLASS_2_47BEEACD66EA947F_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x11B106E0)
#define CLASS_2_47BEEACD66EA947F_METHOD_2_4EC2E1ECDEE1B9F2_OFFSET UNITYSDK_OFFSET(0x11B12440)
#define CLASS_2_47BEEACD66EA947F_METHOD_2_52E456B60C3C2D81_OFFSET UNITYSDK_OFFSET(0x11B16F20)
#define CLASS_2_47BEEACD66EA947F_METHOD_2_54125DFCC124FAED_OFFSET UNITYSDK_OFFSET(0x11B13E80)
#define CLASS_2_47BEEACD66EA947F_METHOD_2_5829557A8D4350F5_OFFSET UNITYSDK_OFFSET(0x11B13760)
#define CLASS_2_47BEEACD66EA947F_METHOD_2_594B798F0D1B2B17_OFFSET UNITYSDK_OFFSET(0x11B1B4C0)
#define CLASS_2_47BEEACD66EA947F_METHOD_2_5E35696A4DDB21DC_OFFSET UNITYSDK_OFFSET(0x11B15C40)
#define CLASS_2_47BEEACD66EA947F_METHOD_2_5F857E0E7C9DB593_OFFSET UNITYSDK_OFFSET(0x11B14170)
#define CLASS_2_47BEEACD66EA947F_METHOD_2_60199D5D932DD55A_OFFSET UNITYSDK_OFFSET(0x11B1CCB0)
#define CLASS_2_47BEEACD66EA947F_METHOD_2_64139B4C7E2EBBFA_OFFSET UNITYSDK_OFFSET(0x11B13BC0)
#define CLASS_2_47BEEACD66EA947F_METHOD_2_7E63DE410EA42AD7_1_OFFSET UNITYSDK_OFFSET(0x11B1D9B0)
#define CLASS_2_47BEEACD66EA947F_METHOD_2_7E63DE410EA42AD7_OFFSET UNITYSDK_OFFSET(0x11B1A890)
#define CLASS_2_47BEEACD66EA947F_METHOD_2_8559B8E793FA5652_OFFSET UNITYSDK_OFFSET(0x11B1CD10)
#define CLASS_2_47BEEACD66EA947F_METHOD_2_864E5F7035869BCD_OFFSET UNITYSDK_OFFSET(0x11B17A80)
#define CLASS_2_47BEEACD66EA947F_METHOD_2_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x11B150A0)
#define CLASS_2_47BEEACD66EA947F_METHOD_2_8D3D29014F948D88_OFFSET UNITYSDK_OFFSET(0x11B1D080)
#define CLASS_2_47BEEACD66EA947F_METHOD_2_8FE08F5599F0F018_OFFSET UNITYSDK_OFFSET(0x11B181F0)
#define CLASS_2_47BEEACD66EA947F_METHOD_2_93F12EB14DAB1D0F_OFFSET UNITYSDK_OFFSET(0x11B15670)
#define CLASS_2_47BEEACD66EA947F_METHOD_2_967F4AC776241F0A_OFFSET UNITYSDK_OFFSET(0x11B17550)
#define CLASS_2_47BEEACD66EA947F_METHOD_2_99E4B1F8A5CF2102_1_OFFSET UNITYSDK_OFFSET(0x11B1AC80)
#define CLASS_2_47BEEACD66EA947F_METHOD_2_99E4B1F8A5CF2102_2_OFFSET UNITYSDK_OFFSET(0x11B1D6E0)
#define CLASS_2_47BEEACD66EA947F_METHOD_2_99E4B1F8A5CF2102_OFFSET UNITYSDK_OFFSET(0x11B19A50)
#define CLASS_2_47BEEACD66EA947F_METHOD_2_9B648E232A72278C_OFFSET UNITYSDK_OFFSET(0x11B10880)
#define CLASS_2_47BEEACD66EA947F_METHOD_2_9D9C6981AA740629_OFFSET UNITYSDK_OFFSET(0x11B153D0)
#define CLASS_2_47BEEACD66EA947F_METHOD_2_AF7BCE05D6447B24_OFFSET UNITYSDK_OFFSET(0x11B150B0)
#define CLASS_2_47BEEACD66EA947F_METHOD_2_B15E38146C6A5B30_OFFSET UNITYSDK_OFFSET(0x11B1A3A0)
#define CLASS_2_47BEEACD66EA947F_METHOD_2_C17DF76A09CF4C59_OFFSET UNITYSDK_OFFSET(0x11B11150)
#define CLASS_2_47BEEACD66EA947F_METHOD_2_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x11B1C550)
#define CLASS_2_47BEEACD66EA947F_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x11B18160)
#define CLASS_2_47BEEACD66EA947F_METHOD_2_CD210EEA0CFC3079_OFFSET UNITYSDK_OFFSET(0x11B1BC60)
#define CLASS_2_47BEEACD66EA947F_METHOD_2_D6F45F97F5685ABB_OFFSET UNITYSDK_OFFSET(0x11B1BF00)
#define CLASS_2_47BEEACD66EA947F_METHOD_2_D78B51BFDA4B8B32_OFFSET UNITYSDK_OFFSET(0x11B10600)
#define CLASS_2_47BEEACD66EA947F_METHOD_2_DC5BFF5477DA93AD_OFFSET UNITYSDK_OFFSET(0x11B17D40)
#define CLASS_2_47BEEACD66EA947F_METHOD_2_DC6E5DCE5224CF4D_OFFSET UNITYSDK_OFFSET(0x11B171C0)
#define CLASS_2_47BEEACD66EA947F_METHOD_2_E170BF4A99A1904D_OFFSET UNITYSDK_OFFSET(0x11B124C0)
#define CLASS_2_47BEEACD66EA947F_METHOD_2_E3F5D10EFAF3E9B2_OFFSET UNITYSDK_OFFSET(0x11B120F0)
#define CLASS_2_47BEEACD66EA947F_METHOD_2_E9BDC1A0D8BFFE48_OFFSET UNITYSDK_OFFSET(0x11B18650)
#define CLASS_2_47BEEACD66EA947F_METHOD_2_EB0F78A46DBE9543_OFFSET UNITYSDK_OFFSET(0x11B12180)
#define CLASS_2_47BEEACD66EA947F_METHOD_2_F29595E23E1552A6_OFFSET UNITYSDK_OFFSET(0x11B16090)
#define CLASS_2_47BEEACD66EA947F_METHOD_2_F59B1D3DCB16E033_OFFSET UNITYSDK_OFFSET(0x11B18D50)
#define CLASS_2_47BEEACD66EA947F_METHOD_2_F95FC9A5B018D6BF_OFFSET UNITYSDK_OFFSET(0x11B1CD70)
#define CLASS_2_47BEEACD66EA947F_METHOD_2_F9DD02AEF077098E_OFFSET UNITYSDK_OFFSET(0x11B19730)
#define CLASS_2_47BEEACD66EA947F_METHOD_2_FAA949A2FA9131A4_OFFSET UNITYSDK_OFFSET(0x11B1B760)
#define CLASS_2_47BEEACD66EA947F_METHOD_2_FB9E304DFB695F51_OFFSET UNITYSDK_OFFSET(0x11B1AF50)
#define CLASS_2_47BEEACD66EA947F_METHOD_2_FBB1014EA15E7D76_OFFSET UNITYSDK_OFFSET(0x11B116E0)
#define CLASS_2_47BEEACD66EA947F_METHOD_2_FDCC5B03083ECBA7_OFFSET UNITYSDK_OFFSET(0x11B14750)
#define CLASS_2_47BEEACD66EA947F__CCTOR_OFFSET UNITYSDK_OFFSET(0x11B10870)
#define CLASS_2_47BEEACD66EA947F__CTOR_OFFSET UNITYSDK_OFFSET(0x11B10740)

inline static constexpr unsigned int Class_2_47BEEACD66EA947F_TypeDefinitionIndex = 61868;

class Class_2_47BEEACD66EA947F : public ::Class_1_BE149A7D6310B037
{
public:
	static ::System::Boolean* StaticGet_Field_2_2()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_2_47BEEACD66EA947F_TypeDefinitionIndex)->GetStaticField(0x136A0);
	}
	// static const ::System::Int32 Field_2_3 = 0x3; // 0x0
	// static const ::System::String* Field_2_1; // 0x0
	// static const ::System::String* Field_2_0; // 0x0
	::Class_1_EE462DDB9EDFAFDA* Field_2_11; // 0x18
	::System::Collections::Generic::List_1<::Class_1_5DA2E7556103D5A3_345*>* Field_2_4; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* Field_2_6; // 0x28
	::System::Collections::Generic::List_1<::Class_1_3437E8F8CEFA7AE1*>* Field_2_5; // 0x30
	::System::Collections::Generic::List_1<::Class_2_0A55B5A82A61DAFA_2*>* Field_2_7; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_47BEEACD66EA947F__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_47BEEACD66EA947F__CCTOR_OFFSET))();
	}

	::System::Void Method_2_D78B51BFDA4B8B32()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_47BEEACD66EA947F_METHOD_2_D78B51BFDA4B8B32_OFFSET))(this);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_47BEEACD66EA947F_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Boolean Method_2_9B648E232A72278C(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_47BEEACD66EA947F_METHOD_2_9B648E232A72278C_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::System::Int32>* Method_2_220D66A1F59587BA(::System::Collections::Generic::List_1<::Class_2_0A55B5A82A61DAFA_2*>* a1)
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_2_0A55B5A82A61DAFA_2*>*))((::PBYTE)hIl2Cpp + CLASS_2_47BEEACD66EA947F_METHOD_2_220D66A1F59587BA_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_EB0F78A46DBE9543(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_47BEEACD66EA947F_METHOD_2_EB0F78A46DBE9543_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::Class_1_F24A790D52CF0024*>* Method_2_E170BF4A99A1904D(::System::Int32 a1, ::System::Collections::Generic::List_1<::Class_1_F24A790D52CF0024*>* a2)
	{
		return ((::System::Collections::Generic::List_1<::Class_1_F24A790D52CF0024*>*(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::List_1<::Class_1_F24A790D52CF0024*>*))((::PBYTE)hIl2Cpp + CLASS_2_47BEEACD66EA947F_METHOD_2_E170BF4A99A1904D_OFFSET))(this, a1, a2);
	}

	::System::Tuple_2<::System::Int32, ::System::Int32>* Method_2_1146D8504A091EA9(::System::Int32 a1, ::System::Boolean a2)
	{
		return ((::System::Tuple_2<::System::Int32, ::System::Int32>*(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_47BEEACD66EA947F_METHOD_2_1146D8504A091EA9_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::Class_1_C4CB11A2FD957208_Struct_2_98E057419FFAAB00>* Method_2_328DE0E41CCD45D3(::System::Collections::Generic::List_1<::Class_1_3437E8F8CEFA7AE1*>* a1, ::System::Collections::Generic::List_1<::Class_1_C4CB11A2FD957208_Struct_2_98E057419FFAAB00>* a2)
	{
		return ((::System::Collections::Generic::List_1<::Class_1_C4CB11A2FD957208_Struct_2_98E057419FFAAB00>*(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_3437E8F8CEFA7AE1*>*, ::System::Collections::Generic::List_1<::Class_1_C4CB11A2FD957208_Struct_2_98E057419FFAAB00>*))((::PBYTE)hIl2Cpp + CLASS_2_47BEEACD66EA947F_METHOD_2_328DE0E41CCD45D3_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_5829557A8D4350F5()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_47BEEACD66EA947F_METHOD_2_5829557A8D4350F5_OFFSET))(this);
	}

	::System::Boolean Method_2_64139B4C7E2EBBFA(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_47BEEACD66EA947F_METHOD_2_64139B4C7E2EBBFA_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_5F857E0E7C9DB593()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_47BEEACD66EA947F_METHOD_2_5F857E0E7C9DB593_OFFSET))(this);
	}

	::System::Void Method_2_FDCC5B03083ECBA7(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_47BEEACD66EA947F_METHOD_2_FDCC5B03083ECBA7_OFFSET))(this, a1);
	}

	::System::Void Method_2_8C8625211DA811AE(::Class_1_EE462DDB9EDFAFDA* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_EE462DDB9EDFAFDA*))((::PBYTE)hIl2Cpp + CLASS_2_47BEEACD66EA947F_METHOD_2_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_4EC2E1ECDEE1B9F2(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_47BEEACD66EA947F_METHOD_2_4EC2E1ECDEE1B9F2_OFFSET))(this, a1);
	}

	::Class_2_208CC9941471731A_893* Method_2_AF7BCE05D6447B24(::System::Int32 a1)
	{
		return ((::Class_2_208CC9941471731A_893*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_47BEEACD66EA947F_METHOD_2_AF7BCE05D6447B24_OFFSET))(this, a1);
	}

	::System::Void Method_2_35D2868F291B8004(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_47BEEACD66EA947F_METHOD_2_35D2868F291B8004_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_9D9C6981AA740629(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_47BEEACD66EA947F_METHOD_2_9D9C6981AA740629_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_93F12EB14DAB1D0F(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_47BEEACD66EA947F_METHOD_2_93F12EB14DAB1D0F_OFFSET))(this, a1);
	}

	::System::Int32 Method_2_1C0FAAEEA3F0343A()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_47BEEACD66EA947F_METHOD_2_1C0FAAEEA3F0343A_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Int32>* Method_2_5E35696A4DDB21DC(::System::Int32 a1)
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_47BEEACD66EA947F_METHOD_2_5E35696A4DDB21DC_OFFSET))(this, a1);
	}

	::System::Tuple_2<::System::Int32, ::System::Int32>* Method_2_F29595E23E1552A6(::System::Int32 a1, ::System::Boolean a2)
	{
		return ((::System::Tuple_2<::System::Int32, ::System::Int32>*(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_47BEEACD66EA947F_METHOD_2_F29595E23E1552A6_OFFSET))(this, a1, a2);
	}

	::System::Single Method_2_3482871D89EFD721(::System::Int32 a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_47BEEACD66EA947F_METHOD_2_3482871D89EFD721_OFFSET))(this, a1);
	}

	::System::Void Method_2_52E456B60C3C2D81(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_47BEEACD66EA947F_METHOD_2_52E456B60C3C2D81_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_DC6E5DCE5224CF4D(::Enum_3_7B044D15E4826ADC a1, ::System::Nullable_1<::System::Boolean> a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Enum_3_7B044D15E4826ADC, ::System::Nullable_1<::System::Boolean>))((::PBYTE)hIl2Cpp + CLASS_2_47BEEACD66EA947F_METHOD_2_DC6E5DCE5224CF4D_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::System::Int32>* Method_2_967F4AC776241F0A(::System::Int32 a1, ::Share::EMainHollowShowType a2)
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID, ::System::Int32, ::Share::EMainHollowShowType))((::PBYTE)hIl2Cpp + CLASS_2_47BEEACD66EA947F_METHOD_2_967F4AC776241F0A_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::Class_1_C4CB11A2FD957208_Struct_2_98E057419FFAAB00>* Method_2_864E5F7035869BCD(::System::Int32 a1, ::System::Boolean a2)
	{
		return ((::System::Collections::Generic::List_1<::Class_1_C4CB11A2FD957208_Struct_2_98E057419FFAAB00>*(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_47BEEACD66EA947F_METHOD_2_864E5F7035869BCD_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::Class_1_C4CB11A2FD957208_Struct_2_98E057419FFAAB00>* Method_2_DC5BFF5477DA93AD(::Class_2_0A55B5A82A61DAFA_2* a1, ::System::Boolean a2)
	{
		return ((::System::Collections::Generic::List_1<::Class_1_C4CB11A2FD957208_Struct_2_98E057419FFAAB00>*(*)(::PVOID, ::Class_2_0A55B5A82A61DAFA_2*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_47BEEACD66EA947F_METHOD_2_DC5BFF5477DA93AD_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_47BEEACD66EA947F_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Boolean Method_2_54125DFCC124FAED(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_47BEEACD66EA947F_METHOD_2_54125DFCC124FAED_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::Class_1_C4CB11A2FD957208_Struct_2_98E057419FFAAB00>* Method_2_8FE08F5599F0F018(::System::Int32 a1)
	{
		return ((::System::Collections::Generic::List_1<::Class_1_C4CB11A2FD957208_Struct_2_98E057419FFAAB00>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_47BEEACD66EA947F_METHOD_2_8FE08F5599F0F018_OFFSET))(this, a1);
	}

	::System::Void Method_2_28EB11670A8E5A86()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_47BEEACD66EA947F_METHOD_2_28EB11670A8E5A86_OFFSET))(this);
	}

	::System::Boolean Method_2_3BFB96ACC01F03FD(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_47BEEACD66EA947F_METHOD_2_3BFB96ACC01F03FD_OFFSET))(this, a1);
	}

	::System::Int32 Method_2_F59B1D3DCB16E033()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_47BEEACD66EA947F_METHOD_2_F59B1D3DCB16E033_OFFSET))(this);
	}

	::System::Boolean Method_2_2F64259250993203()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_47BEEACD66EA947F_METHOD_2_2F64259250993203_OFFSET))(this);
	}

	::System::Boolean Method_2_2062405A8452FD61(::Class_2_0A55B5A82A61DAFA_2* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_0A55B5A82A61DAFA_2*))((::PBYTE)hIl2Cpp + CLASS_2_47BEEACD66EA947F_METHOD_2_2062405A8452FD61_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_99E4B1F8A5CF2102(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_47BEEACD66EA947F_METHOD_2_99E4B1F8A5CF2102_OFFSET))(this, a1);
	}

	::System::Void Method_2_2AEB4369FDB9C34B(::System::Int32 a1, ::System::Collections::Generic::Dictionary_2<::System::SByte, ::System::Int32>* a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Collections::Generic::List_1<::System::Int32>* a5, ::System::Action_1<::Class_3_48A3D3A34C52331D_55*>* a6, ::System::Action* a7, ::System::Boolean a8, ::System::Boolean a9, ::System::Int32 a10, ::System::Boolean a11, ::System::Int32 a12, ::Class_3_5B0D01C92C1E671E_2* a13)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::SByte, ::System::Int32>*, ::System::Int32, ::System::Int32, ::System::Collections::Generic::List_1<::System::Int32>*, ::System::Action_1<::Class_3_48A3D3A34C52331D_55*>*, ::System::Action*, ::System::Boolean, ::System::Boolean, ::System::Int32, ::System::Boolean, ::System::Int32, ::Class_3_5B0D01C92C1E671E_2*))((::PBYTE)hIl2Cpp + CLASS_2_47BEEACD66EA947F_METHOD_2_2AEB4369FDB9C34B_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13);
	}

	::System::Collections::Generic::List_1<::Class_1_C4CB11A2FD957208_Struct_2_98E057419FFAAB00>* Method_2_B15E38146C6A5B30(::Class_2_0A55B5A82A61DAFA_2* a1)
	{
		return ((::System::Collections::Generic::List_1<::Class_1_C4CB11A2FD957208_Struct_2_98E057419FFAAB00>*(*)(::PVOID, ::Class_2_0A55B5A82A61DAFA_2*))((::PBYTE)hIl2Cpp + CLASS_2_47BEEACD66EA947F_METHOD_2_B15E38146C6A5B30_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::Class_1_C4CB11A2FD957208_Struct_2_98E057419FFAAB00>* Method_2_7E63DE410EA42AD7(::Class_2_0A55B5A82A61DAFA_2* a1)
	{
		return ((::System::Collections::Generic::List_1<::Class_1_C4CB11A2FD957208_Struct_2_98E057419FFAAB00>*(*)(::PVOID, ::Class_2_0A55B5A82A61DAFA_2*))((::PBYTE)hIl2Cpp + CLASS_2_47BEEACD66EA947F_METHOD_2_7E63DE410EA42AD7_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_C17DF76A09CF4C59(::System::Int32 a1, ::System::Boolean a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_47BEEACD66EA947F_METHOD_2_C17DF76A09CF4C59_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_99E4B1F8A5CF2102_1(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_47BEEACD66EA947F_METHOD_2_99E4B1F8A5CF2102_1_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::Class_1_3437E8F8CEFA7AE1*>* Method_2_FBB1014EA15E7D76(::System::Int32 a1, ::System::Collections::Generic::List_1<::Class_1_3437E8F8CEFA7AE1*>* a2, ::System::Boolean a3)
	{
		return ((::System::Collections::Generic::List_1<::Class_1_3437E8F8CEFA7AE1*>*(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::List_1<::Class_1_3437E8F8CEFA7AE1*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_47BEEACD66EA947F_METHOD_2_FBB1014EA15E7D76_OFFSET))(this, a1, a2, a3);
	}

	::Class_1_EE462DDB9EDFAFDA* Method_2_24748FC20F375725()
	{
		return ((::Class_1_EE462DDB9EDFAFDA*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_47BEEACD66EA947F_METHOD_2_24748FC20F375725_OFFSET))(this);
	}

	::System::Boolean Method_2_F9DD02AEF077098E(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_47BEEACD66EA947F_METHOD_2_F9DD02AEF077098E_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_FAA949A2FA9131A4(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_47BEEACD66EA947F_METHOD_2_FAA949A2FA9131A4_OFFSET))(this, a1);
	}

	::System::Void Method_2_594B798F0D1B2B17(::System::String* a1, ::System::Collections::Generic::List_1<::Class_1_C4CB11A2FD957208_Struct_2_98E057419FFAAB00>* a2, ::System::Collections::Generic::List_1<::Class_1_3437E8F8CEFA7AE1*>* a3, ::Class_1_3437E8F8CEFA7AE1_Enum_3_19858567C44E2AEF a4, ::System::String* a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Collections::Generic::List_1<::Class_1_C4CB11A2FD957208_Struct_2_98E057419FFAAB00>*, ::System::Collections::Generic::List_1<::Class_1_3437E8F8CEFA7AE1*>*, ::Class_1_3437E8F8CEFA7AE1_Enum_3_19858567C44E2AEF, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_47BEEACD66EA947F_METHOD_2_594B798F0D1B2B17_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Int32 Method_2_CD210EEA0CFC3079()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_47BEEACD66EA947F_METHOD_2_CD210EEA0CFC3079_OFFSET))(this);
	}

	::Foundation::AssetPath Method_2_2023D0A4C427EC3A()
	{
		return ((::Foundation::AssetPath(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_47BEEACD66EA947F_METHOD_2_2023D0A4C427EC3A_OFFSET))(this);
	}

	::System::Boolean Method_2_FB9E304DFB695F51(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_47BEEACD66EA947F_METHOD_2_FB9E304DFB695F51_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::Class_2_208CC9941471731A_1079*>* Method_2_D6F45F97F5685ABB(::System::Int32 a1, ::System::Collections::Generic::List_1<::Class_2_208CC9941471731A_1079*>* a2)
	{
		return ((::System::Collections::Generic::List_1<::Class_2_208CC9941471731A_1079*>*(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::List_1<::Class_2_208CC9941471731A_1079*>*))((::PBYTE)hIl2Cpp + CLASS_2_47BEEACD66EA947F_METHOD_2_D6F45F97F5685ABB_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_47BEEACD66EA947F_METHOD_2_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Method_2_108DC5F70DD6B507(::System::Collections::Generic::List_1<::System::Int32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_2_47BEEACD66EA947F_METHOD_2_108DC5F70DD6B507_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::Class_2_208CC9941471731A_1079*>* Method_2_16A99F78B61C8C3C(::System::Int32 a1, ::System::Collections::Generic::List_1<::Class_2_208CC9941471731A_1079*>* a2)
	{
		return ((::System::Collections::Generic::List_1<::Class_2_208CC9941471731A_1079*>*(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::List_1<::Class_2_208CC9941471731A_1079*>*))((::PBYTE)hIl2Cpp + CLASS_2_47BEEACD66EA947F_METHOD_2_16A99F78B61C8C3C_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::Class_1_5DA2E7556103D5A3_345*>* Method_2_60199D5D932DD55A(::System::Boolean a1)
	{
		return ((::System::Collections::Generic::List_1<::Class_1_5DA2E7556103D5A3_345*>*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_47BEEACD66EA947F_METHOD_2_60199D5D932DD55A_OFFSET))(this, a1);
	}

	::System::Void Method_2_8559B8E793FA5652(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_47BEEACD66EA947F_METHOD_2_8559B8E793FA5652_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_F95FC9A5B018D6BF(::Enum_3_7B044D15E4826ADC a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Enum_3_7B044D15E4826ADC))((::PBYTE)hIl2Cpp + CLASS_2_47BEEACD66EA947F_METHOD_2_F95FC9A5B018D6BF_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::Class_1_C4CB11A2FD957208_Struct_2_98E057419FFAAB00>* Method_2_8D3D29014F948D88(::System::Int32 a1, ::System::Collections::Generic::List_1<::System::Int32>* a2, ::System::Int32 a3)
	{
		return ((::System::Collections::Generic::List_1<::Class_1_C4CB11A2FD957208_Struct_2_98E057419FFAAB00>*(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::List_1<::System::Int32>*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_47BEEACD66EA947F_METHOD_2_8D3D29014F948D88_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_2_3AC572023154FC7C()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_47BEEACD66EA947F_METHOD_2_3AC572023154FC7C_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Int32>* Method_2_E9BDC1A0D8BFFE48(::System::Int32 a1, ::System::Collections::Generic::List_1<::System::Int32>* a2)
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_2_47BEEACD66EA947F_METHOD_2_E9BDC1A0D8BFFE48_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_99E4B1F8A5CF2102_2(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_47BEEACD66EA947F_METHOD_2_99E4B1F8A5CF2102_2_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::Class_1_C4CB11A2FD957208_Struct_2_98E057419FFAAB00>* Method_2_7E63DE410EA42AD7_1(::Class_2_0A55B5A82A61DAFA_2* a1)
	{
		return ((::System::Collections::Generic::List_1<::Class_1_C4CB11A2FD957208_Struct_2_98E057419FFAAB00>*(*)(::PVOID, ::Class_2_0A55B5A82A61DAFA_2*))((::PBYTE)hIl2Cpp + CLASS_2_47BEEACD66EA947F_METHOD_2_7E63DE410EA42AD7_1_OFFSET))(this, a1);
	}

	::System::Int32 Method_2_28E58E3241EFD972(::Class_2_0A55B5A82A61DAFA_2* a1, ::Class_2_0A55B5A82A61DAFA_2* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_2_0A55B5A82A61DAFA_2*, ::Class_2_0A55B5A82A61DAFA_2*))((::PBYTE)hIl2Cpp + CLASS_2_47BEEACD66EA947F_METHOD_2_28E58E3241EFD972_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_E3F5D10EFAF3E9B2(::System::Collections::Generic::List_1<::System::Int32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_2_47BEEACD66EA947F_METHOD_2_E3F5D10EFAF3E9B2_OFFSET))(this, a1);
	}
};
