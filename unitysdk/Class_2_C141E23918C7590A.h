#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3C783B10034614E4.h"
#include "unitysdk/Foundation/SingletonDisposable_1.h"
#include "unitysdk/Share/EItemType.h"
#include "unitysdk/Struct_2_0665524F7D90CDBF.h"
#include "unitysdk/Struct_2_B2494015E9A5BF5D_2.h"

class Class_1_0D541F5223CB5BF9;
class Class_1_DB8F9CEA6AB5F83B_Class_1_A3420EE215CD7C09;
namespace System { class EventArgs; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_2_C141E23918C7590A_DISPOSE_OFFSET UNITYSDK_OFFSET(0x154EE060)
#define CLASS_2_C141E23918C7590A_METHOD_2_0DA2366A4A7DBAA7_OFFSET UNITYSDK_OFFSET(0x154EF620)
#define CLASS_2_C141E23918C7590A_METHOD_2_227A14EDF6847813_OFFSET UNITYSDK_OFFSET(0x154EEDF0)
#define CLASS_2_C141E23918C7590A_METHOD_2_2518A200556D89B2_OFFSET UNITYSDK_OFFSET(0x154EF340)
#define CLASS_2_C141E23918C7590A_METHOD_2_2A75DD86D2D27000_OFFSET UNITYSDK_OFFSET(0x154EF830)
#define CLASS_2_C141E23918C7590A_METHOD_2_2DC741333F3BDA99_OFFSET UNITYSDK_OFFSET(0x154EEEA0)
#define CLASS_2_C141E23918C7590A_METHOD_2_2E87E8932B167364_OFFSET UNITYSDK_OFFSET(0x154EFC30)
#define CLASS_2_C141E23918C7590A_METHOD_2_36DD1E4BC3FEDFBF_OFFSET UNITYSDK_OFFSET(0x154EF170)
#define CLASS_2_C141E23918C7590A_METHOD_2_395A1B0A2AF4A81B_OFFSET UNITYSDK_OFFSET(0x154EF440)
#define CLASS_2_C141E23918C7590A_METHOD_2_457646911EBCF620_OFFSET UNITYSDK_OFFSET(0x154EF110)
#define CLASS_2_C141E23918C7590A_METHOD_2_5BD474096087A399_OFFSET UNITYSDK_OFFSET(0x154EFAB0)
#define CLASS_2_C141E23918C7590A_METHOD_2_69292918AEE5C06D_OFFSET UNITYSDK_OFFSET(0x154EE8F0)
#define CLASS_2_C141E23918C7590A_METHOD_2_7AF6379835714877_OFFSET UNITYSDK_OFFSET(0x154EF3C0)
#define CLASS_2_C141E23918C7590A_METHOD_2_873FD879BE336034_OFFSET UNITYSDK_OFFSET(0x154EF7B0)
#define CLASS_2_C141E23918C7590A_METHOD_2_8DA021F8FA349C47_OFFSET UNITYSDK_OFFSET(0x154EEB10)
#define CLASS_2_C141E23918C7590A_METHOD_2_95780ED94B90ED36_OFFSET UNITYSDK_OFFSET(0x154EE710)
#define CLASS_2_C141E23918C7590A_METHOD_2_96A5E61DE5128F41_OFFSET UNITYSDK_OFFSET(0x154EFC90)
#define CLASS_2_C141E23918C7590A_METHOD_2_97C151A47E6F493F_OFFSET UNITYSDK_OFFSET(0x154EE5F0)
#define CLASS_2_C141E23918C7590A_METHOD_2_9D3D93173F72F562_1_OFFSET UNITYSDK_OFFSET(0x154EFA10)
#define CLASS_2_C141E23918C7590A_METHOD_2_9D3D93173F72F562_OFFSET UNITYSDK_OFFSET(0x154EF950)
#define CLASS_2_C141E23918C7590A_METHOD_2_A3BF6CFD4ACEC35E_OFFSET UNITYSDK_OFFSET(0x154EE7E0)
#define CLASS_2_C141E23918C7590A_METHOD_2_B4049A521B131F2E_OFFSET UNITYSDK_OFFSET(0x154EF5C0)
#define CLASS_2_C141E23918C7590A_METHOD_2_BA72BC37A1BFB09A_OFFSET UNITYSDK_OFFSET(0x154EEA10)
#define CLASS_2_C141E23918C7590A_METHOD_2_C02168B5282D28AE_OFFSET UNITYSDK_OFFSET(0x154EEBC0)
#define CLASS_2_C141E23918C7590A_METHOD_2_D54692EB51C914CA_OFFSET UNITYSDK_OFFSET(0x154EE760)
#define CLASS_2_C141E23918C7590A_METHOD_2_DA8CB88B3D056A05_OFFSET UNITYSDK_OFFSET(0x154EECF0)
#define CLASS_2_C141E23918C7590A_ONCREATE_OFFSET UNITYSDK_OFFSET(0x154EE020)
#define CLASS_2_C141E23918C7590A__CTOR_OFFSET UNITYSDK_OFFSET(0x154EE370)

inline static constexpr unsigned int Class_2_C141E23918C7590A_TypeDefinitionIndex = 53268;

class Class_2_C141E23918C7590A : public ::Foundation::SingletonDisposable_1<::Class_2_C141E23918C7590A*>
{
public:
	::System::Collections::Generic::Dictionary_2<::Struct_2_B2494015E9A5BF5D_2, ::System::Int32>* Field_2_3; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_0D541F5223CB5BF9*>* Field_2_1; // 0x18
	::System::Collections::Generic::Dictionary_2<::Struct_2_0665524F7D90CDBF, ::System::Int32>* Field_2_2; // 0x20
	::System::Collections::Generic::HashSet_1<::Class_1_DB8F9CEA6AB5F83B_Class_1_A3420EE215CD7C09*>* Field_2_4; // 0x28
	::System::Int32 Field_2_0; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C141E23918C7590A__CTOR_OFFSET))(this);
	}

	::System::Void OnCreate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C141E23918C7590A_ONCREATE_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C141E23918C7590A_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_97C151A47E6F493F(::System::Int32 a1, ::System::EventArgs* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_2_C141E23918C7590A_METHOD_2_97C151A47E6F493F_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_2_95780ED94B90ED36()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C141E23918C7590A_METHOD_2_95780ED94B90ED36_OFFSET))(this);
	}

	::System::Void Method_2_D54692EB51C914CA(::Enum_3_3C783B10034614E4 a1, ::System::Int32 a2, ::System::Action_1<::System::EventArgs*>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_3C783B10034614E4, ::System::Int32, ::System::Action_1<::System::EventArgs*>*))((::PBYTE)hIl2Cpp + CLASS_2_C141E23918C7590A_METHOD_2_D54692EB51C914CA_OFFSET))(this, a1, a2, a3);
	}

	::System::Int32 Method_2_BA72BC37A1BFB09A(::Enum_3_3C783B10034614E4 a1, ::Share::EItemType a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Enum_3_3C783B10034614E4, ::Share::EItemType))((::PBYTE)hIl2Cpp + CLASS_2_C141E23918C7590A_METHOD_2_BA72BC37A1BFB09A_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_8DA021F8FA349C47(::Enum_3_3C783B10034614E4 a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Enum_3_3C783B10034614E4, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_C141E23918C7590A_METHOD_2_8DA021F8FA349C47_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_DA8CB88B3D056A05(::Enum_3_3C783B10034614E4 a1, ::Share::EItemType a2, ::System::EventArgs* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_3C783B10034614E4, ::Share::EItemType, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_2_C141E23918C7590A_METHOD_2_DA8CB88B3D056A05_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_2_227A14EDF6847813(::Enum_3_3C783B10034614E4 a1, ::Share::EItemType a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Enum_3_3C783B10034614E4, ::Share::EItemType))((::PBYTE)hIl2Cpp + CLASS_2_C141E23918C7590A_METHOD_2_227A14EDF6847813_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_2_A3BF6CFD4ACEC35E(::Enum_3_3C783B10034614E4 a1, ::System::Int32 a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Enum_3_3C783B10034614E4, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_C141E23918C7590A_METHOD_2_A3BF6CFD4ACEC35E_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_2DC741333F3BDA99(::System::Int32 a1, ::Enum_3_3C783B10034614E4& a2, ::Share::EItemType& a3, ::System::Int32& a4)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::Enum_3_3C783B10034614E4&, ::Share::EItemType&, ::System::Int32&))((::PBYTE)hIl2Cpp + CLASS_2_C141E23918C7590A_METHOD_2_2DC741333F3BDA99_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_457646911EBCF620(::System::Int32 a1, ::System::Action_1<::System::EventArgs*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Action_1<::System::EventArgs*>*))((::PBYTE)hIl2Cpp + CLASS_2_C141E23918C7590A_METHOD_2_457646911EBCF620_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_2518A200556D89B2(::Enum_3_3C783B10034614E4 a1, ::Share::EItemType a2, ::System::Action_1<::System::EventArgs*>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_3C783B10034614E4, ::Share::EItemType, ::System::Action_1<::System::EventArgs*>*))((::PBYTE)hIl2Cpp + CLASS_2_C141E23918C7590A_METHOD_2_2518A200556D89B2_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_7AF6379835714877(::Enum_3_3C783B10034614E4 a1, ::System::Int32 a2, ::System::Action_1<::System::EventArgs*>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_3C783B10034614E4, ::System::Int32, ::System::Action_1<::System::EventArgs*>*))((::PBYTE)hIl2Cpp + CLASS_2_C141E23918C7590A_METHOD_2_7AF6379835714877_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_395A1B0A2AF4A81B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C141E23918C7590A_METHOD_2_395A1B0A2AF4A81B_OFFSET))(this);
	}

	::System::Void Method_2_B4049A521B131F2E(::System::Int32 a1, ::System::Action_1<::System::EventArgs*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Action_1<::System::EventArgs*>*))((::PBYTE)hIl2Cpp + CLASS_2_C141E23918C7590A_METHOD_2_B4049A521B131F2E_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_0DA2366A4A7DBAA7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C141E23918C7590A_METHOD_2_0DA2366A4A7DBAA7_OFFSET))(this);
	}

	::System::Void Method_2_873FD879BE336034(::Enum_3_3C783B10034614E4 a1, ::Share::EItemType a2, ::System::Action_1<::System::EventArgs*>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_3C783B10034614E4, ::Share::EItemType, ::System::Action_1<::System::EventArgs*>*))((::PBYTE)hIl2Cpp + CLASS_2_C141E23918C7590A_METHOD_2_873FD879BE336034_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_2_2A75DD86D2D27000(::System::Int32 a1, ::System::Action_1<::System::EventArgs*>* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Action_1<::System::EventArgs*>*))((::PBYTE)hIl2Cpp + CLASS_2_C141E23918C7590A_METHOD_2_2A75DD86D2D27000_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9D3D93173F72F562(::Class_1_DB8F9CEA6AB5F83B_Class_1_A3420EE215CD7C09* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_DB8F9CEA6AB5F83B_Class_1_A3420EE215CD7C09*))((::PBYTE)hIl2Cpp + CLASS_2_C141E23918C7590A_METHOD_2_9D3D93173F72F562_OFFSET))(this, a1);
	}

	::System::Void Method_2_9D3D93173F72F562_1(::Class_1_DB8F9CEA6AB5F83B_Class_1_A3420EE215CD7C09* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_DB8F9CEA6AB5F83B_Class_1_A3420EE215CD7C09*))((::PBYTE)hIl2Cpp + CLASS_2_C141E23918C7590A_METHOD_2_9D3D93173F72F562_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_5BD474096087A399(::Enum_3_3C783B10034614E4 a1, ::System::Int32 a2, ::System::Action_1<::System::EventArgs*>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_3C783B10034614E4, ::System::Int32, ::System::Action_1<::System::EventArgs*>*))((::PBYTE)hIl2Cpp + CLASS_2_C141E23918C7590A_METHOD_2_5BD474096087A399_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_2_C02168B5282D28AE(::System::Int32 a1, ::Class_1_0D541F5223CB5BF9*& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::Class_1_0D541F5223CB5BF9*&))((::PBYTE)hIl2Cpp + CLASS_2_C141E23918C7590A_METHOD_2_C02168B5282D28AE_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_36DD1E4BC3FEDFBF(::System::Int32 a1, ::System::Action_1<::System::EventArgs*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Action_1<::System::EventArgs*>*))((::PBYTE)hIl2Cpp + CLASS_2_C141E23918C7590A_METHOD_2_36DD1E4BC3FEDFBF_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_2E87E8932B167364(::Share::EItemType a1, ::System::Action_1<::System::EventArgs*>* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Share::EItemType, ::System::Action_1<::System::EventArgs*>*))((::PBYTE)hIl2Cpp + CLASS_2_C141E23918C7590A_METHOD_2_2E87E8932B167364_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_96A5E61DE5128F41(::Enum_3_3C783B10034614E4 a1, ::System::Int32 a2, ::System::EventArgs* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_3C783B10034614E4, ::System::Int32, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_2_C141E23918C7590A_METHOD_2_96A5E61DE5128F41_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_69292918AEE5C06D(::System::Int32 a1, ::System::Action_1<::System::EventArgs*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Action_1<::System::EventArgs*>*))((::PBYTE)hIl2Cpp + CLASS_2_C141E23918C7590A_METHOD_2_69292918AEE5C06D_OFFSET))(this, a1, a2);
	}
};
