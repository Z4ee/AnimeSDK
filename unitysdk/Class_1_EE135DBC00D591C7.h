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

#define CLASS_1_EE135DBC00D591C7_METHOD_1_025B2FDE3462DCFD_OFFSET UNITYSDK_OFFSET(0x1EBF8080)
#define CLASS_1_EE135DBC00D591C7_METHOD_1_03A562A452BB3B3A_OFFSET UNITYSDK_OFFSET(0x1EC113E0)
#define CLASS_1_EE135DBC00D591C7_METHOD_1_03B1BF2F2F8589FD_1_OFFSET UNITYSDK_OFFSET(0x1EC18320)
#define CLASS_1_EE135DBC00D591C7_METHOD_1_03B1BF2F2F8589FD_2_OFFSET UNITYSDK_OFFSET(0x1EC184A0)
#define CLASS_1_EE135DBC00D591C7_METHOD_1_03B1BF2F2F8589FD_OFFSET UNITYSDK_OFFSET(0x1EC18150)
#define CLASS_1_EE135DBC00D591C7_METHOD_1_059E042AC82D872B_OFFSET UNITYSDK_OFFSET(0x1EC18630)
#define CLASS_1_EE135DBC00D591C7_METHOD_1_07BF3EF95ADEC810_OFFSET UNITYSDK_OFFSET(0x1EC18360)
#define CLASS_1_EE135DBC00D591C7_METHOD_1_0E72B12FCD9FB8F6_1_OFFSET UNITYSDK_OFFSET(0x1EC17AB0)
#define CLASS_1_EE135DBC00D591C7_METHOD_1_0E72B12FCD9FB8F6_OFFSET UNITYSDK_OFFSET(0x1EC0BAA0)
#define CLASS_1_EE135DBC00D591C7_METHOD_1_128774387667156B_OFFSET UNITYSDK_OFFSET(0x1EC17EE0)
#define CLASS_1_EE135DBC00D591C7_METHOD_1_1325B9879381C3A3_OFFSET UNITYSDK_OFFSET(0x1EC0EBE0)
#define CLASS_1_EE135DBC00D591C7_METHOD_1_16927A6C67E95935_OFFSET UNITYSDK_OFFSET(0x1EC19AB0)
#define CLASS_1_EE135DBC00D591C7_METHOD_1_1B28A5EDFDEDF060_OFFSET UNITYSDK_OFFSET(0x1EC17330)
#define CLASS_1_EE135DBC00D591C7_METHOD_1_1E5799D80018268D_OFFSET UNITYSDK_OFFSET(0x1EC10130)
#define CLASS_1_EE135DBC00D591C7_METHOD_1_210F44293C494DF5_OFFSET UNITYSDK_OFFSET(0x1EC1A1B0)
#define CLASS_1_EE135DBC00D591C7_METHOD_1_227DBAAD8A7BA789_OFFSET UNITYSDK_OFFSET(0x1EC1B220)
#define CLASS_1_EE135DBC00D591C7_METHOD_1_250E87B53679C56F_OFFSET UNITYSDK_OFFSET(0x1EC19940)
#define CLASS_1_EE135DBC00D591C7_METHOD_1_279C6340C2CBCEAA_OFFSET UNITYSDK_OFFSET(0x1EC0AC30)
#define CLASS_1_EE135DBC00D591C7_METHOD_1_2C20DFB9E745EF58_1_OFFSET UNITYSDK_OFFSET(0x1EC18EE0)
#define CLASS_1_EE135DBC00D591C7_METHOD_1_2C20DFB9E745EF58_OFFSET UNITYSDK_OFFSET(0x1EC0BD60)
#define CLASS_1_EE135DBC00D591C7_METHOD_1_2DC90EE759C8637B_OFFSET UNITYSDK_OFFSET(0x1EC178C0)
#define CLASS_1_EE135DBC00D591C7_METHOD_1_2F2E9B0FF407CD24_OFFSET UNITYSDK_OFFSET(0x1EC19790)
#define CLASS_1_EE135DBC00D591C7_METHOD_1_31CCAFA024D09758_OFFSET UNITYSDK_OFFSET(0x1EC0ADC0)
#define CLASS_1_EE135DBC00D591C7_METHOD_1_3423AF13020A670D_OFFSET UNITYSDK_OFFSET(0x1EC10B30)
#define CLASS_1_EE135DBC00D591C7_METHOD_1_35EA095E1AFDD9C8_OFFSET UNITYSDK_OFFSET(0x1EC167A0)
#define CLASS_1_EE135DBC00D591C7_METHOD_1_3661F5657C80D3F1_OFFSET UNITYSDK_OFFSET(0x1EC14760)
#define CLASS_1_EE135DBC00D591C7_METHOD_1_3DD11652D58992AB_OFFSET UNITYSDK_OFFSET(0x1EC12900)
#define CLASS_1_EE135DBC00D591C7_METHOD_1_3FA453C1AA748FE0_OFFSET UNITYSDK_OFFSET(0x1EC1AAA0)
#define CLASS_1_EE135DBC00D591C7_METHOD_1_42ACD0E826ABE106_OFFSET UNITYSDK_OFFSET(0x1EC1A520)
#define CLASS_1_EE135DBC00D591C7_METHOD_1_441D6B843CE4FD21_OFFSET UNITYSDK_OFFSET(0x1EC19DA0)
#define CLASS_1_EE135DBC00D591C7_METHOD_1_4546468386FC02E8_OFFSET UNITYSDK_OFFSET(0x1EC0E8D0)
#define CLASS_1_EE135DBC00D591C7_METHOD_1_45A364B4322B2DB3_OFFSET UNITYSDK_OFFSET(0x1EC141B0)
#define CLASS_1_EE135DBC00D591C7_METHOD_1_48A85C2067A778AB_OFFSET UNITYSDK_OFFSET(0x1EC148F0)
#define CLASS_1_EE135DBC00D591C7_METHOD_1_48F426058B8519E6_1_OFFSET UNITYSDK_OFFSET(0x1EC180A0)
#define CLASS_1_EE135DBC00D591C7_METHOD_1_48F426058B8519E6_2_OFFSET UNITYSDK_OFFSET(0x1EC18960)
#define CLASS_1_EE135DBC00D591C7_METHOD_1_48F426058B8519E6_3_OFFSET UNITYSDK_OFFSET(0x1EC18B60)
#define CLASS_1_EE135DBC00D591C7_METHOD_1_48F426058B8519E6_OFFSET UNITYSDK_OFFSET(0x1EC17950)
#define CLASS_1_EE135DBC00D591C7_METHOD_1_4A08AEC15929884A_OFFSET UNITYSDK_OFFSET(0x1EBF4600)
#define CLASS_1_EE135DBC00D591C7_METHOD_1_4C6CBCE9B807B85B_OFFSET UNITYSDK_OFFSET(0x1EC16950)
#define CLASS_1_EE135DBC00D591C7_METHOD_1_4FCB296A66368662_1_OFFSET UNITYSDK_OFFSET(0x1EC0E440)
#define CLASS_1_EE135DBC00D591C7_METHOD_1_4FCB296A66368662_OFFSET UNITYSDK_OFFSET(0x1EBF8A00)
#define CLASS_1_EE135DBC00D591C7_METHOD_1_59343D742BA08444_OFFSET UNITYSDK_OFFSET(0x1EBF1B40)
#define CLASS_1_EE135DBC00D591C7_METHOD_1_5B9D5DDCC5D45226_OFFSET UNITYSDK_OFFSET(0x1EC17CB0)
#define CLASS_1_EE135DBC00D591C7_METHOD_1_5C373407A2F6FEB8_OFFSET UNITYSDK_OFFSET(0x1EC1B520)
#define CLASS_1_EE135DBC00D591C7_METHOD_1_5C993BF6C80631F1_OFFSET UNITYSDK_OFFSET(0x1EC154D0)
#define CLASS_1_EE135DBC00D591C7_METHOD_1_6204C340825EC0AE_1_OFFSET UNITYSDK_OFFSET(0x1EC127F0)
#define CLASS_1_EE135DBC00D591C7_METHOD_1_6204C340825EC0AE_OFFSET UNITYSDK_OFFSET(0x1EC0BF30)
#define CLASS_1_EE135DBC00D591C7_METHOD_1_6513DA170590BB80_OFFSET UNITYSDK_OFFSET(0x1EC1B3C0)
#define CLASS_1_EE135DBC00D591C7_METHOD_1_6AFDC50424099C5A_1_OFFSET UNITYSDK_OFFSET(0x1EC0EC70)
#define CLASS_1_EE135DBC00D591C7_METHOD_1_6AFDC50424099C5A_OFFSET UNITYSDK_OFFSET(0x1EC0EA40)
#define CLASS_1_EE135DBC00D591C7_METHOD_1_6B46CE3E519CE762_OFFSET UNITYSDK_OFFSET(0x1EC17710)
#define CLASS_1_EE135DBC00D591C7_METHOD_1_71BFC8D274DDCFA6_OFFSET UNITYSDK_OFFSET(0x1EC19EE0)
#define CLASS_1_EE135DBC00D591C7_METHOD_1_74D4299F67574807_OFFSET UNITYSDK_OFFSET(0x1EC19C50)
#define CLASS_1_EE135DBC00D591C7_METHOD_1_82D6808AD963BBD6_OFFSET UNITYSDK_OFFSET(0x1EC18D20)
#define CLASS_1_EE135DBC00D591C7_METHOD_1_847158229AF8FD74_OFFSET UNITYSDK_OFFSET(0x1EC16890)
#define CLASS_1_EE135DBC00D591C7_METHOD_1_8F76F5CD5C3840EB_OFFSET UNITYSDK_OFFSET(0x1EC13E60)
#define CLASS_1_EE135DBC00D591C7_METHOD_1_922BB5958C5C1A49_OFFSET UNITYSDK_OFFSET(0x1EC16E40)
#define CLASS_1_EE135DBC00D591C7_METHOD_1_9BA29E2AB0F35FF6_OFFSET UNITYSDK_OFFSET(0x1EC1A6E0)
#define CLASS_1_EE135DBC00D591C7_METHOD_1_9C8CF6D8964383D8_OFFSET UNITYSDK_OFFSET(0x1EC0EAB0)
#define CLASS_1_EE135DBC00D591C7_METHOD_1_9EB31C7564DC7A94_OFFSET UNITYSDK_OFFSET(0x1EC0E6E0)
#define CLASS_1_EE135DBC00D591C7_METHOD_1_A236DAD6ACEE55A6_OFFSET UNITYSDK_OFFSET(0x1EC11BD0)
#define CLASS_1_EE135DBC00D591C7_METHOD_1_A367EE0F970DCB81_OFFSET UNITYSDK_OFFSET(0x1EBFE430)
#define CLASS_1_EE135DBC00D591C7_METHOD_1_A3F279B8B8422FDE_OFFSET UNITYSDK_OFFSET(0x1EC160F0)
#define CLASS_1_EE135DBC00D591C7_METHOD_1_A6B1CFCCE6E12D78_1_OFFSET UNITYSDK_OFFSET(0x1EBF5AC0)
#define CLASS_1_EE135DBC00D591C7_METHOD_1_A6B1CFCCE6E12D78_2_OFFSET UNITYSDK_OFFSET(0x1EC0DA60)
#define CLASS_1_EE135DBC00D591C7_METHOD_1_A6B1CFCCE6E12D78_OFFSET UNITYSDK_OFFSET(0x1EC0B1A0)
#define CLASS_1_EE135DBC00D591C7_METHOD_1_A75EA9766F14185E_OFFSET UNITYSDK_OFFSET(0x1EC0B390)
#define CLASS_1_EE135DBC00D591C7_METHOD_1_A76CF60E466CA5C7_OFFSET UNITYSDK_OFFSET(0x1EBF6750)
#define CLASS_1_EE135DBC00D591C7_METHOD_1_A89B9DE01F5F0D02_OFFSET UNITYSDK_OFFSET(0x1EC13AC0)
#define CLASS_1_EE135DBC00D591C7_METHOD_1_AA2341393FE3C2EA_OFFSET UNITYSDK_OFFSET(0x1EC184E0)
#define CLASS_1_EE135DBC00D591C7_METHOD_1_AB3D15A4986683FA_OFFSET UNITYSDK_OFFSET(0x1EC0EF20)
#define CLASS_1_EE135DBC00D591C7_METHOD_1_AC65C8B42F6BE7A1_OFFSET UNITYSDK_OFFSET(0x1EC16AB0)
#define CLASS_1_EE135DBC00D591C7_METHOD_1_AFFFB1DD57EDD0F7_1_OFFSET UNITYSDK_OFFSET(0x1EC18190)
#define CLASS_1_EE135DBC00D591C7_METHOD_1_AFFFB1DD57EDD0F7_OFFSET UNITYSDK_OFFSET(0x1EC0E1E0)
#define CLASS_1_EE135DBC00D591C7_METHOD_1_B04D31016F68E2B5_OFFSET UNITYSDK_OFFSET(0x1EC0E360)
#define CLASS_1_EE135DBC00D591C7_METHOD_1_B927421694D2ACC3_OFFSET UNITYSDK_OFFSET(0x1EC16A10)
#define CLASS_1_EE135DBC00D591C7_METHOD_1_BAD37AACD435CFB1_OFFSET UNITYSDK_OFFSET(0x1EBF8DC0)
#define CLASS_1_EE135DBC00D591C7_METHOD_1_BBE2D28D8A6AFB06_OFFSET UNITYSDK_OFFSET(0x1EC0BEA0)
#define CLASS_1_EE135DBC00D591C7_METHOD_1_BE07CD2559B8E7E0_OFFSET UNITYSDK_OFFSET(0x1EC0DB70)
#define CLASS_1_EE135DBC00D591C7_METHOD_1_C312FFD0E7E46E35_OFFSET UNITYSDK_OFFSET(0x1EC19050)
#define CLASS_1_EE135DBC00D591C7_METHOD_1_C3D92A0C64DE0E19_OFFSET UNITYSDK_OFFSET(0x1EC0E4D0)
#define CLASS_1_EE135DBC00D591C7_METHOD_1_CF15905798281372_OFFSET UNITYSDK_OFFSET(0x1EC09810)
#define CLASS_1_EE135DBC00D591C7_METHOD_1_D02A7326D9BF6908_OFFSET UNITYSDK_OFFSET(0x1EC19400)
#define CLASS_1_EE135DBC00D591C7_METHOD_1_D4D21C77C274C34E_OFFSET UNITYSDK_OFFSET(0x1EC17530)
#define CLASS_1_EE135DBC00D591C7_METHOD_1_D6A3386BE1E3469E_1_OFFSET UNITYSDK_OFFSET(0x1EC0CE00)
#define CLASS_1_EE135DBC00D591C7_METHOD_1_D6A3386BE1E3469E_OFFSET UNITYSDK_OFFSET(0x1EC0C040)
#define CLASS_1_EE135DBC00D591C7_METHOD_1_D7D0CD092E7E5457_OFFSET UNITYSDK_OFFSET(0x1EC0E540)
#define CLASS_1_EE135DBC00D591C7_METHOD_1_DB009E688B02FC97_OFFSET UNITYSDK_OFFSET(0x1EC146B0)
#define CLASS_1_EE135DBC00D591C7_METHOD_1_E09FA968B724D26B_OFFSET UNITYSDK_OFFSET(0x1EC0DCF0)
#define CLASS_1_EE135DBC00D591C7_METHOD_1_E19B78C5EF1C0E5F_OFFSET UNITYSDK_OFFSET(0x1EC10C00)
#define CLASS_1_EE135DBC00D591C7_METHOD_1_E33D8B19C5DC642D_OFFSET UNITYSDK_OFFSET(0x1EC1B1E0)
#define CLASS_1_EE135DBC00D591C7_METHOD_1_E46988F1CEE7A8FD_OFFSET UNITYSDK_OFFSET(0x1EC09590)
#define CLASS_1_EE135DBC00D591C7_METHOD_1_E8D086304AC1161C_OFFSET UNITYSDK_OFFSET(0x1EC0EF70)
#define CLASS_1_EE135DBC00D591C7_METHOD_1_EAD50F746355DA09_OFFSET UNITYSDK_OFFSET(0x1EC10070)
#define CLASS_1_EE135DBC00D591C7_METHOD_1_EBF44BC910948FDA_OFFSET UNITYSDK_OFFSET(0x1EBFE500)
#define CLASS_1_EE135DBC00D591C7_METHOD_1_ECEA1B518E8985B9_OFFSET UNITYSDK_OFFSET(0x1EC0EB90)
#define CLASS_1_EE135DBC00D591C7_METHOD_1_F08676EA64B106D4_OFFSET UNITYSDK_OFFSET(0x1EC099A0)
#define CLASS_1_EE135DBC00D591C7_METHOD_1_F52D8C29ED22C82E_OFFSET UNITYSDK_OFFSET(0x1EBFE370)
#define CLASS_1_EE135DBC00D591C7_METHOD_1_F5D5DBB4252768D8_OFFSET UNITYSDK_OFFSET(0x1EC16D50)
#define CLASS_1_EE135DBC00D591C7_METHOD_1_F8C6C8EF1171FF09_OFFSET UNITYSDK_OFFSET(0x1EC0EB40)
#define CLASS_1_EE135DBC00D591C7_METHOD_1_FA44D379BF09CE53_OFFSET UNITYSDK_OFFSET(0x1EC0ECF0)

inline static constexpr unsigned int Class_1_EE135DBC00D591C7_TypeDefinitionIndex = 35306;

class Class_1_EE135DBC00D591C7 : public ::System::Object
{
public:
	// static const ::System::String* LCMOEOAOJJO; // 0x0
	// static const ::System::String* GIANHCDJJKL; // 0x0
	// static const ::System::Int32 EAJJEOCPHGD = 0x104; // 0x0

	static ::System::String* Method_1_4FCB296A66368662(::System::String* a1)
	{
		return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_EE135DBC00D591C7_METHOD_1_4FCB296A66368662_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_E46988F1CEE7A8FD(::System::String* a1, ::System::Boolean a2)
	{
		return ((::System::Boolean(*)(::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_EE135DBC00D591C7_METHOD_1_E46988F1CEE7A8FD_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_CF15905798281372(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_EE135DBC00D591C7_METHOD_1_CF15905798281372_OFFSET))(a1);
	}

	static ::System::String* Method_1_279C6340C2CBCEAA(::System::String* a1, ::System::String* a2)
	{
		return ((::System::String*(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_EE135DBC00D591C7_METHOD_1_279C6340C2CBCEAA_OFFSET))(a1, a2);
	}

	static ::System::String* Method_1_31CCAFA024D09758(::System::String* a1, ::System::String* a2)
	{
		return ((::System::String*(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_EE135DBC00D591C7_METHOD_1_31CCAFA024D09758_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_A6B1CFCCE6E12D78(::System::String* a1)
	{
		return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_EE135DBC00D591C7_METHOD_1_A6B1CFCCE6E12D78_OFFSET))(a1);
	}

	static ::System::Void Method_1_A75EA9766F14185E(::System::String* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_EE135DBC00D591C7_METHOD_1_A75EA9766F14185E_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_A367EE0F970DCB81(::System::String* a1)
	{
		return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_EE135DBC00D591C7_METHOD_1_A367EE0F970DCB81_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F52D8C29ED22C82E(::System::String* a1)
	{
		return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_EE135DBC00D591C7_METHOD_1_F52D8C29ED22C82E_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_2C20DFB9E745EF58(::System::String* a1, ::System::String* a2)
	{
		return ((::System::Boolean(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_EE135DBC00D591C7_METHOD_1_2C20DFB9E745EF58_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_BBE2D28D8A6AFB06(::System::String* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_EE135DBC00D591C7_METHOD_1_BBE2D28D8A6AFB06_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_6204C340825EC0AE(::System::String* a1, ::System::String* a2, ::System::Boolean a3, ::System::String* a4)
	{
		return ((::System::Void(*)(::System::String*, ::System::String*, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_EE135DBC00D591C7_METHOD_1_6204C340825EC0AE_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_D6A3386BE1E3469E(::System::IO::DirectoryInfo* a1, ::System::String* a2, ::System::Boolean a3, ::System::Text::RegularExpressions::Regex* a4)
	{
		return ((::System::Void(*)(::System::IO::DirectoryInfo*, ::System::String*, ::System::Boolean, ::System::Text::RegularExpressions::Regex*))((::PBYTE)hIl2Cpp + CLASS_1_EE135DBC00D591C7_METHOD_1_D6A3386BE1E3469E_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Boolean Method_1_A6B1CFCCE6E12D78_1(::System::String* a1)
	{
		return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_EE135DBC00D591C7_METHOD_1_A6B1CFCCE6E12D78_1_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_A6B1CFCCE6E12D78_2(::System::String* a1)
	{
		return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_EE135DBC00D591C7_METHOD_1_A6B1CFCCE6E12D78_2_OFFSET))(a1);
	}

	static ::System::Void Method_1_BE07CD2559B8E7E0(::System::String* a1, ::System::String* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_EE135DBC00D591C7_METHOD_1_BE07CD2559B8E7E0_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_E09FA968B724D26B(::System::String* a1, ::System::String* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_EE135DBC00D591C7_METHOD_1_E09FA968B724D26B_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_EBF44BC910948FDA(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_EE135DBC00D591C7_METHOD_1_EBF44BC910948FDA_OFFSET))(a1);
	}

	static ::System::String* Method_1_4FCB296A66368662_1(::System::String* a1)
	{
		return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_EE135DBC00D591C7_METHOD_1_4FCB296A66368662_1_OFFSET))(a1);
	}

	static ::System::Void Method_1_D7D0CD092E7E5457(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_EE135DBC00D591C7_METHOD_1_D7D0CD092E7E5457_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_9EB31C7564DC7A94(::System::String* a1, ::System::String* a2)
	{
		return ((::System::Boolean(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_EE135DBC00D591C7_METHOD_1_9EB31C7564DC7A94_OFFSET))(a1, a2);
	}

	static ::System::String* Method_1_4546468386FC02E8(::Il2CppArray<::System::String*>* a1)
	{
		return ((::System::String*(*)(::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_1_EE135DBC00D591C7_METHOD_1_4546468386FC02E8_OFFSET))(a1);
	}

	static ::System::String* Method_1_025B2FDE3462DCFD(::System::String* a1)
	{
		return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_EE135DBC00D591C7_METHOD_1_025B2FDE3462DCFD_OFFSET))(a1);
	}

	static ::System::String* Method_1_6AFDC50424099C5A(::System::String* a1)
	{
		return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_EE135DBC00D591C7_METHOD_1_6AFDC50424099C5A_OFFSET))(a1);
	}

	static ::System::String* Method_1_9C8CF6D8964383D8(::System::String* a1, ::System::String* a2)
	{
		return ((::System::String*(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_EE135DBC00D591C7_METHOD_1_9C8CF6D8964383D8_OFFSET))(a1, a2);
	}

	static ::System::String* Method_1_F8C6C8EF1171FF09(::System::String* a1)
	{
		return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_EE135DBC00D591C7_METHOD_1_F8C6C8EF1171FF09_OFFSET))(a1);
	}

	static ::System::String* Method_1_ECEA1B518E8985B9(::System::String* a1)
	{
		return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_EE135DBC00D591C7_METHOD_1_ECEA1B518E8985B9_OFFSET))(a1);
	}

	static ::System::String* Method_1_1325B9879381C3A3(::System::String* a1)
	{
		return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_EE135DBC00D591C7_METHOD_1_1325B9879381C3A3_OFFSET))(a1);
	}

	static ::System::String* Method_1_6AFDC50424099C5A_1(::System::String* a1)
	{
		return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_EE135DBC00D591C7_METHOD_1_6AFDC50424099C5A_1_OFFSET))(a1);
	}

	static ::System::String* Method_1_FA44D379BF09CE53(::System::String* a1)
	{
		return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_EE135DBC00D591C7_METHOD_1_FA44D379BF09CE53_OFFSET))(a1);
	}

	static ::System::String* Method_1_AB3D15A4986683FA(::System::String* a1)
	{
		return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_EE135DBC00D591C7_METHOD_1_AB3D15A4986683FA_OFFSET))(a1);
	}

	static ::System::Collections::Generic::List_1<::System::String*>* Method_1_E8D086304AC1161C(::System::String* a1, ::System::Collections::Generic::List_1<::System::String*>* a2, ::System::Collections::Generic::List_1<::System::String*>* a3, ::System::Boolean a4)
	{
		return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::System::String*, ::System::Collections::Generic::List_1<::System::String*>*, ::System::Collections::Generic::List_1<::System::String*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_EE135DBC00D591C7_METHOD_1_E8D086304AC1161C_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Collections::Generic::List_1<::System::IO::FileInfo*>* Method_1_EAD50F746355DA09(::System::String* a1, ::System::Collections::Generic::HashSet_1<::System::String*>* a2, ::System::Collections::Generic::HashSet_1<::System::String*>* a3, ::System::Boolean a4)
	{
		return ((::System::Collections::Generic::List_1<::System::IO::FileInfo*>*(*)(::System::String*, ::System::Collections::Generic::HashSet_1<::System::String*>*, ::System::Collections::Generic::HashSet_1<::System::String*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_EE135DBC00D591C7_METHOD_1_EAD50F746355DA09_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_1E5799D80018268D(::System::String* a1, ::System::Collections::Generic::List_1<::System::IO::FileInfo*>* a2, ::System::Collections::Generic::HashSet_1<::System::String*>* a3, ::System::Collections::Generic::HashSet_1<::System::String*>* a4, ::System::Boolean a5)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Generic::List_1<::System::IO::FileInfo*>*, ::System::Collections::Generic::HashSet_1<::System::String*>*, ::System::Collections::Generic::HashSet_1<::System::String*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_EE135DBC00D591C7_METHOD_1_1E5799D80018268D_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::System::Collections::Generic::IEnumerable_1<::System::IO::FileInfo*>* Method_1_3423AF13020A670D(::System::String* a1, ::System::Collections::Generic::HashSet_1<::System::String*>* a2, ::System::Collections::Generic::HashSet_1<::System::String*>* a3, ::System::Boolean a4)
	{
		return ((::System::Collections::Generic::IEnumerable_1<::System::IO::FileInfo*>*(*)(::System::String*, ::System::Collections::Generic::HashSet_1<::System::String*>*, ::System::Collections::Generic::HashSet_1<::System::String*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_EE135DBC00D591C7_METHOD_1_3423AF13020A670D_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_E19B78C5EF1C0E5F(::System::String* a1, ::System::Collections::Generic::List_1<::System::String*>*& a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Generic::List_1<::System::String*>*&, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_EE135DBC00D591C7_METHOD_1_E19B78C5EF1C0E5F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_03A562A452BB3B3A(::System::String* a1, ::System::Collections::Generic::List_1<::System::IO::DirectoryInfo*>*& a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Generic::List_1<::System::IO::DirectoryInfo*>*&, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_EE135DBC00D591C7_METHOD_1_03A562A452BB3B3A_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_A236DAD6ACEE55A6(::System::String* a1, ::System::String* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_EE135DBC00D591C7_METHOD_1_A236DAD6ACEE55A6_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_6204C340825EC0AE_1(::System::String* a1, ::System::String* a2, ::System::Boolean a3, ::System::String* a4)
	{
		return ((::System::Void(*)(::System::String*, ::System::String*, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_EE135DBC00D591C7_METHOD_1_6204C340825EC0AE_1_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_D6A3386BE1E3469E_1(::System::IO::DirectoryInfo* a1, ::System::String* a2, ::System::Boolean a3, ::System::Text::RegularExpressions::Regex* a4)
	{
		return ((::System::Void(*)(::System::IO::DirectoryInfo*, ::System::String*, ::System::Boolean, ::System::Text::RegularExpressions::Regex*))((::PBYTE)hIl2Cpp + CLASS_1_EE135DBC00D591C7_METHOD_1_D6A3386BE1E3469E_1_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_3DD11652D58992AB(::System::String* a1, ::System::String* a2, ::System::Boolean a3, ::System::Boolean a4)
	{
		return ((::System::Void(*)(::System::String*, ::System::String*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_EE135DBC00D591C7_METHOD_1_3DD11652D58992AB_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_BAD37AACD435CFB1(::System::String* a1, ::System::String* a2, ::System::Action_3<::System::String*, ::System::String*, ::System::String*>* a3, ::System::Action_3<::System::String*, ::System::String*, ::System::String*>* a4, ::System::Boolean a5, ::System::Boolean a6)
	{
		return ((::System::Void(*)(::System::String*, ::System::String*, ::System::Action_3<::System::String*, ::System::String*, ::System::String*>*, ::System::Action_3<::System::String*, ::System::String*, ::System::String*>*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_EE135DBC00D591C7_METHOD_1_BAD37AACD435CFB1_OFFSET))(a1, a2, a3, a4, a5, a6);
	}

	static ::System::Void Method_1_8F76F5CD5C3840EB(::System::String* a1, ::System::String* a2, ::System::String* a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_EE135DBC00D591C7_METHOD_1_8F76F5CD5C3840EB_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_45A364B4322B2DB3(::System::String* a1, ::System::String* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_EE135DBC00D591C7_METHOD_1_45A364B4322B2DB3_OFFSET))(a1, a2, a3);
	}

	static ::System::String* Method_1_DB009E688B02FC97()
	{
		return ((::System::String*(*)())((::PBYTE)hIl2Cpp + CLASS_1_EE135DBC00D591C7_METHOD_1_DB009E688B02FC97_OFFSET))();
	}

	static ::System::Void Method_1_3661F5657C80D3F1(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_EE135DBC00D591C7_METHOD_1_3661F5657C80D3F1_OFFSET))(a1);
	}

	static ::System::Void Method_1_48A85C2067A778AB(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_EE135DBC00D591C7_METHOD_1_48A85C2067A778AB_OFFSET))(a1);
	}

	static ::System::Void Method_1_5C993BF6C80631F1(::System::String* a1, ::Il2CppArray<::System::String*>* a2)
	{
		return ((::System::Void(*)(::System::String*, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_1_EE135DBC00D591C7_METHOD_1_5C993BF6C80631F1_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_A3F279B8B8422FDE(::System::String* a1, ::System::Collections::Generic::IList_1<::System::String*>* a2)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Generic::IList_1<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_1_EE135DBC00D591C7_METHOD_1_A3F279B8B8422FDE_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_59343D742BA08444(::System::String* a1)
	{
		return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_EE135DBC00D591C7_METHOD_1_59343D742BA08444_OFFSET))(a1);
	}

	static ::System::String* Method_1_A76CF60E466CA5C7(::System::String* a1, ::System::Boolean a2)
	{
		return ((::System::String*(*)(::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_EE135DBC00D591C7_METHOD_1_A76CF60E466CA5C7_OFFSET))(a1, a2);
	}

	static ::System::String* Method_1_35EA095E1AFDD9C8()
	{
		return ((::System::String*(*)())((::PBYTE)hIl2Cpp + CLASS_1_EE135DBC00D591C7_METHOD_1_35EA095E1AFDD9C8_OFFSET))();
	}

	static ::System::Int64 Method_1_A89B9DE01F5F0D02(::System::String* a1)
	{
		return ((::System::Int64(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_EE135DBC00D591C7_METHOD_1_A89B9DE01F5F0D02_OFFSET))(a1);
	}

	static ::System::String* Method_1_847158229AF8FD74(::System::String* a1)
	{
		return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_EE135DBC00D591C7_METHOD_1_847158229AF8FD74_OFFSET))(a1);
	}

	static ::System::String* Method_1_C3D92A0C64DE0E19(::System::String* a1)
	{
		return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_EE135DBC00D591C7_METHOD_1_C3D92A0C64DE0E19_OFFSET))(a1);
	}

	static ::System::String* Method_1_4C6CBCE9B807B85B(::System::String* a1)
	{
		return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_EE135DBC00D591C7_METHOD_1_4C6CBCE9B807B85B_OFFSET))(a1);
	}

	static ::System::Text::StringBuilder* Method_1_B927421694D2ACC3(::System::Text::StringBuilder* a1)
	{
		return ((::System::Text::StringBuilder*(*)(::System::Text::StringBuilder*))((::PBYTE)hIl2Cpp + CLASS_1_EE135DBC00D591C7_METHOD_1_B927421694D2ACC3_OFFSET))(a1);
	}

	static ::System::String* Method_1_4A08AEC15929884A(::System::String* a1, ::System::String* a2)
	{
		return ((::System::String*(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_EE135DBC00D591C7_METHOD_1_4A08AEC15929884A_OFFSET))(a1, a2);
	}

	static ::System::String* Method_1_F5D5DBB4252768D8(::System::String* a1, ::Il2CppArray<::System::String*>* a2)
	{
		return ((::System::String*(*)(::System::String*, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_1_EE135DBC00D591C7_METHOD_1_F5D5DBB4252768D8_OFFSET))(a1, a2);
	}

	static ::System::String* Method_1_922BB5958C5C1A49(::System::String* a1, ::System::Collections::Generic::IEnumerable_1<::System::String*>* a2)
	{
		return ((::System::String*(*)(::System::String*, ::System::Collections::Generic::IEnumerable_1<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_1_EE135DBC00D591C7_METHOD_1_922BB5958C5C1A49_OFFSET))(a1, a2);
	}

	static ::System::String* Method_1_1B28A5EDFDEDF060(::System::String* a1, ::System::String* a2)
	{
		return ((::System::String*(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_EE135DBC00D591C7_METHOD_1_1B28A5EDFDEDF060_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_D4D21C77C274C34E(::System::String* a1, ::System::String* a2)
	{
		return ((::System::Boolean(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_EE135DBC00D591C7_METHOD_1_D4D21C77C274C34E_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_6B46CE3E519CE762(::System::Char a1)
	{
		return ((::System::Boolean(*)(::System::Char))((::PBYTE)hIl2Cpp + CLASS_1_EE135DBC00D591C7_METHOD_1_6B46CE3E519CE762_OFFSET))(a1);
	}

	static ::System::Text::StringBuilder* Method_1_AC65C8B42F6BE7A1(::System::Text::StringBuilder* a1, ::System::String* a2)
	{
		return ((::System::Text::StringBuilder*(*)(::System::Text::StringBuilder*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_EE135DBC00D591C7_METHOD_1_AC65C8B42F6BE7A1_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_2DC90EE759C8637B(::System::String* a1)
	{
		return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_EE135DBC00D591C7_METHOD_1_2DC90EE759C8637B_OFFSET))(a1);
	}

	static ::System::Void Method_1_0E72B12FCD9FB8F6(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_EE135DBC00D591C7_METHOD_1_0E72B12FCD9FB8F6_OFFSET))(a1);
	}

	static ::System::Void Method_1_48F426058B8519E6(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_EE135DBC00D591C7_METHOD_1_48F426058B8519E6_OFFSET))(a1);
	}

	static ::System::Void Method_1_0E72B12FCD9FB8F6_1(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_EE135DBC00D591C7_METHOD_1_0E72B12FCD9FB8F6_1_OFFSET))(a1);
	}

	static ::System::Void Method_1_5B9D5DDCC5D45226(::System::String* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_EE135DBC00D591C7_METHOD_1_5B9D5DDCC5D45226_OFFSET))(a1, a2);
	}

	static ::System::String* Method_1_128774387667156B()
	{
		return ((::System::String*(*)())((::PBYTE)hIl2Cpp + CLASS_1_EE135DBC00D591C7_METHOD_1_128774387667156B_OFFSET))();
	}

	static ::System::Boolean Method_1_B04D31016F68E2B5(::System::String* a1, ::System::String* a2, ::System::Boolean a3)
	{
		return ((::System::Boolean(*)(::System::String*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_EE135DBC00D591C7_METHOD_1_B04D31016F68E2B5_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_48F426058B8519E6_1(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_EE135DBC00D591C7_METHOD_1_48F426058B8519E6_1_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_AFFFB1DD57EDD0F7(::System::String* a1, ::System::Boolean a2)
	{
		return ((::System::Boolean(*)(::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_EE135DBC00D591C7_METHOD_1_AFFFB1DD57EDD0F7_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_03B1BF2F2F8589FD(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_EE135DBC00D591C7_METHOD_1_03B1BF2F2F8589FD_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_AFFFB1DD57EDD0F7_1(::System::String* a1, ::System::Boolean a2)
	{
		return ((::System::Boolean(*)(::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_EE135DBC00D591C7_METHOD_1_AFFFB1DD57EDD0F7_1_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_03B1BF2F2F8589FD_1(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_EE135DBC00D591C7_METHOD_1_03B1BF2F2F8589FD_1_OFFSET))(a1);
	}

	static ::System::Void Method_1_07BF3EF95ADEC810(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_EE135DBC00D591C7_METHOD_1_07BF3EF95ADEC810_OFFSET))(a1);
	}

	static ::System::Void Method_1_03B1BF2F2F8589FD_2(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_EE135DBC00D591C7_METHOD_1_03B1BF2F2F8589FD_2_OFFSET))(a1);
	}

	static ::System::Void Method_1_AA2341393FE3C2EA(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_EE135DBC00D591C7_METHOD_1_AA2341393FE3C2EA_OFFSET))(a1);
	}

	static ::Il2CppArray<::System::String*>* Method_1_059E042AC82D872B(::System::String* a1, ::System::String* a2, ::System::String* a3)
	{
		return ((::Il2CppArray<::System::String*>*(*)(::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_EE135DBC00D591C7_METHOD_1_059E042AC82D872B_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_48F426058B8519E6_2(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_EE135DBC00D591C7_METHOD_1_48F426058B8519E6_2_OFFSET))(a1);
	}

	static ::System::Void Method_1_48F426058B8519E6_3(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_EE135DBC00D591C7_METHOD_1_48F426058B8519E6_3_OFFSET))(a1);
	}

	static ::System::String* Method_1_82D6808AD963BBD6(::System::String* a1)
	{
		return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_EE135DBC00D591C7_METHOD_1_82D6808AD963BBD6_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_2C20DFB9E745EF58_1(::System::String* a1, ::System::String* a2)
	{
		return ((::System::Boolean(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_EE135DBC00D591C7_METHOD_1_2C20DFB9E745EF58_1_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_C312FFD0E7E46E35(::System::String* a1, ::System::Collections::Generic::HashSet_1<::System::String*>* a2)
	{
		return ((::System::Boolean(*)(::System::String*, ::System::Collections::Generic::HashSet_1<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_1_EE135DBC00D591C7_METHOD_1_C312FFD0E7E46E35_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_D02A7326D9BF6908(::System::String* a1, ::System::Collections::Generic::HashSet_1<::System::UInt32>* a2)
	{
		return ((::System::Boolean(*)(::System::String*, ::System::Collections::Generic::HashSet_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_EE135DBC00D591C7_METHOD_1_D02A7326D9BF6908_OFFSET))(a1, a2);
	}

	static ::Il2CppArray<::System::Byte>* Method_1_2F2E9B0FF407CD24(::System::String* a1)
	{
		return ((::Il2CppArray<::System::Byte>*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_EE135DBC00D591C7_METHOD_1_2F2E9B0FF407CD24_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_250E87B53679C56F(::System::String* a1, ::System::String* a2)
	{
		return ((::System::Boolean(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_EE135DBC00D591C7_METHOD_1_250E87B53679C56F_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_16927A6C67E95935(::System::String* a1, ::System::String* a2)
	{
		return ((::System::Boolean(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_EE135DBC00D591C7_METHOD_1_16927A6C67E95935_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_74D4299F67574807(::System::String* a1, ::Il2CppArray<::System::Byte>* a2)
	{
		return ((::System::Boolean(*)(::System::String*, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + CLASS_1_EE135DBC00D591C7_METHOD_1_74D4299F67574807_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_441D6B843CE4FD21(::System::IO::FileStream* a1, ::System::Byte a2)
	{
		return ((::System::Boolean(*)(::System::IO::FileStream*, ::System::Byte))((::PBYTE)hIl2Cpp + CLASS_1_EE135DBC00D591C7_METHOD_1_441D6B843CE4FD21_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_71BFC8D274DDCFA6(::System::IO::FileStream* a1, ::System::Byte& a2)
	{
		return ((::System::Boolean(*)(::System::IO::FileStream*, ::System::Byte&))((::PBYTE)hIl2Cpp + CLASS_1_EE135DBC00D591C7_METHOD_1_71BFC8D274DDCFA6_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_210F44293C494DF5(::System::IO::FileStream* a1, ::Il2CppArray<::System::Byte>* a2, ::System::Int32 a3, ::System::Int32 a4)
	{
		return ((::System::Boolean(*)(::System::IO::FileStream*, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_EE135DBC00D591C7_METHOD_1_210F44293C494DF5_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Int32 Method_1_42ACD0E826ABE106(::System::IO::FileStream* a1, ::Il2CppArray<::System::Byte>* a2, ::System::Int32 a3, ::System::Int32 a4)
	{
		return ((::System::Int32(*)(::System::IO::FileStream*, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_EE135DBC00D591C7_METHOD_1_42ACD0E826ABE106_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Boolean Method_1_9BA29E2AB0F35FF6(::System::String* a1, ::Il2CppArray<::System::Byte>* a2, ::System::Boolean a3)
	{
		return ((::System::Boolean(*)(::System::String*, ::Il2CppArray<::System::Byte>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_EE135DBC00D591C7_METHOD_1_9BA29E2AB0F35FF6_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_F08676EA64B106D4(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_EE135DBC00D591C7_METHOD_1_F08676EA64B106D4_OFFSET))(a1);
	}

	static ::System::Int64 Method_1_3FA453C1AA748FE0(::System::String* a1)
	{
		return ((::System::Int64(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_EE135DBC00D591C7_METHOD_1_3FA453C1AA748FE0_OFFSET))(a1);
	}

	static ::System::String* Method_1_E33D8B19C5DC642D(::System::String* a1)
	{
		return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_EE135DBC00D591C7_METHOD_1_E33D8B19C5DC642D_OFFSET))(a1);
	}

	static ::System::String* Method_1_227DBAAD8A7BA789(::System::String* a1)
	{
		return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_EE135DBC00D591C7_METHOD_1_227DBAAD8A7BA789_OFFSET))(a1);
	}

	static ::System::String* Method_1_6513DA170590BB80(::System::String* a1)
	{
		return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_EE135DBC00D591C7_METHOD_1_6513DA170590BB80_OFFSET))(a1);
	}

	static ::System::Void Method_1_5C373407A2F6FEB8(::System::Collections::Generic::List_1<::System::String*>* a1)
	{
		return ((::System::Void(*)(::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_1_EE135DBC00D591C7_METHOD_1_5C373407A2F6FEB8_OFFSET))(a1);
	}
};
