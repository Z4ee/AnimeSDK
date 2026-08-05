#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_13E1F0BBFE52F5F0.h"
#include "unitysdk/Enum_3_34F7035555410463_1.h"
#include "unitysdk/Foundation/ResourceFileType.h"
#include "unitysdk/Foundation/SingletonDisposable_1.h"
#include "unitysdk/Struct_2_1972A5FA12B7BFD3.h"
#include "unitysdk/Struct_2_61EDE525C60EB6BF.h"
#include "unitysdk/Struct_2_DAA84C1CDD754F37.h"

class Class_1_13B43DCF703FB24C;
class Class_1_15D62275ABED373C;
class Class_1_3B6FD32A4C03F1FC;
namespace MoleMole { class DownloadFileInfo; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_55D728B38111F21B_DISPOSE_OFFSET UNITYSDK_OFFSET(0x175E9040)
#define CLASS_2_55D728B38111F21B_METHOD_2_05AF3E6C9FC16A49_OFFSET UNITYSDK_OFFSET(0x175EE5A0)
#define CLASS_2_55D728B38111F21B_METHOD_2_12C9A3082ABA77E1_OFFSET UNITYSDK_OFFSET(0x175EA370)
#define CLASS_2_55D728B38111F21B_METHOD_2_15B355E7E988A40B_OFFSET UNITYSDK_OFFSET(0x175EF950)
#define CLASS_2_55D728B38111F21B_METHOD_2_1685BD3810865B7C_OFFSET UNITYSDK_OFFSET(0x175F0700)
#define CLASS_2_55D728B38111F21B_METHOD_2_172654BD094F27F9_OFFSET UNITYSDK_OFFSET(0x175EAF60)
#define CLASS_2_55D728B38111F21B_METHOD_2_1BA916A113123E6A_OFFSET UNITYSDK_OFFSET(0x175E9960)
#define CLASS_2_55D728B38111F21B_METHOD_2_23E9742C2E7B33DB_1_OFFSET UNITYSDK_OFFSET(0x175EF7D0)
#define CLASS_2_55D728B38111F21B_METHOD_2_23E9742C2E7B33DB_OFFSET UNITYSDK_OFFSET(0x175EF650)
#define CLASS_2_55D728B38111F21B_METHOD_2_24748FC20F375725_1_OFFSET UNITYSDK_OFFSET(0x175EFC80)
#define CLASS_2_55D728B38111F21B_METHOD_2_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x175ECBB0)
#define CLASS_2_55D728B38111F21B_METHOD_2_25E3D2E64FB63BEB_OFFSET UNITYSDK_OFFSET(0x175EB660)
#define CLASS_2_55D728B38111F21B_METHOD_2_27B2E0B8178B81ED_OFFSET UNITYSDK_OFFSET(0x175EDD60)
#define CLASS_2_55D728B38111F21B_METHOD_2_2A73302F5D8B0BA6_OFFSET UNITYSDK_OFFSET(0x175EE390)
#define CLASS_2_55D728B38111F21B_METHOD_2_2ED8799B5DC425F3_OFFSET UNITYSDK_OFFSET(0x175EE190)
#define CLASS_2_55D728B38111F21B_METHOD_2_3E7B7DB0EDF962BA_1_OFFSET UNITYSDK_OFFSET(0x175EB7C0)
#define CLASS_2_55D728B38111F21B_METHOD_2_3E7B7DB0EDF962BA_2_OFFSET UNITYSDK_OFFSET(0x175EC380)
#define CLASS_2_55D728B38111F21B_METHOD_2_3E7B7DB0EDF962BA_3_OFFSET UNITYSDK_OFFSET(0x175EFB00)
#define CLASS_2_55D728B38111F21B_METHOD_2_3E7B7DB0EDF962BA_OFFSET UNITYSDK_OFFSET(0x175EAC30)
#define CLASS_2_55D728B38111F21B_METHOD_2_4487776BEE04D471_1_OFFSET UNITYSDK_OFFSET(0x175F0CC0)
#define CLASS_2_55D728B38111F21B_METHOD_2_4487776BEE04D471_OFFSET UNITYSDK_OFFSET(0x175EAAA0)
#define CLASS_2_55D728B38111F21B_METHOD_2_44EDEAE08395A153_OFFSET UNITYSDK_OFFSET(0x175EEAD0)
#define CLASS_2_55D728B38111F21B_METHOD_2_47B7BC57A143C373_1_OFFSET UNITYSDK_OFFSET(0x175EBC30)
#define CLASS_2_55D728B38111F21B_METHOD_2_47B7BC57A143C373_OFFSET UNITYSDK_OFFSET(0x175EB950)
#define CLASS_2_55D728B38111F21B_METHOD_2_48EECC15E10EEC11_OFFSET UNITYSDK_OFFSET(0x175EF400)
#define CLASS_2_55D728B38111F21B_METHOD_2_580394B3F28DBF72_1_OFFSET UNITYSDK_OFFSET(0x175EED90)
#define CLASS_2_55D728B38111F21B_METHOD_2_580394B3F28DBF72_2_OFFSET UNITYSDK_OFFSET(0x175F0E50)
#define CLASS_2_55D728B38111F21B_METHOD_2_580394B3F28DBF72_OFFSET UNITYSDK_OFFSET(0x175E9770)
#define CLASS_2_55D728B38111F21B_METHOD_2_5A3F5C9120955FC0_1_OFFSET UNITYSDK_OFFSET(0x175EEF80)
#define CLASS_2_55D728B38111F21B_METHOD_2_5A3F5C9120955FC0_OFFSET UNITYSDK_OFFSET(0x175E9440)
#define CLASS_2_55D728B38111F21B_METHOD_2_5CDF16CC200D8B52_OFFSET UNITYSDK_OFFSET(0x175EA310)
#define CLASS_2_55D728B38111F21B_METHOD_2_60451B2DE9D371C9_OFFSET UNITYSDK_OFFSET(0x175ECFD0)
#define CLASS_2_55D728B38111F21B_METHOD_2_6423291ED13007B8_OFFSET UNITYSDK_OFFSET(0x175EE9B0)
#define CLASS_2_55D728B38111F21B_METHOD_2_6586AC3EA33240BF_OFFSET UNITYSDK_OFFSET(0x175ED980)
#define CLASS_2_55D728B38111F21B_METHOD_2_695579C6786804DA_OFFSET UNITYSDK_OFFSET(0x175EBAB0)
#define CLASS_2_55D728B38111F21B_METHOD_2_7366D8478E0CF310_OFFSET UNITYSDK_OFFSET(0x175EADC0)
#define CLASS_2_55D728B38111F21B_METHOD_2_774E05D782CFC509_OFFSET UNITYSDK_OFFSET(0x175F05E0)
#define CLASS_2_55D728B38111F21B_METHOD_2_79359A071DBD91C6_OFFSET UNITYSDK_OFFSET(0x175EC500)
#define CLASS_2_55D728B38111F21B_METHOD_2_79419E7D890DB1EE_OFFSET UNITYSDK_OFFSET(0x175EC820)
#define CLASS_2_55D728B38111F21B_METHOD_2_81F019B263A55D8A_OFFSET UNITYSDK_OFFSET(0x175ECBC0)
#define CLASS_2_55D728B38111F21B_METHOD_2_833F830E464BF470_OFFSET UNITYSDK_OFFSET(0x175EFEA0)
#define CLASS_2_55D728B38111F21B_METHOD_2_87DF7F2DEFED5C7A_OFFSET UNITYSDK_OFFSET(0x175EE670)
#define CLASS_2_55D728B38111F21B_METHOD_2_89A3DB19E7D72316_OFFSET UNITYSDK_OFFSET(0x175ED3C0)
#define CLASS_2_55D728B38111F21B_METHOD_2_8C8625211DA811AE_1_OFFSET UNITYSDK_OFFSET(0x175EDD50)
#define CLASS_2_55D728B38111F21B_METHOD_2_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x175EB280)
#define CLASS_2_55D728B38111F21B_METHOD_2_96AB598DE1C681FA_OFFSET UNITYSDK_OFFSET(0x175EEC70)
#define CLASS_2_55D728B38111F21B_METHOD_2_9B4D94F0F519678B_1_OFFSET UNITYSDK_OFFSET(0x175F0720)
#define CLASS_2_55D728B38111F21B_METHOD_2_9B4D94F0F519678B_OFFSET UNITYSDK_OFFSET(0x175EBD90)
#define CLASS_2_55D728B38111F21B_METHOD_2_A025F0342FE08D10_OFFSET UNITYSDK_OFFSET(0x175ECA50)
#define CLASS_2_55D728B38111F21B_METHOD_2_A2B6369B2C823CA0_OFFSET UNITYSDK_OFFSET(0x175EB490)
#define CLASS_2_55D728B38111F21B_METHOD_2_AA360F998779F45E_OFFSET UNITYSDK_OFFSET(0x175ED780)
#define CLASS_2_55D728B38111F21B_METHOD_2_AD12372BE27436E0_OFFSET UNITYSDK_OFFSET(0x175F0170)
#define CLASS_2_55D728B38111F21B_METHOD_2_AF18B70A0F6489B2_OFFSET UNITYSDK_OFFSET(0x175F0370)
#define CLASS_2_55D728B38111F21B_METHOD_2_B330F7C2941699D0_OFFSET UNITYSDK_OFFSET(0x175F0A80)
#define CLASS_2_55D728B38111F21B_METHOD_2_BA80D36BDA3B5115_1_OFFSET UNITYSDK_OFFSET(0x175EA710)
#define CLASS_2_55D728B38111F21B_METHOD_2_BA80D36BDA3B5115_2_OFFSET UNITYSDK_OFFSET(0x175EE120)
#define CLASS_2_55D728B38111F21B_METHOD_2_BA80D36BDA3B5115_OFFSET UNITYSDK_OFFSET(0x175E9B30)
#define CLASS_2_55D728B38111F21B_METHOD_2_BC5D900B4C8C5BA2_OFFSET UNITYSDK_OFFSET(0x175EB130)
#define CLASS_2_55D728B38111F21B_METHOD_2_C25C89C277D16D2F_1_OFFSET UNITYSDK_OFFSET(0x175EF230)
#define CLASS_2_55D728B38111F21B_METHOD_2_C25C89C277D16D2F_OFFSET UNITYSDK_OFFSET(0x175E9590)
#define CLASS_2_55D728B38111F21B_METHOD_2_C2F14903DD000BA0_OFFSET UNITYSDK_OFFSET(0x175EFC90)
#define CLASS_2_55D728B38111F21B_METHOD_2_C74E50CBD41F0264_1_OFFSET UNITYSDK_OFFSET(0x175EADB0)
#define CLASS_2_55D728B38111F21B_METHOD_2_C74E50CBD41F0264_2_OFFSET UNITYSDK_OFFSET(0x175EB940)
#define CLASS_2_55D728B38111F21B_METHOD_2_C74E50CBD41F0264_3_OFFSET UNITYSDK_OFFSET(0x175EE590)
#define CLASS_2_55D728B38111F21B_METHOD_2_C74E50CBD41F0264_4_OFFSET UNITYSDK_OFFSET(0x175EEAC0)
#define CLASS_2_55D728B38111F21B_METHOD_2_C74E50CBD41F0264_5_OFFSET UNITYSDK_OFFSET(0x175F0020)
#define CLASS_2_55D728B38111F21B_METHOD_2_C74E50CBD41F0264_6_OFFSET UNITYSDK_OFFSET(0x175F0710)
#define CLASS_2_55D728B38111F21B_METHOD_2_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x175E9760)
#define CLASS_2_55D728B38111F21B_METHOD_2_C7D5B388BE8CCE04_OFFSET UNITYSDK_OFFSET(0x175EC630)
#define CLASS_2_55D728B38111F21B_METHOD_2_CE67C492DF7EC72A_OFFSET UNITYSDK_OFFSET(0x175EEAE0)
#define CLASS_2_55D728B38111F21B_METHOD_2_CF086596D3935A7D_OFFSET UNITYSDK_OFFSET(0x175ECEB0)
#define CLASS_2_55D728B38111F21B_METHOD_2_CF4D9C717407BC14_OFFSET UNITYSDK_OFFSET(0x175EF0D0)
#define CLASS_2_55D728B38111F21B_METHOD_2_D199BA3CD9DE511C_OFFSET UNITYSDK_OFFSET(0x175ED110)
#define CLASS_2_55D728B38111F21B_METHOD_2_DA3B02CCD6820A7E_OFFSET UNITYSDK_OFFSET(0x175ED5C0)
#define CLASS_2_55D728B38111F21B_METHOD_2_DD90D9F2406CDC45_1_OFFSET UNITYSDK_OFFSET(0x175E9BA0)
#define CLASS_2_55D728B38111F21B_METHOD_2_DD90D9F2406CDC45_2_OFFSET UNITYSDK_OFFSET(0x175EA780)
#define CLASS_2_55D728B38111F21B_METHOD_2_DD90D9F2406CDC45_OFFSET UNITYSDK_OFFSET(0x175E9FF0)
#define CLASS_2_55D728B38111F21B_METHOD_2_E253190D74DB6879_OFFSET UNITYSDK_OFFSET(0x175F1040)
#define CLASS_2_55D728B38111F21B_METHOD_2_E693A0026D178D8E_OFFSET UNITYSDK_OFFSET(0x175E9150)
#define CLASS_2_55D728B38111F21B_METHOD_2_E9268EC3D165B0E4_1_OFFSET UNITYSDK_OFFSET(0x175EA5D0)
#define CLASS_2_55D728B38111F21B_METHOD_2_E9268EC3D165B0E4_OFFSET UNITYSDK_OFFSET(0x175EE880)
#define CLASS_2_55D728B38111F21B_METHOD_2_EAF68F68F72A1D6D_OFFSET UNITYSDK_OFFSET(0x175EC220)
#define CLASS_2_55D728B38111F21B_METHOD_2_F0088C88851A7DFB_1_OFFSET UNITYSDK_OFFSET(0x175ECA40)
#define CLASS_2_55D728B38111F21B_METHOD_2_F0088C88851A7DFB_2_OFFSET UNITYSDK_OFFSET(0x175ED970)
#define CLASS_2_55D728B38111F21B_METHOD_2_F0088C88851A7DFB_3_OFFSET UNITYSDK_OFFSET(0x175EEC60)
#define CLASS_2_55D728B38111F21B_METHOD_2_F0088C88851A7DFB_4_OFFSET UNITYSDK_OFFSET(0x175F0010)
#define CLASS_2_55D728B38111F21B_METHOD_2_F0088C88851A7DFB_5_OFFSET UNITYSDK_OFFSET(0x175F0A70)
#define CLASS_2_55D728B38111F21B_METHOD_2_F0088C88851A7DFB_6_OFFSET UNITYSDK_OFFSET(0x175F0CB0)
#define CLASS_2_55D728B38111F21B_METHOD_2_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x175EA700)
#define CLASS_2_55D728B38111F21B_METHOD_2_F8323F9C9DD7F303_OFFSET UNITYSDK_OFFSET(0x175EB290)
#define CLASS_2_55D728B38111F21B_METHOD_2_FE910912F9870C0D_1_OFFSET UNITYSDK_OFFSET(0x175EC0E0)
#define CLASS_2_55D728B38111F21B_METHOD_2_FE910912F9870C0D_2_OFFSET UNITYSDK_OFFSET(0x175ECD70)
#define CLASS_2_55D728B38111F21B_METHOD_2_FE910912F9870C0D_3_OFFSET UNITYSDK_OFFSET(0x175F0030)
#define CLASS_2_55D728B38111F21B_METHOD_2_FE910912F9870C0D_4_OFFSET UNITYSDK_OFFSET(0x175F04A0)
#define CLASS_2_55D728B38111F21B_METHOD_2_FE910912F9870C0D_OFFSET UNITYSDK_OFFSET(0x175EA490)
#define CLASS_2_55D728B38111F21B_ONCREATE_OFFSET UNITYSDK_OFFSET(0x175E9100)
#define CLASS_2_55D728B38111F21B__CTOR_OFFSET UNITYSDK_OFFSET(0x175E93A0)

inline static constexpr unsigned int Class_2_55D728B38111F21B_TypeDefinitionIndex = 85589;

class Class_2_55D728B38111F21B : public ::Foundation::SingletonDisposable_1<::Class_2_55D728B38111F21B*>
{
public:
	::Class_1_15D62275ABED373C* Field_2_9; // 0x10
	::Struct_2_1972A5FA12B7BFD3 Field_2_14; // 0x18
	::Class_1_15D62275ABED373C* Field_2_8; // 0x48
	::Struct_2_1972A5FA12B7BFD3 Field_2_13; // 0x50
	::System::Collections::Generic::Dictionary_2<::Foundation::ResourceFileType, ::Class_1_3B6FD32A4C03F1FC*>* Field_2_15; // 0x80
	::System::Boolean Field_2_10; // 0x88
	::System::Boolean Field_2_4; // 0x89
	::System::Boolean Field_2_7; // 0x8A
	::System::Boolean Field_2_0; // 0x8B
	::System::Boolean Field_2_11; // 0x8C
	::System::Boolean Field_2_5; // 0x8D
	::System::Boolean Field_2_6; // 0x8E

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_55D728B38111F21B__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_55D728B38111F21B_DISPOSE_OFFSET))(this);
	}

	::System::Void OnCreate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_55D728B38111F21B_ONCREATE_OFFSET))(this);
	}

	::Class_1_13B43DCF703FB24C* Method_2_5A3F5C9120955FC0(::System::String* a1)
	{
		return ((::Class_1_13B43DCF703FB24C*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_55D728B38111F21B_METHOD_2_5A3F5C9120955FC0_OFFSET))(this, a1);
	}

	::System::Void Method_2_C25C89C277D16D2F(::Foundation::ResourceFileType a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::ResourceFileType, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_55D728B38111F21B_METHOD_2_C25C89C277D16D2F_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_55D728B38111F21B_METHOD_2_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::Struct_2_DAA84C1CDD754F37>* Method_2_580394B3F28DBF72(::System::Collections::Generic::List_1<::Foundation::ResourceFileType>* a1)
	{
		return ((::System::Collections::Generic::List_1<::Struct_2_DAA84C1CDD754F37>*(*)(::PVOID, ::System::Collections::Generic::List_1<::Foundation::ResourceFileType>*))((::PBYTE)hIl2Cpp + CLASS_2_55D728B38111F21B_METHOD_2_580394B3F28DBF72_OFFSET))(this, a1);
	}

	::Struct_2_61EDE525C60EB6BF Method_2_BA80D36BDA3B5115()
	{
		return ((::Struct_2_61EDE525C60EB6BF(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_55D728B38111F21B_METHOD_2_BA80D36BDA3B5115_OFFSET))(this);
	}

	::Struct_2_61EDE525C60EB6BF Method_2_DD90D9F2406CDC45(::System::Collections::Generic::Dictionary_2<::Foundation::ResourceFileType, ::Class_1_3B6FD32A4C03F1FC*>* a1)
	{
		return ((::Struct_2_61EDE525C60EB6BF(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::Foundation::ResourceFileType, ::Class_1_3B6FD32A4C03F1FC*>*))((::PBYTE)hIl2Cpp + CLASS_2_55D728B38111F21B_METHOD_2_DD90D9F2406CDC45_OFFSET))(this, a1);
	}

	::System::Void Method_2_5CDF16CC200D8B52(::Class_1_15D62275ABED373C* a1, ::Class_1_15D62275ABED373C* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_15D62275ABED373C*, ::Class_1_15D62275ABED373C*))((::PBYTE)hIl2Cpp + CLASS_2_55D728B38111F21B_METHOD_2_5CDF16CC200D8B52_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_12C9A3082ABA77E1(::Foundation::ResourceFileType a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Foundation::ResourceFileType))((::PBYTE)hIl2Cpp + CLASS_2_55D728B38111F21B_METHOD_2_12C9A3082ABA77E1_OFFSET))(this, a1);
	}

	::System::Void Method_2_FE910912F9870C0D(::System::Collections::Generic::List_1<::Foundation::ResourceFileType>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Foundation::ResourceFileType>*))((::PBYTE)hIl2Cpp + CLASS_2_55D728B38111F21B_METHOD_2_FE910912F9870C0D_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_55D728B38111F21B_METHOD_2_F0088C88851A7DFB_OFFSET))(this);
	}

	::Struct_2_61EDE525C60EB6BF Method_2_BA80D36BDA3B5115_1()
	{
		return ((::Struct_2_61EDE525C60EB6BF(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_55D728B38111F21B_METHOD_2_BA80D36BDA3B5115_1_OFFSET))(this);
	}

	::System::Boolean Method_2_4487776BEE04D471()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_55D728B38111F21B_METHOD_2_4487776BEE04D471_OFFSET))(this);
	}

	::System::Void Method_2_3E7B7DB0EDF962BA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_55D728B38111F21B_METHOD_2_3E7B7DB0EDF962BA_OFFSET))(this);
	}

	::System::Void Method_2_C74E50CBD41F0264_1(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_55D728B38111F21B_METHOD_2_C74E50CBD41F0264_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_7366D8478E0CF310(::System::Collections::Generic::Dictionary_2<::Foundation::ResourceFileType, ::Class_1_3B6FD32A4C03F1FC*>* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::Foundation::ResourceFileType, ::Class_1_3B6FD32A4C03F1FC*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_55D728B38111F21B_METHOD_2_7366D8478E0CF310_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::Class_1_13B43DCF703FB24C*>* Method_2_172654BD094F27F9(::System::Collections::Generic::List_1<::Foundation::ResourceFileType>* a1)
	{
		return ((::System::Collections::Generic::List_1<::Class_1_13B43DCF703FB24C*>*(*)(::PVOID, ::System::Collections::Generic::List_1<::Foundation::ResourceFileType>*))((::PBYTE)hIl2Cpp + CLASS_2_55D728B38111F21B_METHOD_2_172654BD094F27F9_OFFSET))(this, a1);
	}

	::System::Void Method_2_8C8625211DA811AE(::Class_1_15D62275ABED373C* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_15D62275ABED373C*))((::PBYTE)hIl2Cpp + CLASS_2_55D728B38111F21B_METHOD_2_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::System::String*>* Method_2_F8323F9C9DD7F303(::System::Collections::Generic::Dictionary_2<::Foundation::ResourceFileType, ::Class_1_3B6FD32A4C03F1FC*>* a1)
	{
		return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::Foundation::ResourceFileType, ::Class_1_3B6FD32A4C03F1FC*>*))((::PBYTE)hIl2Cpp + CLASS_2_55D728B38111F21B_METHOD_2_F8323F9C9DD7F303_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::Class_1_13B43DCF703FB24C*>* Method_2_A2B6369B2C823CA0(::System::Collections::Generic::List_1<::Foundation::ResourceFileType>* a1, ::System::Collections::Generic::IEnumerable_1<::Enum_3_34F7035555410463_1>* a2, ::System::Collections::Generic::IEnumerable_1<::Enum_3_34F7035555410463_1>* a3)
	{
		return ((::System::Collections::Generic::List_1<::Class_1_13B43DCF703FB24C*>*(*)(::PVOID, ::System::Collections::Generic::List_1<::Foundation::ResourceFileType>*, ::System::Collections::Generic::IEnumerable_1<::Enum_3_34F7035555410463_1>*, ::System::Collections::Generic::IEnumerable_1<::Enum_3_34F7035555410463_1>*))((::PBYTE)hIl2Cpp + CLASS_2_55D728B38111F21B_METHOD_2_A2B6369B2C823CA0_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_3E7B7DB0EDF962BA_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_55D728B38111F21B_METHOD_2_3E7B7DB0EDF962BA_1_OFFSET))(this);
	}

	::System::Void Method_2_C74E50CBD41F0264_2(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_55D728B38111F21B_METHOD_2_C74E50CBD41F0264_2_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::Struct_2_DAA84C1CDD754F37>* Method_2_47B7BC57A143C373(::Foundation::ResourceFileType a1)
	{
		return ((::System::Collections::Generic::List_1<::Struct_2_DAA84C1CDD754F37>*(*)(::PVOID, ::Foundation::ResourceFileType))((::PBYTE)hIl2Cpp + CLASS_2_55D728B38111F21B_METHOD_2_47B7BC57A143C373_OFFSET))(this, a1);
	}

	::System::Void Method_2_695579C6786804DA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_55D728B38111F21B_METHOD_2_695579C6786804DA_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Struct_2_DAA84C1CDD754F37>* Method_2_47B7BC57A143C373_1(::Foundation::ResourceFileType a1)
	{
		return ((::System::Collections::Generic::List_1<::Struct_2_DAA84C1CDD754F37>*(*)(::PVOID, ::Foundation::ResourceFileType))((::PBYTE)hIl2Cpp + CLASS_2_55D728B38111F21B_METHOD_2_47B7BC57A143C373_1_OFFSET))(this, a1);
	}

	::System::String* Method_2_9B4D94F0F519678B()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_55D728B38111F21B_METHOD_2_9B4D94F0F519678B_OFFSET))(this);
	}

	::System::Void Method_2_FE910912F9870C0D_1(::System::Collections::Generic::List_1<::Foundation::ResourceFileType>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Foundation::ResourceFileType>*))((::PBYTE)hIl2Cpp + CLASS_2_55D728B38111F21B_METHOD_2_FE910912F9870C0D_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_3E7B7DB0EDF962BA_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_55D728B38111F21B_METHOD_2_3E7B7DB0EDF962BA_2_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Struct_2_DAA84C1CDD754F37>* Method_2_79359A071DBD91C6(::Foundation::ResourceFileType a1, ::System::Collections::Generic::IEnumerable_1<::Enum_3_34F7035555410463_1>* a2, ::System::Collections::Generic::IEnumerable_1<::Enum_3_34F7035555410463_1>* a3)
	{
		return ((::System::Collections::Generic::List_1<::Struct_2_DAA84C1CDD754F37>*(*)(::PVOID, ::Foundation::ResourceFileType, ::System::Collections::Generic::IEnumerable_1<::Enum_3_34F7035555410463_1>*, ::System::Collections::Generic::IEnumerable_1<::Enum_3_34F7035555410463_1>*))((::PBYTE)hIl2Cpp + CLASS_2_55D728B38111F21B_METHOD_2_79359A071DBD91C6_OFFSET))(this, a1, a2, a3);
	}

	::System::Collections::Generic::List_1<::Struct_2_DAA84C1CDD754F37>* Method_2_C7D5B388BE8CCE04(::System::String* a1)
	{
		return ((::System::Collections::Generic::List_1<::Struct_2_DAA84C1CDD754F37>*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_55D728B38111F21B_METHOD_2_C7D5B388BE8CCE04_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_79419E7D890DB1EE(::Struct_2_DAA84C1CDD754F37 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_DAA84C1CDD754F37))((::PBYTE)hIl2Cpp + CLASS_2_55D728B38111F21B_METHOD_2_79419E7D890DB1EE_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_F0088C88851A7DFB_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_55D728B38111F21B_METHOD_2_F0088C88851A7DFB_1_OFFSET))(this);
	}

	::System::Boolean Method_2_A025F0342FE08D10(::System::Collections::Generic::List_1<::Foundation::ResourceFileType>* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::List_1<::Foundation::ResourceFileType>*))((::PBYTE)hIl2Cpp + CLASS_2_55D728B38111F21B_METHOD_2_A025F0342FE08D10_OFFSET))(this, a1);
	}

	::Class_1_15D62275ABED373C* Method_2_24748FC20F375725()
	{
		return ((::Class_1_15D62275ABED373C*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_55D728B38111F21B_METHOD_2_24748FC20F375725_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Struct_2_DAA84C1CDD754F37>* Method_2_81F019B263A55D8A()
	{
		return ((::System::Collections::Generic::List_1<::Struct_2_DAA84C1CDD754F37>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_55D728B38111F21B_METHOD_2_81F019B263A55D8A_OFFSET))(this);
	}

	::System::Void Method_2_FE910912F9870C0D_2(::System::Collections::Generic::List_1<::Foundation::ResourceFileType>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Foundation::ResourceFileType>*))((::PBYTE)hIl2Cpp + CLASS_2_55D728B38111F21B_METHOD_2_FE910912F9870C0D_2_OFFSET))(this, a1);
	}

	::System::Void Method_2_60451B2DE9D371C9(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_55D728B38111F21B_METHOD_2_60451B2DE9D371C9_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_D199BA3CD9DE511C(::Class_1_15D62275ABED373C* a1, ::System::Collections::Generic::Dictionary_2<::Foundation::ResourceFileType, ::Class_1_3B6FD32A4C03F1FC*>* a2, ::System::String*& a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_15D62275ABED373C*, ::System::Collections::Generic::Dictionary_2<::Foundation::ResourceFileType, ::Class_1_3B6FD32A4C03F1FC*>*, ::System::String*&))((::PBYTE)hIl2Cpp + CLASS_2_55D728B38111F21B_METHOD_2_D199BA3CD9DE511C_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_EAF68F68F72A1D6D(::Foundation::ResourceFileType a1)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::ResourceFileType))((::PBYTE)hIl2Cpp + CLASS_2_55D728B38111F21B_METHOD_2_EAF68F68F72A1D6D_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::Struct_2_DAA84C1CDD754F37>* Method_2_89A3DB19E7D72316(::System::Collections::Generic::List_1<::Foundation::ResourceFileType>* a1, ::System::Boolean a2)
	{
		return ((::System::Collections::Generic::List_1<::Struct_2_DAA84C1CDD754F37>*(*)(::PVOID, ::System::Collections::Generic::List_1<::Foundation::ResourceFileType>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_55D728B38111F21B_METHOD_2_89A3DB19E7D72316_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_E693A0026D178D8E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_55D728B38111F21B_METHOD_2_E693A0026D178D8E_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Struct_2_DAA84C1CDD754F37>* Method_2_AA360F998779F45E(::System::String* a1)
	{
		return ((::System::Collections::Generic::List_1<::Struct_2_DAA84C1CDD754F37>*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_55D728B38111F21B_METHOD_2_AA360F998779F45E_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_F0088C88851A7DFB_2()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_55D728B38111F21B_METHOD_2_F0088C88851A7DFB_2_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Struct_2_DAA84C1CDD754F37>* Method_2_DA3B02CCD6820A7E(::Foundation::ResourceFileType a1, ::System::Boolean a2)
	{
		return ((::System::Collections::Generic::List_1<::Struct_2_DAA84C1CDD754F37>*(*)(::PVOID, ::Foundation::ResourceFileType, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_55D728B38111F21B_METHOD_2_DA3B02CCD6820A7E_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::HashSet_1<::Struct_2_DAA84C1CDD754F37>* Method_2_6586AC3EA33240BF(::System::Collections::Generic::IEnumerable_1<::Class_1_3B6FD32A4C03F1FC*>* a1, ::System::Boolean a2, ::System::Boolean a3, ::System::Boolean a4, ::System::Boolean a5)
	{
		return ((::System::Collections::Generic::HashSet_1<::Struct_2_DAA84C1CDD754F37>*(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::Class_1_3B6FD32A4C03F1FC*>*, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_55D728B38111F21B_METHOD_2_6586AC3EA33240BF_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_2_8C8625211DA811AE_1(::Class_1_15D62275ABED373C* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_15D62275ABED373C*))((::PBYTE)hIl2Cpp + CLASS_2_55D728B38111F21B_METHOD_2_8C8625211DA811AE_1_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_27B2E0B8178B81ED(::Class_1_15D62275ABED373C* a1, ::System::Collections::Generic::Dictionary_2<::Foundation::ResourceFileType, ::Class_1_3B6FD32A4C03F1FC*>* a2, ::System::String*& a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_15D62275ABED373C*, ::System::Collections::Generic::Dictionary_2<::Foundation::ResourceFileType, ::Class_1_3B6FD32A4C03F1FC*>*, ::System::String*&))((::PBYTE)hIl2Cpp + CLASS_2_55D728B38111F21B_METHOD_2_27B2E0B8178B81ED_OFFSET))(this, a1, a2, a3);
	}

	::Struct_2_61EDE525C60EB6BF Method_2_BA80D36BDA3B5115_2()
	{
		return ((::Struct_2_61EDE525C60EB6BF(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_55D728B38111F21B_METHOD_2_BA80D36BDA3B5115_2_OFFSET))(this);
	}

	::Struct_2_61EDE525C60EB6BF Method_2_DD90D9F2406CDC45_1(::System::Collections::Generic::Dictionary_2<::Foundation::ResourceFileType, ::Class_1_3B6FD32A4C03F1FC*>* a1)
	{
		return ((::Struct_2_61EDE525C60EB6BF(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::Foundation::ResourceFileType, ::Class_1_3B6FD32A4C03F1FC*>*))((::PBYTE)hIl2Cpp + CLASS_2_55D728B38111F21B_METHOD_2_DD90D9F2406CDC45_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_2ED8799B5DC425F3(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_55D728B38111F21B_METHOD_2_2ED8799B5DC425F3_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_2A73302F5D8B0BA6()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_55D728B38111F21B_METHOD_2_2A73302F5D8B0BA6_OFFSET))(this);
	}

	::System::Void Method_2_C74E50CBD41F0264_3(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_55D728B38111F21B_METHOD_2_C74E50CBD41F0264_3_OFFSET))(this, a1);
	}

	::System::Collections::Generic::HashSet_1<::Struct_2_DAA84C1CDD754F37>* Method_2_05AF3E6C9FC16A49(::System::Boolean a1, ::System::Boolean a2, ::System::Boolean a3, ::System::Boolean a4)
	{
		return ((::System::Collections::Generic::HashSet_1<::Struct_2_DAA84C1CDD754F37>*(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_55D728B38111F21B_METHOD_2_05AF3E6C9FC16A49_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Collections::Generic::List_1<::Struct_2_DAA84C1CDD754F37>* Method_2_87DF7F2DEFED5C7A(::System::Collections::Generic::List_1<::Foundation::ResourceFileType>* a1, ::System::Collections::Generic::IEnumerable_1<::Enum_3_34F7035555410463_1>* a2, ::System::Collections::Generic::IEnumerable_1<::Enum_3_34F7035555410463_1>* a3)
	{
		return ((::System::Collections::Generic::List_1<::Struct_2_DAA84C1CDD754F37>*(*)(::PVOID, ::System::Collections::Generic::List_1<::Foundation::ResourceFileType>*, ::System::Collections::Generic::IEnumerable_1<::Enum_3_34F7035555410463_1>*, ::System::Collections::Generic::IEnumerable_1<::Enum_3_34F7035555410463_1>*))((::PBYTE)hIl2Cpp + CLASS_2_55D728B38111F21B_METHOD_2_87DF7F2DEFED5C7A_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_E9268EC3D165B0E4(::Foundation::ResourceFileType a1)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::ResourceFileType))((::PBYTE)hIl2Cpp + CLASS_2_55D728B38111F21B_METHOD_2_E9268EC3D165B0E4_OFFSET))(this, a1);
	}

	::System::Void Method_2_6423291ED13007B8(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_55D728B38111F21B_METHOD_2_6423291ED13007B8_OFFSET))(this, a1);
	}

	::System::Void Method_2_C74E50CBD41F0264_4(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_55D728B38111F21B_METHOD_2_C74E50CBD41F0264_4_OFFSET))(this, a1);
	}

	::System::Void Method_2_44EDEAE08395A153(::System::Collections::Generic::Dictionary_2<::Foundation::ResourceFileType, ::Class_1_3B6FD32A4C03F1FC*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::Foundation::ResourceFileType, ::Class_1_3B6FD32A4C03F1FC*>*))((::PBYTE)hIl2Cpp + CLASS_2_55D728B38111F21B_METHOD_2_44EDEAE08395A153_OFFSET))(this, a1);
	}

	::System::Void Method_2_CE67C492DF7EC72A(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_55D728B38111F21B_METHOD_2_CE67C492DF7EC72A_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_F0088C88851A7DFB_3()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_55D728B38111F21B_METHOD_2_F0088C88851A7DFB_3_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Struct_2_DAA84C1CDD754F37>* Method_2_96AB598DE1C681FA(::System::String* a1)
	{
		return ((::System::Collections::Generic::List_1<::Struct_2_DAA84C1CDD754F37>*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_55D728B38111F21B_METHOD_2_96AB598DE1C681FA_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::Struct_2_DAA84C1CDD754F37>* Method_2_580394B3F28DBF72_1(::System::Collections::Generic::List_1<::Foundation::ResourceFileType>* a1)
	{
		return ((::System::Collections::Generic::List_1<::Struct_2_DAA84C1CDD754F37>*(*)(::PVOID, ::System::Collections::Generic::List_1<::Foundation::ResourceFileType>*))((::PBYTE)hIl2Cpp + CLASS_2_55D728B38111F21B_METHOD_2_580394B3F28DBF72_1_OFFSET))(this, a1);
	}

	::Class_1_13B43DCF703FB24C* Method_2_5A3F5C9120955FC0_1(::System::String* a1)
	{
		return ((::Class_1_13B43DCF703FB24C*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_55D728B38111F21B_METHOD_2_5A3F5C9120955FC0_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_CF4D9C717407BC14(::System::Collections::Generic::List_1<::Foundation::ResourceFileType>* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Foundation::ResourceFileType>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_55D728B38111F21B_METHOD_2_CF4D9C717407BC14_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::HashSet_1<::System::String*>* Method_2_48EECC15E10EEC11()
	{
		return ((::System::Collections::Generic::HashSet_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_55D728B38111F21B_METHOD_2_48EECC15E10EEC11_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Struct_2_DAA84C1CDD754F37>* Method_2_1BA916A113123E6A(::Foundation::ResourceFileType a1)
	{
		return ((::System::Collections::Generic::List_1<::Struct_2_DAA84C1CDD754F37>*(*)(::PVOID, ::Foundation::ResourceFileType))((::PBYTE)hIl2Cpp + CLASS_2_55D728B38111F21B_METHOD_2_1BA916A113123E6A_OFFSET))(this, a1);
	}

	::Class_1_13B43DCF703FB24C* Method_2_BC5D900B4C8C5BA2(::Foundation::ResourceFileType a1)
	{
		return ((::Class_1_13B43DCF703FB24C*(*)(::PVOID, ::Foundation::ResourceFileType))((::PBYTE)hIl2Cpp + CLASS_2_55D728B38111F21B_METHOD_2_BC5D900B4C8C5BA2_OFFSET))(this, a1);
	}

	::Struct_2_61EDE525C60EB6BF Method_2_DD90D9F2406CDC45_2(::System::Collections::Generic::Dictionary_2<::Foundation::ResourceFileType, ::Class_1_3B6FD32A4C03F1FC*>* a1)
	{
		return ((::Struct_2_61EDE525C60EB6BF(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::Foundation::ResourceFileType, ::Class_1_3B6FD32A4C03F1FC*>*))((::PBYTE)hIl2Cpp + CLASS_2_55D728B38111F21B_METHOD_2_DD90D9F2406CDC45_2_OFFSET))(this, a1);
	}

	::System::Void Method_2_23E9742C2E7B33DB(::System::Collections::Generic::Dictionary_2<::Foundation::ResourceFileType, ::Class_1_3B6FD32A4C03F1FC*>* a1, ::Il2CppArray<::Enum_3_13E1F0BBFE52F5F0>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::Foundation::ResourceFileType, ::Class_1_3B6FD32A4C03F1FC*>*, ::Il2CppArray<::Enum_3_13E1F0BBFE52F5F0>*))((::PBYTE)hIl2Cpp + CLASS_2_55D728B38111F21B_METHOD_2_23E9742C2E7B33DB_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_23E9742C2E7B33DB_1(::System::Collections::Generic::Dictionary_2<::Foundation::ResourceFileType, ::Class_1_3B6FD32A4C03F1FC*>* a1, ::Il2CppArray<::Enum_3_13E1F0BBFE52F5F0>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::Foundation::ResourceFileType, ::Class_1_3B6FD32A4C03F1FC*>*, ::Il2CppArray<::Enum_3_13E1F0BBFE52F5F0>*))((::PBYTE)hIl2Cpp + CLASS_2_55D728B38111F21B_METHOD_2_23E9742C2E7B33DB_1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_CF086596D3935A7D(::Foundation::ResourceFileType a1)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::ResourceFileType))((::PBYTE)hIl2Cpp + CLASS_2_55D728B38111F21B_METHOD_2_CF086596D3935A7D_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_15B355E7E988A40B(::System::String* a1, ::MoleMole::DownloadFileInfo*& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::MoleMole::DownloadFileInfo*&))((::PBYTE)hIl2Cpp + CLASS_2_55D728B38111F21B_METHOD_2_15B355E7E988A40B_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_3E7B7DB0EDF962BA_3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_55D728B38111F21B_METHOD_2_3E7B7DB0EDF962BA_3_OFFSET))(this);
	}

	::Class_1_15D62275ABED373C* Method_2_24748FC20F375725_1()
	{
		return ((::Class_1_15D62275ABED373C*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_55D728B38111F21B_METHOD_2_24748FC20F375725_1_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Struct_2_DAA84C1CDD754F37>* Method_2_C2F14903DD000BA0(::System::Collections::Generic::List_1<::Foundation::ResourceFileType>* a1, ::System::Collections::Generic::IEnumerable_1<::Enum_3_34F7035555410463_1>* a2, ::System::Collections::Generic::IEnumerable_1<::Enum_3_34F7035555410463_1>* a3)
	{
		return ((::System::Collections::Generic::List_1<::Struct_2_DAA84C1CDD754F37>*(*)(::PVOID, ::System::Collections::Generic::List_1<::Foundation::ResourceFileType>*, ::System::Collections::Generic::IEnumerable_1<::Enum_3_34F7035555410463_1>*, ::System::Collections::Generic::IEnumerable_1<::Enum_3_34F7035555410463_1>*))((::PBYTE)hIl2Cpp + CLASS_2_55D728B38111F21B_METHOD_2_C2F14903DD000BA0_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_2_F0088C88851A7DFB_4()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_55D728B38111F21B_METHOD_2_F0088C88851A7DFB_4_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Struct_2_DAA84C1CDD754F37>* Method_2_833F830E464BF470(::Foundation::ResourceFileType a1, ::System::Collections::Generic::IEnumerable_1<::Enum_3_34F7035555410463_1>* a2, ::System::Collections::Generic::IEnumerable_1<::Enum_3_34F7035555410463_1>* a3)
	{
		return ((::System::Collections::Generic::List_1<::Struct_2_DAA84C1CDD754F37>*(*)(::PVOID, ::Foundation::ResourceFileType, ::System::Collections::Generic::IEnumerable_1<::Enum_3_34F7035555410463_1>*, ::System::Collections::Generic::IEnumerable_1<::Enum_3_34F7035555410463_1>*))((::PBYTE)hIl2Cpp + CLASS_2_55D728B38111F21B_METHOD_2_833F830E464BF470_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_C74E50CBD41F0264_5(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_55D728B38111F21B_METHOD_2_C74E50CBD41F0264_5_OFFSET))(this, a1);
	}

	::System::Void Method_2_FE910912F9870C0D_3(::System::Collections::Generic::List_1<::Foundation::ResourceFileType>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Foundation::ResourceFileType>*))((::PBYTE)hIl2Cpp + CLASS_2_55D728B38111F21B_METHOD_2_FE910912F9870C0D_3_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::Struct_2_DAA84C1CDD754F37>* Method_2_AD12372BE27436E0(::System::Collections::Generic::List_1<::Foundation::ResourceFileType>* a1, ::System::Collections::Generic::IEnumerable_1<::System::String*>* a2)
	{
		return ((::System::Collections::Generic::List_1<::Struct_2_DAA84C1CDD754F37>*(*)(::PVOID, ::System::Collections::Generic::List_1<::Foundation::ResourceFileType>*, ::System::Collections::Generic::IEnumerable_1<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_2_55D728B38111F21B_METHOD_2_AD12372BE27436E0_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_FE910912F9870C0D_4(::System::Collections::Generic::List_1<::Foundation::ResourceFileType>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Foundation::ResourceFileType>*))((::PBYTE)hIl2Cpp + CLASS_2_55D728B38111F21B_METHOD_2_FE910912F9870C0D_4_OFFSET))(this, a1);
	}

	::System::Collections::Generic::Dictionary_2<::Foundation::ResourceFileType, ::Class_1_3B6FD32A4C03F1FC*>* Method_2_1685BD3810865B7C()
	{
		return ((::System::Collections::Generic::Dictionary_2<::Foundation::ResourceFileType, ::Class_1_3B6FD32A4C03F1FC*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_55D728B38111F21B_METHOD_2_1685BD3810865B7C_OFFSET))(this);
	}

	::System::Void Method_2_C74E50CBD41F0264_6(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_55D728B38111F21B_METHOD_2_C74E50CBD41F0264_6_OFFSET))(this, a1);
	}

	::System::Void Method_2_E9268EC3D165B0E4_1(::Foundation::ResourceFileType a1)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::ResourceFileType))((::PBYTE)hIl2Cpp + CLASS_2_55D728B38111F21B_METHOD_2_E9268EC3D165B0E4_1_OFFSET))(this, a1);
	}

	::System::String* Method_2_9B4D94F0F519678B_1()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_55D728B38111F21B_METHOD_2_9B4D94F0F519678B_1_OFFSET))(this);
	}

	::System::Void Method_2_C25C89C277D16D2F_1(::Foundation::ResourceFileType a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::ResourceFileType, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_55D728B38111F21B_METHOD_2_C25C89C277D16D2F_1_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_F0088C88851A7DFB_5()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_55D728B38111F21B_METHOD_2_F0088C88851A7DFB_5_OFFSET))(this);
	}

	::Class_1_13B43DCF703FB24C* Method_2_25E3D2E64FB63BEB(::Foundation::ResourceFileType a1, ::System::Collections::Generic::IEnumerable_1<::Enum_3_34F7035555410463_1>* a2, ::System::Collections::Generic::IEnumerable_1<::Enum_3_34F7035555410463_1>* a3)
	{
		return ((::Class_1_13B43DCF703FB24C*(*)(::PVOID, ::Foundation::ResourceFileType, ::System::Collections::Generic::IEnumerable_1<::Enum_3_34F7035555410463_1>*, ::System::Collections::Generic::IEnumerable_1<::Enum_3_34F7035555410463_1>*))((::PBYTE)hIl2Cpp + CLASS_2_55D728B38111F21B_METHOD_2_25E3D2E64FB63BEB_OFFSET))(this, a1, a2, a3);
	}

	::System::Collections::Generic::List_1<::Struct_2_DAA84C1CDD754F37>* Method_2_B330F7C2941699D0()
	{
		return ((::System::Collections::Generic::List_1<::Struct_2_DAA84C1CDD754F37>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_55D728B38111F21B_METHOD_2_B330F7C2941699D0_OFFSET))(this);
	}

	::System::Boolean Method_2_F0088C88851A7DFB_6()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_55D728B38111F21B_METHOD_2_F0088C88851A7DFB_6_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Struct_2_DAA84C1CDD754F37>* Method_2_AF18B70A0F6489B2(::Foundation::ResourceFileType a1, ::System::Collections::Generic::IEnumerable_1<::System::String*>* a2)
	{
		return ((::System::Collections::Generic::List_1<::Struct_2_DAA84C1CDD754F37>*(*)(::PVOID, ::Foundation::ResourceFileType, ::System::Collections::Generic::IEnumerable_1<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_2_55D728B38111F21B_METHOD_2_AF18B70A0F6489B2_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_774E05D782CFC509(::Foundation::ResourceFileType a1)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::ResourceFileType))((::PBYTE)hIl2Cpp + CLASS_2_55D728B38111F21B_METHOD_2_774E05D782CFC509_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_4487776BEE04D471_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_55D728B38111F21B_METHOD_2_4487776BEE04D471_1_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Struct_2_DAA84C1CDD754F37>* Method_2_580394B3F28DBF72_2(::System::Collections::Generic::List_1<::Foundation::ResourceFileType>* a1)
	{
		return ((::System::Collections::Generic::List_1<::Struct_2_DAA84C1CDD754F37>*(*)(::PVOID, ::System::Collections::Generic::List_1<::Foundation::ResourceFileType>*))((::PBYTE)hIl2Cpp + CLASS_2_55D728B38111F21B_METHOD_2_580394B3F28DBF72_2_OFFSET))(this, a1);
	}

	::System::Void Method_2_E253190D74DB6879(::System::Collections::Generic::Dictionary_2<::Foundation::ResourceFileType, ::Class_1_3B6FD32A4C03F1FC*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::Foundation::ResourceFileType, ::Class_1_3B6FD32A4C03F1FC*>*))((::PBYTE)hIl2Cpp + CLASS_2_55D728B38111F21B_METHOD_2_E253190D74DB6879_OFFSET))(this, a1);
	}
};
