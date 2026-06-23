#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_BE149A7D6310B037.h"
#include "unitysdk/Class_2_787A64751D1D3DEF_Enum_3_65794A143130A3C8.h"
#include "unitysdk/Class_2_787A64751D1D3DEF_Enum_3_9D264987D6887BD1.h"
#include "unitysdk/Enum_3_DB663931210BBC27_1.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_1_0D6706375CDAAE8C;
class Class_1_1EA8435E138F2E03;
class Class_2_1A39E1B51756BF41;
class Class_2_208CC9941471731A_125;
class Class_2_208CC9941471731A_566;
class Class_2_208CC9941471731A_690;
class Class_2_208CC9941471731A_827;
class Class_2_6913AEABC08EF711;
class Class_3_4DE9364B75C28A4E;
class Class_3_7A7210476589789D_2;
class Class_3_9AEDFAB3A28506C0;
class Class_3_AE02BC8285203464_1;
namespace MoleMole { class UIBaseController; }
namespace MoleMole { class UIHadalZone_Common_RatingRowContext; }
namespace System { class EventArgs; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class Class_1_8CC15846339E7FB0;

#define CLASS_2_787A64751D1D3DEF_METHOD_2_06FCB1509E644D25_OFFSET UNITYSDK_OFFSET(0x12829390)
#define CLASS_2_787A64751D1D3DEF_METHOD_2_088DB9BC4B2BC2CF_OFFSET UNITYSDK_OFFSET(0x12824F80)
#define CLASS_2_787A64751D1D3DEF_METHOD_2_08971C34FD4CBAAA_OFFSET UNITYSDK_OFFSET(0x128251B0)
#define CLASS_2_787A64751D1D3DEF_METHOD_2_0A32ABCEA39CED97_OFFSET UNITYSDK_OFFSET(0x12826350)
#define CLASS_2_787A64751D1D3DEF_METHOD_2_0D741EBC45712C5A_OFFSET UNITYSDK_OFFSET(0x12827110)
#define CLASS_2_787A64751D1D3DEF_METHOD_2_0E37EDA63E251A06_1_OFFSET UNITYSDK_OFFSET(0x1282B230)
#define CLASS_2_787A64751D1D3DEF_METHOD_2_0E37EDA63E251A06_OFFSET UNITYSDK_OFFSET(0x12827380)
#define CLASS_2_787A64751D1D3DEF_METHOD_2_0F038B7F18CABFA4_OFFSET UNITYSDK_OFFSET(0x1282A910)
#define CLASS_2_787A64751D1D3DEF_METHOD_2_114781D79D91EA39_OFFSET UNITYSDK_OFFSET(0x1282BB00)
#define CLASS_2_787A64751D1D3DEF_METHOD_2_1185198FEB39C83B_OFFSET UNITYSDK_OFFSET(0x12825880)
#define CLASS_2_787A64751D1D3DEF_METHOD_2_1659BCB6D1A9FC34_OFFSET UNITYSDK_OFFSET(0x12829DF0)
#define CLASS_2_787A64751D1D3DEF_METHOD_2_1B5993698C4504FF_OFFSET UNITYSDK_OFFSET(0x128275C0)
#define CLASS_2_787A64751D1D3DEF_METHOD_2_24D44677E906F110_OFFSET UNITYSDK_OFFSET(0x128227B0)
#define CLASS_2_787A64751D1D3DEF_METHOD_2_25C0BB32EF98DD1D_1_OFFSET UNITYSDK_OFFSET(0x128296E0)
#define CLASS_2_787A64751D1D3DEF_METHOD_2_25C0BB32EF98DD1D_2_OFFSET UNITYSDK_OFFSET(0x1282A490)
#define CLASS_2_787A64751D1D3DEF_METHOD_2_25C0BB32EF98DD1D_OFFSET UNITYSDK_OFFSET(0x128285F0)
#define CLASS_2_787A64751D1D3DEF_METHOD_2_283DA224BE06DA9F_OFFSET UNITYSDK_OFFSET(0x12821A90)
#define CLASS_2_787A64751D1D3DEF_METHOD_2_33E2FA8E6403B93D_OFFSET UNITYSDK_OFFSET(0x12823740)
#define CLASS_2_787A64751D1D3DEF_METHOD_2_351423CB72A37212_1_OFFSET UNITYSDK_OFFSET(0x1282C360)
#define CLASS_2_787A64751D1D3DEF_METHOD_2_351423CB72A37212_OFFSET UNITYSDK_OFFSET(0x12829450)
#define CLASS_2_787A64751D1D3DEF_METHOD_2_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x12829350)
#define CLASS_2_787A64751D1D3DEF_METHOD_2_414CEA97B0C3A8D6_OFFSET UNITYSDK_OFFSET(0x12822800)
#define CLASS_2_787A64751D1D3DEF_METHOD_2_41A074549EF25F63_OFFSET UNITYSDK_OFFSET(0x12827FA0)
#define CLASS_2_787A64751D1D3DEF_METHOD_2_465CE7764E57D661_OFFSET UNITYSDK_OFFSET(0x128256F0)
#define CLASS_2_787A64751D1D3DEF_METHOD_2_4721D078C82DB787_1_OFFSET UNITYSDK_OFFSET(0x1282C3C0)
#define CLASS_2_787A64751D1D3DEF_METHOD_2_4721D078C82DB787_OFFSET UNITYSDK_OFFSET(0x12828DC0)
#define CLASS_2_787A64751D1D3DEF_METHOD_2_4C07A7C191589751_OFFSET UNITYSDK_OFFSET(0x128280E0)
#define CLASS_2_787A64751D1D3DEF_METHOD_2_4F912580154405BB_1_OFFSET UNITYSDK_OFFSET(0x12825F00)
#define CLASS_2_787A64751D1D3DEF_METHOD_2_4F912580154405BB_OFFSET UNITYSDK_OFFSET(0x12825650)
#define CLASS_2_787A64751D1D3DEF_METHOD_2_51B37F44CBD968A6_OFFSET UNITYSDK_OFFSET(0x12825AB0)
#define CLASS_2_787A64751D1D3DEF_METHOD_2_5770A94A805EA30B_OFFSET UNITYSDK_OFFSET(0x12827920)
#define CLASS_2_787A64751D1D3DEF_METHOD_2_578F6AC474B9B5C6_OFFSET UNITYSDK_OFFSET(0x12828A80)
#define CLASS_2_787A64751D1D3DEF_METHOD_2_5B81D4C788C5B0B8_OFFSET UNITYSDK_OFFSET(0x1282B3E0)
#define CLASS_2_787A64751D1D3DEF_METHOD_2_607458E5B15FB833_OFFSET UNITYSDK_OFFSET(0x12824120)
#define CLASS_2_787A64751D1D3DEF_METHOD_2_6C6764973A21A175_OFFSET UNITYSDK_OFFSET(0x1282C540)
#define CLASS_2_787A64751D1D3DEF_METHOD_2_718A7B0C5F22E48B_OFFSET UNITYSDK_OFFSET(0x12829180)
#define CLASS_2_787A64751D1D3DEF_METHOD_2_739DB9F245C7FAD0_OFFSET UNITYSDK_OFFSET(0x12821D60)
#define CLASS_2_787A64751D1D3DEF_METHOD_2_747C1E8E78B66771_OFFSET UNITYSDK_OFFSET(0x128269E0)
#define CLASS_2_787A64751D1D3DEF_METHOD_2_74FFCDA8E45BC6AC_1_OFFSET UNITYSDK_OFFSET(0x12826D00)
#define CLASS_2_787A64751D1D3DEF_METHOD_2_74FFCDA8E45BC6AC_OFFSET UNITYSDK_OFFSET(0x128223A0)
#define CLASS_2_787A64751D1D3DEF_METHOD_2_8219F6E7155E8482_OFFSET UNITYSDK_OFFSET(0x12823030)
#define CLASS_2_787A64751D1D3DEF_METHOD_2_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x12828CD0)
#define CLASS_2_787A64751D1D3DEF_METHOD_2_9B06BEA621946036_OFFSET UNITYSDK_OFFSET(0x12822990)
#define CLASS_2_787A64751D1D3DEF_METHOD_2_9E79885B9964A170_OFFSET UNITYSDK_OFFSET(0x12828480)
#define CLASS_2_787A64751D1D3DEF_METHOD_2_A583248D0B8C6672_OFFSET UNITYSDK_OFFSET(0x12823ED0)
#define CLASS_2_787A64751D1D3DEF_METHOD_2_A7957CDB95DAF72B_OFFSET UNITYSDK_OFFSET(0x12826570)
#define CLASS_2_787A64751D1D3DEF_METHOD_2_A95EA68172A65F7A_OFFSET UNITYSDK_OFFSET(0x12828420)
#define CLASS_2_787A64751D1D3DEF_METHOD_2_AEBB6B9FF3174063_OFFSET UNITYSDK_OFFSET(0x12822B30)
#define CLASS_2_787A64751D1D3DEF_METHOD_2_B01C9084C23C9EA2_OFFSET UNITYSDK_OFFSET(0x12827E80)
#define CLASS_2_787A64751D1D3DEF_METHOD_2_B59C133FB4E953A3_OFFSET UNITYSDK_OFFSET(0x128294B0)
#define CLASS_2_787A64751D1D3DEF_METHOD_2_B5CC4B765EDE80DB_OFFSET UNITYSDK_OFFSET(0x12825210)
#define CLASS_2_787A64751D1D3DEF_METHOD_2_C4297EFF013E4E78_OFFSET UNITYSDK_OFFSET(0x128253D0)
#define CLASS_2_787A64751D1D3DEF_METHOD_2_C94BFB8159DBE554_OFFSET UNITYSDK_OFFSET(0x12822AD0)
#define CLASS_2_787A64751D1D3DEF_METHOD_2_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x12827530)
#define CLASS_2_787A64751D1D3DEF_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x12825660)
#define CLASS_2_787A64751D1D3DEF_METHOD_2_CF8E5A02EC282A9B_OFFSET UNITYSDK_OFFSET(0x12829B60)
#define CLASS_2_787A64751D1D3DEF_METHOD_2_CFFA0A95DE270448_OFFSET UNITYSDK_OFFSET(0x128254B0)
#define CLASS_2_787A64751D1D3DEF_METHOD_2_D20BF56E36607D54_OFFSET UNITYSDK_OFFSET(0x128285A0)
#define CLASS_2_787A64751D1D3DEF_METHOD_2_D515D01DBAF10ECF_OFFSET UNITYSDK_OFFSET(0x12825F10)
#define CLASS_2_787A64751D1D3DEF_METHOD_2_D6D5C2F25B29E6BD_OFFSET UNITYSDK_OFFSET(0x1282BB10)
#define CLASS_2_787A64751D1D3DEF_METHOD_2_D87E96A360DBCFAD_OFFSET UNITYSDK_OFFSET(0x12828F40)
#define CLASS_2_787A64751D1D3DEF_METHOD_2_DB63E118B6599003_OFFSET UNITYSDK_OFFSET(0x12826B10)
#define CLASS_2_787A64751D1D3DEF_METHOD_2_F14CC5041C6DBBF6_OFFSET UNITYSDK_OFFSET(0x12827EF0)
#define CLASS_2_787A64751D1D3DEF_METHOD_2_F39234F2606D8D97_OFFSET UNITYSDK_OFFSET(0x12824010)
#define CLASS_2_787A64751D1D3DEF__CCTOR_OFFSET UNITYSDK_OFFSET(0x12822360)
#define CLASS_2_787A64751D1D3DEF__CTOR_OFFSET UNITYSDK_OFFSET(0x12822030)

inline static constexpr unsigned int Class_2_787A64751D1D3DEF_TypeDefinitionIndex = 78260;

class Class_2_787A64751D1D3DEF : public ::Class_1_BE149A7D6310B037
{
public:
	static ::System::String** StaticGet_Field_2_7()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_2_787A64751D1D3DEF_TypeDefinitionIndex)->GetStaticField(0x493E0);
	}
	::System::Collections::Generic::List_1<::System::UInt32>* Field_2_14; // 0x18
	::System::Threading::CancellationToken Field_2_4; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_2_6913AEABC08EF711*>* Field_2_17; // 0x28
	::System::Collections::Generic::List_1<::Class_2_208CC9941471731A_566*>* Field_2_1; // 0x30
	::System::Collections::Generic::List_1<::System::UInt32>* Field_2_8; // 0x38
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_2_6913AEABC08EF711*>*>* Field_2_15; // 0x40
	::System::Collections::Generic::List_1<::Class_3_7A7210476589789D_2*>* Field_2_13; // 0x48
	::System::Collections::Generic::List_1<::System::UInt32>* Field_2_9; // 0x50
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_2_6913AEABC08EF711*>*>* Field_2_16; // 0x58
	::System::Collections::Generic::List_1<::System::UInt32>* Field_2_11; // 0x60
	::Class_2_208CC9941471731A_125* Field_2_2; // 0x68
	::System::Collections::Generic::List_1<::Class_3_4DE9364B75C28A4E*>* Field_2_12; // 0x70
	::System::Collections::Generic::List_1<::System::UInt32>* Field_2_10; // 0x78
	::System::Collections::Generic::List_1<::System::Int32>* Field_2_0; // 0x80
	::System::Boolean Field_2_5; // 0x88
	::System::Boolean Field_2_3; // 0x89
	::System::Boolean Field_2_6; // 0x8A

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_787A64751D1D3DEF__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_787A64751D1D3DEF__CCTOR_OFFSET))();
	}

	::System::Void Method_2_283DA224BE06DA9F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_787A64751D1D3DEF_METHOD_2_283DA224BE06DA9F_OFFSET))(this);
	}

	::System::Void Method_2_739DB9F245C7FAD0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_787A64751D1D3DEF_METHOD_2_739DB9F245C7FAD0_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Int32>* Method_2_74FFCDA8E45BC6AC()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_787A64751D1D3DEF_METHOD_2_74FFCDA8E45BC6AC_OFFSET))(this);
	}

	::System::Boolean Method_2_24D44677E906F110(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_787A64751D1D3DEF_METHOD_2_24D44677E906F110_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::Class_2_208CC9941471731A_827*>* Method_2_414CEA97B0C3A8D6(::System::Int32 a1)
	{
		return ((::System::Collections::Generic::List_1<::Class_2_208CC9941471731A_827*>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_787A64751D1D3DEF_METHOD_2_414CEA97B0C3A8D6_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_9B06BEA621946036(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_787A64751D1D3DEF_METHOD_2_9B06BEA621946036_OFFSET))(this, a1);
	}

	::System::Void Method_2_AEBB6B9FF3174063(::System::EventArgs* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_2_787A64751D1D3DEF_METHOD_2_AEBB6B9FF3174063_OFFSET))(this, a1);
	}

	::System::Void Method_2_33E2FA8E6403B93D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_787A64751D1D3DEF_METHOD_2_33E2FA8E6403B93D_OFFSET))(this);
	}

	::System::Void Method_2_607458E5B15FB833(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_787A64751D1D3DEF_METHOD_2_607458E5B15FB833_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::Foundation::AssetPath>* Method_2_08971C34FD4CBAAA(::System::Int32 a1)
	{
		return ((::System::Collections::Generic::List_1<::Foundation::AssetPath>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_787A64751D1D3DEF_METHOD_2_08971C34FD4CBAAA_OFFSET))(this, a1);
	}

	::Class_2_6913AEABC08EF711* Method_2_C4297EFF013E4E78(::System::Int32 a1)
	{
		return ((::Class_2_6913AEABC08EF711*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_787A64751D1D3DEF_METHOD_2_C4297EFF013E4E78_OFFSET))(this, a1);
	}

	::System::Void Method_2_CFFA0A95DE270448(::Enum_3_DB663931210BBC27_1 a1, ::System::Collections::Generic::List_1<::System::Int32>* a2, ::System::Action_1<::System::Boolean>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_DB663931210BBC27_1, ::System::Collections::Generic::List_1<::System::Int32>*, ::System::Action_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + CLASS_2_787A64751D1D3DEF_METHOD_2_CFFA0A95DE270448_OFFSET))(this, a1, a2, a3);
	}

	::System::Collections::Generic::IReadOnlyList_1<::Class_3_7A7210476589789D_2*>* Method_2_4F912580154405BB()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::Class_3_7A7210476589789D_2*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_787A64751D1D3DEF_METHOD_2_4F912580154405BB_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_787A64751D1D3DEF_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::String* Method_2_465CE7764E57D661()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_787A64751D1D3DEF_METHOD_2_465CE7764E57D661_OFFSET))(this);
	}

	::System::ValueTuple_2<::System::Int32, ::System::Int32> Method_2_1185198FEB39C83B()
	{
		return ((::System::ValueTuple_2<::System::Int32, ::System::Int32>(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_787A64751D1D3DEF_METHOD_2_1185198FEB39C83B_OFFSET))(this);
	}

	::System::Collections::Generic::IReadOnlyList_1<::Class_3_4DE9364B75C28A4E*>* Method_2_4F912580154405BB_1()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::Class_3_4DE9364B75C28A4E*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_787A64751D1D3DEF_METHOD_2_4F912580154405BB_1_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Int32>* Method_2_B5CC4B765EDE80DB(::System::Int32 a1)
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_787A64751D1D3DEF_METHOD_2_B5CC4B765EDE80DB_OFFSET))(this, a1);
	}

	::System::Void Method_2_D515D01DBAF10ECF(::Class_2_787A64751D1D3DEF_Enum_3_9D264987D6887BD1 a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_787A64751D1D3DEF_Enum_3_9D264987D6887BD1, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_787A64751D1D3DEF_METHOD_2_D515D01DBAF10ECF_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Boolean Method_2_0A32ABCEA39CED97(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_787A64751D1D3DEF_METHOD_2_0A32ABCEA39CED97_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_A7957CDB95DAF72B()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_787A64751D1D3DEF_METHOD_2_A7957CDB95DAF72B_OFFSET))(this);
	}

	::System::Int32 Method_2_747C1E8E78B66771()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_787A64751D1D3DEF_METHOD_2_747C1E8E78B66771_OFFSET))(this);
	}

	::System::Boolean Method_2_F39234F2606D8D97()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_787A64751D1D3DEF_METHOD_2_F39234F2606D8D97_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Class_2_208CC9941471731A_827*>* Method_2_DB63E118B6599003()
	{
		return ((::System::Collections::Generic::List_1<::Class_2_208CC9941471731A_827*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_787A64751D1D3DEF_METHOD_2_DB63E118B6599003_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Int32>* Method_2_74FFCDA8E45BC6AC_1()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_787A64751D1D3DEF_METHOD_2_74FFCDA8E45BC6AC_1_OFFSET))(this);
	}

	::System::Boolean Method_2_0D741EBC45712C5A(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_787A64751D1D3DEF_METHOD_2_0D741EBC45712C5A_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_0E37EDA63E251A06(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_787A64751D1D3DEF_METHOD_2_0E37EDA63E251A06_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_787A64751D1D3DEF_METHOD_2_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Method_2_1B5993698C4504FF(::System::UInt32 a1, ::Class_1_8CC15846339E7FB0<::Class_3_4DE9364B75C28A4E*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Class_1_8CC15846339E7FB0<::Class_3_4DE9364B75C28A4E*>*))((::PBYTE)hIl2Cpp + CLASS_2_787A64751D1D3DEF_METHOD_2_1B5993698C4504FF_OFFSET))(this, a1, a2);
	}

	::System::ValueTuple_2<::System::Int32, ::System::Int32> Method_2_5770A94A805EA30B()
	{
		return ((::System::ValueTuple_2<::System::Int32, ::System::Int32>(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_787A64751D1D3DEF_METHOD_2_5770A94A805EA30B_OFFSET))(this);
	}

	::System::Boolean Method_2_A583248D0B8C6672(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_787A64751D1D3DEF_METHOD_2_A583248D0B8C6672_OFFSET))(this, a1);
	}

	static ::System::Void Method_2_F14CC5041C6DBBF6(::MoleMole::UIBaseController* a1, ::Class_2_1A39E1B51756BF41* a2)
	{
		return ((::System::Void(*)(::MoleMole::UIBaseController*, ::Class_2_1A39E1B51756BF41*))((::PBYTE)hIl2Cpp + CLASS_2_787A64751D1D3DEF_METHOD_2_F14CC5041C6DBBF6_OFFSET))(a1, a2);
	}

	::System::Void Method_2_41A074549EF25F63()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_787A64751D1D3DEF_METHOD_2_41A074549EF25F63_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Int32>* Method_2_4C07A7C191589751(::System::Int32 a1)
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_787A64751D1D3DEF_METHOD_2_4C07A7C191589751_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_A95EA68172A65F7A(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_787A64751D1D3DEF_METHOD_2_A95EA68172A65F7A_OFFSET))(this, a1);
	}

	::System::Int32 Method_2_9E79885B9964A170(::Class_2_208CC9941471731A_566* a1, ::Class_2_208CC9941471731A_566* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_2_208CC9941471731A_566*, ::Class_2_208CC9941471731A_566*))((::PBYTE)hIl2Cpp + CLASS_2_787A64751D1D3DEF_METHOD_2_9E79885B9964A170_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_D20BF56E36607D54(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_787A64751D1D3DEF_METHOD_2_D20BF56E36607D54_OFFSET))(this, a1);
	}

	::System::Void Method_2_25C0BB32EF98DD1D(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_787A64751D1D3DEF_METHOD_2_25C0BB32EF98DD1D_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::System::Int32>* Method_2_578F6AC474B9B5C6()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_787A64751D1D3DEF_METHOD_2_578F6AC474B9B5C6_OFFSET))(this);
	}

	::System::Void Method_2_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_787A64751D1D3DEF_METHOD_2_9681042564541CD6_OFFSET))(this);
	}

	::System::Boolean Method_2_C94BFB8159DBE554(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_787A64751D1D3DEF_METHOD_2_C94BFB8159DBE554_OFFSET))(this, a1);
	}

	::Class_2_6913AEABC08EF711* Method_2_4721D078C82DB787(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::Class_2_6913AEABC08EF711*(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_787A64751D1D3DEF_METHOD_2_4721D078C82DB787_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_2_51B37F44CBD968A6()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_787A64751D1D3DEF_METHOD_2_51B37F44CBD968A6_OFFSET))(this);
	}

	::System::Void Method_2_D87E96A360DBCFAD(::System::Int32 a1, ::System::Collections::Generic::List_1<::Class_2_208CC9941471731A_566*>* a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::List_1<::Class_2_208CC9941471731A_566*>*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_787A64751D1D3DEF_METHOD_2_D87E96A360DBCFAD_OFFSET))(this, a1, a2, a3);
	}

	::System::Collections::Generic::List_1<::Class_2_208CC9941471731A_566*>* Method_2_718A7B0C5F22E48B()
	{
		return ((::System::Collections::Generic::List_1<::Class_2_208CC9941471731A_566*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_787A64751D1D3DEF_METHOD_2_718A7B0C5F22E48B_OFFSET))(this);
	}

	::System::Boolean Method_2_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_787A64751D1D3DEF_METHOD_2_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Void Method_2_06FCB1509E644D25(::System::Collections::Generic::List_1<::Class_1_0D6706375CDAAE8C*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_0D6706375CDAAE8C*>*))((::PBYTE)hIl2Cpp + CLASS_2_787A64751D1D3DEF_METHOD_2_06FCB1509E644D25_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_351423CB72A37212(::Class_2_208CC9941471731A_690* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_208CC9941471731A_690*))((::PBYTE)hIl2Cpp + CLASS_2_787A64751D1D3DEF_METHOD_2_351423CB72A37212_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_B01C9084C23C9EA2(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_787A64751D1D3DEF_METHOD_2_B01C9084C23C9EA2_OFFSET))(this, a1);
	}

	::System::Void Method_2_25C0BB32EF98DD1D_1(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_787A64751D1D3DEF_METHOD_2_25C0BB32EF98DD1D_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_CF8E5A02EC282A9B(::Class_3_AE02BC8285203464_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_AE02BC8285203464_1*))((::PBYTE)hIl2Cpp + CLASS_2_787A64751D1D3DEF_METHOD_2_CF8E5A02EC282A9B_OFFSET))(this, a1);
	}

	::System::Void Method_2_25C0BB32EF98DD1D_2(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_787A64751D1D3DEF_METHOD_2_25C0BB32EF98DD1D_2_OFFSET))(this, a1);
	}

	::System::Void Method_2_8219F6E7155E8482(::System::Int32 a1, ::System::Func_2<::System::Int32, ::System::Int32>* a2, ::System::Collections::Generic::List_1<::System::Int32>* a3, ::System::Func_2<::System::Int32, ::System::Boolean>* a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Func_2<::System::Int32, ::System::Int32>*, ::System::Collections::Generic::List_1<::System::Int32>*, ::System::Func_2<::System::Int32, ::System::Boolean>*))((::PBYTE)hIl2Cpp + CLASS_2_787A64751D1D3DEF_METHOD_2_8219F6E7155E8482_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_1659BCB6D1A9FC34()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_787A64751D1D3DEF_METHOD_2_1659BCB6D1A9FC34_OFFSET))(this);
	}

	::System::Boolean Method_2_B59C133FB4E953A3(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_787A64751D1D3DEF_METHOD_2_B59C133FB4E953A3_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::Class_2_208CC9941471731A_690*>* Method_2_088DB9BC4B2BC2CF(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Collections::Generic::List_1<::Class_2_208CC9941471731A_690*>*(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_787A64751D1D3DEF_METHOD_2_088DB9BC4B2BC2CF_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_0E37EDA63E251A06_1(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_787A64751D1D3DEF_METHOD_2_0E37EDA63E251A06_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_5B81D4C788C5B0B8(::System::EventArgs* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_2_787A64751D1D3DEF_METHOD_2_5B81D4C788C5B0B8_OFFSET))(this, a1);
	}

	::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* Method_2_114781D79D91EA39()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_787A64751D1D3DEF_METHOD_2_114781D79D91EA39_OFFSET))(this);
	}

	::System::Void Method_2_D6D5C2F25B29E6BD(::Class_3_9AEDFAB3A28506C0* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_9AEDFAB3A28506C0*))((::PBYTE)hIl2Cpp + CLASS_2_787A64751D1D3DEF_METHOD_2_D6D5C2F25B29E6BD_OFFSET))(this, a1);
	}

	::System::Void Method_2_0F038B7F18CABFA4(::Class_1_1EA8435E138F2E03* a1, ::System::Int32 a2, ::System::Func_2<::System::Int32, ::System::Int32>* a3, ::System::Collections::Generic::List_1<::System::Int32>* a4, ::System::Func_2<::System::Int32, ::System::Boolean>* a5)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_1EA8435E138F2E03*, ::System::Int32, ::System::Func_2<::System::Int32, ::System::Int32>*, ::System::Collections::Generic::List_1<::System::Int32>*, ::System::Func_2<::System::Int32, ::System::Boolean>*))((::PBYTE)hIl2Cpp + CLASS_2_787A64751D1D3DEF_METHOD_2_0F038B7F18CABFA4_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Boolean Method_2_351423CB72A37212_1(::Class_2_208CC9941471731A_690* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_208CC9941471731A_690*))((::PBYTE)hIl2Cpp + CLASS_2_787A64751D1D3DEF_METHOD_2_351423CB72A37212_1_OFFSET))(this, a1);
	}

	::Class_2_6913AEABC08EF711* Method_2_4721D078C82DB787_1(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::Class_2_6913AEABC08EF711*(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_787A64751D1D3DEF_METHOD_2_4721D078C82DB787_1_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::MoleMole::UIHadalZone_Common_RatingRowContext*>* Method_2_6C6764973A21A175(::System::Int32 a1, ::Class_2_787A64751D1D3DEF_Enum_3_65794A143130A3C8 a2)
	{
		return ((::System::Collections::Generic::List_1<::MoleMole::UIHadalZone_Common_RatingRowContext*>*(*)(::PVOID, ::System::Int32, ::Class_2_787A64751D1D3DEF_Enum_3_65794A143130A3C8))((::PBYTE)hIl2Cpp + CLASS_2_787A64751D1D3DEF_METHOD_2_6C6764973A21A175_OFFSET))(this, a1, a2);
	}
};
