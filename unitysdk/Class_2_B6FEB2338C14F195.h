#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3C783B10034614E4.h"
#include "unitysdk/Foundation/SingletonDisposable_1.h"
#include "unitysdk/Share/EItemType.h"
#include "unitysdk/Struct_2_0665524F7D90CDBF.h"
#include "unitysdk/Struct_2_B2494015E9A5BF5D_2.h"

class Class_1_19C62F41C71F0C80;
namespace System { class EventArgs; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_2_B6FEB2338C14F195_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1650F040)
#define CLASS_2_B6FEB2338C14F195_METHOD_2_2518A200556D89B2_OFFSET UNITYSDK_OFFSET(0x1650F6E0)
#define CLASS_2_B6FEB2338C14F195_METHOD_2_2A75DD86D2D27000_OFFSET UNITYSDK_OFFSET(0x1650F9E0)
#define CLASS_2_B6FEB2338C14F195_METHOD_2_2DC741333F3BDA99_OFFSET UNITYSDK_OFFSET(0x16510220)
#define CLASS_2_B6FEB2338C14F195_METHOD_2_2E87E8932B167364_OFFSET UNITYSDK_OFFSET(0x165104F0)
#define CLASS_2_B6FEB2338C14F195_METHOD_2_39CFEC1791C76B8F_OFFSET UNITYSDK_OFFSET(0x16510040)
#define CLASS_2_B6FEB2338C14F195_METHOD_2_457646911EBCF620_OFFSET UNITYSDK_OFFSET(0x1650FE10)
#define CLASS_2_B6FEB2338C14F195_METHOD_2_69292918AEE5C06D_OFFSET UNITYSDK_OFFSET(0x1650F760)
#define CLASS_2_B6FEB2338C14F195_METHOD_2_8A1A2EFE3506F6D6_OFFSET UNITYSDK_OFFSET(0x1650FE70)
#define CLASS_2_B6FEB2338C14F195_METHOD_2_95780ED94B90ED36_OFFSET UNITYSDK_OFFSET(0x1650F990)
#define CLASS_2_B6FEB2338C14F195_METHOD_2_96A5E61DE5128F41_OFFSET UNITYSDK_OFFSET(0x1650FC30)
#define CLASS_2_B6FEB2338C14F195_METHOD_2_97C151A47E6F493F_OFFSET UNITYSDK_OFFSET(0x1650F5C0)
#define CLASS_2_B6FEB2338C14F195_METHOD_2_98202F9E7B457A80_OFFSET UNITYSDK_OFFSET(0x1650FD30)
#define CLASS_2_B6FEB2338C14F195_METHOD_2_A3BF6CFD4ACEC35E_OFFSET UNITYSDK_OFFSET(0x1650F880)
#define CLASS_2_B6FEB2338C14F195_METHOD_2_B4049A521B131F2E_OFFSET UNITYSDK_OFFSET(0x16510490)
#define CLASS_2_B6FEB2338C14F195_METHOD_2_BA72BC37A1BFB09A_OFFSET UNITYSDK_OFFSET(0x1650F4C0)
#define CLASS_2_B6FEB2338C14F195_METHOD_2_C02168B5282D28AE_OFFSET UNITYSDK_OFFSET(0x1650FB00)
#define CLASS_2_B6FEB2338C14F195_METHOD_2_D11B8314C487F96E_OFFSET UNITYSDK_OFFSET(0x165100C0)
#define CLASS_2_B6FEB2338C14F195_METHOD_2_D54692EB51C914CA_OFFSET UNITYSDK_OFFSET(0x16510550)
#define CLASS_2_B6FEB2338C14F195_METHOD_2_D8FF220BA097765C_OFFSET UNITYSDK_OFFSET(0x16510140)
#define CLASS_2_B6FEB2338C14F195_METHOD_2_DA8CB88B3D056A05_OFFSET UNITYSDK_OFFSET(0x1650F3C0)
#define CLASS_2_B6FEB2338C14F195_ONCREATE_OFFSET UNITYSDK_OFFSET(0x1650F000)
#define CLASS_2_B6FEB2338C14F195__CTOR_OFFSET UNITYSDK_OFFSET(0x1650F1E0)

inline static constexpr unsigned int Class_2_B6FEB2338C14F195_TypeDefinitionIndex = 61099;

class Class_2_B6FEB2338C14F195 : public ::Foundation::SingletonDisposable_1<::Class_2_B6FEB2338C14F195*>
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_19C62F41C71F0C80*>* Field_2_1; // 0x10
	::System::Collections::Generic::Dictionary_2<::Struct_2_B2494015E9A5BF5D_2, ::System::Int32>* Field_2_3; // 0x18
	::System::Collections::Generic::Dictionary_2<::Struct_2_0665524F7D90CDBF, ::System::Int32>* Field_2_2; // 0x20
	::System::Int32 Field_2_0; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B6FEB2338C14F195__CTOR_OFFSET))(this);
	}

	::System::Void OnCreate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B6FEB2338C14F195_ONCREATE_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B6FEB2338C14F195_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_DA8CB88B3D056A05(::Enum_3_3C783B10034614E4 a1, ::Share::EItemType a2, ::System::EventArgs* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_3C783B10034614E4, ::Share::EItemType, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_2_B6FEB2338C14F195_METHOD_2_DA8CB88B3D056A05_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_2518A200556D89B2(::Enum_3_3C783B10034614E4 a1, ::Share::EItemType a2, ::System::Action_1<::System::EventArgs*>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_3C783B10034614E4, ::Share::EItemType, ::System::Action_1<::System::EventArgs*>*))((::PBYTE)hIl2Cpp + CLASS_2_B6FEB2338C14F195_METHOD_2_2518A200556D89B2_OFFSET))(this, a1, a2, a3);
	}

	::System::Int32 Method_2_A3BF6CFD4ACEC35E(::Enum_3_3C783B10034614E4 a1, ::System::Int32 a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Enum_3_3C783B10034614E4, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_B6FEB2338C14F195_METHOD_2_A3BF6CFD4ACEC35E_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_2A75DD86D2D27000(::System::Int32 a1, ::System::Action_1<::System::EventArgs*>* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Action_1<::System::EventArgs*>*))((::PBYTE)hIl2Cpp + CLASS_2_B6FEB2338C14F195_METHOD_2_2A75DD86D2D27000_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_97C151A47E6F493F(::System::Int32 a1, ::System::EventArgs* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_2_B6FEB2338C14F195_METHOD_2_97C151A47E6F493F_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_2_BA72BC37A1BFB09A(::Enum_3_3C783B10034614E4 a1, ::Share::EItemType a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Enum_3_3C783B10034614E4, ::Share::EItemType))((::PBYTE)hIl2Cpp + CLASS_2_B6FEB2338C14F195_METHOD_2_BA72BC37A1BFB09A_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_C02168B5282D28AE(::System::Int32 a1, ::Class_1_19C62F41C71F0C80*& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::Class_1_19C62F41C71F0C80*&))((::PBYTE)hIl2Cpp + CLASS_2_B6FEB2338C14F195_METHOD_2_C02168B5282D28AE_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_96A5E61DE5128F41(::Enum_3_3C783B10034614E4 a1, ::System::Int32 a2, ::System::EventArgs* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_3C783B10034614E4, ::System::Int32, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_2_B6FEB2338C14F195_METHOD_2_96A5E61DE5128F41_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_2_98202F9E7B457A80(::Enum_3_3C783B10034614E4 a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Enum_3_3C783B10034614E4, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_B6FEB2338C14F195_METHOD_2_98202F9E7B457A80_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_457646911EBCF620(::System::Int32 a1, ::System::Action_1<::System::EventArgs*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Action_1<::System::EventArgs*>*))((::PBYTE)hIl2Cpp + CLASS_2_B6FEB2338C14F195_METHOD_2_457646911EBCF620_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_39CFEC1791C76B8F(::Enum_3_3C783B10034614E4 a1, ::Share::EItemType a2, ::System::Action_1<::System::EventArgs*>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_3C783B10034614E4, ::Share::EItemType, ::System::Action_1<::System::EventArgs*>*))((::PBYTE)hIl2Cpp + CLASS_2_B6FEB2338C14F195_METHOD_2_39CFEC1791C76B8F_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_8A1A2EFE3506F6D6(::System::Int32 a1, ::System::Action_1<::System::EventArgs*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Action_1<::System::EventArgs*>*))((::PBYTE)hIl2Cpp + CLASS_2_B6FEB2338C14F195_METHOD_2_8A1A2EFE3506F6D6_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_D11B8314C487F96E(::Enum_3_3C783B10034614E4 a1, ::System::Int32 a2, ::System::Action_1<::System::EventArgs*>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_3C783B10034614E4, ::System::Int32, ::System::Action_1<::System::EventArgs*>*))((::PBYTE)hIl2Cpp + CLASS_2_B6FEB2338C14F195_METHOD_2_D11B8314C487F96E_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_2_D8FF220BA097765C(::Enum_3_3C783B10034614E4 a1, ::Share::EItemType a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Enum_3_3C783B10034614E4, ::Share::EItemType))((::PBYTE)hIl2Cpp + CLASS_2_B6FEB2338C14F195_METHOD_2_D8FF220BA097765C_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_2DC741333F3BDA99(::System::Int32 a1, ::Enum_3_3C783B10034614E4& a2, ::Share::EItemType& a3, ::System::Int32& a4)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::Enum_3_3C783B10034614E4&, ::Share::EItemType&, ::System::Int32&))((::PBYTE)hIl2Cpp + CLASS_2_B6FEB2338C14F195_METHOD_2_2DC741333F3BDA99_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Int32 Method_2_95780ED94B90ED36()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B6FEB2338C14F195_METHOD_2_95780ED94B90ED36_OFFSET))(this);
	}

	::System::Void Method_2_B4049A521B131F2E(::System::Int32 a1, ::System::Action_1<::System::EventArgs*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Action_1<::System::EventArgs*>*))((::PBYTE)hIl2Cpp + CLASS_2_B6FEB2338C14F195_METHOD_2_B4049A521B131F2E_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_2E87E8932B167364(::Share::EItemType a1, ::System::Action_1<::System::EventArgs*>* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Share::EItemType, ::System::Action_1<::System::EventArgs*>*))((::PBYTE)hIl2Cpp + CLASS_2_B6FEB2338C14F195_METHOD_2_2E87E8932B167364_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_D54692EB51C914CA(::Enum_3_3C783B10034614E4 a1, ::System::Int32 a2, ::System::Action_1<::System::EventArgs*>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_3C783B10034614E4, ::System::Int32, ::System::Action_1<::System::EventArgs*>*))((::PBYTE)hIl2Cpp + CLASS_2_B6FEB2338C14F195_METHOD_2_D54692EB51C914CA_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_69292918AEE5C06D(::System::Int32 a1, ::System::Action_1<::System::EventArgs*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Action_1<::System::EventArgs*>*))((::PBYTE)hIl2Cpp + CLASS_2_B6FEB2338C14F195_METHOD_2_69292918AEE5C06D_OFFSET))(this, a1, a2);
	}
};
