#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_13E1F0BBFE52F5F0.h"
#include "unitysdk/Enum_3_34F7035555410463_1.h"
#include "unitysdk/Foundation/ResourceFileType.h"
#include "unitysdk/Foundation/SingletonDisposable_1.h"
#include "unitysdk/Struct_2_1972A5FA12B7BFD3.h"
#include "unitysdk/Struct_2_86B6AE3AD6E3BBAF.h"
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

#define CLASS_2_BFDC7DFB4F2A1B8E_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1747FBB0)
#define CLASS_2_BFDC7DFB4F2A1B8E_METHOD_2_05AF3E6C9FC16A49_OFFSET UNITYSDK_OFFSET(0x17486180)
#define CLASS_2_BFDC7DFB4F2A1B8E_METHOD_2_12C9A3082ABA77E1_OFFSET UNITYSDK_OFFSET(0x17483100)
#define CLASS_2_BFDC7DFB4F2A1B8E_METHOD_2_15B355E7E988A40B_OFFSET UNITYSDK_OFFSET(0x174843B0)
#define CLASS_2_BFDC7DFB4F2A1B8E_METHOD_2_1685BD3810865B7C_OFFSET UNITYSDK_OFFSET(0x17484560)
#define CLASS_2_BFDC7DFB4F2A1B8E_METHOD_2_172654BD094F27F9_OFFSET UNITYSDK_OFFSET(0x17487120)
#define CLASS_2_BFDC7DFB4F2A1B8E_METHOD_2_2034D36E9DCC1F26_OFFSET UNITYSDK_OFFSET(0x17483840)
#define CLASS_2_BFDC7DFB4F2A1B8E_METHOD_2_24748FC20F375725_1_OFFSET UNITYSDK_OFFSET(0x17487DA0)
#define CLASS_2_BFDC7DFB4F2A1B8E_METHOD_2_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x17487560)
#define CLASS_2_BFDC7DFB4F2A1B8E_METHOD_2_25225CE3B182C1B3_OFFSET UNITYSDK_OFFSET(0x17486780)
#define CLASS_2_BFDC7DFB4F2A1B8E_METHOD_2_25E3D2E64FB63BEB_OFFSET UNITYSDK_OFFSET(0x17481450)
#define CLASS_2_BFDC7DFB4F2A1B8E_METHOD_2_27B2E0B8178B81ED_OFFSET UNITYSDK_OFFSET(0x17481990)
#define CLASS_2_BFDC7DFB4F2A1B8E_METHOD_2_2A73302F5D8B0BA6_OFFSET UNITYSDK_OFFSET(0x17486F20)
#define CLASS_2_BFDC7DFB4F2A1B8E_METHOD_2_2ED8799B5DC425F3_OFFSET UNITYSDK_OFFSET(0x17480EB0)
#define CLASS_2_BFDC7DFB4F2A1B8E_METHOD_2_3E7B7DB0EDF962BA_1_OFFSET UNITYSDK_OFFSET(0x17480710)
#define CLASS_2_BFDC7DFB4F2A1B8E_METHOD_2_3E7B7DB0EDF962BA_2_OFFSET UNITYSDK_OFFSET(0x17482940)
#define CLASS_2_BFDC7DFB4F2A1B8E_METHOD_2_3E7B7DB0EDF962BA_3_OFFSET UNITYSDK_OFFSET(0x17484FA0)
#define CLASS_2_BFDC7DFB4F2A1B8E_METHOD_2_3E7B7DB0EDF962BA_OFFSET UNITYSDK_OFFSET(0x17480580)
#define CLASS_2_BFDC7DFB4F2A1B8E_METHOD_2_4487776BEE04D471_1_OFFSET UNITYSDK_OFFSET(0x174877A0)
#define CLASS_2_BFDC7DFB4F2A1B8E_METHOD_2_4487776BEE04D471_OFFSET UNITYSDK_OFFSET(0x17484220)
#define CLASS_2_BFDC7DFB4F2A1B8E_METHOD_2_44EDEAE08395A153_OFFSET UNITYSDK_OFFSET(0x17485360)
#define CLASS_2_BFDC7DFB4F2A1B8E_METHOD_2_47B7BC57A143C373_1_OFFSET UNITYSDK_OFFSET(0x17483C50)
#define CLASS_2_BFDC7DFB4F2A1B8E_METHOD_2_47B7BC57A143C373_OFFSET UNITYSDK_OFFSET(0x17480100)
#define CLASS_2_BFDC7DFB4F2A1B8E_METHOD_2_48EECC15E10EEC11_OFFSET UNITYSDK_OFFSET(0x17485120)
#define CLASS_2_BFDC7DFB4F2A1B8E_METHOD_2_580394B3F28DBF72_1_OFFSET UNITYSDK_OFFSET(0x17483DB0)
#define CLASS_2_BFDC7DFB4F2A1B8E_METHOD_2_580394B3F28DBF72_2_OFFSET UNITYSDK_OFFSET(0x17487360)
#define CLASS_2_BFDC7DFB4F2A1B8E_METHOD_2_580394B3F28DBF72_OFFSET UNITYSDK_OFFSET(0x17483A60)
#define CLASS_2_BFDC7DFB4F2A1B8E_METHOD_2_5A3F5C9120955FC0_1_OFFSET UNITYSDK_OFFSET(0x17487930)
#define CLASS_2_BFDC7DFB4F2A1B8E_METHOD_2_5A3F5C9120955FC0_OFFSET UNITYSDK_OFFSET(0x174836F0)
#define CLASS_2_BFDC7DFB4F2A1B8E_METHOD_2_5CDF16CC200D8B52_OFFSET UNITYSDK_OFFSET(0x1747FF90)
#define CLASS_2_BFDC7DFB4F2A1B8E_METHOD_2_60451B2DE9D371C9_OFFSET UNITYSDK_OFFSET(0x17486AA0)
#define CLASS_2_BFDC7DFB4F2A1B8E_METHOD_2_6423291ED13007B8_OFFSET UNITYSDK_OFFSET(0x17484570)
#define CLASS_2_BFDC7DFB4F2A1B8E_METHOD_2_695579C6786804DA_OFFSET UNITYSDK_OFFSET(0x17485E00)
#define CLASS_2_BFDC7DFB4F2A1B8E_METHOD_2_7244790BA62376F4_1_OFFSET UNITYSDK_OFFSET(0x174856B0)
#define CLASS_2_BFDC7DFB4F2A1B8E_METHOD_2_7244790BA62376F4_2_OFFSET UNITYSDK_OFFSET(0x17481DB0)
#define CLASS_2_BFDC7DFB4F2A1B8E_METHOD_2_7244790BA62376F4_OFFSET UNITYSDK_OFFSET(0x17483220)
#define CLASS_2_BFDC7DFB4F2A1B8E_METHOD_2_774E05D782CFC509_OFFSET UNITYSDK_OFFSET(0x17480A00)
#define CLASS_2_BFDC7DFB4F2A1B8E_METHOD_2_79359A071DBD91C6_OFFSET UNITYSDK_OFFSET(0x17480D50)
#define CLASS_2_BFDC7DFB4F2A1B8E_METHOD_2_79419E7D890DB1EE_OFFSET UNITYSDK_OFFSET(0x17485BE0)
#define CLASS_2_BFDC7DFB4F2A1B8E_METHOD_2_81F019B263A55D8A_OFFSET UNITYSDK_OFFSET(0x17484C70)
#define CLASS_2_BFDC7DFB4F2A1B8E_METHOD_2_833F830E464BF470_OFFSET UNITYSDK_OFFSET(0x17480890)
#define CLASS_2_BFDC7DFB4F2A1B8E_METHOD_2_89A3DB19E7D72316_OFFSET UNITYSDK_OFFSET(0x17482200)
#define CLASS_2_BFDC7DFB4F2A1B8E_METHOD_2_8C8625211DA811AE_1_OFFSET UNITYSDK_OFFSET(0x174859D0)
#define CLASS_2_BFDC7DFB4F2A1B8E_METHOD_2_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x17480E90)
#define CLASS_2_BFDC7DFB4F2A1B8E_METHOD_2_96AB598DE1C681FA_OFFSET UNITYSDK_OFFSET(0x17487C80)
#define CLASS_2_BFDC7DFB4F2A1B8E_METHOD_2_9B4D94F0F519678B_1_OFFSET UNITYSDK_OFFSET(0x17484920)
#define CLASS_2_BFDC7DFB4F2A1B8E_METHOD_2_9B4D94F0F519678B_OFFSET UNITYSDK_OFFSET(0x17482AC0)
#define CLASS_2_BFDC7DFB4F2A1B8E_METHOD_2_A025F0342FE08D10_OFFSET UNITYSDK_OFFSET(0x17482FA0)
#define CLASS_2_BFDC7DFB4F2A1B8E_METHOD_2_AA360F998779F45E_OFFSET UNITYSDK_OFFSET(0x17487A80)
#define CLASS_2_BFDC7DFB4F2A1B8E_METHOD_2_AB4E1E1E122D6A7B_OFFSET UNITYSDK_OFFSET(0x17487580)
#define CLASS_2_BFDC7DFB4F2A1B8E_METHOD_2_AD12372BE27436E0_OFFSET UNITYSDK_OFFSET(0x17486BE0)
#define CLASS_2_BFDC7DFB4F2A1B8E_METHOD_2_AF18B70A0F6489B2_OFFSET UNITYSDK_OFFSET(0x17482E80)
#define CLASS_2_BFDC7DFB4F2A1B8E_METHOD_2_AF827A30708754FF_OFFSET UNITYSDK_OFFSET(0x17483FA0)
#define CLASS_2_BFDC7DFB4F2A1B8E_METHOD_2_AFCE123AA3A2A269_OFFSET UNITYSDK_OFFSET(0x174815B0)
#define CLASS_2_BFDC7DFB4F2A1B8E_METHOD_2_B330F7C2941699D0_OFFSET UNITYSDK_OFFSET(0x17480B20)
#define CLASS_2_BFDC7DFB4F2A1B8E_METHOD_2_BA80D36BDA3B5115_1_OFFSET UNITYSDK_OFFSET(0x17482E10)
#define CLASS_2_BFDC7DFB4F2A1B8E_METHOD_2_BA80D36BDA3B5115_2_OFFSET UNITYSDK_OFFSET(0x174872F0)
#define CLASS_2_BFDC7DFB4F2A1B8E_METHOD_2_BA80D36BDA3B5115_OFFSET UNITYSDK_OFFSET(0x17481D40)
#define CLASS_2_BFDC7DFB4F2A1B8E_METHOD_2_BC5D900B4C8C5BA2_OFFSET UNITYSDK_OFFSET(0x17486940)
#define CLASS_2_BFDC7DFB4F2A1B8E_METHOD_2_C25C89C277D16D2F_1_OFFSET UNITYSDK_OFFSET(0x174803B0)
#define CLASS_2_BFDC7DFB4F2A1B8E_METHOD_2_C25C89C277D16D2F_OFFSET UNITYSDK_OFFSET(0x174854F0)
#define CLASS_2_BFDC7DFB4F2A1B8E_METHOD_2_C74E50CBD41F0264_1_OFFSET UNITYSDK_OFFSET(0x17480E80)
#define CLASS_2_BFDC7DFB4F2A1B8E_METHOD_2_C74E50CBD41F0264_2_OFFSET UNITYSDK_OFFSET(0x17481980)
#define CLASS_2_BFDC7DFB4F2A1B8E_METHOD_2_C74E50CBD41F0264_3_OFFSET UNITYSDK_OFFSET(0x174836E0)
#define CLASS_2_BFDC7DFB4F2A1B8E_METHOD_2_C74E50CBD41F0264_4_OFFSET UNITYSDK_OFFSET(0x17485F80)
#define CLASS_2_BFDC7DFB4F2A1B8E_METHOD_2_C74E50CBD41F0264_5_OFFSET UNITYSDK_OFFSET(0x17487550)
#define CLASS_2_BFDC7DFB4F2A1B8E_METHOD_2_C74E50CBD41F0264_6_OFFSET UNITYSDK_OFFSET(0x17487C70)
#define CLASS_2_BFDC7DFB4F2A1B8E_METHOD_2_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x17480700)
#define CLASS_2_BFDC7DFB4F2A1B8E_METHOD_2_C7D5B388BE8CCE04_OFFSET UNITYSDK_OFFSET(0x17485F90)
#define CLASS_2_BFDC7DFB4F2A1B8E_METHOD_2_CE67C492DF7EC72A_OFFSET UNITYSDK_OFFSET(0x17485370)
#define CLASS_2_BFDC7DFB4F2A1B8E_METHOD_2_CF086596D3935A7D_OFFSET UNITYSDK_OFFSET(0x1747FFF0)
#define CLASS_2_BFDC7DFB4F2A1B8E_METHOD_2_CF4D9C717407BC14_OFFSET UNITYSDK_OFFSET(0x17480260)
#define CLASS_2_BFDC7DFB4F2A1B8E_METHOD_2_D199BA3CD9DE511C_OFFSET UNITYSDK_OFFSET(0x17486380)
#define CLASS_2_BFDC7DFB4F2A1B8E_METHOD_2_DA3B02CCD6820A7E_OFFSET UNITYSDK_OFFSET(0x174810B0)
#define CLASS_2_BFDC7DFB4F2A1B8E_METHOD_2_E253190D74DB6879_OFFSET UNITYSDK_OFFSET(0x17482670)
#define CLASS_2_BFDC7DFB4F2A1B8E_METHOD_2_E693A0026D178D8E_OFFSET UNITYSDK_OFFSET(0x1747FCC0)
#define CLASS_2_BFDC7DFB4F2A1B8E_METHOD_2_E9268EC3D165B0E4_1_OFFSET UNITYSDK_OFFSET(0x17486250)
#define CLASS_2_BFDC7DFB4F2A1B8E_METHOD_2_E9268EC3D165B0E4_OFFSET UNITYSDK_OFFSET(0x17482540)
#define CLASS_2_BFDC7DFB4F2A1B8E_METHOD_2_EAF68F68F72A1D6D_OFFSET UNITYSDK_OFFSET(0x17484680)
#define CLASS_2_BFDC7DFB4F2A1B8E_METHOD_2_F0088C88851A7DFB_1_OFFSET UNITYSDK_OFFSET(0x17483540)
#define CLASS_2_BFDC7DFB4F2A1B8E_METHOD_2_F0088C88851A7DFB_2_OFFSET UNITYSDK_OFFSET(0x174836D0)
#define CLASS_2_BFDC7DFB4F2A1B8E_METHOD_2_F0088C88851A7DFB_3_OFFSET UNITYSDK_OFFSET(0x17484210)
#define CLASS_2_BFDC7DFB4F2A1B8E_METHOD_2_F0088C88851A7DFB_4_OFFSET UNITYSDK_OFFSET(0x17486770)
#define CLASS_2_BFDC7DFB4F2A1B8E_METHOD_2_F0088C88851A7DFB_5_OFFSET UNITYSDK_OFFSET(0x17486A90)
#define CLASS_2_BFDC7DFB4F2A1B8E_METHOD_2_F0088C88851A7DFB_6_OFFSET UNITYSDK_OFFSET(0x17487570)
#define CLASS_2_BFDC7DFB4F2A1B8E_METHOD_2_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x17480EA0)
#define CLASS_2_BFDC7DFB4F2A1B8E_METHOD_2_F017FB51192D614D_OFFSET UNITYSDK_OFFSET(0x17481270)
#define CLASS_2_BFDC7DFB4F2A1B8E_METHOD_2_F8323F9C9DD7F303_OFFSET UNITYSDK_OFFSET(0x174859E0)
#define CLASS_2_BFDC7DFB4F2A1B8E_METHOD_2_FE910912F9870C0D_1_OFFSET UNITYSDK_OFFSET(0x17482800)
#define CLASS_2_BFDC7DFB4F2A1B8E_METHOD_2_FE910912F9870C0D_2_OFFSET UNITYSDK_OFFSET(0x174847E0)
#define CLASS_2_BFDC7DFB4F2A1B8E_METHOD_2_FE910912F9870C0D_3_OFFSET UNITYSDK_OFFSET(0x17486630)
#define CLASS_2_BFDC7DFB4F2A1B8E_METHOD_2_FE910912F9870C0D_4_OFFSET UNITYSDK_OFFSET(0x17486DE0)
#define CLASS_2_BFDC7DFB4F2A1B8E_METHOD_2_FE910912F9870C0D_OFFSET UNITYSDK_OFFSET(0x17482400)
#define CLASS_2_BFDC7DFB4F2A1B8E_METHOD_2_FF1835EAAFB4D539_1_OFFSET UNITYSDK_OFFSET(0x17484E20)
#define CLASS_2_BFDC7DFB4F2A1B8E_METHOD_2_FF1835EAAFB4D539_OFFSET UNITYSDK_OFFSET(0x17483550)
#define CLASS_2_BFDC7DFB4F2A1B8E_ONCREATE_OFFSET UNITYSDK_OFFSET(0x1747FC70)
#define CLASS_2_BFDC7DFB4F2A1B8E__CTOR_OFFSET UNITYSDK_OFFSET(0x1747FF00)

inline static constexpr unsigned int Class_2_BFDC7DFB4F2A1B8E_TypeDefinitionIndex = 40762;

class Class_2_BFDC7DFB4F2A1B8E : public ::Foundation::SingletonDisposable_1<::Class_2_BFDC7DFB4F2A1B8E*>
{
public:
	::Struct_2_1972A5FA12B7BFD3 Field_2_11; // 0x10
	::Class_1_15D62275ABED373C* Field_2_7; // 0x40
	::System::Collections::Generic::Dictionary_2<::Foundation::ResourceFileType, ::Class_1_3B6FD32A4C03F1FC*>* Field_2_9; // 0x48
	::Struct_2_1972A5FA12B7BFD3 Field_2_10; // 0x50
	::Class_1_15D62275ABED373C* Field_2_8; // 0x80
	::System::Boolean Field_2_3; // 0x88
	::System::Boolean Field_2_1; // 0x89
	::System::Boolean Field_2_4; // 0x8A
	::System::Boolean Field_2_0; // 0x8B
	::System::Boolean Field_2_2; // 0x8C
	::System::Boolean Field_2_6; // 0x8D
	::System::Boolean Field_2_5; // 0x8E

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BFDC7DFB4F2A1B8E__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BFDC7DFB4F2A1B8E_DISPOSE_OFFSET))(this);
	}

	::System::Void OnCreate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BFDC7DFB4F2A1B8E_ONCREATE_OFFSET))(this);
	}

	::System::Void Method_2_5CDF16CC200D8B52(::Class_1_15D62275ABED373C* a1, ::Class_1_15D62275ABED373C* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_15D62275ABED373C*, ::Class_1_15D62275ABED373C*))((::PBYTE)hIl2Cpp + CLASS_2_BFDC7DFB4F2A1B8E_METHOD_2_5CDF16CC200D8B52_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_CF086596D3935A7D(::Foundation::ResourceFileType a1)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::ResourceFileType))((::PBYTE)hIl2Cpp + CLASS_2_BFDC7DFB4F2A1B8E_METHOD_2_CF086596D3935A7D_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::Struct_2_DAA84C1CDD754F37>* Method_2_47B7BC57A143C373(::Foundation::ResourceFileType a1)
	{
		return ((::System::Collections::Generic::List_1<::Struct_2_DAA84C1CDD754F37>*(*)(::PVOID, ::Foundation::ResourceFileType))((::PBYTE)hIl2Cpp + CLASS_2_BFDC7DFB4F2A1B8E_METHOD_2_47B7BC57A143C373_OFFSET))(this, a1);
	}

	::System::Void Method_2_CF4D9C717407BC14(::System::Collections::Generic::List_1<::Foundation::ResourceFileType>* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Foundation::ResourceFileType>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_BFDC7DFB4F2A1B8E_METHOD_2_CF4D9C717407BC14_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_3E7B7DB0EDF962BA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BFDC7DFB4F2A1B8E_METHOD_2_3E7B7DB0EDF962BA_OFFSET))(this);
	}

	::System::Void Method_2_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_BFDC7DFB4F2A1B8E_METHOD_2_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::Void Method_2_3E7B7DB0EDF962BA_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BFDC7DFB4F2A1B8E_METHOD_2_3E7B7DB0EDF962BA_1_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Struct_2_DAA84C1CDD754F37>* Method_2_833F830E464BF470(::Foundation::ResourceFileType a1, ::System::Collections::Generic::IEnumerable_1<::Enum_3_34F7035555410463_1>* a2, ::System::Collections::Generic::IEnumerable_1<::Enum_3_34F7035555410463_1>* a3)
	{
		return ((::System::Collections::Generic::List_1<::Struct_2_DAA84C1CDD754F37>*(*)(::PVOID, ::Foundation::ResourceFileType, ::System::Collections::Generic::IEnumerable_1<::Enum_3_34F7035555410463_1>*, ::System::Collections::Generic::IEnumerable_1<::Enum_3_34F7035555410463_1>*))((::PBYTE)hIl2Cpp + CLASS_2_BFDC7DFB4F2A1B8E_METHOD_2_833F830E464BF470_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_774E05D782CFC509(::Foundation::ResourceFileType a1)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::ResourceFileType))((::PBYTE)hIl2Cpp + CLASS_2_BFDC7DFB4F2A1B8E_METHOD_2_774E05D782CFC509_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::Struct_2_DAA84C1CDD754F37>* Method_2_B330F7C2941699D0()
	{
		return ((::System::Collections::Generic::List_1<::Struct_2_DAA84C1CDD754F37>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BFDC7DFB4F2A1B8E_METHOD_2_B330F7C2941699D0_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Struct_2_DAA84C1CDD754F37>* Method_2_79359A071DBD91C6(::Foundation::ResourceFileType a1, ::System::Collections::Generic::IEnumerable_1<::Enum_3_34F7035555410463_1>* a2, ::System::Collections::Generic::IEnumerable_1<::Enum_3_34F7035555410463_1>* a3)
	{
		return ((::System::Collections::Generic::List_1<::Struct_2_DAA84C1CDD754F37>*(*)(::PVOID, ::Foundation::ResourceFileType, ::System::Collections::Generic::IEnumerable_1<::Enum_3_34F7035555410463_1>*, ::System::Collections::Generic::IEnumerable_1<::Enum_3_34F7035555410463_1>*))((::PBYTE)hIl2Cpp + CLASS_2_BFDC7DFB4F2A1B8E_METHOD_2_79359A071DBD91C6_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_C74E50CBD41F0264_1(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_BFDC7DFB4F2A1B8E_METHOD_2_C74E50CBD41F0264_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_8C8625211DA811AE(::Class_1_15D62275ABED373C* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_15D62275ABED373C*))((::PBYTE)hIl2Cpp + CLASS_2_BFDC7DFB4F2A1B8E_METHOD_2_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BFDC7DFB4F2A1B8E_METHOD_2_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_2_2ED8799B5DC425F3(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_BFDC7DFB4F2A1B8E_METHOD_2_2ED8799B5DC425F3_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::Struct_2_DAA84C1CDD754F37>* Method_2_DA3B02CCD6820A7E(::Foundation::ResourceFileType a1, ::System::Boolean a2)
	{
		return ((::System::Collections::Generic::List_1<::Struct_2_DAA84C1CDD754F37>*(*)(::PVOID, ::Foundation::ResourceFileType, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_BFDC7DFB4F2A1B8E_METHOD_2_DA3B02CCD6820A7E_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::Class_1_13B43DCF703FB24C*>* Method_2_F017FB51192D614D(::System::Collections::Generic::List_1<::Foundation::ResourceFileType>* a1, ::System::Collections::Generic::IEnumerable_1<::Enum_3_34F7035555410463_1>* a2, ::System::Collections::Generic::IEnumerable_1<::Enum_3_34F7035555410463_1>* a3)
	{
		return ((::System::Collections::Generic::List_1<::Class_1_13B43DCF703FB24C*>*(*)(::PVOID, ::System::Collections::Generic::List_1<::Foundation::ResourceFileType>*, ::System::Collections::Generic::IEnumerable_1<::Enum_3_34F7035555410463_1>*, ::System::Collections::Generic::IEnumerable_1<::Enum_3_34F7035555410463_1>*))((::PBYTE)hIl2Cpp + CLASS_2_BFDC7DFB4F2A1B8E_METHOD_2_F017FB51192D614D_OFFSET))(this, a1, a2, a3);
	}

	::System::Collections::Generic::HashSet_1<::Struct_2_DAA84C1CDD754F37>* Method_2_AFCE123AA3A2A269(::System::Collections::Generic::IEnumerable_1<::Class_1_3B6FD32A4C03F1FC*>* a1, ::System::Boolean a2, ::System::Boolean a3, ::System::Boolean a4, ::System::Boolean a5)
	{
		return ((::System::Collections::Generic::HashSet_1<::Struct_2_DAA84C1CDD754F37>*(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::Class_1_3B6FD32A4C03F1FC*>*, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_BFDC7DFB4F2A1B8E_METHOD_2_AFCE123AA3A2A269_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_2_C74E50CBD41F0264_2(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_BFDC7DFB4F2A1B8E_METHOD_2_C74E50CBD41F0264_2_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_27B2E0B8178B81ED(::Class_1_15D62275ABED373C* a1, ::System::Collections::Generic::Dictionary_2<::Foundation::ResourceFileType, ::Class_1_3B6FD32A4C03F1FC*>* a2, ::System::String*& a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_15D62275ABED373C*, ::System::Collections::Generic::Dictionary_2<::Foundation::ResourceFileType, ::Class_1_3B6FD32A4C03F1FC*>*, ::System::String*&))((::PBYTE)hIl2Cpp + CLASS_2_BFDC7DFB4F2A1B8E_METHOD_2_27B2E0B8178B81ED_OFFSET))(this, a1, a2, a3);
	}

	::Struct_2_86B6AE3AD6E3BBAF Method_2_BA80D36BDA3B5115()
	{
		return ((::Struct_2_86B6AE3AD6E3BBAF(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BFDC7DFB4F2A1B8E_METHOD_2_BA80D36BDA3B5115_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Struct_2_DAA84C1CDD754F37>* Method_2_89A3DB19E7D72316(::System::Collections::Generic::List_1<::Foundation::ResourceFileType>* a1, ::System::Boolean a2)
	{
		return ((::System::Collections::Generic::List_1<::Struct_2_DAA84C1CDD754F37>*(*)(::PVOID, ::System::Collections::Generic::List_1<::Foundation::ResourceFileType>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_BFDC7DFB4F2A1B8E_METHOD_2_89A3DB19E7D72316_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_FE910912F9870C0D(::System::Collections::Generic::List_1<::Foundation::ResourceFileType>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Foundation::ResourceFileType>*))((::PBYTE)hIl2Cpp + CLASS_2_BFDC7DFB4F2A1B8E_METHOD_2_FE910912F9870C0D_OFFSET))(this, a1);
	}

	::System::Void Method_2_E253190D74DB6879(::System::Collections::Generic::Dictionary_2<::Foundation::ResourceFileType, ::Class_1_3B6FD32A4C03F1FC*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::Foundation::ResourceFileType, ::Class_1_3B6FD32A4C03F1FC*>*))((::PBYTE)hIl2Cpp + CLASS_2_BFDC7DFB4F2A1B8E_METHOD_2_E253190D74DB6879_OFFSET))(this, a1);
	}

	::System::Void Method_2_FE910912F9870C0D_1(::System::Collections::Generic::List_1<::Foundation::ResourceFileType>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Foundation::ResourceFileType>*))((::PBYTE)hIl2Cpp + CLASS_2_BFDC7DFB4F2A1B8E_METHOD_2_FE910912F9870C0D_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_3E7B7DB0EDF962BA_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BFDC7DFB4F2A1B8E_METHOD_2_3E7B7DB0EDF962BA_2_OFFSET))(this);
	}

	::System::String* Method_2_9B4D94F0F519678B()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BFDC7DFB4F2A1B8E_METHOD_2_9B4D94F0F519678B_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Struct_2_DAA84C1CDD754F37>* Method_2_AF18B70A0F6489B2(::Foundation::ResourceFileType a1, ::System::Collections::Generic::IEnumerable_1<::System::String*>* a2)
	{
		return ((::System::Collections::Generic::List_1<::Struct_2_DAA84C1CDD754F37>*(*)(::PVOID, ::Foundation::ResourceFileType, ::System::Collections::Generic::IEnumerable_1<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_2_BFDC7DFB4F2A1B8E_METHOD_2_AF18B70A0F6489B2_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_A025F0342FE08D10(::System::Collections::Generic::List_1<::Foundation::ResourceFileType>* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::List_1<::Foundation::ResourceFileType>*))((::PBYTE)hIl2Cpp + CLASS_2_BFDC7DFB4F2A1B8E_METHOD_2_A025F0342FE08D10_OFFSET))(this, a1);
	}

	::Struct_2_86B6AE3AD6E3BBAF Method_2_7244790BA62376F4(::System::Collections::Generic::Dictionary_2<::Foundation::ResourceFileType, ::Class_1_3B6FD32A4C03F1FC*>* a1)
	{
		return ((::Struct_2_86B6AE3AD6E3BBAF(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::Foundation::ResourceFileType, ::Class_1_3B6FD32A4C03F1FC*>*))((::PBYTE)hIl2Cpp + CLASS_2_BFDC7DFB4F2A1B8E_METHOD_2_7244790BA62376F4_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_F0088C88851A7DFB_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BFDC7DFB4F2A1B8E_METHOD_2_F0088C88851A7DFB_1_OFFSET))(this);
	}

	::System::Void Method_2_FF1835EAAFB4D539(::System::Collections::Generic::Dictionary_2<::Foundation::ResourceFileType, ::Class_1_3B6FD32A4C03F1FC*>* a1, ::Il2CppArray<::Enum_3_13E1F0BBFE52F5F0>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::Foundation::ResourceFileType, ::Class_1_3B6FD32A4C03F1FC*>*, ::Il2CppArray<::Enum_3_13E1F0BBFE52F5F0>*))((::PBYTE)hIl2Cpp + CLASS_2_BFDC7DFB4F2A1B8E_METHOD_2_FF1835EAAFB4D539_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_F0088C88851A7DFB_2()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BFDC7DFB4F2A1B8E_METHOD_2_F0088C88851A7DFB_2_OFFSET))(this);
	}

	::System::Void Method_2_C74E50CBD41F0264_3(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_BFDC7DFB4F2A1B8E_METHOD_2_C74E50CBD41F0264_3_OFFSET))(this, a1);
	}

	::Class_1_13B43DCF703FB24C* Method_2_5A3F5C9120955FC0(::System::String* a1)
	{
		return ((::Class_1_13B43DCF703FB24C*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_BFDC7DFB4F2A1B8E_METHOD_2_5A3F5C9120955FC0_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::Struct_2_DAA84C1CDD754F37>* Method_2_2034D36E9DCC1F26(::System::Collections::Generic::List_1<::Foundation::ResourceFileType>* a1, ::System::Collections::Generic::IEnumerable_1<::Enum_3_34F7035555410463_1>* a2, ::System::Collections::Generic::IEnumerable_1<::Enum_3_34F7035555410463_1>* a3)
	{
		return ((::System::Collections::Generic::List_1<::Struct_2_DAA84C1CDD754F37>*(*)(::PVOID, ::System::Collections::Generic::List_1<::Foundation::ResourceFileType>*, ::System::Collections::Generic::IEnumerable_1<::Enum_3_34F7035555410463_1>*, ::System::Collections::Generic::IEnumerable_1<::Enum_3_34F7035555410463_1>*))((::PBYTE)hIl2Cpp + CLASS_2_BFDC7DFB4F2A1B8E_METHOD_2_2034D36E9DCC1F26_OFFSET))(this, a1, a2, a3);
	}

	::Class_1_13B43DCF703FB24C* Method_2_25E3D2E64FB63BEB(::Foundation::ResourceFileType a1, ::System::Collections::Generic::IEnumerable_1<::Enum_3_34F7035555410463_1>* a2, ::System::Collections::Generic::IEnumerable_1<::Enum_3_34F7035555410463_1>* a3)
	{
		return ((::Class_1_13B43DCF703FB24C*(*)(::PVOID, ::Foundation::ResourceFileType, ::System::Collections::Generic::IEnumerable_1<::Enum_3_34F7035555410463_1>*, ::System::Collections::Generic::IEnumerable_1<::Enum_3_34F7035555410463_1>*))((::PBYTE)hIl2Cpp + CLASS_2_BFDC7DFB4F2A1B8E_METHOD_2_25E3D2E64FB63BEB_OFFSET))(this, a1, a2, a3);
	}

	::System::Collections::Generic::List_1<::Struct_2_DAA84C1CDD754F37>* Method_2_580394B3F28DBF72(::System::Collections::Generic::List_1<::Foundation::ResourceFileType>* a1)
	{
		return ((::System::Collections::Generic::List_1<::Struct_2_DAA84C1CDD754F37>*(*)(::PVOID, ::System::Collections::Generic::List_1<::Foundation::ResourceFileType>*))((::PBYTE)hIl2Cpp + CLASS_2_BFDC7DFB4F2A1B8E_METHOD_2_580394B3F28DBF72_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::Struct_2_DAA84C1CDD754F37>* Method_2_580394B3F28DBF72_1(::System::Collections::Generic::List_1<::Foundation::ResourceFileType>* a1)
	{
		return ((::System::Collections::Generic::List_1<::Struct_2_DAA84C1CDD754F37>*(*)(::PVOID, ::System::Collections::Generic::List_1<::Foundation::ResourceFileType>*))((::PBYTE)hIl2Cpp + CLASS_2_BFDC7DFB4F2A1B8E_METHOD_2_580394B3F28DBF72_1_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_F0088C88851A7DFB_3()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BFDC7DFB4F2A1B8E_METHOD_2_F0088C88851A7DFB_3_OFFSET))(this);
	}

	::System::Boolean Method_2_4487776BEE04D471()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BFDC7DFB4F2A1B8E_METHOD_2_4487776BEE04D471_OFFSET))(this);
	}

	::Struct_2_86B6AE3AD6E3BBAF Method_2_BA80D36BDA3B5115_1()
	{
		return ((::Struct_2_86B6AE3AD6E3BBAF(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BFDC7DFB4F2A1B8E_METHOD_2_BA80D36BDA3B5115_1_OFFSET))(this);
	}

	::System::Boolean Method_2_15B355E7E988A40B(::System::String* a1, ::MoleMole::DownloadFileInfo*& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::MoleMole::DownloadFileInfo*&))((::PBYTE)hIl2Cpp + CLASS_2_BFDC7DFB4F2A1B8E_METHOD_2_15B355E7E988A40B_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::Dictionary_2<::Foundation::ResourceFileType, ::Class_1_3B6FD32A4C03F1FC*>* Method_2_1685BD3810865B7C()
	{
		return ((::System::Collections::Generic::Dictionary_2<::Foundation::ResourceFileType, ::Class_1_3B6FD32A4C03F1FC*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BFDC7DFB4F2A1B8E_METHOD_2_1685BD3810865B7C_OFFSET))(this);
	}

	::System::Void Method_2_6423291ED13007B8(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_BFDC7DFB4F2A1B8E_METHOD_2_6423291ED13007B8_OFFSET))(this, a1);
	}

	::System::Void Method_2_EAF68F68F72A1D6D(::Foundation::ResourceFileType a1)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::ResourceFileType))((::PBYTE)hIl2Cpp + CLASS_2_BFDC7DFB4F2A1B8E_METHOD_2_EAF68F68F72A1D6D_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_12C9A3082ABA77E1(::Foundation::ResourceFileType a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Foundation::ResourceFileType))((::PBYTE)hIl2Cpp + CLASS_2_BFDC7DFB4F2A1B8E_METHOD_2_12C9A3082ABA77E1_OFFSET))(this, a1);
	}

	::System::Void Method_2_FE910912F9870C0D_2(::System::Collections::Generic::List_1<::Foundation::ResourceFileType>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Foundation::ResourceFileType>*))((::PBYTE)hIl2Cpp + CLASS_2_BFDC7DFB4F2A1B8E_METHOD_2_FE910912F9870C0D_2_OFFSET))(this, a1);
	}

	::System::Void Method_2_E9268EC3D165B0E4(::Foundation::ResourceFileType a1)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::ResourceFileType))((::PBYTE)hIl2Cpp + CLASS_2_BFDC7DFB4F2A1B8E_METHOD_2_E9268EC3D165B0E4_OFFSET))(this, a1);
	}

	::System::String* Method_2_9B4D94F0F519678B_1()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BFDC7DFB4F2A1B8E_METHOD_2_9B4D94F0F519678B_1_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Struct_2_DAA84C1CDD754F37>* Method_2_81F019B263A55D8A()
	{
		return ((::System::Collections::Generic::List_1<::Struct_2_DAA84C1CDD754F37>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BFDC7DFB4F2A1B8E_METHOD_2_81F019B263A55D8A_OFFSET))(this);
	}

	::System::Void Method_2_FF1835EAAFB4D539_1(::System::Collections::Generic::Dictionary_2<::Foundation::ResourceFileType, ::Class_1_3B6FD32A4C03F1FC*>* a1, ::Il2CppArray<::Enum_3_13E1F0BBFE52F5F0>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::Foundation::ResourceFileType, ::Class_1_3B6FD32A4C03F1FC*>*, ::Il2CppArray<::Enum_3_13E1F0BBFE52F5F0>*))((::PBYTE)hIl2Cpp + CLASS_2_BFDC7DFB4F2A1B8E_METHOD_2_FF1835EAAFB4D539_1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_3E7B7DB0EDF962BA_3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BFDC7DFB4F2A1B8E_METHOD_2_3E7B7DB0EDF962BA_3_OFFSET))(this);
	}

	::System::Collections::Generic::HashSet_1<::System::String*>* Method_2_48EECC15E10EEC11()
	{
		return ((::System::Collections::Generic::HashSet_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BFDC7DFB4F2A1B8E_METHOD_2_48EECC15E10EEC11_OFFSET))(this);
	}

	::System::Void Method_2_44EDEAE08395A153(::System::Collections::Generic::Dictionary_2<::Foundation::ResourceFileType, ::Class_1_3B6FD32A4C03F1FC*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::Foundation::ResourceFileType, ::Class_1_3B6FD32A4C03F1FC*>*))((::PBYTE)hIl2Cpp + CLASS_2_BFDC7DFB4F2A1B8E_METHOD_2_44EDEAE08395A153_OFFSET))(this, a1);
	}

	::System::Void Method_2_CE67C492DF7EC72A(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_BFDC7DFB4F2A1B8E_METHOD_2_CE67C492DF7EC72A_OFFSET))(this, a1);
	}

	::Struct_2_86B6AE3AD6E3BBAF Method_2_7244790BA62376F4_1(::System::Collections::Generic::Dictionary_2<::Foundation::ResourceFileType, ::Class_1_3B6FD32A4C03F1FC*>* a1)
	{
		return ((::Struct_2_86B6AE3AD6E3BBAF(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::Foundation::ResourceFileType, ::Class_1_3B6FD32A4C03F1FC*>*))((::PBYTE)hIl2Cpp + CLASS_2_BFDC7DFB4F2A1B8E_METHOD_2_7244790BA62376F4_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_8C8625211DA811AE_1(::Class_1_15D62275ABED373C* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_15D62275ABED373C*))((::PBYTE)hIl2Cpp + CLASS_2_BFDC7DFB4F2A1B8E_METHOD_2_8C8625211DA811AE_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_C25C89C277D16D2F(::Foundation::ResourceFileType a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::ResourceFileType, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_BFDC7DFB4F2A1B8E_METHOD_2_C25C89C277D16D2F_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::System::String*>* Method_2_F8323F9C9DD7F303(::System::Collections::Generic::Dictionary_2<::Foundation::ResourceFileType, ::Class_1_3B6FD32A4C03F1FC*>* a1)
	{
		return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::Foundation::ResourceFileType, ::Class_1_3B6FD32A4C03F1FC*>*))((::PBYTE)hIl2Cpp + CLASS_2_BFDC7DFB4F2A1B8E_METHOD_2_F8323F9C9DD7F303_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_79419E7D890DB1EE(::Struct_2_DAA84C1CDD754F37 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_DAA84C1CDD754F37))((::PBYTE)hIl2Cpp + CLASS_2_BFDC7DFB4F2A1B8E_METHOD_2_79419E7D890DB1EE_OFFSET))(this, a1);
	}

	::System::Void Method_2_695579C6786804DA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BFDC7DFB4F2A1B8E_METHOD_2_695579C6786804DA_OFFSET))(this);
	}

	::System::Void Method_2_C74E50CBD41F0264_4(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_BFDC7DFB4F2A1B8E_METHOD_2_C74E50CBD41F0264_4_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::Struct_2_DAA84C1CDD754F37>* Method_2_C7D5B388BE8CCE04(::System::String* a1)
	{
		return ((::System::Collections::Generic::List_1<::Struct_2_DAA84C1CDD754F37>*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_BFDC7DFB4F2A1B8E_METHOD_2_C7D5B388BE8CCE04_OFFSET))(this, a1);
	}

	::System::Collections::Generic::HashSet_1<::Struct_2_DAA84C1CDD754F37>* Method_2_05AF3E6C9FC16A49(::System::Boolean a1, ::System::Boolean a2, ::System::Boolean a3, ::System::Boolean a4)
	{
		return ((::System::Collections::Generic::HashSet_1<::Struct_2_DAA84C1CDD754F37>*(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_BFDC7DFB4F2A1B8E_METHOD_2_05AF3E6C9FC16A49_OFFSET))(this, a1, a2, a3, a4);
	}

	::Struct_2_86B6AE3AD6E3BBAF Method_2_7244790BA62376F4_2(::System::Collections::Generic::Dictionary_2<::Foundation::ResourceFileType, ::Class_1_3B6FD32A4C03F1FC*>* a1)
	{
		return ((::Struct_2_86B6AE3AD6E3BBAF(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::Foundation::ResourceFileType, ::Class_1_3B6FD32A4C03F1FC*>*))((::PBYTE)hIl2Cpp + CLASS_2_BFDC7DFB4F2A1B8E_METHOD_2_7244790BA62376F4_2_OFFSET))(this, a1);
	}

	::System::Void Method_2_E9268EC3D165B0E4_1(::Foundation::ResourceFileType a1)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::ResourceFileType))((::PBYTE)hIl2Cpp + CLASS_2_BFDC7DFB4F2A1B8E_METHOD_2_E9268EC3D165B0E4_1_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_D199BA3CD9DE511C(::Class_1_15D62275ABED373C* a1, ::System::Collections::Generic::Dictionary_2<::Foundation::ResourceFileType, ::Class_1_3B6FD32A4C03F1FC*>* a2, ::System::String*& a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_15D62275ABED373C*, ::System::Collections::Generic::Dictionary_2<::Foundation::ResourceFileType, ::Class_1_3B6FD32A4C03F1FC*>*, ::System::String*&))((::PBYTE)hIl2Cpp + CLASS_2_BFDC7DFB4F2A1B8E_METHOD_2_D199BA3CD9DE511C_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_E693A0026D178D8E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BFDC7DFB4F2A1B8E_METHOD_2_E693A0026D178D8E_OFFSET))(this);
	}

	::System::Void Method_2_FE910912F9870C0D_3(::System::Collections::Generic::List_1<::Foundation::ResourceFileType>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Foundation::ResourceFileType>*))((::PBYTE)hIl2Cpp + CLASS_2_BFDC7DFB4F2A1B8E_METHOD_2_FE910912F9870C0D_3_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_F0088C88851A7DFB_4()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BFDC7DFB4F2A1B8E_METHOD_2_F0088C88851A7DFB_4_OFFSET))(this);
	}

	::System::Void Method_2_25225CE3B182C1B3(::System::Collections::Generic::Dictionary_2<::Foundation::ResourceFileType, ::Class_1_3B6FD32A4C03F1FC*>* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::Foundation::ResourceFileType, ::Class_1_3B6FD32A4C03F1FC*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_BFDC7DFB4F2A1B8E_METHOD_2_25225CE3B182C1B3_OFFSET))(this, a1, a2);
	}

	::Class_1_13B43DCF703FB24C* Method_2_BC5D900B4C8C5BA2(::Foundation::ResourceFileType a1)
	{
		return ((::Class_1_13B43DCF703FB24C*(*)(::PVOID, ::Foundation::ResourceFileType))((::PBYTE)hIl2Cpp + CLASS_2_BFDC7DFB4F2A1B8E_METHOD_2_BC5D900B4C8C5BA2_OFFSET))(this, a1);
	}

	::System::Void Method_2_C25C89C277D16D2F_1(::Foundation::ResourceFileType a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::ResourceFileType, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_BFDC7DFB4F2A1B8E_METHOD_2_C25C89C277D16D2F_1_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_F0088C88851A7DFB_5()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BFDC7DFB4F2A1B8E_METHOD_2_F0088C88851A7DFB_5_OFFSET))(this);
	}

	::System::Void Method_2_60451B2DE9D371C9(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_BFDC7DFB4F2A1B8E_METHOD_2_60451B2DE9D371C9_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::Struct_2_DAA84C1CDD754F37>* Method_2_AF827A30708754FF(::Foundation::ResourceFileType a1)
	{
		return ((::System::Collections::Generic::List_1<::Struct_2_DAA84C1CDD754F37>*(*)(::PVOID, ::Foundation::ResourceFileType))((::PBYTE)hIl2Cpp + CLASS_2_BFDC7DFB4F2A1B8E_METHOD_2_AF827A30708754FF_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::Struct_2_DAA84C1CDD754F37>* Method_2_AD12372BE27436E0(::System::Collections::Generic::List_1<::Foundation::ResourceFileType>* a1, ::System::Collections::Generic::IEnumerable_1<::System::String*>* a2)
	{
		return ((::System::Collections::Generic::List_1<::Struct_2_DAA84C1CDD754F37>*(*)(::PVOID, ::System::Collections::Generic::List_1<::Foundation::ResourceFileType>*, ::System::Collections::Generic::IEnumerable_1<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_2_BFDC7DFB4F2A1B8E_METHOD_2_AD12372BE27436E0_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_FE910912F9870C0D_4(::System::Collections::Generic::List_1<::Foundation::ResourceFileType>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Foundation::ResourceFileType>*))((::PBYTE)hIl2Cpp + CLASS_2_BFDC7DFB4F2A1B8E_METHOD_2_FE910912F9870C0D_4_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_2A73302F5D8B0BA6()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BFDC7DFB4F2A1B8E_METHOD_2_2A73302F5D8B0BA6_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Class_1_13B43DCF703FB24C*>* Method_2_172654BD094F27F9(::System::Collections::Generic::List_1<::Foundation::ResourceFileType>* a1)
	{
		return ((::System::Collections::Generic::List_1<::Class_1_13B43DCF703FB24C*>*(*)(::PVOID, ::System::Collections::Generic::List_1<::Foundation::ResourceFileType>*))((::PBYTE)hIl2Cpp + CLASS_2_BFDC7DFB4F2A1B8E_METHOD_2_172654BD094F27F9_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::Struct_2_DAA84C1CDD754F37>* Method_2_47B7BC57A143C373_1(::Foundation::ResourceFileType a1)
	{
		return ((::System::Collections::Generic::List_1<::Struct_2_DAA84C1CDD754F37>*(*)(::PVOID, ::Foundation::ResourceFileType))((::PBYTE)hIl2Cpp + CLASS_2_BFDC7DFB4F2A1B8E_METHOD_2_47B7BC57A143C373_1_OFFSET))(this, a1);
	}

	::Struct_2_86B6AE3AD6E3BBAF Method_2_BA80D36BDA3B5115_2()
	{
		return ((::Struct_2_86B6AE3AD6E3BBAF(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BFDC7DFB4F2A1B8E_METHOD_2_BA80D36BDA3B5115_2_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Struct_2_DAA84C1CDD754F37>* Method_2_580394B3F28DBF72_2(::System::Collections::Generic::List_1<::Foundation::ResourceFileType>* a1)
	{
		return ((::System::Collections::Generic::List_1<::Struct_2_DAA84C1CDD754F37>*(*)(::PVOID, ::System::Collections::Generic::List_1<::Foundation::ResourceFileType>*))((::PBYTE)hIl2Cpp + CLASS_2_BFDC7DFB4F2A1B8E_METHOD_2_580394B3F28DBF72_2_OFFSET))(this, a1);
	}

	::System::Void Method_2_C74E50CBD41F0264_5(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_BFDC7DFB4F2A1B8E_METHOD_2_C74E50CBD41F0264_5_OFFSET))(this, a1);
	}

	::Class_1_15D62275ABED373C* Method_2_24748FC20F375725()
	{
		return ((::Class_1_15D62275ABED373C*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BFDC7DFB4F2A1B8E_METHOD_2_24748FC20F375725_OFFSET))(this);
	}

	::System::Boolean Method_2_F0088C88851A7DFB_6()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BFDC7DFB4F2A1B8E_METHOD_2_F0088C88851A7DFB_6_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Struct_2_DAA84C1CDD754F37>* Method_2_AB4E1E1E122D6A7B(::System::Collections::Generic::List_1<::Foundation::ResourceFileType>* a1, ::System::Collections::Generic::IEnumerable_1<::Enum_3_34F7035555410463_1>* a2, ::System::Collections::Generic::IEnumerable_1<::Enum_3_34F7035555410463_1>* a3)
	{
		return ((::System::Collections::Generic::List_1<::Struct_2_DAA84C1CDD754F37>*(*)(::PVOID, ::System::Collections::Generic::List_1<::Foundation::ResourceFileType>*, ::System::Collections::Generic::IEnumerable_1<::Enum_3_34F7035555410463_1>*, ::System::Collections::Generic::IEnumerable_1<::Enum_3_34F7035555410463_1>*))((::PBYTE)hIl2Cpp + CLASS_2_BFDC7DFB4F2A1B8E_METHOD_2_AB4E1E1E122D6A7B_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_2_4487776BEE04D471_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BFDC7DFB4F2A1B8E_METHOD_2_4487776BEE04D471_1_OFFSET))(this);
	}

	::Class_1_13B43DCF703FB24C* Method_2_5A3F5C9120955FC0_1(::System::String* a1)
	{
		return ((::Class_1_13B43DCF703FB24C*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_BFDC7DFB4F2A1B8E_METHOD_2_5A3F5C9120955FC0_1_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::Struct_2_DAA84C1CDD754F37>* Method_2_AA360F998779F45E(::System::String* a1)
	{
		return ((::System::Collections::Generic::List_1<::Struct_2_DAA84C1CDD754F37>*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_BFDC7DFB4F2A1B8E_METHOD_2_AA360F998779F45E_OFFSET))(this, a1);
	}

	::System::Void Method_2_C74E50CBD41F0264_6(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_BFDC7DFB4F2A1B8E_METHOD_2_C74E50CBD41F0264_6_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::Struct_2_DAA84C1CDD754F37>* Method_2_96AB598DE1C681FA(::System::String* a1)
	{
		return ((::System::Collections::Generic::List_1<::Struct_2_DAA84C1CDD754F37>*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_BFDC7DFB4F2A1B8E_METHOD_2_96AB598DE1C681FA_OFFSET))(this, a1);
	}

	::Class_1_15D62275ABED373C* Method_2_24748FC20F375725_1()
	{
		return ((::Class_1_15D62275ABED373C*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BFDC7DFB4F2A1B8E_METHOD_2_24748FC20F375725_1_OFFSET))(this);
	}
};
