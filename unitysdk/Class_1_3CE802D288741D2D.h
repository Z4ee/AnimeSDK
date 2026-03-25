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

#define CLASS_1_3CE802D288741D2D_METHOD_1_00AA18458D984D9B_OFFSET UNITYSDK_OFFSET(0x1832A720)
#define CLASS_1_3CE802D288741D2D_METHOD_1_03736422B1E836C8_OFFSET UNITYSDK_OFFSET(0x183296D0)
#define CLASS_1_3CE802D288741D2D_METHOD_1_0407806F100D9D14_1_OFFSET UNITYSDK_OFFSET(0x18323340)
#define CLASS_1_3CE802D288741D2D_METHOD_1_0407806F100D9D14_OFFSET UNITYSDK_OFFSET(0x1831EBD0)
#define CLASS_1_3CE802D288741D2D_METHOD_1_0844BF824CA685A7_OFFSET UNITYSDK_OFFSET(0x18320040)
#define CLASS_1_3CE802D288741D2D_METHOD_1_0BD8EBDA38930A84_OFFSET UNITYSDK_OFFSET(0x18327F50)
#define CLASS_1_3CE802D288741D2D_METHOD_1_0CB5CAE55E9B0B9E_OFFSET UNITYSDK_OFFSET(0x1832A1B0)
#define CLASS_1_3CE802D288741D2D_METHOD_1_0CC096BD7930BC31_OFFSET UNITYSDK_OFFSET(0x183226E0)
#define CLASS_1_3CE802D288741D2D_METHOD_1_1045B7FFF846D4FF_OFFSET UNITYSDK_OFFSET(0x18320FD0)
#define CLASS_1_3CE802D288741D2D_METHOD_1_11B8E01605498CF4_OFFSET UNITYSDK_OFFSET(0x1831C930)
#define CLASS_1_3CE802D288741D2D_METHOD_1_12635A3CAA51684C_OFFSET UNITYSDK_OFFSET(0x18327FB0)
#define CLASS_1_3CE802D288741D2D_METHOD_1_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0x183283D0)
#define CLASS_1_3CE802D288741D2D_METHOD_1_130A6949BCD5A119_OFFSET UNITYSDK_OFFSET(0x1831CA10)
#define CLASS_1_3CE802D288741D2D_METHOD_1_1325B9879381C3A3_1_OFFSET UNITYSDK_OFFSET(0x1831AFD0)
#define CLASS_1_3CE802D288741D2D_METHOD_1_1325B9879381C3A3_OFFSET UNITYSDK_OFFSET(0x18320AB0)
#define CLASS_1_3CE802D288741D2D_METHOD_1_1457A99C460B4D82_OFFSET UNITYSDK_OFFSET(0x18320C60)
#define CLASS_1_3CE802D288741D2D_METHOD_1_16AAC9F8CAA68378_1_OFFSET UNITYSDK_OFFSET(0x18329BC0)
#define CLASS_1_3CE802D288741D2D_METHOD_1_16AAC9F8CAA68378_OFFSET UNITYSDK_OFFSET(0x18329AC0)
#define CLASS_1_3CE802D288741D2D_METHOD_1_1A2740E2FE318634_OFFSET UNITYSDK_OFFSET(0x1832A8D0)
#define CLASS_1_3CE802D288741D2D_METHOD_1_1A503627688AE58E_OFFSET UNITYSDK_OFFSET(0x18322AC0)
#define CLASS_1_3CE802D288741D2D_METHOD_1_1DCEF572AAED75CF_1_OFFSET UNITYSDK_OFFSET(0x18328860)
#define CLASS_1_3CE802D288741D2D_METHOD_1_1DCEF572AAED75CF_2_OFFSET UNITYSDK_OFFSET(0x18328A20)
#define CLASS_1_3CE802D288741D2D_METHOD_1_1DCEF572AAED75CF_OFFSET UNITYSDK_OFFSET(0x183283E0)
#define CLASS_1_3CE802D288741D2D_METHOD_1_1F9CEC2E7FFF0A01_OFFSET UNITYSDK_OFFSET(0x18327770)
#define CLASS_1_3CE802D288741D2D_METHOD_1_21B006A3E14F3379_OFFSET UNITYSDK_OFFSET(0x18329200)
#define CLASS_1_3CE802D288741D2D_METHOD_1_24B39354D1FCD13B_OFFSET UNITYSDK_OFFSET(0x18326F10)
#define CLASS_1_3CE802D288741D2D_METHOD_1_2B33C5147D6EE554_OFFSET UNITYSDK_OFFSET(0x18321040)
#define CLASS_1_3CE802D288741D2D_METHOD_1_2E75F4263BAA93E8_OFFSET UNITYSDK_OFFSET(0x18327620)
#define CLASS_1_3CE802D288741D2D_METHOD_1_2F1937EBD1CFF8C5_OFFSET UNITYSDK_OFFSET(0x1831DB40)
#define CLASS_1_3CE802D288741D2D_METHOD_1_2F996FD8685BA4BF_OFFSET UNITYSDK_OFFSET(0x18328BA0)
#define CLASS_1_3CE802D288741D2D_METHOD_1_30424022465411BE_OFFSET UNITYSDK_OFFSET(0x1832A820)
#define CLASS_1_3CE802D288741D2D_METHOD_1_304BCBB3B5923DF4_OFFSET UNITYSDK_OFFSET(0x18325A90)
#define CLASS_1_3CE802D288741D2D_METHOD_1_31329007E4494D37_OFFSET UNITYSDK_OFFSET(0x18329E00)
#define CLASS_1_3CE802D288741D2D_METHOD_1_31CCAFA024D09758_OFFSET UNITYSDK_OFFSET(0x1831DC90)
#define CLASS_1_3CE802D288741D2D_METHOD_1_31E1F560B3956813_OFFSET UNITYSDK_OFFSET(0x18325930)
#define CLASS_1_3CE802D288741D2D_METHOD_1_33F47CD1F2D90021_OFFSET UNITYSDK_OFFSET(0x1831EB90)
#define CLASS_1_3CE802D288741D2D_METHOD_1_36E341618C6A080A_OFFSET UNITYSDK_OFFSET(0x18329560)
#define CLASS_1_3CE802D288741D2D_METHOD_1_3CA7B2FAF593D87E_OFFSET UNITYSDK_OFFSET(0x18321CC0)
#define CLASS_1_3CE802D288741D2D_METHOD_1_42BEBC15DF245DB6_OFFSET UNITYSDK_OFFSET(0x183254F0)
#define CLASS_1_3CE802D288741D2D_METHOD_1_51CB85426198DB47_OFFSET UNITYSDK_OFFSET(0x18327860)
#define CLASS_1_3CE802D288741D2D_METHOD_1_563F6A002CE501F1_OFFSET UNITYSDK_OFFSET(0x18328D30)
#define CLASS_1_3CE802D288741D2D_METHOD_1_56D1CCAABE4BE5F2_OFFSET UNITYSDK_OFFSET(0x18322290)
#define CLASS_1_3CE802D288741D2D_METHOD_1_5E34F80B92F33FB3_OFFSET UNITYSDK_OFFSET(0x18320180)
#define CLASS_1_3CE802D288741D2D_METHOD_1_601151760D81E1EE_OFFSET UNITYSDK_OFFSET(0x18328770)
#define CLASS_1_3CE802D288741D2D_METHOD_1_694763B6CFD24505_OFFSET UNITYSDK_OFFSET(0x18321D40)
#define CLASS_1_3CE802D288741D2D_METHOD_1_695D23C4F5ED0DB2_OFFSET UNITYSDK_OFFSET(0x18329CC0)
#define CLASS_1_3CE802D288741D2D_METHOD_1_6AFDC50424099C5A_1_OFFSET UNITYSDK_OFFSET(0x18321060)
#define CLASS_1_3CE802D288741D2D_METHOD_1_6AFDC50424099C5A_OFFSET UNITYSDK_OFFSET(0x1831C900)
#define CLASS_1_3CE802D288741D2D_METHOD_1_6B9DA53DDDC0D8BD_OFFSET UNITYSDK_OFFSET(0x18325880)
#define CLASS_1_3CE802D288741D2D_METHOD_1_6E1DD35AC740F721_OFFSET UNITYSDK_OFFSET(0x18328210)
#define CLASS_1_3CE802D288741D2D_METHOD_1_6F1B0A02FDC49991_OFFSET UNITYSDK_OFFSET(0x1832A710)
#define CLASS_1_3CE802D288741D2D_METHOD_1_7079FDFF6481F7C6_OFFSET UNITYSDK_OFFSET(0x183212D0)
#define CLASS_1_3CE802D288741D2D_METHOD_1_74EAC4DD197DEA6A_OFFSET UNITYSDK_OFFSET(0x18322320)
#define CLASS_1_3CE802D288741D2D_METHOD_1_7C3397F8116D6250_OFFSET UNITYSDK_OFFSET(0x18321030)
#define CLASS_1_3CE802D288741D2D_METHOD_1_7D201B4343E63821_1_OFFSET UNITYSDK_OFFSET(0x18328590)
#define CLASS_1_3CE802D288741D2D_METHOD_1_7D201B4343E63821_2_OFFSET UNITYSDK_OFFSET(0x18328680)
#define CLASS_1_3CE802D288741D2D_METHOD_1_7D201B4343E63821_OFFSET UNITYSDK_OFFSET(0x18328470)
#define CLASS_1_3CE802D288741D2D_METHOD_1_814BFAD6D303499E_OFFSET UNITYSDK_OFFSET(0x183206E0)
#define CLASS_1_3CE802D288741D2D_METHOD_1_84E93399AE94C2FD_OFFSET UNITYSDK_OFFSET(0x1831CB10)
#define CLASS_1_3CE802D288741D2D_METHOD_1_88B60F3B95FAA4F1_OFFSET UNITYSDK_OFFSET(0x18327450)
#define CLASS_1_3CE802D288741D2D_METHOD_1_8913E26713F9F05C_OFFSET UNITYSDK_OFFSET(0x18327680)
#define CLASS_1_3CE802D288741D2D_METHOD_1_8C7A0EBC62BF4B6D_OFFSET UNITYSDK_OFFSET(0x18325990)
#define CLASS_1_3CE802D288741D2D_METHOD_1_8EB95FDE22407B7D_OFFSET UNITYSDK_OFFSET(0x18326250)
#define CLASS_1_3CE802D288741D2D_METHOD_1_8F5A352837E5D5A2_OFFSET UNITYSDK_OFFSET(0x183251F0)
#define CLASS_1_3CE802D288741D2D_METHOD_1_8FACFFF3E5CBE2C4_OFFSET UNITYSDK_OFFSET(0x18329F20)
#define CLASS_1_3CE802D288741D2D_METHOD_1_942FA2BD37A953D3_OFFSET UNITYSDK_OFFSET(0x18326FB0)
#define CLASS_1_3CE802D288741D2D_METHOD_1_994DF2D990A20287_OFFSET UNITYSDK_OFFSET(0x18327510)
#define CLASS_1_3CE802D288741D2D_METHOD_1_9D6C91C7444A7D52_OFFSET UNITYSDK_OFFSET(0x18327590)
#define CLASS_1_3CE802D288741D2D_METHOD_1_9DD2DCFED0B1F6F5_OFFSET UNITYSDK_OFFSET(0x183205C0)
#define CLASS_1_3CE802D288741D2D_METHOD_1_9FD9A0E14949407F_OFFSET UNITYSDK_OFFSET(0x1831EA90)
#define CLASS_1_3CE802D288741D2D_METHOD_1_A5B868F5C71A467E_OFFSET UNITYSDK_OFFSET(0x18327F30)
#define CLASS_1_3CE802D288741D2D_METHOD_1_A705115B3CD7C1CB_OFFSET UNITYSDK_OFFSET(0x183244F0)
#define CLASS_1_3CE802D288741D2D_METHOD_1_A7A54D86BEC69A86_OFFSET UNITYSDK_OFFSET(0x18329810)
#define CLASS_1_3CE802D288741D2D_METHOD_1_A7F28B945B4F9B6E_OFFSET UNITYSDK_OFFSET(0x18321110)
#define CLASS_1_3CE802D288741D2D_METHOD_1_B548D12BA5C985DA_OFFSET UNITYSDK_OFFSET(0x18327CC0)
#define CLASS_1_3CE802D288741D2D_METHOD_1_BC012EAD9D9F105D_OFFSET UNITYSDK_OFFSET(0x1831E1D0)
#define CLASS_1_3CE802D288741D2D_METHOD_1_BF5ABDB6E1D2891A_OFFSET UNITYSDK_OFFSET(0x18328480)
#define CLASS_1_3CE802D288741D2D_METHOD_1_C4C3DB6ADFBC756E_1_OFFSET UNITYSDK_OFFSET(0x183210C0)
#define CLASS_1_3CE802D288741D2D_METHOD_1_C4C3DB6ADFBC756E_OFFSET UNITYSDK_OFFSET(0x18320F90)
#define CLASS_1_3CE802D288741D2D_METHOD_1_C576C3694282CF53_OFFSET UNITYSDK_OFFSET(0x18327BC0)
#define CLASS_1_3CE802D288741D2D_METHOD_1_C655A6AF844948DA_OFFSET UNITYSDK_OFFSET(0x18328E50)
#define CLASS_1_3CE802D288741D2D_METHOD_1_CA66F06205F1BED0_OFFSET UNITYSDK_OFFSET(0x1831DA90)
#define CLASS_1_3CE802D288741D2D_METHOD_1_CBA90A04C636398B_OFFSET UNITYSDK_OFFSET(0x18320F30)
#define CLASS_1_3CE802D288741D2D_METHOD_1_CFE68BF3082EDCB0_OFFSET UNITYSDK_OFFSET(0x18326AA0)
#define CLASS_1_3CE802D288741D2D_METHOD_1_CFF79473E0241BC3_OFFSET UNITYSDK_OFFSET(0x18320DE0)
#define CLASS_1_3CE802D288741D2D_METHOD_1_D4247158591FA721_1_OFFSET UNITYSDK_OFFSET(0x1831C700)
#define CLASS_1_3CE802D288741D2D_METHOD_1_D4247158591FA721_2_OFFSET UNITYSDK_OFFSET(0x1831FF70)
#define CLASS_1_3CE802D288741D2D_METHOD_1_D4247158591FA721_OFFSET UNITYSDK_OFFSET(0x1831E070)
#define CLASS_1_3CE802D288741D2D_METHOD_1_D5D9374000697B40_OFFSET UNITYSDK_OFFSET(0x183299A0)
#define CLASS_1_3CE802D288741D2D_METHOD_1_D631E6EFCE1547F3_OFFSET UNITYSDK_OFFSET(0x1831CBA0)
#define CLASS_1_3CE802D288741D2D_METHOD_1_D667D1D50133EF64_OFFSET UNITYSDK_OFFSET(0x183212E0)
#define CLASS_1_3CE802D288741D2D_METHOD_1_D68E1CAE64731ECE_1_OFFSET UNITYSDK_OFFSET(0x183285A0)
#define CLASS_1_3CE802D288741D2D_METHOD_1_D68E1CAE64731ECE_OFFSET UNITYSDK_OFFSET(0x18320AE0)
#define CLASS_1_3CE802D288741D2D_METHOD_1_D700B832939D9249_OFFSET UNITYSDK_OFFSET(0x18323410)
#define CLASS_1_3CE802D288741D2D_METHOD_1_D7D0CD092E7E5457_OFFSET UNITYSDK_OFFSET(0x18328690)
#define CLASS_1_3CE802D288741D2D_METHOD_1_ED60CE426DBC8E38_1_OFFSET UNITYSDK_OFFSET(0x18328090)
#define CLASS_1_3CE802D288741D2D_METHOD_1_ED60CE426DBC8E38_OFFSET UNITYSDK_OFFSET(0x1831E7F0)
#define CLASS_1_3CE802D288741D2D_METHOD_1_F0B96EE9F308F8DF_1_OFFSET UNITYSDK_OFFSET(0x1831F6A0)
#define CLASS_1_3CE802D288741D2D_METHOD_1_F0B96EE9F308F8DF_OFFSET UNITYSDK_OFFSET(0x1831ECA0)
#define CLASS_1_3CE802D288741D2D_METHOD_1_F1F156C011224B0B_OFFSET UNITYSDK_OFFSET(0x183246A0)
#define CLASS_1_3CE802D288741D2D_METHOD_1_F5790DD9D8E52337_OFFSET UNITYSDK_OFFSET(0x1831E9F0)

inline static constexpr unsigned int Class_1_3CE802D288741D2D_TypeDefinitionIndex = 9538;

class Class_1_3CE802D288741D2D : public ::System::Object
{
public:
	// static const ::System::String* Field_1_0; // 0x0
	// static const ::System::String* Field_1_1; // 0x0
	// static const ::System::Int32 Field_1_2 = 0x104; // 0x0

	static ::System::String* Method_1_6AFDC50424099C5A(::System::String* a1)
	{
		return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_3CE802D288741D2D_METHOD_1_6AFDC50424099C5A_OFFSET))(a1);
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

	static ::System::Void Method_1_5E34F80B92F33FB3(::System::String* a1, ::System::String* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_3CE802D288741D2D_METHOD_1_5E34F80B92F33FB3_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_CA66F06205F1BED0(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_3CE802D288741D2D_METHOD_1_CA66F06205F1BED0_OFFSET))(a1);
	}

	static ::System::String* Method_1_1325B9879381C3A3(::System::String* a1)
	{
		return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_3CE802D288741D2D_METHOD_1_1325B9879381C3A3_OFFSET))(a1);
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

	static ::System::String* Method_1_7C3397F8116D6250(::System::String* a1)
	{
		return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_3CE802D288741D2D_METHOD_1_7C3397F8116D6250_OFFSET))(a1);
	}

	static ::System::String* Method_1_2B33C5147D6EE554(::System::String* a1)
	{
		return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_3CE802D288741D2D_METHOD_1_2B33C5147D6EE554_OFFSET))(a1);
	}

	static ::System::String* Method_1_6AFDC50424099C5A_1(::System::String* a1)
	{
		return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_3CE802D288741D2D_METHOD_1_6AFDC50424099C5A_1_OFFSET))(a1);
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

	static ::System::Collections::Generic::List_1<::System::String*>* Method_1_D667D1D50133EF64(::System::String* a1, ::System::Collections::Generic::List_1<::System::String*>* a2, ::System::Collections::Generic::List_1<::System::String*>* a3, ::System::Boolean a4)
	{
		return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::System::String*, ::System::Collections::Generic::List_1<::System::String*>*, ::System::Collections::Generic::List_1<::System::String*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_3CE802D288741D2D_METHOD_1_D667D1D50133EF64_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Collections::Generic::List_1<::System::IO::FileInfo*>* Method_1_3CA7B2FAF593D87E(::System::String* a1, ::System::Collections::Generic::HashSet_1<::System::String*>* a2, ::System::Collections::Generic::HashSet_1<::System::String*>* a3, ::System::Boolean a4)
	{
		return ((::System::Collections::Generic::List_1<::System::IO::FileInfo*>*(*)(::System::String*, ::System::Collections::Generic::HashSet_1<::System::String*>*, ::System::Collections::Generic::HashSet_1<::System::String*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_3CE802D288741D2D_METHOD_1_3CA7B2FAF593D87E_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_694763B6CFD24505(::System::String* a1, ::System::Collections::Generic::List_1<::System::IO::FileInfo*>* a2, ::System::Collections::Generic::HashSet_1<::System::String*>* a3, ::System::Collections::Generic::HashSet_1<::System::String*>* a4, ::System::Boolean a5)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Generic::List_1<::System::IO::FileInfo*>*, ::System::Collections::Generic::HashSet_1<::System::String*>*, ::System::Collections::Generic::HashSet_1<::System::String*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_3CE802D288741D2D_METHOD_1_694763B6CFD24505_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::System::Collections::Generic::IEnumerable_1<::System::IO::FileInfo*>* Method_1_56D1CCAABE4BE5F2(::System::String* a1, ::System::Collections::Generic::HashSet_1<::System::String*>* a2, ::System::Collections::Generic::HashSet_1<::System::String*>* a3, ::System::Boolean a4)
	{
		return ((::System::Collections::Generic::IEnumerable_1<::System::IO::FileInfo*>*(*)(::System::String*, ::System::Collections::Generic::HashSet_1<::System::String*>*, ::System::Collections::Generic::HashSet_1<::System::String*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_3CE802D288741D2D_METHOD_1_56D1CCAABE4BE5F2_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_74EAC4DD197DEA6A(::System::String* a1, ::System::Collections::Generic::List_1<::System::String*>*& a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Generic::List_1<::System::String*>*&, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_3CE802D288741D2D_METHOD_1_74EAC4DD197DEA6A_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_0CC096BD7930BC31(::System::String* a1, ::System::Collections::Generic::List_1<::System::IO::DirectoryInfo*>*& a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Generic::List_1<::System::IO::DirectoryInfo*>*&, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_3CE802D288741D2D_METHOD_1_0CC096BD7930BC31_OFFSET))(a1, a2, a3);
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

	static ::System::String* Method_1_31E1F560B3956813()
	{
		return ((::System::String*(*)())((::PBYTE)hIl2Cpp + CLASS_1_3CE802D288741D2D_METHOD_1_31E1F560B3956813_OFFSET))();
	}

	static ::System::Void Method_1_8C7A0EBC62BF4B6D(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_3CE802D288741D2D_METHOD_1_8C7A0EBC62BF4B6D_OFFSET))(a1);
	}

	static ::System::Void Method_1_304BCBB3B5923DF4(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_3CE802D288741D2D_METHOD_1_304BCBB3B5923DF4_OFFSET))(a1);
	}

	static ::System::Void Method_1_8EB95FDE22407B7D(::System::String* a1, ::Il2CppArray<::System::String*>* a2)
	{
		return ((::System::Void(*)(::System::String*, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_1_3CE802D288741D2D_METHOD_1_8EB95FDE22407B7D_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_CFE68BF3082EDCB0(::System::String* a1, ::System::Collections::Generic::IList_1<::System::String*>* a2)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Generic::IList_1<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_1_3CE802D288741D2D_METHOD_1_CFE68BF3082EDCB0_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_24B39354D1FCD13B(::System::String* a1)
	{
		return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_3CE802D288741D2D_METHOD_1_24B39354D1FCD13B_OFFSET))(a1);
	}

	static ::System::String* Method_1_942FA2BD37A953D3(::System::String* a1, ::System::Boolean a2)
	{
		return ((::System::String*(*)(::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_3CE802D288741D2D_METHOD_1_942FA2BD37A953D3_OFFSET))(a1, a2);
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

	static ::System::String* Method_1_1325B9879381C3A3_1(::System::String* a1)
	{
		return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_3CE802D288741D2D_METHOD_1_1325B9879381C3A3_1_OFFSET))(a1);
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

	static ::System::String* Method_1_C576C3694282CF53(::System::String* a1, ::System::String* a2)
	{
		return ((::System::String*(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_3CE802D288741D2D_METHOD_1_C576C3694282CF53_OFFSET))(a1, a2);
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

	static ::System::Void Method_1_6E1DD35AC740F721(::System::String* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_3CE802D288741D2D_METHOD_1_6E1DD35AC740F721_OFFSET))(a1, a2);
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

	static ::System::Boolean Method_1_563F6A002CE501F1(::System::String* a1, ::System::String* a2)
	{
		return ((::System::Boolean(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_3CE802D288741D2D_METHOD_1_563F6A002CE501F1_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_C655A6AF844948DA(::System::String* a1, ::System::Collections::Generic::HashSet_1<::System::String*>* a2)
	{
		return ((::System::Boolean(*)(::System::String*, ::System::Collections::Generic::HashSet_1<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_1_3CE802D288741D2D_METHOD_1_C655A6AF844948DA_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_21B006A3E14F3379(::System::String* a1, ::System::Collections::Generic::HashSet_1<::System::UInt32>* a2)
	{
		return ((::System::Boolean(*)(::System::String*, ::System::Collections::Generic::HashSet_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_3CE802D288741D2D_METHOD_1_21B006A3E14F3379_OFFSET))(a1, a2);
	}

	static ::Il2CppArray<::System::Byte>* Method_1_36E341618C6A080A(::System::String* a1)
	{
		return ((::Il2CppArray<::System::Byte>*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_3CE802D288741D2D_METHOD_1_36E341618C6A080A_OFFSET))(a1);
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

	static ::System::Boolean Method_1_16AAC9F8CAA68378_1(::System::IO::FileStream* a1, ::System::Byte& a2)
	{
		return ((::System::Boolean(*)(::System::IO::FileStream*, ::System::Byte&))((::PBYTE)hIl2Cpp + CLASS_1_3CE802D288741D2D_METHOD_1_16AAC9F8CAA68378_1_OFFSET))(a1, a2);
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

	static ::System::Int64 Method_1_0CB5CAE55E9B0B9E(::System::String* a1)
	{
		return ((::System::Int64(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_3CE802D288741D2D_METHOD_1_0CB5CAE55E9B0B9E_OFFSET))(a1);
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

	static ::System::Void Method_1_1A2740E2FE318634(::System::Collections::Generic::List_1<::System::String*>* a1)
	{
		return ((::System::Void(*)(::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_1_3CE802D288741D2D_METHOD_1_1A2740E2FE318634_OFFSET))(a1);
	}
};
