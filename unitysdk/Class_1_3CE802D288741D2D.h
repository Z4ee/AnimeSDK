#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::IO { class DirectoryInfo; }
namespace System::IO { class FileInfo; }
namespace System::IO { class FileStream; }
namespace System::Text { class StringBuilder; }
namespace System::Text::RegularExpressions { class Regex; }

#define CLASS_1_3CE802D288741D2D_METHOD_1_00AA18458D984D9B_OFFSET UNITYSDK_OFFSET(0x1AC01D80)
#define CLASS_1_3CE802D288741D2D_METHOD_1_03736422B1E836C8_OFFSET UNITYSDK_OFFSET(0x1AC00D40)
#define CLASS_1_3CE802D288741D2D_METHOD_1_0407806F100D9D14_1_OFFSET UNITYSDK_OFFSET(0x1ABFBA20)
#define CLASS_1_3CE802D288741D2D_METHOD_1_0407806F100D9D14_OFFSET UNITYSDK_OFFSET(0x1ABF71D0)
#define CLASS_1_3CE802D288741D2D_METHOD_1_0844BF824CA685A7_OFFSET UNITYSDK_OFFSET(0x1ABF85D0)
#define CLASS_1_3CE802D288741D2D_METHOD_1_0BD8EBDA38930A84_OFFSET UNITYSDK_OFFSET(0x1ABFF550)
#define CLASS_1_3CE802D288741D2D_METHOD_1_1045B7FFF846D4FF_OFFSET UNITYSDK_OFFSET(0x1ABF94B0)
#define CLASS_1_3CE802D288741D2D_METHOD_1_11B8E01605498CF4_OFFSET UNITYSDK_OFFSET(0x1ABF51C0)
#define CLASS_1_3CE802D288741D2D_METHOD_1_12635A3CAA51684C_OFFSET UNITYSDK_OFFSET(0x1ABFF5B0)
#define CLASS_1_3CE802D288741D2D_METHOD_1_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0x1ABFFA00)
#define CLASS_1_3CE802D288741D2D_METHOD_1_130A6949BCD5A119_OFFSET UNITYSDK_OFFSET(0x1ABF52A0)
#define CLASS_1_3CE802D288741D2D_METHOD_1_1457A99C460B4D82_OFFSET UNITYSDK_OFFSET(0x1ABF91C0)
#define CLASS_1_3CE802D288741D2D_METHOD_1_16AAC9F8CAA68378_OFFSET UNITYSDK_OFFSET(0x1AC01100)
#define CLASS_1_3CE802D288741D2D_METHOD_1_1A503627688AE58E_OFFSET UNITYSDK_OFFSET(0x1ABFB200)
#define CLASS_1_3CE802D288741D2D_METHOD_1_1DCEF572AAED75CF_1_OFFSET UNITYSDK_OFFSET(0x1ABFFE90)
#define CLASS_1_3CE802D288741D2D_METHOD_1_1DCEF572AAED75CF_2_OFFSET UNITYSDK_OFFSET(0x1AC00050)
#define CLASS_1_3CE802D288741D2D_METHOD_1_1DCEF572AAED75CF_OFFSET UNITYSDK_OFFSET(0x1ABFFA10)
#define CLASS_1_3CE802D288741D2D_METHOD_1_1E5799D80018268D_OFFSET UNITYSDK_OFFSET(0x1ABFA2D0)
#define CLASS_1_3CE802D288741D2D_METHOD_1_1F9CEC2E7FFF0A01_OFFSET UNITYSDK_OFFSET(0x1ABFECF0)
#define CLASS_1_3CE802D288741D2D_METHOD_1_24B39354D1FCD13B_OFFSET UNITYSDK_OFFSET(0x1ABE7AE0)
#define CLASS_1_3CE802D288741D2D_METHOD_1_2B33C5147D6EE554_OFFSET UNITYSDK_OFFSET(0x1ABF9520)
#define CLASS_1_3CE802D288741D2D_METHOD_1_2E75F4263BAA93E8_OFFSET UNITYSDK_OFFSET(0x1ABFEB20)
#define CLASS_1_3CE802D288741D2D_METHOD_1_2F1937EBD1CFF8C5_OFFSET UNITYSDK_OFFSET(0x1ABF6220)
#define CLASS_1_3CE802D288741D2D_METHOD_1_2F25AE2D7046DE09_OFFSET UNITYSDK_OFFSET(0x1ABF8710)
#define CLASS_1_3CE802D288741D2D_METHOD_1_2F996FD8685BA4BF_OFFSET UNITYSDK_OFFSET(0x1AC001D0)
#define CLASS_1_3CE802D288741D2D_METHOD_1_30424022465411BE_OFFSET UNITYSDK_OFFSET(0x1AC01E80)
#define CLASS_1_3CE802D288741D2D_METHOD_1_304BCBB3B5923DF4_OFFSET UNITYSDK_OFFSET(0x1ABFD550)
#define CLASS_1_3CE802D288741D2D_METHOD_1_31329007E4494D37_OFFSET UNITYSDK_OFFSET(0x1AC01440)
#define CLASS_1_3CE802D288741D2D_METHOD_1_31CCAFA024D09758_OFFSET UNITYSDK_OFFSET(0x1ABF6370)
#define CLASS_1_3CE802D288741D2D_METHOD_1_33F47CD1F2D90021_OFFSET UNITYSDK_OFFSET(0x1ABF7190)
#define CLASS_1_3CE802D288741D2D_METHOD_1_343416D53F782A98_OFFSET UNITYSDK_OFFSET(0x1AC00850)
#define CLASS_1_3CE802D288741D2D_METHOD_1_3CA7B2FAF593D87E_OFFSET UNITYSDK_OFFSET(0x1ABFA250)
#define CLASS_1_3CE802D288741D2D_METHOD_1_42BEBC15DF245DB6_OFFSET UNITYSDK_OFFSET(0x1ABFD060)
#define CLASS_1_3CE802D288741D2D_METHOD_1_4453F55D90F8D029_OFFSET UNITYSDK_OFFSET(0x1ABFF140)
#define CLASS_1_3CE802D288741D2D_METHOD_1_492A229C2726426C_OFFSET UNITYSDK_OFFSET(0x1ABEDA50)
#define CLASS_1_3CE802D288741D2D_METHOD_1_51CB85426198DB47_OFFSET UNITYSDK_OFFSET(0x1ABFEDE0)
#define CLASS_1_3CE802D288741D2D_METHOD_1_56D1CCAABE4BE5F2_OFFSET UNITYSDK_OFFSET(0x1ABFA940)
#define CLASS_1_3CE802D288741D2D_METHOD_1_5D7FF84DD98AB865_OFFSET UNITYSDK_OFFSET(0x1AC00470)
#define CLASS_1_3CE802D288741D2D_METHOD_1_601151760D81E1EE_OFFSET UNITYSDK_OFFSET(0x1ABFFDA0)
#define CLASS_1_3CE802D288741D2D_METHOD_1_64AD61EB1294C23C_OFFSET UNITYSDK_OFFSET(0x1ABEBC90)
#define CLASS_1_3CE802D288741D2D_METHOD_1_68CFA3313D7F6FA9_OFFSET UNITYSDK_OFFSET(0x1AC017F0)
#define CLASS_1_3CE802D288741D2D_METHOD_1_695D23C4F5ED0DB2_OFFSET UNITYSDK_OFFSET(0x1AC01300)
#define CLASS_1_3CE802D288741D2D_METHOD_1_6AFDC50424099C5A_OFFSET UNITYSDK_OFFSET(0x1ABF9540)
#define CLASS_1_3CE802D288741D2D_METHOD_1_6B9DA53DDDC0D8BD_OFFSET UNITYSDK_OFFSET(0x1ABEA690)
#define CLASS_1_3CE802D288741D2D_METHOD_1_6F1B0A02FDC49991_OFFSET UNITYSDK_OFFSET(0x1AC01D70)
#define CLASS_1_3CE802D288741D2D_METHOD_1_7079FDFF6481F7C6_OFFSET UNITYSDK_OFFSET(0x1ABF97B0)
#define CLASS_1_3CE802D288741D2D_METHOD_1_7D201B4343E63821_1_OFFSET UNITYSDK_OFFSET(0x1ABFFBC0)
#define CLASS_1_3CE802D288741D2D_METHOD_1_7D201B4343E63821_2_OFFSET UNITYSDK_OFFSET(0x1ABFFCB0)
#define CLASS_1_3CE802D288741D2D_METHOD_1_7D201B4343E63821_OFFSET UNITYSDK_OFFSET(0x1ABFFAA0)
#define CLASS_1_3CE802D288741D2D_METHOD_1_7EEDB370E3865161_OFFSET UNITYSDK_OFFSET(0x1AC01F30)
#define CLASS_1_3CE802D288741D2D_METHOD_1_814BFAD6D303499E_OFFSET UNITYSDK_OFFSET(0x1ABF8C20)
#define CLASS_1_3CE802D288741D2D_METHOD_1_84E93399AE94C2FD_OFFSET UNITYSDK_OFFSET(0x1ABF05C0)
#define CLASS_1_3CE802D288741D2D_METHOD_1_85510FABD3528B87_OFFSET UNITYSDK_OFFSET(0x1ABFA9D0)
#define CLASS_1_3CE802D288741D2D_METHOD_1_88B60F3B95FAA4F1_OFFSET UNITYSDK_OFFSET(0x1ABFE950)
#define CLASS_1_3CE802D288741D2D_METHOD_1_8913E26713F9F05C_OFFSET UNITYSDK_OFFSET(0x1ABFEB80)
#define CLASS_1_3CE802D288741D2D_METHOD_1_8C7A0EBC62BF4B6D_OFFSET UNITYSDK_OFFSET(0x1ABFD450)
#define CLASS_1_3CE802D288741D2D_METHOD_1_8F5A352837E5D5A2_OFFSET UNITYSDK_OFFSET(0x1ABFCD30)
#define CLASS_1_3CE802D288741D2D_METHOD_1_8FACFFF3E5CBE2C4_OFFSET UNITYSDK_OFFSET(0x1AC01560)
#define CLASS_1_3CE802D288741D2D_METHOD_1_980E03E0CB5F1C97_OFFSET UNITYSDK_OFFSET(0x1ABF9510)
#define CLASS_1_3CE802D288741D2D_METHOD_1_994DF2D990A20287_OFFSET UNITYSDK_OFFSET(0x1ABFEA10)
#define CLASS_1_3CE802D288741D2D_METHOD_1_9D6C91C7444A7D52_OFFSET UNITYSDK_OFFSET(0x1ABFEA90)
#define CLASS_1_3CE802D288741D2D_METHOD_1_9DD2DCFED0B1F6F5_OFFSET UNITYSDK_OFFSET(0x1ABF8B00)
#define CLASS_1_3CE802D288741D2D_METHOD_1_9FD9A0E14949407F_OFFSET UNITYSDK_OFFSET(0x1ABF7090)
#define CLASS_1_3CE802D288741D2D_METHOD_1_A1F9DC1109BBBA96_OFFSET UNITYSDK_OFFSET(0x1AC00360)
#define CLASS_1_3CE802D288741D2D_METHOD_1_A5B868F5C71A467E_OFFSET UNITYSDK_OFFSET(0x1ABFF530)
#define CLASS_1_3CE802D288741D2D_METHOD_1_A705115B3CD7C1CB_OFFSET UNITYSDK_OFFSET(0x1ABFCB80)
#define CLASS_1_3CE802D288741D2D_METHOD_1_A7A54D86BEC69A86_OFFSET UNITYSDK_OFFSET(0x1AC00E80)
#define CLASS_1_3CE802D288741D2D_METHOD_1_A7F28B945B4F9B6E_OFFSET UNITYSDK_OFFSET(0x1ABF95F0)
#define CLASS_1_3CE802D288741D2D_METHOD_1_B548D12BA5C985DA_OFFSET UNITYSDK_OFFSET(0x1ABFF2C0)
#define CLASS_1_3CE802D288741D2D_METHOD_1_BC012EAD9D9F105D_OFFSET UNITYSDK_OFFSET(0x1ABF6860)
#define CLASS_1_3CE802D288741D2D_METHOD_1_BC08B70258A25F74_OFFSET UNITYSDK_OFFSET(0x1ABFDCD0)
#define CLASS_1_3CE802D288741D2D_METHOD_1_BF5ABDB6E1D2891A_OFFSET UNITYSDK_OFFSET(0x1ABFFAB0)
#define CLASS_1_3CE802D288741D2D_METHOD_1_C4C3DB6ADFBC756E_1_OFFSET UNITYSDK_OFFSET(0x1ABF95A0)
#define CLASS_1_3CE802D288741D2D_METHOD_1_C4C3DB6ADFBC756E_OFFSET UNITYSDK_OFFSET(0x1ABF9470)
#define CLASS_1_3CE802D288741D2D_METHOD_1_CA66F06205F1BED0_OFFSET UNITYSDK_OFFSET(0x1ABF0650)
#define CLASS_1_3CE802D288741D2D_METHOD_1_CBA90A04C636398B_OFFSET UNITYSDK_OFFSET(0x1ABED440)
#define CLASS_1_3CE802D288741D2D_METHOD_1_CD5950C3475F9079_OFFSET UNITYSDK_OFFSET(0x1ABFE490)
#define CLASS_1_3CE802D288741D2D_METHOD_1_CFF79473E0241BC3_OFFSET UNITYSDK_OFFSET(0x1ABF9340)
#define CLASS_1_3CE802D288741D2D_METHOD_1_D4247158591FA721_1_OFFSET UNITYSDK_OFFSET(0x1ABEB4C0)
#define CLASS_1_3CE802D288741D2D_METHOD_1_D4247158591FA721_2_OFFSET UNITYSDK_OFFSET(0x1ABF8500)
#define CLASS_1_3CE802D288741D2D_METHOD_1_D4247158591FA721_OFFSET UNITYSDK_OFFSET(0x1ABF6700)
#define CLASS_1_3CE802D288741D2D_METHOD_1_D5D9374000697B40_OFFSET UNITYSDK_OFFSET(0x1AC00FE0)
#define CLASS_1_3CE802D288741D2D_METHOD_1_D631E6EFCE1547F3_OFFSET UNITYSDK_OFFSET(0x1ABF53A0)
#define CLASS_1_3CE802D288741D2D_METHOD_1_D68E1CAE64731ECE_1_OFFSET UNITYSDK_OFFSET(0x1ABFFBD0)
#define CLASS_1_3CE802D288741D2D_METHOD_1_D68E1CAE64731ECE_OFFSET UNITYSDK_OFFSET(0x1ABF9040)
#define CLASS_1_3CE802D288741D2D_METHOD_1_D700B832939D9249_OFFSET UNITYSDK_OFFSET(0x1ABFBAF0)
#define CLASS_1_3CE802D288741D2D_METHOD_1_D7D0CD092E7E5457_OFFSET UNITYSDK_OFFSET(0x1ABFFCC0)
#define CLASS_1_3CE802D288741D2D_METHOD_1_DA8DCE889EF32DAD_OFFSET UNITYSDK_OFFSET(0x1AC00BD0)
#define CLASS_1_3CE802D288741D2D_METHOD_1_DB0AA75ECF005383_OFFSET UNITYSDK_OFFSET(0x1ABFADD0)
#define CLASS_1_3CE802D288741D2D_METHOD_1_E867027E5DA8665C_OFFSET UNITYSDK_OFFSET(0x1ABFD3F0)
#define CLASS_1_3CE802D288741D2D_METHOD_1_ED60CE426DBC8E38_1_OFFSET UNITYSDK_OFFSET(0x1ABFF690)
#define CLASS_1_3CE802D288741D2D_METHOD_1_ED60CE426DBC8E38_OFFSET UNITYSDK_OFFSET(0x1ABF6E90)
#define CLASS_1_3CE802D288741D2D_METHOD_1_F01598447C44D68F_OFFSET UNITYSDK_OFFSET(0x1AC01200)
#define CLASS_1_3CE802D288741D2D_METHOD_1_F0B96EE9F308F8DF_1_OFFSET UNITYSDK_OFFSET(0x1ABF7C70)
#define CLASS_1_3CE802D288741D2D_METHOD_1_F0B96EE9F308F8DF_OFFSET UNITYSDK_OFFSET(0x1ABF72A0)
#define CLASS_1_3CE802D288741D2D_METHOD_1_F1F156C011224B0B_OFFSET UNITYSDK_OFFSET(0x1ABEDB50)
#define CLASS_1_3CE802D288741D2D_METHOD_1_F305171F980FFE35_1_OFFSET UNITYSDK_OFFSET(0x1ABF9020)
#define CLASS_1_3CE802D288741D2D_METHOD_1_F305171F980FFE35_OFFSET UNITYSDK_OFFSET(0x1ABF8FF0)
#define CLASS_1_3CE802D288741D2D_METHOD_1_F5790DD9D8E52337_OFFSET UNITYSDK_OFFSET(0x1ABF0520)
#define CLASS_1_3CE802D288741D2D_METHOD_1_FC86AAA038FC8172_OFFSET UNITYSDK_OFFSET(0x1ABFF810)
#define CLASS_1_3CE802D288741D2D_METHOD_1_FDB70FC573FDD02D_OFFSET UNITYSDK_OFFSET(0x1ABF97C0)

inline static constexpr unsigned int Class_1_3CE802D288741D2D_TypeDefinitionIndex = 33505;

class Class_1_3CE802D288741D2D : public ::System::Object
{
public:
	// static const ::System::String* Field_1_0; // 0x0
	// static const ::System::String* Field_1_1; // 0x0
	// static const ::System::Int32 Field_1_2 = 0x104; // 0x0

	static ::System::String* Method_1_492A229C2726426C(::System::String* a1)
	{
		return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_3CE802D288741D2D_METHOD_1_492A229C2726426C_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_11B8E01605498CF4(::System::String* a1, ::System::Boolean a2)
	{
		return ((::System::Boolean(*)(::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_3CE802D288741D2D_METHOD_1_11B8E01605498CF4_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_130A6949BCD5A119(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_3CE802D288741D2D_METHOD_1_130A6949BCD5A119_OFFSET))(a1);
	}

	static ::System::String* Method_1_2F1937EBD1CFF8C5(::System::String* a1, ::System::String* a2)
	{
		return ((::System::String*(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_3CE802D288741D2D_METHOD_1_2F1937EBD1CFF8C5_OFFSET))(a1, a2);
	}

	static ::System::String* Method_1_31CCAFA024D09758(::System::String* a1, ::System::String* a2)
	{
		return ((::System::String*(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_3CE802D288741D2D_METHOD_1_31CCAFA024D09758_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_D4247158591FA721(::System::String* a1)
	{
		return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_3CE802D288741D2D_METHOD_1_D4247158591FA721_OFFSET))(a1);
	}

	static ::System::Void Method_1_BC012EAD9D9F105D(::System::String* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_3CE802D288741D2D_METHOD_1_BC012EAD9D9F105D_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_84E93399AE94C2FD(::System::String* a1)
	{
		return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_3CE802D288741D2D_METHOD_1_84E93399AE94C2FD_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F5790DD9D8E52337(::System::String* a1)
	{
		return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_3CE802D288741D2D_METHOD_1_F5790DD9D8E52337_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_9FD9A0E14949407F(::System::String* a1, ::System::String* a2)
	{
		return ((::System::Boolean(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_3CE802D288741D2D_METHOD_1_9FD9A0E14949407F_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_33F47CD1F2D90021(::System::String* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_3CE802D288741D2D_METHOD_1_33F47CD1F2D90021_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_0407806F100D9D14(::System::String* a1, ::System::String* a2, ::System::Boolean a3, ::System::String* a4)
	{
		return ((::System::Void(*)(::System::String*, ::System::String*, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_3CE802D288741D2D_METHOD_1_0407806F100D9D14_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_F0B96EE9F308F8DF(::System::IO::DirectoryInfo* a1, ::System::String* a2, ::System::Boolean a3, ::System::Text::RegularExpressions::Regex* a4)
	{
		return ((::System::Void(*)(::System::IO::DirectoryInfo*, ::System::String*, ::System::Boolean, ::System::Text::RegularExpressions::Regex*))((::PBYTE)hIl2Cpp + CLASS_1_3CE802D288741D2D_METHOD_1_F0B96EE9F308F8DF_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Boolean Method_1_D4247158591FA721_1(::System::String* a1)
	{
		return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_3CE802D288741D2D_METHOD_1_D4247158591FA721_1_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_D4247158591FA721_2(::System::String* a1)
	{
		return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_3CE802D288741D2D_METHOD_1_D4247158591FA721_2_OFFSET))(a1);
	}

	static ::System::Void Method_1_0844BF824CA685A7(::System::String* a1, ::System::String* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_3CE802D288741D2D_METHOD_1_0844BF824CA685A7_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_2F25AE2D7046DE09(::System::String* a1, ::System::String* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_3CE802D288741D2D_METHOD_1_2F25AE2D7046DE09_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_CA66F06205F1BED0(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_3CE802D288741D2D_METHOD_1_CA66F06205F1BED0_OFFSET))(a1);
	}

	static ::System::String* Method_1_F305171F980FFE35(::System::String* a1)
	{
		return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_3CE802D288741D2D_METHOD_1_F305171F980FFE35_OFFSET))(a1);
	}

	static ::System::Void Method_1_D68E1CAE64731ECE(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_3CE802D288741D2D_METHOD_1_D68E1CAE64731ECE_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_1457A99C460B4D82(::System::String* a1, ::System::String* a2)
	{
		return ((::System::Boolean(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_3CE802D288741D2D_METHOD_1_1457A99C460B4D82_OFFSET))(a1, a2);
	}

	static ::System::String* Method_1_CFF79473E0241BC3(::Il2CppArray<::System::String*>* a1)
	{
		return ((::System::String*(*)(::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_1_3CE802D288741D2D_METHOD_1_CFF79473E0241BC3_OFFSET))(a1);
	}

	static ::System::String* Method_1_CBA90A04C636398B(::System::String* a1)
	{
		return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_3CE802D288741D2D_METHOD_1_CBA90A04C636398B_OFFSET))(a1);
	}

	static ::System::String* Method_1_C4C3DB6ADFBC756E(::System::String* a1)
	{
		return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_3CE802D288741D2D_METHOD_1_C4C3DB6ADFBC756E_OFFSET))(a1);
	}

	static ::System::String* Method_1_1045B7FFF846D4FF(::System::String* a1, ::System::String* a2)
	{
		return ((::System::String*(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_3CE802D288741D2D_METHOD_1_1045B7FFF846D4FF_OFFSET))(a1, a2);
	}

	static ::System::String* Method_1_980E03E0CB5F1C97(::System::String* a1)
	{
		return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_3CE802D288741D2D_METHOD_1_980E03E0CB5F1C97_OFFSET))(a1);
	}

	static ::System::String* Method_1_2B33C5147D6EE554(::System::String* a1)
	{
		return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_3CE802D288741D2D_METHOD_1_2B33C5147D6EE554_OFFSET))(a1);
	}

	static ::System::String* Method_1_6AFDC50424099C5A(::System::String* a1)
	{
		return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_3CE802D288741D2D_METHOD_1_6AFDC50424099C5A_OFFSET))(a1);
	}

	static ::System::String* Method_1_C4C3DB6ADFBC756E_1(::System::String* a1)
	{
		return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_3CE802D288741D2D_METHOD_1_C4C3DB6ADFBC756E_1_OFFSET))(a1);
	}

	static ::System::String* Method_1_A7F28B945B4F9B6E(::System::String* a1)
	{
		return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_3CE802D288741D2D_METHOD_1_A7F28B945B4F9B6E_OFFSET))(a1);
	}

	static ::System::String* Method_1_7079FDFF6481F7C6(::System::String* a1)
	{
		return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_3CE802D288741D2D_METHOD_1_7079FDFF6481F7C6_OFFSET))(a1);
	}

	static ::System::Collections::Generic::List_1<::System::String*>* Method_1_FDB70FC573FDD02D(::System::String* a1, ::System::Collections::Generic::List_1<::System::String*>* a2, ::System::Collections::Generic::List_1<::System::String*>* a3, ::System::Boolean a4)
	{
		return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::System::String*, ::System::Collections::Generic::List_1<::System::String*>*, ::System::Collections::Generic::List_1<::System::String*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_3CE802D288741D2D_METHOD_1_FDB70FC573FDD02D_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Collections::Generic::List_1<::System::IO::FileInfo*>* Method_1_3CA7B2FAF593D87E(::System::String* a1, ::System::Collections::Generic::HashSet_1<::System::String*>* a2, ::System::Collections::Generic::HashSet_1<::System::String*>* a3, ::System::Boolean a4)
	{
		return ((::System::Collections::Generic::List_1<::System::IO::FileInfo*>*(*)(::System::String*, ::System::Collections::Generic::HashSet_1<::System::String*>*, ::System::Collections::Generic::HashSet_1<::System::String*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_3CE802D288741D2D_METHOD_1_3CA7B2FAF593D87E_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_1E5799D80018268D(::System::String* a1, ::System::Collections::Generic::List_1<::System::IO::FileInfo*>* a2, ::System::Collections::Generic::HashSet_1<::System::String*>* a3, ::System::Collections::Generic::HashSet_1<::System::String*>* a4, ::System::Boolean a5)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Generic::List_1<::System::IO::FileInfo*>*, ::System::Collections::Generic::HashSet_1<::System::String*>*, ::System::Collections::Generic::HashSet_1<::System::String*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_3CE802D288741D2D_METHOD_1_1E5799D80018268D_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::System::Collections::Generic::IEnumerable_1<::System::IO::FileInfo*>* Method_1_56D1CCAABE4BE5F2(::System::String* a1, ::System::Collections::Generic::HashSet_1<::System::String*>* a2, ::System::Collections::Generic::HashSet_1<::System::String*>* a3, ::System::Boolean a4)
	{
		return ((::System::Collections::Generic::IEnumerable_1<::System::IO::FileInfo*>*(*)(::System::String*, ::System::Collections::Generic::HashSet_1<::System::String*>*, ::System::Collections::Generic::HashSet_1<::System::String*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_3CE802D288741D2D_METHOD_1_56D1CCAABE4BE5F2_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_85510FABD3528B87(::System::String* a1, ::System::Collections::Generic::List_1<::System::String*>*& a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Generic::List_1<::System::String*>*&, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_3CE802D288741D2D_METHOD_1_85510FABD3528B87_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_DB0AA75ECF005383(::System::String* a1, ::System::Collections::Generic::List_1<::System::IO::DirectoryInfo*>*& a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Generic::List_1<::System::IO::DirectoryInfo*>*&, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_3CE802D288741D2D_METHOD_1_DB0AA75ECF005383_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_1A503627688AE58E(::System::String* a1, ::System::String* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_3CE802D288741D2D_METHOD_1_1A503627688AE58E_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_0407806F100D9D14_1(::System::String* a1, ::System::String* a2, ::System::Boolean a3, ::System::String* a4)
	{
		return ((::System::Void(*)(::System::String*, ::System::String*, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_3CE802D288741D2D_METHOD_1_0407806F100D9D14_1_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_F0B96EE9F308F8DF_1(::System::IO::DirectoryInfo* a1, ::System::String* a2, ::System::Boolean a3, ::System::Text::RegularExpressions::Regex* a4)
	{
		return ((::System::Void(*)(::System::IO::DirectoryInfo*, ::System::String*, ::System::Boolean, ::System::Text::RegularExpressions::Regex*))((::PBYTE)hIl2Cpp + CLASS_1_3CE802D288741D2D_METHOD_1_F0B96EE9F308F8DF_1_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_D700B832939D9249(::System::String* a1, ::System::String* a2, ::System::Boolean a3, ::System::Boolean a4)
	{
		return ((::System::Void(*)(::System::String*, ::System::String*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_3CE802D288741D2D_METHOD_1_D700B832939D9249_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_F1F156C011224B0B(::System::String* a1, ::System::String* a2, ::System::Action_3<::System::String*, ::System::String*, ::System::String*>* a3, ::System::Action_3<::System::String*, ::System::String*, ::System::String*>* a4, ::System::Boolean a5, ::System::Boolean a6)
	{
		return ((::System::Void(*)(::System::String*, ::System::String*, ::System::Action_3<::System::String*, ::System::String*, ::System::String*>*, ::System::Action_3<::System::String*, ::System::String*, ::System::String*>*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_3CE802D288741D2D_METHOD_1_F1F156C011224B0B_OFFSET))(a1, a2, a3, a4, a5, a6);
	}

	static ::System::Void Method_1_8F5A352837E5D5A2(::System::String* a1, ::System::String* a2, ::System::String* a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_3CE802D288741D2D_METHOD_1_8F5A352837E5D5A2_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_42BEBC15DF245DB6(::System::String* a1, ::System::String* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_3CE802D288741D2D_METHOD_1_42BEBC15DF245DB6_OFFSET))(a1, a2, a3);
	}

	static ::System::String* Method_1_E867027E5DA8665C()
	{
		return ((::System::String*(*)())((::PBYTE)hIl2Cpp + CLASS_1_3CE802D288741D2D_METHOD_1_E867027E5DA8665C_OFFSET))();
	}

	static ::System::Void Method_1_8C7A0EBC62BF4B6D(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_3CE802D288741D2D_METHOD_1_8C7A0EBC62BF4B6D_OFFSET))(a1);
	}

	static ::System::Void Method_1_304BCBB3B5923DF4(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_3CE802D288741D2D_METHOD_1_304BCBB3B5923DF4_OFFSET))(a1);
	}

	static ::System::Void Method_1_BC08B70258A25F74(::System::String* a1, ::Il2CppArray<::System::String*>* a2)
	{
		return ((::System::Void(*)(::System::String*, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_1_3CE802D288741D2D_METHOD_1_BC08B70258A25F74_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_CD5950C3475F9079(::System::String* a1, ::System::Collections::Generic::IList_1<::System::String*>* a2)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Generic::IList_1<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_1_3CE802D288741D2D_METHOD_1_CD5950C3475F9079_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_24B39354D1FCD13B(::System::String* a1)
	{
		return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_3CE802D288741D2D_METHOD_1_24B39354D1FCD13B_OFFSET))(a1);
	}

	static ::System::String* Method_1_64AD61EB1294C23C(::System::String* a1, ::System::Boolean a2)
	{
		return ((::System::String*(*)(::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_3CE802D288741D2D_METHOD_1_64AD61EB1294C23C_OFFSET))(a1, a2);
	}

	static ::System::String* Method_1_88B60F3B95FAA4F1()
	{
		return ((::System::String*(*)())((::PBYTE)hIl2Cpp + CLASS_1_3CE802D288741D2D_METHOD_1_88B60F3B95FAA4F1_OFFSET))();
	}

	static ::System::Int64 Method_1_A705115B3CD7C1CB(::System::String* a1)
	{
		return ((::System::Int64(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_3CE802D288741D2D_METHOD_1_A705115B3CD7C1CB_OFFSET))(a1);
	}

	static ::System::String* Method_1_994DF2D990A20287(::System::String* a1)
	{
		return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_3CE802D288741D2D_METHOD_1_994DF2D990A20287_OFFSET))(a1);
	}

	static ::System::String* Method_1_F305171F980FFE35_1(::System::String* a1)
	{
		return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_3CE802D288741D2D_METHOD_1_F305171F980FFE35_1_OFFSET))(a1);
	}

	static ::System::String* Method_1_9D6C91C7444A7D52(::System::String* a1)
	{
		return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_3CE802D288741D2D_METHOD_1_9D6C91C7444A7D52_OFFSET))(a1);
	}

	static ::System::Text::StringBuilder* Method_1_2E75F4263BAA93E8(::System::Text::StringBuilder* a1)
	{
		return ((::System::Text::StringBuilder*(*)(::System::Text::StringBuilder*))((::PBYTE)hIl2Cpp + CLASS_1_3CE802D288741D2D_METHOD_1_2E75F4263BAA93E8_OFFSET))(a1);
	}

	static ::System::String* Method_1_6B9DA53DDDC0D8BD(::System::String* a1, ::System::String* a2)
	{
		return ((::System::String*(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_3CE802D288741D2D_METHOD_1_6B9DA53DDDC0D8BD_OFFSET))(a1, a2);
	}

	static ::System::String* Method_1_1F9CEC2E7FFF0A01(::System::String* a1, ::Il2CppArray<::System::String*>* a2)
	{
		return ((::System::String*(*)(::System::String*, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_1_3CE802D288741D2D_METHOD_1_1F9CEC2E7FFF0A01_OFFSET))(a1, a2);
	}

	static ::System::String* Method_1_51CB85426198DB47(::System::String* a1, ::System::Collections::Generic::IEnumerable_1<::System::String*>* a2)
	{
		return ((::System::String*(*)(::System::String*, ::System::Collections::Generic::IEnumerable_1<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_1_3CE802D288741D2D_METHOD_1_51CB85426198DB47_OFFSET))(a1, a2);
	}

	static ::System::String* Method_1_4453F55D90F8D029(::System::String* a1, ::System::String* a2)
	{
		return ((::System::String*(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_3CE802D288741D2D_METHOD_1_4453F55D90F8D029_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_B548D12BA5C985DA(::System::String* a1, ::System::String* a2)
	{
		return ((::System::Boolean(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_3CE802D288741D2D_METHOD_1_B548D12BA5C985DA_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_A5B868F5C71A467E(::System::Char a1)
	{
		return ((::System::Boolean(*)(::System::Char))((::PBYTE)hIl2Cpp + CLASS_1_3CE802D288741D2D_METHOD_1_A5B868F5C71A467E_OFFSET))(a1);
	}

	static ::System::Text::StringBuilder* Method_1_8913E26713F9F05C(::System::Text::StringBuilder* a1, ::System::String* a2)
	{
		return ((::System::Text::StringBuilder*(*)(::System::Text::StringBuilder*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_3CE802D288741D2D_METHOD_1_8913E26713F9F05C_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_0BD8EBDA38930A84(::System::String* a1)
	{
		return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_3CE802D288741D2D_METHOD_1_0BD8EBDA38930A84_OFFSET))(a1);
	}

	static ::System::Void Method_1_ED60CE426DBC8E38(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_3CE802D288741D2D_METHOD_1_ED60CE426DBC8E38_OFFSET))(a1);
	}

	static ::System::Void Method_1_12635A3CAA51684C(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_3CE802D288741D2D_METHOD_1_12635A3CAA51684C_OFFSET))(a1);
	}

	static ::System::Void Method_1_ED60CE426DBC8E38_1(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_3CE802D288741D2D_METHOD_1_ED60CE426DBC8E38_1_OFFSET))(a1);
	}

	static ::System::Void Method_1_FC86AAA038FC8172(::System::String* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_3CE802D288741D2D_METHOD_1_FC86AAA038FC8172_OFFSET))(a1, a2);
	}

	static ::System::String* Method_1_126AB3935214AA22()
	{
		return ((::System::String*(*)())((::PBYTE)hIl2Cpp + CLASS_1_3CE802D288741D2D_METHOD_1_126AB3935214AA22_OFFSET))();
	}

	static ::System::Boolean Method_1_814BFAD6D303499E(::System::String* a1, ::System::String* a2, ::System::Boolean a3)
	{
		return ((::System::Boolean(*)(::System::String*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_3CE802D288741D2D_METHOD_1_814BFAD6D303499E_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_1DCEF572AAED75CF(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_3CE802D288741D2D_METHOD_1_1DCEF572AAED75CF_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_9DD2DCFED0B1F6F5(::System::String* a1, ::System::Boolean a2)
	{
		return ((::System::Boolean(*)(::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_3CE802D288741D2D_METHOD_1_9DD2DCFED0B1F6F5_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_7D201B4343E63821(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_3CE802D288741D2D_METHOD_1_7D201B4343E63821_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_BF5ABDB6E1D2891A(::System::String* a1, ::System::Boolean a2)
	{
		return ((::System::Boolean(*)(::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_3CE802D288741D2D_METHOD_1_BF5ABDB6E1D2891A_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_7D201B4343E63821_1(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_3CE802D288741D2D_METHOD_1_7D201B4343E63821_1_OFFSET))(a1);
	}

	static ::System::Void Method_1_D68E1CAE64731ECE_1(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_3CE802D288741D2D_METHOD_1_D68E1CAE64731ECE_1_OFFSET))(a1);
	}

	static ::System::Void Method_1_7D201B4343E63821_2(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_3CE802D288741D2D_METHOD_1_7D201B4343E63821_2_OFFSET))(a1);
	}

	static ::System::Void Method_1_D7D0CD092E7E5457(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_3CE802D288741D2D_METHOD_1_D7D0CD092E7E5457_OFFSET))(a1);
	}

	static ::Il2CppArray<::System::String*>* Method_1_601151760D81E1EE(::System::String* a1, ::System::String* a2, ::System::String* a3)
	{
		return ((::Il2CppArray<::System::String*>*(*)(::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_3CE802D288741D2D_METHOD_1_601151760D81E1EE_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_1DCEF572AAED75CF_1(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_3CE802D288741D2D_METHOD_1_1DCEF572AAED75CF_1_OFFSET))(a1);
	}

	static ::System::Void Method_1_1DCEF572AAED75CF_2(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_3CE802D288741D2D_METHOD_1_1DCEF572AAED75CF_2_OFFSET))(a1);
	}

	static ::System::String* Method_1_2F996FD8685BA4BF(::System::String* a1)
	{
		return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_3CE802D288741D2D_METHOD_1_2F996FD8685BA4BF_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_A1F9DC1109BBBA96(::System::String* a1, ::System::String* a2)
	{
		return ((::System::Boolean(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_3CE802D288741D2D_METHOD_1_A1F9DC1109BBBA96_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_5D7FF84DD98AB865(::System::String* a1, ::System::Collections::Generic::HashSet_1<::System::String*>* a2)
	{
		return ((::System::Boolean(*)(::System::String*, ::System::Collections::Generic::HashSet_1<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_1_3CE802D288741D2D_METHOD_1_5D7FF84DD98AB865_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_343416D53F782A98(::System::String* a1, ::System::Collections::Generic::HashSet_1<::System::UInt32>* a2)
	{
		return ((::System::Boolean(*)(::System::String*, ::System::Collections::Generic::HashSet_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_3CE802D288741D2D_METHOD_1_343416D53F782A98_OFFSET))(a1, a2);
	}

	static ::Il2CppArray<::System::Byte>* Method_1_DA8DCE889EF32DAD(::System::String* a1)
	{
		return ((::Il2CppArray<::System::Byte>*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_3CE802D288741D2D_METHOD_1_DA8DCE889EF32DAD_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_03736422B1E836C8(::System::String* a1, ::System::String* a2)
	{
		return ((::System::Boolean(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_3CE802D288741D2D_METHOD_1_03736422B1E836C8_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_A7A54D86BEC69A86(::System::String* a1, ::System::String* a2)
	{
		return ((::System::Boolean(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_3CE802D288741D2D_METHOD_1_A7A54D86BEC69A86_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_D5D9374000697B40(::System::String* a1, ::Il2CppArray<::System::Byte>* a2)
	{
		return ((::System::Boolean(*)(::System::String*, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + CLASS_1_3CE802D288741D2D_METHOD_1_D5D9374000697B40_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_16AAC9F8CAA68378(::System::IO::FileStream* a1, ::System::Byte a2)
	{
		return ((::System::Boolean(*)(::System::IO::FileStream*, ::System::Byte))((::PBYTE)hIl2Cpp + CLASS_1_3CE802D288741D2D_METHOD_1_16AAC9F8CAA68378_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_F01598447C44D68F(::System::IO::FileStream* a1, ::System::Byte& a2)
	{
		return ((::System::Boolean(*)(::System::IO::FileStream*, ::System::Byte&))((::PBYTE)hIl2Cpp + CLASS_1_3CE802D288741D2D_METHOD_1_F01598447C44D68F_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_695D23C4F5ED0DB2(::System::IO::FileStream* a1, ::Il2CppArray<::System::Byte>* a2, ::System::Int32 a3, ::System::Int32 a4)
	{
		return ((::System::Boolean(*)(::System::IO::FileStream*, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_3CE802D288741D2D_METHOD_1_695D23C4F5ED0DB2_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Int32 Method_1_31329007E4494D37(::System::IO::FileStream* a1, ::Il2CppArray<::System::Byte>* a2, ::System::Int32 a3, ::System::Int32 a4)
	{
		return ((::System::Int32(*)(::System::IO::FileStream*, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_3CE802D288741D2D_METHOD_1_31329007E4494D37_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Boolean Method_1_8FACFFF3E5CBE2C4(::System::String* a1, ::Il2CppArray<::System::Byte>* a2, ::System::Boolean a3)
	{
		return ((::System::Boolean(*)(::System::String*, ::Il2CppArray<::System::Byte>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_3CE802D288741D2D_METHOD_1_8FACFFF3E5CBE2C4_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_D631E6EFCE1547F3(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_3CE802D288741D2D_METHOD_1_D631E6EFCE1547F3_OFFSET))(a1);
	}

	static ::System::Int64 Method_1_68CFA3313D7F6FA9(::System::String* a1)
	{
		return ((::System::Int64(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_3CE802D288741D2D_METHOD_1_68CFA3313D7F6FA9_OFFSET))(a1);
	}

	static ::System::String* Method_1_6F1B0A02FDC49991(::System::String* a1)
	{
		return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_3CE802D288741D2D_METHOD_1_6F1B0A02FDC49991_OFFSET))(a1);
	}

	static ::System::String* Method_1_00AA18458D984D9B(::System::String* a1)
	{
		return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_3CE802D288741D2D_METHOD_1_00AA18458D984D9B_OFFSET))(a1);
	}

	static ::System::String* Method_1_30424022465411BE(::System::String* a1)
	{
		return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_3CE802D288741D2D_METHOD_1_30424022465411BE_OFFSET))(a1);
	}

	static ::System::Void Method_1_7EEDB370E3865161(::System::Collections::Generic::List_1<::System::String*>* a1)
	{
		return ((::System::Void(*)(::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_1_3CE802D288741D2D_METHOD_1_7EEDB370E3865161_OFFSET))(a1);
	}
};
