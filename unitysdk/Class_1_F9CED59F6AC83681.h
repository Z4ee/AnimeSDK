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

#define CLASS_1_F9CED59F6AC83681_METHOD_1_03531F94E0E47546_OFFSET UNITYSDK_OFFSET(0x1E57C0B0)
#define CLASS_1_F9CED59F6AC83681_METHOD_1_03736422B1E836C8_OFFSET UNITYSDK_OFFSET(0x1E57BAF0)
#define CLASS_1_F9CED59F6AC83681_METHOD_1_0844BF824CA685A7_OFFSET UNITYSDK_OFFSET(0x1E571BE0)
#define CLASS_1_F9CED59F6AC83681_METHOD_1_1045B7FFF846D4FF_OFFSET UNITYSDK_OFFSET(0x1E572AB0)
#define CLASS_1_F9CED59F6AC83681_METHOD_1_11B8E01605498CF4_OFFSET UNITYSDK_OFFSET(0x1E56DB10)
#define CLASS_1_F9CED59F6AC83681_METHOD_1_12635A3CAA51684C_OFFSET UNITYSDK_OFFSET(0x1E57A3E0)
#define CLASS_1_F9CED59F6AC83681_METHOD_1_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0x1E57A830)
#define CLASS_1_F9CED59F6AC83681_METHOD_1_1457A99C460B4D82_OFFSET UNITYSDK_OFFSET(0x1E5727C0)
#define CLASS_1_F9CED59F6AC83681_METHOD_1_16AAC9F8CAA68378_OFFSET UNITYSDK_OFFSET(0x1E57BEB0)
#define CLASS_1_F9CED59F6AC83681_METHOD_1_1DCEF572AAED75CF_1_OFFSET UNITYSDK_OFFSET(0x1E57ACC0)
#define CLASS_1_F9CED59F6AC83681_METHOD_1_1DCEF572AAED75CF_2_OFFSET UNITYSDK_OFFSET(0x1E57AE80)
#define CLASS_1_F9CED59F6AC83681_METHOD_1_1DCEF572AAED75CF_OFFSET UNITYSDK_OFFSET(0x1E57A840)
#define CLASS_1_F9CED59F6AC83681_METHOD_1_1E5799D80018268D_OFFSET UNITYSDK_OFFSET(0x1E573BB0)
#define CLASS_1_F9CED59F6AC83681_METHOD_1_1F9CEC2E7FFF0A01_OFFSET UNITYSDK_OFFSET(0x1E579A30)
#define CLASS_1_F9CED59F6AC83681_METHOD_1_208CAA48B4555C8F_OFFSET UNITYSDK_OFFSET(0x1E575020)
#define CLASS_1_F9CED59F6AC83681_METHOD_1_24B39354D1FCD13B_OFFSET UNITYSDK_OFFSET(0x1E55FCF0)
#define CLASS_1_F9CED59F6AC83681_METHOD_1_2DC90EE759C8637B_OFFSET UNITYSDK_OFFSET(0x1E57A360)
#define CLASS_1_F9CED59F6AC83681_METHOD_1_2E75F4263BAA93E8_OFFSET UNITYSDK_OFFSET(0x1E579860)
#define CLASS_1_F9CED59F6AC83681_METHOD_1_2F1937EBD1CFF8C5_OFFSET UNITYSDK_OFFSET(0x1E56EEF0)
#define CLASS_1_F9CED59F6AC83681_METHOD_1_2F25AE2D7046DE09_OFFSET UNITYSDK_OFFSET(0x1E571D20)
#define CLASS_1_F9CED59F6AC83681_METHOD_1_2F996FD8685BA4BF_OFFSET UNITYSDK_OFFSET(0x1E57B000)
#define CLASS_1_F9CED59F6AC83681_METHOD_1_2FC736F504EC46BE_OFFSET UNITYSDK_OFFSET(0x1E579B20)
#define CLASS_1_F9CED59F6AC83681_METHOD_1_31CCAFA024D09758_OFFSET UNITYSDK_OFFSET(0x1E56F040)
#define CLASS_1_F9CED59F6AC83681_METHOD_1_32BD10B7C0C7AAA9_1_OFFSET UNITYSDK_OFFSET(0x1E570F40)
#define CLASS_1_F9CED59F6AC83681_METHOD_1_32BD10B7C0C7AAA9_OFFSET UNITYSDK_OFFSET(0x1E570210)
#define CLASS_1_F9CED59F6AC83681_METHOD_1_33F47CD1F2D90021_OFFSET UNITYSDK_OFFSET(0x1E570100)
#define CLASS_1_F9CED59F6AC83681_METHOD_1_343416D53F782A98_OFFSET UNITYSDK_OFFSET(0x1E57B630)
#define CLASS_1_F9CED59F6AC83681_METHOD_1_3CA7B2FAF593D87E_OFFSET UNITYSDK_OFFSET(0x1E573B30)
#define CLASS_1_F9CED59F6AC83681_METHOD_1_42BEBC15DF245DB6_OFFSET UNITYSDK_OFFSET(0x1E577510)
#define CLASS_1_F9CED59F6AC83681_METHOD_1_4453F55D90F8D029_OFFSET UNITYSDK_OFFSET(0x1E57A020)
#define CLASS_1_F9CED59F6AC83681_METHOD_1_4692161D60CF3542_OFFSET UNITYSDK_OFFSET(0x1E565DD0)
#define CLASS_1_F9CED59F6AC83681_METHOD_1_492A229C2726426C_OFFSET UNITYSDK_OFFSET(0x1E565CD0)
#define CLASS_1_F9CED59F6AC83681_METHOD_1_5604A881CD5BA083_OFFSET UNITYSDK_OFFSET(0x1E574A40)
#define CLASS_1_F9CED59F6AC83681_METHOD_1_56D1CCAABE4BE5F2_OFFSET UNITYSDK_OFFSET(0x1E5743B0)
#define CLASS_1_F9CED59F6AC83681_METHOD_1_585473FD67C3DE7C_OFFSET UNITYSDK_OFFSET(0x1E56DBF0)
#define CLASS_1_F9CED59F6AC83681_METHOD_1_586A7C86CE8FA1E9_OFFSET UNITYSDK_OFFSET(0x1E579030)
#define CLASS_1_F9CED59F6AC83681_METHOD_1_5D7FF84DD98AB865_OFFSET UNITYSDK_OFFSET(0x1E57B2C0)
#define CLASS_1_F9CED59F6AC83681_METHOD_1_64AD61EB1294C23C_OFFSET UNITYSDK_OFFSET(0x1E564270)
#define CLASS_1_F9CED59F6AC83681_METHOD_1_683407CC60BF1E1A_OFFSET UNITYSDK_OFFSET(0x1E5784E0)
#define CLASS_1_F9CED59F6AC83681_METHOD_1_68CFA3313D7F6FA9_OFFSET UNITYSDK_OFFSET(0x1E57C660)
#define CLASS_1_F9CED59F6AC83681_METHOD_1_6AFDC50424099C5A_OFFSET UNITYSDK_OFFSET(0x1E572B40)
#define CLASS_1_F9CED59F6AC83681_METHOD_1_6B9DA53DDDC0D8BD_OFFSET UNITYSDK_OFFSET(0x1E562C10)
#define CLASS_1_F9CED59F6AC83681_METHOD_1_6BC8B9B550B65B3E_OFFSET UNITYSDK_OFFSET(0x1E57ABD0)
#define CLASS_1_F9CED59F6AC83681_METHOD_1_6F1B0A02FDC49991_OFFSET UNITYSDK_OFFSET(0x1E57CD60)
#define CLASS_1_F9CED59F6AC83681_METHOD_1_7079FDFF6481F7C6_OFFSET UNITYSDK_OFFSET(0x1E572DB0)
#define CLASS_1_F9CED59F6AC83681_METHOD_1_74048072309E6DF4_OFFSET UNITYSDK_OFFSET(0x1E575C60)
#define CLASS_1_F9CED59F6AC83681_METHOD_1_7D201B4343E63821_1_OFFSET UNITYSDK_OFFSET(0x1E57A9F0)
#define CLASS_1_F9CED59F6AC83681_METHOD_1_7D201B4343E63821_2_OFFSET UNITYSDK_OFFSET(0x1E57AAE0)
#define CLASS_1_F9CED59F6AC83681_METHOD_1_7D201B4343E63821_OFFSET UNITYSDK_OFFSET(0x1E57A8D0)
#define CLASS_1_F9CED59F6AC83681_METHOD_1_7EEDB370E3865161_OFFSET UNITYSDK_OFFSET(0x1E57D000)
#define CLASS_1_F9CED59F6AC83681_METHOD_1_814BFAD6D303499E_OFFSET UNITYSDK_OFFSET(0x1E572230)
#define CLASS_1_F9CED59F6AC83681_METHOD_1_84E93399AE94C2FD_OFFSET UNITYSDK_OFFSET(0x1E568D80)
#define CLASS_1_F9CED59F6AC83681_METHOD_1_882BDA6ED74EB04E_OFFSET UNITYSDK_OFFSET(0x1E577A00)
#define CLASS_1_F9CED59F6AC83681_METHOD_1_88B60F3B95FAA4F1_OFFSET UNITYSDK_OFFSET(0x1E579690)
#define CLASS_1_F9CED59F6AC83681_METHOD_1_8913E26713F9F05C_OFFSET UNITYSDK_OFFSET(0x1E5798C0)
#define CLASS_1_F9CED59F6AC83681_METHOD_1_8F5A352837E5D5A2_OFFSET UNITYSDK_OFFSET(0x1E5771E0)
#define CLASS_1_F9CED59F6AC83681_METHOD_1_8FACFFF3E5CBE2C4_OFFSET UNITYSDK_OFFSET(0x1E57C3D0)
#define CLASS_1_F9CED59F6AC83681_METHOD_1_92A6BEC2CDC3E549_OFFSET UNITYSDK_OFFSET(0x1E57CEE0)
#define CLASS_1_F9CED59F6AC83681_METHOD_1_980E03E0CB5F1C97_OFFSET UNITYSDK_OFFSET(0x1E572B10)
#define CLASS_1_F9CED59F6AC83681_METHOD_1_994DF2D990A20287_OFFSET UNITYSDK_OFFSET(0x1E579750)
#define CLASS_1_F9CED59F6AC83681_METHOD_1_9D6C91C7444A7D52_OFFSET UNITYSDK_OFFSET(0x1E5797D0)
#define CLASS_1_F9CED59F6AC83681_METHOD_1_9DD2DCFED0B1F6F5_OFFSET UNITYSDK_OFFSET(0x1E572110)
#define CLASS_1_F9CED59F6AC83681_METHOD_1_9FD9A0E14949407F_1_OFFSET UNITYSDK_OFFSET(0x1E57B180)
#define CLASS_1_F9CED59F6AC83681_METHOD_1_9FD9A0E14949407F_OFFSET UNITYSDK_OFFSET(0x1E570000)
#define CLASS_1_F9CED59F6AC83681_METHOD_1_A5B868F5C71A467E_OFFSET UNITYSDK_OFFSET(0x1E57A340)
#define CLASS_1_F9CED59F6AC83681_METHOD_1_A705115B3CD7C1CB_OFFSET UNITYSDK_OFFSET(0x1E577030)
#define CLASS_1_F9CED59F6AC83681_METHOD_1_A7A54D86BEC69A86_OFFSET UNITYSDK_OFFSET(0x1E57BC30)
#define CLASS_1_F9CED59F6AC83681_METHOD_1_A7F28B945B4F9B6E_1_OFFSET UNITYSDK_OFFSET(0x1E572BF0)
#define CLASS_1_F9CED59F6AC83681_METHOD_1_A7F28B945B4F9B6E_OFFSET UNITYSDK_OFFSET(0x1E572B20)
#define CLASS_1_F9CED59F6AC83681_METHOD_1_B199FDCDCFCE9FB5_OFFSET UNITYSDK_OFFSET(0x1E57C240)
#define CLASS_1_F9CED59F6AC83681_METHOD_1_B50329E52C9D3AD9_OFFSET UNITYSDK_OFFSET(0x1E57A1A0)
#define CLASS_1_F9CED59F6AC83681_METHOD_1_BC012EAD9D9F105D_OFFSET UNITYSDK_OFFSET(0x1E56F5A0)
#define CLASS_1_F9CED59F6AC83681_METHOD_1_BF5ABDB6E1D2891A_OFFSET UNITYSDK_OFFSET(0x1E57A8E0)
#define CLASS_1_F9CED59F6AC83681_METHOD_1_C4C3DB6ADFBC756E_1_OFFSET UNITYSDK_OFFSET(0x1E572BA0)
#define CLASS_1_F9CED59F6AC83681_METHOD_1_C4C3DB6ADFBC756E_OFFSET UNITYSDK_OFFSET(0x1E572A70)
#define CLASS_1_F9CED59F6AC83681_METHOD_1_CA1E119F395F2BA7_OFFSET UNITYSDK_OFFSET(0x1E577900)
#define CLASS_1_F9CED59F6AC83681_METHOD_1_CA66F06205F1BED0_OFFSET UNITYSDK_OFFSET(0x1E568E10)
#define CLASS_1_F9CED59F6AC83681_METHOD_1_CBA90A04C636398B_OFFSET UNITYSDK_OFFSET(0x1E565600)
#define CLASS_1_F9CED59F6AC83681_METHOD_1_CFF79473E0241BC3_OFFSET UNITYSDK_OFFSET(0x1E572940)
#define CLASS_1_F9CED59F6AC83681_METHOD_1_D4247158591FA721_1_OFFSET UNITYSDK_OFFSET(0x1E563A40)
#define CLASS_1_F9CED59F6AC83681_METHOD_1_D4247158591FA721_2_OFFSET UNITYSDK_OFFSET(0x1E571B10)
#define CLASS_1_F9CED59F6AC83681_METHOD_1_D4247158591FA721_OFFSET UNITYSDK_OFFSET(0x1E56F3E0)
#define CLASS_1_F9CED59F6AC83681_METHOD_1_D5D9374000697B40_OFFSET UNITYSDK_OFFSET(0x1E57BD90)
#define CLASS_1_F9CED59F6AC83681_METHOD_1_D68E1CAE64731ECE_1_OFFSET UNITYSDK_OFFSET(0x1E57AA00)
#define CLASS_1_F9CED59F6AC83681_METHOD_1_D68E1CAE64731ECE_OFFSET UNITYSDK_OFFSET(0x1E572650)
#define CLASS_1_F9CED59F6AC83681_METHOD_1_D7D0CD092E7E5457_OFFSET UNITYSDK_OFFSET(0x1E57AAF0)
#define CLASS_1_F9CED59F6AC83681_METHOD_1_DA8DCE889EF32DAD_OFFSET UNITYSDK_OFFSET(0x1E57B980)
#define CLASS_1_F9CED59F6AC83681_METHOD_1_E19B78C5EF1C0E5F_OFFSET UNITYSDK_OFFSET(0x1E574440)
#define CLASS_1_F9CED59F6AC83681_METHOD_1_E867027E5DA8665C_OFFSET UNITYSDK_OFFSET(0x1E5778A0)
#define CLASS_1_F9CED59F6AC83681_METHOD_1_ED60CE426DBC8E38_1_OFFSET UNITYSDK_OFFSET(0x1E57A4C0)
#define CLASS_1_F9CED59F6AC83681_METHOD_1_ED60CE426DBC8E38_OFFSET UNITYSDK_OFFSET(0x1E56FDE0)
#define CLASS_1_F9CED59F6AC83681_METHOD_1_F01598447C44D68F_OFFSET UNITYSDK_OFFSET(0x1E57BFB0)
#define CLASS_1_F9CED59F6AC83681_METHOD_1_F08676EA64B106D4_OFFSET UNITYSDK_OFFSET(0x1E56DCF0)
#define CLASS_1_F9CED59F6AC83681_METHOD_1_F175F2D877445C24_OFFSET UNITYSDK_OFFSET(0x1E572DC0)
#define CLASS_1_F9CED59F6AC83681_METHOD_1_F305171F980FFE35_1_OFFSET UNITYSDK_OFFSET(0x1E572630)
#define CLASS_1_F9CED59F6AC83681_METHOD_1_F305171F980FFE35_OFFSET UNITYSDK_OFFSET(0x1E572600)
#define CLASS_1_F9CED59F6AC83681_METHOD_1_F55459985BECC3B2_1_OFFSET UNITYSDK_OFFSET(0x1E575B90)
#define CLASS_1_F9CED59F6AC83681_METHOD_1_F55459985BECC3B2_OFFSET UNITYSDK_OFFSET(0x1E570140)
#define CLASS_1_F9CED59F6AC83681_METHOD_1_F5790DD9D8E52337_OFFSET UNITYSDK_OFFSET(0x1E568CE0)
#define CLASS_1_F9CED59F6AC83681_METHOD_1_FA53007A29B435C0_OFFSET UNITYSDK_OFFSET(0x1E57CD70)
#define CLASS_1_F9CED59F6AC83681_METHOD_1_FC86AAA038FC8172_OFFSET UNITYSDK_OFFSET(0x1E57A640)

inline static constexpr unsigned int Class_1_F9CED59F6AC83681_TypeDefinitionIndex = 34642;

class Class_1_F9CED59F6AC83681 : public ::System::Object
{
public:
	// static const ::System::String* LCMOEOAOJJO; // 0x0
	// static const ::System::String* GIANHCDJJKL; // 0x0
	// static const ::System::Int32 EAJJEOCPHGD = 0x104; // 0x0

	static ::System::String* Method_1_492A229C2726426C(::System::String* a1)
	{
		return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_F9CED59F6AC83681_METHOD_1_492A229C2726426C_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_11B8E01605498CF4(::System::String* a1, ::System::Boolean a2)
	{
		return ((::System::Boolean(*)(::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_F9CED59F6AC83681_METHOD_1_11B8E01605498CF4_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_585473FD67C3DE7C(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_F9CED59F6AC83681_METHOD_1_585473FD67C3DE7C_OFFSET))(a1);
	}

	static ::System::String* Method_1_2F1937EBD1CFF8C5(::System::String* a1, ::System::String* a2)
	{
		return ((::System::String*(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_F9CED59F6AC83681_METHOD_1_2F1937EBD1CFF8C5_OFFSET))(a1, a2);
	}

	static ::System::String* Method_1_31CCAFA024D09758(::System::String* a1, ::System::String* a2)
	{
		return ((::System::String*(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_F9CED59F6AC83681_METHOD_1_31CCAFA024D09758_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_D4247158591FA721(::System::String* a1)
	{
		return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_F9CED59F6AC83681_METHOD_1_D4247158591FA721_OFFSET))(a1);
	}

	static ::System::Void Method_1_BC012EAD9D9F105D(::System::String* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_F9CED59F6AC83681_METHOD_1_BC012EAD9D9F105D_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_84E93399AE94C2FD(::System::String* a1)
	{
		return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_F9CED59F6AC83681_METHOD_1_84E93399AE94C2FD_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F5790DD9D8E52337(::System::String* a1)
	{
		return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_F9CED59F6AC83681_METHOD_1_F5790DD9D8E52337_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_9FD9A0E14949407F(::System::String* a1, ::System::String* a2)
	{
		return ((::System::Boolean(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_F9CED59F6AC83681_METHOD_1_9FD9A0E14949407F_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_33F47CD1F2D90021(::System::String* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_F9CED59F6AC83681_METHOD_1_33F47CD1F2D90021_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_F55459985BECC3B2(::System::String* a1, ::System::String* a2, ::System::Boolean a3, ::System::String* a4)
	{
		return ((::System::Void(*)(::System::String*, ::System::String*, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_F9CED59F6AC83681_METHOD_1_F55459985BECC3B2_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_32BD10B7C0C7AAA9(::System::IO::DirectoryInfo* a1, ::System::String* a2, ::System::Boolean a3, ::System::Text::RegularExpressions::Regex* a4)
	{
		return ((::System::Void(*)(::System::IO::DirectoryInfo*, ::System::String*, ::System::Boolean, ::System::Text::RegularExpressions::Regex*))((::PBYTE)hIl2Cpp + CLASS_1_F9CED59F6AC83681_METHOD_1_32BD10B7C0C7AAA9_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Boolean Method_1_D4247158591FA721_1(::System::String* a1)
	{
		return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_F9CED59F6AC83681_METHOD_1_D4247158591FA721_1_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_D4247158591FA721_2(::System::String* a1)
	{
		return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_F9CED59F6AC83681_METHOD_1_D4247158591FA721_2_OFFSET))(a1);
	}

	static ::System::Void Method_1_0844BF824CA685A7(::System::String* a1, ::System::String* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_F9CED59F6AC83681_METHOD_1_0844BF824CA685A7_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_2F25AE2D7046DE09(::System::String* a1, ::System::String* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_F9CED59F6AC83681_METHOD_1_2F25AE2D7046DE09_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_CA66F06205F1BED0(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_F9CED59F6AC83681_METHOD_1_CA66F06205F1BED0_OFFSET))(a1);
	}

	static ::System::String* Method_1_F305171F980FFE35(::System::String* a1)
	{
		return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_F9CED59F6AC83681_METHOD_1_F305171F980FFE35_OFFSET))(a1);
	}

	static ::System::Void Method_1_D68E1CAE64731ECE(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_F9CED59F6AC83681_METHOD_1_D68E1CAE64731ECE_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_1457A99C460B4D82(::System::String* a1, ::System::String* a2)
	{
		return ((::System::Boolean(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_F9CED59F6AC83681_METHOD_1_1457A99C460B4D82_OFFSET))(a1, a2);
	}

	static ::System::String* Method_1_CFF79473E0241BC3(::Il2CppArray<::System::String*>* a1)
	{
		return ((::System::String*(*)(::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_1_F9CED59F6AC83681_METHOD_1_CFF79473E0241BC3_OFFSET))(a1);
	}

	static ::System::String* Method_1_CBA90A04C636398B(::System::String* a1)
	{
		return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_F9CED59F6AC83681_METHOD_1_CBA90A04C636398B_OFFSET))(a1);
	}

	static ::System::String* Method_1_C4C3DB6ADFBC756E(::System::String* a1)
	{
		return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_F9CED59F6AC83681_METHOD_1_C4C3DB6ADFBC756E_OFFSET))(a1);
	}

	static ::System::String* Method_1_1045B7FFF846D4FF(::System::String* a1, ::System::String* a2)
	{
		return ((::System::String*(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_F9CED59F6AC83681_METHOD_1_1045B7FFF846D4FF_OFFSET))(a1, a2);
	}

	static ::System::String* Method_1_980E03E0CB5F1C97(::System::String* a1)
	{
		return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_F9CED59F6AC83681_METHOD_1_980E03E0CB5F1C97_OFFSET))(a1);
	}

	static ::System::String* Method_1_A7F28B945B4F9B6E(::System::String* a1)
	{
		return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_F9CED59F6AC83681_METHOD_1_A7F28B945B4F9B6E_OFFSET))(a1);
	}

	static ::System::String* Method_1_6AFDC50424099C5A(::System::String* a1)
	{
		return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_F9CED59F6AC83681_METHOD_1_6AFDC50424099C5A_OFFSET))(a1);
	}

	static ::System::String* Method_1_C4C3DB6ADFBC756E_1(::System::String* a1)
	{
		return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_F9CED59F6AC83681_METHOD_1_C4C3DB6ADFBC756E_1_OFFSET))(a1);
	}

	static ::System::String* Method_1_A7F28B945B4F9B6E_1(::System::String* a1)
	{
		return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_F9CED59F6AC83681_METHOD_1_A7F28B945B4F9B6E_1_OFFSET))(a1);
	}

	static ::System::String* Method_1_7079FDFF6481F7C6(::System::String* a1)
	{
		return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_F9CED59F6AC83681_METHOD_1_7079FDFF6481F7C6_OFFSET))(a1);
	}

	static ::System::Collections::Generic::List_1<::System::String*>* Method_1_F175F2D877445C24(::System::String* a1, ::System::Collections::Generic::List_1<::System::String*>* a2, ::System::Collections::Generic::List_1<::System::String*>* a3, ::System::Boolean a4)
	{
		return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::System::String*, ::System::Collections::Generic::List_1<::System::String*>*, ::System::Collections::Generic::List_1<::System::String*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_F9CED59F6AC83681_METHOD_1_F175F2D877445C24_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Collections::Generic::List_1<::System::IO::FileInfo*>* Method_1_3CA7B2FAF593D87E(::System::String* a1, ::System::Collections::Generic::HashSet_1<::System::String*>* a2, ::System::Collections::Generic::HashSet_1<::System::String*>* a3, ::System::Boolean a4)
	{
		return ((::System::Collections::Generic::List_1<::System::IO::FileInfo*>*(*)(::System::String*, ::System::Collections::Generic::HashSet_1<::System::String*>*, ::System::Collections::Generic::HashSet_1<::System::String*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_F9CED59F6AC83681_METHOD_1_3CA7B2FAF593D87E_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_1E5799D80018268D(::System::String* a1, ::System::Collections::Generic::List_1<::System::IO::FileInfo*>* a2, ::System::Collections::Generic::HashSet_1<::System::String*>* a3, ::System::Collections::Generic::HashSet_1<::System::String*>* a4, ::System::Boolean a5)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Generic::List_1<::System::IO::FileInfo*>*, ::System::Collections::Generic::HashSet_1<::System::String*>*, ::System::Collections::Generic::HashSet_1<::System::String*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_F9CED59F6AC83681_METHOD_1_1E5799D80018268D_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::System::Collections::Generic::IEnumerable_1<::System::IO::FileInfo*>* Method_1_56D1CCAABE4BE5F2(::System::String* a1, ::System::Collections::Generic::HashSet_1<::System::String*>* a2, ::System::Collections::Generic::HashSet_1<::System::String*>* a3, ::System::Boolean a4)
	{
		return ((::System::Collections::Generic::IEnumerable_1<::System::IO::FileInfo*>*(*)(::System::String*, ::System::Collections::Generic::HashSet_1<::System::String*>*, ::System::Collections::Generic::HashSet_1<::System::String*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_F9CED59F6AC83681_METHOD_1_56D1CCAABE4BE5F2_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_E19B78C5EF1C0E5F(::System::String* a1, ::System::Collections::Generic::List_1<::System::String*>*& a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Generic::List_1<::System::String*>*&, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_F9CED59F6AC83681_METHOD_1_E19B78C5EF1C0E5F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_5604A881CD5BA083(::System::String* a1, ::System::Collections::Generic::List_1<::System::IO::DirectoryInfo*>*& a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Generic::List_1<::System::IO::DirectoryInfo*>*&, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_F9CED59F6AC83681_METHOD_1_5604A881CD5BA083_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_208CAA48B4555C8F(::System::String* a1, ::System::String* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_F9CED59F6AC83681_METHOD_1_208CAA48B4555C8F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_F55459985BECC3B2_1(::System::String* a1, ::System::String* a2, ::System::Boolean a3, ::System::String* a4)
	{
		return ((::System::Void(*)(::System::String*, ::System::String*, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_F9CED59F6AC83681_METHOD_1_F55459985BECC3B2_1_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_32BD10B7C0C7AAA9_1(::System::IO::DirectoryInfo* a1, ::System::String* a2, ::System::Boolean a3, ::System::Text::RegularExpressions::Regex* a4)
	{
		return ((::System::Void(*)(::System::IO::DirectoryInfo*, ::System::String*, ::System::Boolean, ::System::Text::RegularExpressions::Regex*))((::PBYTE)hIl2Cpp + CLASS_1_F9CED59F6AC83681_METHOD_1_32BD10B7C0C7AAA9_1_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_74048072309E6DF4(::System::String* a1, ::System::String* a2, ::System::Boolean a3, ::System::Boolean a4)
	{
		return ((::System::Void(*)(::System::String*, ::System::String*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_F9CED59F6AC83681_METHOD_1_74048072309E6DF4_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_4692161D60CF3542(::System::String* a1, ::System::String* a2, ::System::Action_3<::System::String*, ::System::String*, ::System::String*>* a3, ::System::Action_3<::System::String*, ::System::String*, ::System::String*>* a4, ::System::Boolean a5, ::System::Boolean a6)
	{
		return ((::System::Void(*)(::System::String*, ::System::String*, ::System::Action_3<::System::String*, ::System::String*, ::System::String*>*, ::System::Action_3<::System::String*, ::System::String*, ::System::String*>*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_F9CED59F6AC83681_METHOD_1_4692161D60CF3542_OFFSET))(a1, a2, a3, a4, a5, a6);
	}

	static ::System::Void Method_1_8F5A352837E5D5A2(::System::String* a1, ::System::String* a2, ::System::String* a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_F9CED59F6AC83681_METHOD_1_8F5A352837E5D5A2_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_42BEBC15DF245DB6(::System::String* a1, ::System::String* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_F9CED59F6AC83681_METHOD_1_42BEBC15DF245DB6_OFFSET))(a1, a2, a3);
	}

	static ::System::String* Method_1_E867027E5DA8665C()
	{
		return ((::System::String*(*)())((::PBYTE)hIl2Cpp + CLASS_1_F9CED59F6AC83681_METHOD_1_E867027E5DA8665C_OFFSET))();
	}

	static ::System::Void Method_1_CA1E119F395F2BA7(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_F9CED59F6AC83681_METHOD_1_CA1E119F395F2BA7_OFFSET))(a1);
	}

	static ::System::Void Method_1_882BDA6ED74EB04E(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_F9CED59F6AC83681_METHOD_1_882BDA6ED74EB04E_OFFSET))(a1);
	}

	static ::System::Void Method_1_683407CC60BF1E1A(::System::String* a1, ::Il2CppArray<::System::String*>* a2)
	{
		return ((::System::Void(*)(::System::String*, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_1_F9CED59F6AC83681_METHOD_1_683407CC60BF1E1A_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_586A7C86CE8FA1E9(::System::String* a1, ::System::Collections::Generic::IList_1<::System::String*>* a2)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Generic::IList_1<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_1_F9CED59F6AC83681_METHOD_1_586A7C86CE8FA1E9_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_24B39354D1FCD13B(::System::String* a1)
	{
		return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_F9CED59F6AC83681_METHOD_1_24B39354D1FCD13B_OFFSET))(a1);
	}

	static ::System::String* Method_1_64AD61EB1294C23C(::System::String* a1, ::System::Boolean a2)
	{
		return ((::System::String*(*)(::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_F9CED59F6AC83681_METHOD_1_64AD61EB1294C23C_OFFSET))(a1, a2);
	}

	static ::System::String* Method_1_88B60F3B95FAA4F1()
	{
		return ((::System::String*(*)())((::PBYTE)hIl2Cpp + CLASS_1_F9CED59F6AC83681_METHOD_1_88B60F3B95FAA4F1_OFFSET))();
	}

	static ::System::Int64 Method_1_A705115B3CD7C1CB(::System::String* a1)
	{
		return ((::System::Int64(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_F9CED59F6AC83681_METHOD_1_A705115B3CD7C1CB_OFFSET))(a1);
	}

	static ::System::String* Method_1_994DF2D990A20287(::System::String* a1)
	{
		return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_F9CED59F6AC83681_METHOD_1_994DF2D990A20287_OFFSET))(a1);
	}

	static ::System::String* Method_1_F305171F980FFE35_1(::System::String* a1)
	{
		return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_F9CED59F6AC83681_METHOD_1_F305171F980FFE35_1_OFFSET))(a1);
	}

	static ::System::String* Method_1_9D6C91C7444A7D52(::System::String* a1)
	{
		return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_F9CED59F6AC83681_METHOD_1_9D6C91C7444A7D52_OFFSET))(a1);
	}

	static ::System::Text::StringBuilder* Method_1_2E75F4263BAA93E8(::System::Text::StringBuilder* a1)
	{
		return ((::System::Text::StringBuilder*(*)(::System::Text::StringBuilder*))((::PBYTE)hIl2Cpp + CLASS_1_F9CED59F6AC83681_METHOD_1_2E75F4263BAA93E8_OFFSET))(a1);
	}

	static ::System::String* Method_1_6B9DA53DDDC0D8BD(::System::String* a1, ::System::String* a2)
	{
		return ((::System::String*(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_F9CED59F6AC83681_METHOD_1_6B9DA53DDDC0D8BD_OFFSET))(a1, a2);
	}

	static ::System::String* Method_1_1F9CEC2E7FFF0A01(::System::String* a1, ::Il2CppArray<::System::String*>* a2)
	{
		return ((::System::String*(*)(::System::String*, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_1_F9CED59F6AC83681_METHOD_1_1F9CEC2E7FFF0A01_OFFSET))(a1, a2);
	}

	static ::System::String* Method_1_2FC736F504EC46BE(::System::String* a1, ::System::Collections::Generic::IEnumerable_1<::System::String*>* a2)
	{
		return ((::System::String*(*)(::System::String*, ::System::Collections::Generic::IEnumerable_1<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_1_F9CED59F6AC83681_METHOD_1_2FC736F504EC46BE_OFFSET))(a1, a2);
	}

	static ::System::String* Method_1_4453F55D90F8D029(::System::String* a1, ::System::String* a2)
	{
		return ((::System::String*(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_F9CED59F6AC83681_METHOD_1_4453F55D90F8D029_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_B50329E52C9D3AD9(::System::String* a1, ::System::String* a2)
	{
		return ((::System::Boolean(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_F9CED59F6AC83681_METHOD_1_B50329E52C9D3AD9_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_A5B868F5C71A467E(::System::Char a1)
	{
		return ((::System::Boolean(*)(::System::Char))((::PBYTE)hIl2Cpp + CLASS_1_F9CED59F6AC83681_METHOD_1_A5B868F5C71A467E_OFFSET))(a1);
	}

	static ::System::Text::StringBuilder* Method_1_8913E26713F9F05C(::System::Text::StringBuilder* a1, ::System::String* a2)
	{
		return ((::System::Text::StringBuilder*(*)(::System::Text::StringBuilder*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_F9CED59F6AC83681_METHOD_1_8913E26713F9F05C_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_2DC90EE759C8637B(::System::String* a1)
	{
		return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_F9CED59F6AC83681_METHOD_1_2DC90EE759C8637B_OFFSET))(a1);
	}

	static ::System::Void Method_1_ED60CE426DBC8E38(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_F9CED59F6AC83681_METHOD_1_ED60CE426DBC8E38_OFFSET))(a1);
	}

	static ::System::Void Method_1_12635A3CAA51684C(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_F9CED59F6AC83681_METHOD_1_12635A3CAA51684C_OFFSET))(a1);
	}

	static ::System::Void Method_1_ED60CE426DBC8E38_1(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_F9CED59F6AC83681_METHOD_1_ED60CE426DBC8E38_1_OFFSET))(a1);
	}

	static ::System::Void Method_1_FC86AAA038FC8172(::System::String* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_F9CED59F6AC83681_METHOD_1_FC86AAA038FC8172_OFFSET))(a1, a2);
	}

	static ::System::String* Method_1_126AB3935214AA22()
	{
		return ((::System::String*(*)())((::PBYTE)hIl2Cpp + CLASS_1_F9CED59F6AC83681_METHOD_1_126AB3935214AA22_OFFSET))();
	}

	static ::System::Boolean Method_1_814BFAD6D303499E(::System::String* a1, ::System::String* a2, ::System::Boolean a3)
	{
		return ((::System::Boolean(*)(::System::String*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_F9CED59F6AC83681_METHOD_1_814BFAD6D303499E_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_1DCEF572AAED75CF(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_F9CED59F6AC83681_METHOD_1_1DCEF572AAED75CF_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_9DD2DCFED0B1F6F5(::System::String* a1, ::System::Boolean a2)
	{
		return ((::System::Boolean(*)(::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_F9CED59F6AC83681_METHOD_1_9DD2DCFED0B1F6F5_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_7D201B4343E63821(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_F9CED59F6AC83681_METHOD_1_7D201B4343E63821_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_BF5ABDB6E1D2891A(::System::String* a1, ::System::Boolean a2)
	{
		return ((::System::Boolean(*)(::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_F9CED59F6AC83681_METHOD_1_BF5ABDB6E1D2891A_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_7D201B4343E63821_1(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_F9CED59F6AC83681_METHOD_1_7D201B4343E63821_1_OFFSET))(a1);
	}

	static ::System::Void Method_1_D68E1CAE64731ECE_1(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_F9CED59F6AC83681_METHOD_1_D68E1CAE64731ECE_1_OFFSET))(a1);
	}

	static ::System::Void Method_1_7D201B4343E63821_2(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_F9CED59F6AC83681_METHOD_1_7D201B4343E63821_2_OFFSET))(a1);
	}

	static ::System::Void Method_1_D7D0CD092E7E5457(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_F9CED59F6AC83681_METHOD_1_D7D0CD092E7E5457_OFFSET))(a1);
	}

	static ::Il2CppArray<::System::String*>* Method_1_6BC8B9B550B65B3E(::System::String* a1, ::System::String* a2, ::System::String* a3)
	{
		return ((::Il2CppArray<::System::String*>*(*)(::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_F9CED59F6AC83681_METHOD_1_6BC8B9B550B65B3E_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_1DCEF572AAED75CF_1(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_F9CED59F6AC83681_METHOD_1_1DCEF572AAED75CF_1_OFFSET))(a1);
	}

	static ::System::Void Method_1_1DCEF572AAED75CF_2(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_F9CED59F6AC83681_METHOD_1_1DCEF572AAED75CF_2_OFFSET))(a1);
	}

	static ::System::String* Method_1_2F996FD8685BA4BF(::System::String* a1)
	{
		return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_F9CED59F6AC83681_METHOD_1_2F996FD8685BA4BF_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_9FD9A0E14949407F_1(::System::String* a1, ::System::String* a2)
	{
		return ((::System::Boolean(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_F9CED59F6AC83681_METHOD_1_9FD9A0E14949407F_1_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_5D7FF84DD98AB865(::System::String* a1, ::System::Collections::Generic::HashSet_1<::System::String*>* a2)
	{
		return ((::System::Boolean(*)(::System::String*, ::System::Collections::Generic::HashSet_1<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_1_F9CED59F6AC83681_METHOD_1_5D7FF84DD98AB865_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_343416D53F782A98(::System::String* a1, ::System::Collections::Generic::HashSet_1<::System::UInt32>* a2)
	{
		return ((::System::Boolean(*)(::System::String*, ::System::Collections::Generic::HashSet_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_F9CED59F6AC83681_METHOD_1_343416D53F782A98_OFFSET))(a1, a2);
	}

	static ::Il2CppArray<::System::Byte>* Method_1_DA8DCE889EF32DAD(::System::String* a1)
	{
		return ((::Il2CppArray<::System::Byte>*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_F9CED59F6AC83681_METHOD_1_DA8DCE889EF32DAD_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_03736422B1E836C8(::System::String* a1, ::System::String* a2)
	{
		return ((::System::Boolean(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_F9CED59F6AC83681_METHOD_1_03736422B1E836C8_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_A7A54D86BEC69A86(::System::String* a1, ::System::String* a2)
	{
		return ((::System::Boolean(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_F9CED59F6AC83681_METHOD_1_A7A54D86BEC69A86_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_D5D9374000697B40(::System::String* a1, ::Il2CppArray<::System::Byte>* a2)
	{
		return ((::System::Boolean(*)(::System::String*, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + CLASS_1_F9CED59F6AC83681_METHOD_1_D5D9374000697B40_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_16AAC9F8CAA68378(::System::IO::FileStream* a1, ::System::Byte a2)
	{
		return ((::System::Boolean(*)(::System::IO::FileStream*, ::System::Byte))((::PBYTE)hIl2Cpp + CLASS_1_F9CED59F6AC83681_METHOD_1_16AAC9F8CAA68378_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_F01598447C44D68F(::System::IO::FileStream* a1, ::System::Byte& a2)
	{
		return ((::System::Boolean(*)(::System::IO::FileStream*, ::System::Byte&))((::PBYTE)hIl2Cpp + CLASS_1_F9CED59F6AC83681_METHOD_1_F01598447C44D68F_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_03531F94E0E47546(::System::IO::FileStream* a1, ::Il2CppArray<::System::Byte>* a2, ::System::Int32 a3, ::System::Int32 a4)
	{
		return ((::System::Boolean(*)(::System::IO::FileStream*, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_F9CED59F6AC83681_METHOD_1_03531F94E0E47546_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Int32 Method_1_B199FDCDCFCE9FB5(::System::IO::FileStream* a1, ::Il2CppArray<::System::Byte>* a2, ::System::Int32 a3, ::System::Int32 a4)
	{
		return ((::System::Int32(*)(::System::IO::FileStream*, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_F9CED59F6AC83681_METHOD_1_B199FDCDCFCE9FB5_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Boolean Method_1_8FACFFF3E5CBE2C4(::System::String* a1, ::Il2CppArray<::System::Byte>* a2, ::System::Boolean a3)
	{
		return ((::System::Boolean(*)(::System::String*, ::Il2CppArray<::System::Byte>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_F9CED59F6AC83681_METHOD_1_8FACFFF3E5CBE2C4_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_F08676EA64B106D4(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_F9CED59F6AC83681_METHOD_1_F08676EA64B106D4_OFFSET))(a1);
	}

	static ::System::Int64 Method_1_68CFA3313D7F6FA9(::System::String* a1)
	{
		return ((::System::Int64(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_F9CED59F6AC83681_METHOD_1_68CFA3313D7F6FA9_OFFSET))(a1);
	}

	static ::System::String* Method_1_6F1B0A02FDC49991(::System::String* a1)
	{
		return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_F9CED59F6AC83681_METHOD_1_6F1B0A02FDC49991_OFFSET))(a1);
	}

	static ::System::String* Method_1_FA53007A29B435C0(::System::String* a1)
	{
		return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_F9CED59F6AC83681_METHOD_1_FA53007A29B435C0_OFFSET))(a1);
	}

	static ::System::String* Method_1_92A6BEC2CDC3E549(::System::String* a1)
	{
		return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_F9CED59F6AC83681_METHOD_1_92A6BEC2CDC3E549_OFFSET))(a1);
	}

	static ::System::Void Method_1_7EEDB370E3865161(::System::Collections::Generic::List_1<::System::String*>* a1)
	{
		return ((::System::Void(*)(::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_1_F9CED59F6AC83681_METHOD_1_7EEDB370E3865161_OFFSET))(a1);
	}
};
