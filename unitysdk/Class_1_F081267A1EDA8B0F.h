#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_CC22F13312585645.h"
#include "unitysdk/MoleMole/Battle/MaterialPropertyModifierExtraParams.h"
#include "unitysdk/MoleMole/Config/MaterialPropertyType.h"
#include "unitysdk/System/Object.h"

class Class_1_413B2BDBE645DB66;
class Class_3_FFD0045B4597F294;
namespace MoleMole { class ConfigMaterialPropertyModifier; }
namespace MoleMole { class MonoRenderHandler; }
namespace MoleMole::Config { class RenderMaterial; }
namespace System { class String; }
namespace System { class Type; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_F081267A1EDA8B0F_DISPOSE_OFFSET UNITYSDK_OFFSET(0x18CC88C0)
#define CLASS_1_F081267A1EDA8B0F_METHOD_1_05403F8C3D5C4318_OFFSET UNITYSDK_OFFSET(0x18CCAFE0)
#define CLASS_1_F081267A1EDA8B0F_METHOD_1_128774387667156B_OFFSET UNITYSDK_OFFSET(0x18CCB830)
#define CLASS_1_F081267A1EDA8B0F_METHOD_1_28C834B59E1D0120_OFFSET UNITYSDK_OFFSET(0x18CCAAB0)
#define CLASS_1_F081267A1EDA8B0F_METHOD_1_29D4F155A0F84902_OFFSET UNITYSDK_OFFSET(0x18CCA440)
#define CLASS_1_F081267A1EDA8B0F_METHOD_1_3554EF21965B9AA0_OFFSET UNITYSDK_OFFSET(0x18CC9B80)
#define CLASS_1_F081267A1EDA8B0F_METHOD_1_41196B141D48C333_OFFSET UNITYSDK_OFFSET(0x18CCC580)
#define CLASS_1_F081267A1EDA8B0F_METHOD_1_4713FE91C3103ABF_OFFSET UNITYSDK_OFFSET(0x18CCB290)
#define CLASS_1_F081267A1EDA8B0F_METHOD_1_48AFEAB047F4521B_OFFSET UNITYSDK_OFFSET(0x18CCC370)
#define CLASS_1_F081267A1EDA8B0F_METHOD_1_4993EDAE54425105_OFFSET UNITYSDK_OFFSET(0x18CCAE50)
#define CLASS_1_F081267A1EDA8B0F_METHOD_1_5965447AF748C7A6_OFFSET UNITYSDK_OFFSET(0x18CCC520)
#define CLASS_1_F081267A1EDA8B0F_METHOD_1_5E657A2D9C0A02DF_1_OFFSET UNITYSDK_OFFSET(0x18CCBFA0)
#define CLASS_1_F081267A1EDA8B0F_METHOD_1_5E657A2D9C0A02DF_OFFSET UNITYSDK_OFFSET(0x18CCB150)
#define CLASS_1_F081267A1EDA8B0F_METHOD_1_6D93101E4CE10A96_OFFSET UNITYSDK_OFFSET(0x18CCA830)
#define CLASS_1_F081267A1EDA8B0F_METHOD_1_73FB9DE4849AF1B5_OFFSET UNITYSDK_OFFSET(0x18CCB050)
#define CLASS_1_F081267A1EDA8B0F_METHOD_1_83ABEDAA83837786_OFFSET UNITYSDK_OFFSET(0x18CCCDE0)
#define CLASS_1_F081267A1EDA8B0F_METHOD_1_858EE0E3CEF5E9F3_OFFSET UNITYSDK_OFFSET(0x18CCA5D0)
#define CLASS_1_F081267A1EDA8B0F_METHOD_1_86143FF46EAE82B7_OFFSET UNITYSDK_OFFSET(0x18CC9D40)
#define CLASS_1_F081267A1EDA8B0F_METHOD_1_8E89BE9866A768ED_OFFSET UNITYSDK_OFFSET(0x18CC95F0)
#define CLASS_1_F081267A1EDA8B0F_METHOD_1_8F2D1ABCEF18A2B2_OFFSET UNITYSDK_OFFSET(0x18CCA340)
#define CLASS_1_F081267A1EDA8B0F_METHOD_1_8F42D17763B37BEB_OFFSET UNITYSDK_OFFSET(0x18CCBE90)
#define CLASS_1_F081267A1EDA8B0F_METHOD_1_9B1146C0C22FB04B_OFFSET UNITYSDK_OFFSET(0x18CCB870)
#define CLASS_1_F081267A1EDA8B0F_METHOD_1_9E2CCA8472F809AA_OFFSET UNITYSDK_OFFSET(0x18CCA640)
#define CLASS_1_F081267A1EDA8B0F_METHOD_1_A0BF5729B5768209_OFFSET UNITYSDK_OFFSET(0x18CC8D50)
#define CLASS_1_F081267A1EDA8B0F_METHOD_1_AAD21DE195D05736_OFFSET UNITYSDK_OFFSET(0x18CC8FD0)
#define CLASS_1_F081267A1EDA8B0F_METHOD_1_AFE2E9D8863D6F6A_OFFSET UNITYSDK_OFFSET(0x18CCA9B0)
#define CLASS_1_F081267A1EDA8B0F_METHOD_1_BFC40B221EFB2027_OFFSET UNITYSDK_OFFSET(0x18CCB210)
#define CLASS_1_F081267A1EDA8B0F_METHOD_1_C47A6EBDAFAB8B19_OFFSET UNITYSDK_OFFSET(0x18CCBDC0)
#define CLASS_1_F081267A1EDA8B0F_METHOD_1_CF6A5C41E97F385F_OFFSET UNITYSDK_OFFSET(0x18CCB5C0)
#define CLASS_1_F081267A1EDA8B0F_METHOD_1_D9DF82C7A47900EC_OFFSET UNITYSDK_OFFSET(0x18CCAD90)
#define CLASS_1_F081267A1EDA8B0F_METHOD_1_E57456F36F09A25C_OFFSET UNITYSDK_OFFSET(0x18CCAE60)
#define CLASS_1_F081267A1EDA8B0F_METHOD_1_F14F8BD70CDDE8D1_OFFSET UNITYSDK_OFFSET(0x18CCA240)
#define CLASS_1_F081267A1EDA8B0F_METHOD_1_F22CDCE4180D0D8A_1_OFFSET UNITYSDK_OFFSET(0x18CC9E70)
#define CLASS_1_F081267A1EDA8B0F_METHOD_1_F22CDCE4180D0D8A_2_OFFSET UNITYSDK_OFFSET(0x18CCB9F0)
#define CLASS_1_F081267A1EDA8B0F_METHOD_1_F22CDCE4180D0D8A_OFFSET UNITYSDK_OFFSET(0x18CC97B0)
#define CLASS_1_F081267A1EDA8B0F_METHOD_1_F4502266FC6E9B8B_OFFSET UNITYSDK_OFFSET(0x18CCC060)
#define CLASS_1_F081267A1EDA8B0F_METHOD_1_FD1E3D35875A9301_OFFSET UNITYSDK_OFFSET(0x18CCC7E0)
#define CLASS_1_F081267A1EDA8B0F_METHOD_1_FF57CAB1AEAA73D0_OFFSET UNITYSDK_OFFSET(0x18CCAA70)
#define CLASS_1_F081267A1EDA8B0F_TOSTRING_OFFSET UNITYSDK_OFFSET(0x18CC8410)
#define CLASS_1_F081267A1EDA8B0F__CTOR_OFFSET UNITYSDK_OFFSET(0x18CC85A0)

inline static constexpr unsigned int Class_1_F081267A1EDA8B0F_TypeDefinitionIndex = 71160;

class Class_1_F081267A1EDA8B0F : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_413B2BDBE645DB66*>* Field_1_2; // 0x10
	::MoleMole::MonoRenderHandler* Field_1_0; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::Class_1_413B2BDBE645DB66*>*>* Field_1_1; // 0x20
	::Class_3_FFD0045B4597F294* Field_1_6; // 0x28
	::System::Collections::Generic::List_1<::System::String*>* Field_1_7; // 0x30
	::System::Collections::Generic::List_1<::Class_1_413B2BDBE645DB66*>* Field_1_3; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F081267A1EDA8B0F__CTOR_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F081267A1EDA8B0F_TOSTRING_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F081267A1EDA8B0F_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_AAD21DE195D05736()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F081267A1EDA8B0F_METHOD_1_AAD21DE195D05736_OFFSET))(this);
	}

	::System::Void Method_1_8E89BE9866A768ED()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F081267A1EDA8B0F_METHOD_1_8E89BE9866A768ED_OFFSET))(this);
	}

	::System::Void Method_1_F22CDCE4180D0D8A(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_F081267A1EDA8B0F_METHOD_1_F22CDCE4180D0D8A_OFFSET))(this, a1);
	}

	::System::Void Method_1_F22CDCE4180D0D8A_1(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_F081267A1EDA8B0F_METHOD_1_F22CDCE4180D0D8A_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_8F2D1ABCEF18A2B2(::System::String* a1, ::System::Boolean a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_F081267A1EDA8B0F_METHOD_1_8F2D1ABCEF18A2B2_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_1_858EE0E3CEF5E9F3(::System::String* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_F081267A1EDA8B0F_METHOD_1_858EE0E3CEF5E9F3_OFFSET))(this, a1);
	}

	::System::Void Method_1_9E2CCA8472F809AA(::System::Func_2<::System::String*, ::System::Boolean>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Func_2<::System::String*, ::System::Boolean>*))((::PBYTE)hIl2Cpp + CLASS_1_F081267A1EDA8B0F_METHOD_1_9E2CCA8472F809AA_OFFSET))(this, a1);
	}

	::System::Void Method_1_6D93101E4CE10A96()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F081267A1EDA8B0F_METHOD_1_6D93101E4CE10A96_OFFSET))(this);
	}

	::System::Boolean Method_1_AFE2E9D8863D6F6A(::Class_1_413B2BDBE645DB66* a1, ::MoleMole::Config::MaterialPropertyType a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_413B2BDBE645DB66*, ::MoleMole::Config::MaterialPropertyType))((::PBYTE)hIl2Cpp + CLASS_1_F081267A1EDA8B0F_METHOD_1_AFE2E9D8863D6F6A_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_28C834B59E1D0120()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F081267A1EDA8B0F_METHOD_1_28C834B59E1D0120_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Class_1_413B2BDBE645DB66*>* Method_1_4993EDAE54425105()
	{
		return ((::System::Collections::Generic::List_1<::Class_1_413B2BDBE645DB66*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F081267A1EDA8B0F_METHOD_1_4993EDAE54425105_OFFSET))(this);
	}

	::System::Void Method_1_E57456F36F09A25C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F081267A1EDA8B0F_METHOD_1_E57456F36F09A25C_OFFSET))(this);
	}

	::System::Void Method_1_D9DF82C7A47900EC(::Class_1_413B2BDBE645DB66* a1, ::Enum_3_CC22F13312585645 a2, ::Enum_3_CC22F13312585645 a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_413B2BDBE645DB66*, ::Enum_3_CC22F13312585645, ::Enum_3_CC22F13312585645))((::PBYTE)hIl2Cpp + CLASS_1_F081267A1EDA8B0F_METHOD_1_D9DF82C7A47900EC_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_A0BF5729B5768209(::Class_1_413B2BDBE645DB66* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_413B2BDBE645DB66*))((::PBYTE)hIl2Cpp + CLASS_1_F081267A1EDA8B0F_METHOD_1_A0BF5729B5768209_OFFSET))(this, a1);
	}

	::System::Void Method_1_73FB9DE4849AF1B5(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_F081267A1EDA8B0F_METHOD_1_73FB9DE4849AF1B5_OFFSET))(this, a1);
	}

	::System::Void Method_1_5E657A2D9C0A02DF(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_F081267A1EDA8B0F_METHOD_1_5E657A2D9C0A02DF_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_BFC40B221EFB2027(::System::String* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_F081267A1EDA8B0F_METHOD_1_BFC40B221EFB2027_OFFSET))(this, a1);
	}

	::System::Void Method_1_3554EF21965B9AA0(::System::String* a1, ::System::Collections::Generic::List_1<::Class_1_413B2BDBE645DB66*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Collections::Generic::List_1<::Class_1_413B2BDBE645DB66*>*))((::PBYTE)hIl2Cpp + CLASS_1_F081267A1EDA8B0F_METHOD_1_3554EF21965B9AA0_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_29D4F155A0F84902(::System::String* a1, ::Class_1_413B2BDBE645DB66*& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::Class_1_413B2BDBE645DB66*&))((::PBYTE)hIl2Cpp + CLASS_1_F081267A1EDA8B0F_METHOD_1_29D4F155A0F84902_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_1_05403F8C3D5C4318(::Class_1_413B2BDBE645DB66* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_1_413B2BDBE645DB66*))((::PBYTE)hIl2Cpp + CLASS_1_F081267A1EDA8B0F_METHOD_1_05403F8C3D5C4318_OFFSET))(this, a1);
	}

	::System::Void Method_1_4713FE91C3103ABF(::System::String* a1, ::MoleMole::ConfigMaterialPropertyModifier* a2, ::System::Int32 a3, ::System::String* a4, ::System::Collections::Generic::List_1<::MoleMole::Config::RenderMaterial*>* a5, ::MoleMole::Battle::MaterialPropertyModifierExtraParams a6, ::Class_1_413B2BDBE645DB66*& a7)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::MoleMole::ConfigMaterialPropertyModifier*, ::System::Int32, ::System::String*, ::System::Collections::Generic::List_1<::MoleMole::Config::RenderMaterial*>*, ::MoleMole::Battle::MaterialPropertyModifierExtraParams, ::Class_1_413B2BDBE645DB66*&))((::PBYTE)hIl2Cpp + CLASS_1_F081267A1EDA8B0F_METHOD_1_4713FE91C3103ABF_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	::System::String* Method_1_128774387667156B()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F081267A1EDA8B0F_METHOD_1_128774387667156B_OFFSET))(this);
	}

	::Class_1_413B2BDBE645DB66* Method_1_9B1146C0C22FB04B(::System::String* a1)
	{
		return ((::Class_1_413B2BDBE645DB66*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_F081267A1EDA8B0F_METHOD_1_9B1146C0C22FB04B_OFFSET))(this, a1);
	}

	::System::Void Method_1_F22CDCE4180D0D8A_2(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_F081267A1EDA8B0F_METHOD_1_F22CDCE4180D0D8A_2_OFFSET))(this, a1);
	}

	::System::Void Method_1_8F42D17763B37BEB(::MoleMole::Config::MaterialPropertyType a1, ::System::Action_1<::System::String*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::MaterialPropertyType, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_1_F081267A1EDA8B0F_METHOD_1_8F42D17763B37BEB_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_C47A6EBDAFAB8B19(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_F081267A1EDA8B0F_METHOD_1_C47A6EBDAFAB8B19_OFFSET))(this, a1);
	}

	::System::Void Method_1_F14F8BD70CDDE8D1(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_F081267A1EDA8B0F_METHOD_1_F14F8BD70CDDE8D1_OFFSET))(this, a1);
	}

	::System::Void Method_1_CF6A5C41E97F385F(::System::String* a1, ::Class_1_413B2BDBE645DB66* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::Class_1_413B2BDBE645DB66*))((::PBYTE)hIl2Cpp + CLASS_1_F081267A1EDA8B0F_METHOD_1_CF6A5C41E97F385F_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_5E657A2D9C0A02DF_1(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_F081267A1EDA8B0F_METHOD_1_5E657A2D9C0A02DF_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_F4502266FC6E9B8B(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Single a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_F081267A1EDA8B0F_METHOD_1_F4502266FC6E9B8B_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_48AFEAB047F4521B(::MoleMole::Config::MaterialPropertyType a1, ::System::Collections::Generic::List_1<::Class_1_413B2BDBE645DB66*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::MaterialPropertyType, ::System::Collections::Generic::List_1<::Class_1_413B2BDBE645DB66*>*))((::PBYTE)hIl2Cpp + CLASS_1_F081267A1EDA8B0F_METHOD_1_48AFEAB047F4521B_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_5965447AF748C7A6(::MoleMole::MonoRenderHandler* a1, ::Class_3_FFD0045B4597F294* a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::MonoRenderHandler*, ::Class_3_FFD0045B4597F294*))((::PBYTE)hIl2Cpp + CLASS_1_F081267A1EDA8B0F_METHOD_1_5965447AF748C7A6_OFFSET))(this, a1, a2);
	}

	static ::System::Type* Method_1_FF57CAB1AEAA73D0(::MoleMole::Config::MaterialPropertyType a1)
	{
		return ((::System::Type*(*)(::MoleMole::Config::MaterialPropertyType))((::PBYTE)hIl2Cpp + CLASS_1_F081267A1EDA8B0F_METHOD_1_FF57CAB1AEAA73D0_OFFSET))(a1);
	}

	::System::Void Method_1_FD1E3D35875A9301(::System::String* a1, ::System::Boolean a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_F081267A1EDA8B0F_METHOD_1_FD1E3D35875A9301_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_1_83ABEDAA83837786(::Class_1_413B2BDBE645DB66* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_413B2BDBE645DB66*))((::PBYTE)hIl2Cpp + CLASS_1_F081267A1EDA8B0F_METHOD_1_83ABEDAA83837786_OFFSET))(this, a1);
	}

	static ::System::Type* Method_1_41196B141D48C333(::MoleMole::Config::MaterialPropertyType a1)
	{
		return ((::System::Type*(*)(::MoleMole::Config::MaterialPropertyType))((::PBYTE)hIl2Cpp + CLASS_1_F081267A1EDA8B0F_METHOD_1_41196B141D48C333_OFFSET))(a1);
	}

	::System::Void Method_1_86143FF46EAE82B7(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_F081267A1EDA8B0F_METHOD_1_86143FF46EAE82B7_OFFSET))(this, a1);
	}
};
