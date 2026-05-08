#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_CC22F13312585645.h"
#include "unitysdk/MoleMole/Battle/MaterialPropertyModifierExtraParams.h"
#include "unitysdk/MoleMole/Config/MaterialPropertyType.h"
#include "unitysdk/System/Object.h"

class Class_1_9610394F487FC231;
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

#define CLASS_1_F081267A1EDA8B0F_DISPOSE_OFFSET UNITYSDK_OFFSET(0x12844260)
#define CLASS_1_F081267A1EDA8B0F_METHOD_1_05403F8C3D5C4318_OFFSET UNITYSDK_OFFSET(0x12844C70)
#define CLASS_1_F081267A1EDA8B0F_METHOD_1_0E72B12FCD9FB8F6_OFFSET UNITYSDK_OFFSET(0x128479A0)
#define CLASS_1_F081267A1EDA8B0F_METHOD_1_128774387667156B_OFFSET UNITYSDK_OFFSET(0x12846E50)
#define CLASS_1_F081267A1EDA8B0F_METHOD_1_14E642F5D906264F_OFFSET UNITYSDK_OFFSET(0x128453A0)
#define CLASS_1_F081267A1EDA8B0F_METHOD_1_28C834B59E1D0120_OFFSET UNITYSDK_OFFSET(0x12845F80)
#define CLASS_1_F081267A1EDA8B0F_METHOD_1_29D4F155A0F84902_OFFSET UNITYSDK_OFFSET(0x12844AE0)
#define CLASS_1_F081267A1EDA8B0F_METHOD_1_3554EF21965B9AA0_OFFSET UNITYSDK_OFFSET(0x128450B0)
#define CLASS_1_F081267A1EDA8B0F_METHOD_1_398542EDB9307BBA_OFFSET UNITYSDK_OFFSET(0x12847A60)
#define CLASS_1_F081267A1EDA8B0F_METHOD_1_41196B141D48C333_OFFSET UNITYSDK_OFFSET(0x12847360)
#define CLASS_1_F081267A1EDA8B0F_METHOD_1_4713FE91C3103ABF_OFFSET UNITYSDK_OFFSET(0x12846200)
#define CLASS_1_F081267A1EDA8B0F_METHOD_1_48AFEAB047F4521B_OFFSET UNITYSDK_OFFSET(0x12847AE0)
#define CLASS_1_F081267A1EDA8B0F_METHOD_1_5965447AF748C7A6_OFFSET UNITYSDK_OFFSET(0x12844900)
#define CLASS_1_F081267A1EDA8B0F_METHOD_1_6BB86695870EFBD1_OFFSET UNITYSDK_OFFSET(0x12847C90)
#define CLASS_1_F081267A1EDA8B0F_METHOD_1_6D93101E4CE10A96_OFFSET UNITYSDK_OFFSET(0x12847DD0)
#define CLASS_1_F081267A1EDA8B0F_METHOD_1_7D30D10C676AAF99_OFFSET UNITYSDK_OFFSET(0x12845EF0)
#define CLASS_1_F081267A1EDA8B0F_METHOD_1_83ABEDAA83837786_OFFSET UNITYSDK_OFFSET(0x128477A0)
#define CLASS_1_F081267A1EDA8B0F_METHOD_1_858EE0E3CEF5E9F3_OFFSET UNITYSDK_OFFSET(0x12847720)
#define CLASS_1_F081267A1EDA8B0F_METHOD_1_86143FF46EAE82B7_OFFSET UNITYSDK_OFFSET(0x12845270)
#define CLASS_1_F081267A1EDA8B0F_METHOD_1_8E89BE9866A768ED_OFFSET UNITYSDK_OFFSET(0x128456A0)
#define CLASS_1_F081267A1EDA8B0F_METHOD_1_8F42D17763B37BEB_OFFSET UNITYSDK_OFFSET(0x12847610)
#define CLASS_1_F081267A1EDA8B0F_METHOD_1_9B1146C0C22FB04B_OFFSET UNITYSDK_OFFSET(0x12847F50)
#define CLASS_1_F081267A1EDA8B0F_METHOD_1_A0BF5729B5768209_OFFSET UNITYSDK_OFFSET(0x12844680)
#define CLASS_1_F081267A1EDA8B0F_METHOD_1_AFE2E9D8863D6F6A_OFFSET UNITYSDK_OFFSET(0x12844960)
#define CLASS_1_F081267A1EDA8B0F_METHOD_1_BFC40B221EFB2027_OFFSET UNITYSDK_OFFSET(0x12844A60)
#define CLASS_1_F081267A1EDA8B0F_METHOD_1_CF6A5C41E97F385F_OFFSET UNITYSDK_OFFSET(0x12846500)
#define CLASS_1_F081267A1EDA8B0F_METHOD_1_D9DF82C7A47900EC_OFFSET UNITYSDK_OFFSET(0x12845860)
#define CLASS_1_F081267A1EDA8B0F_METHOD_1_E38609574BA0AD99_OFFSET UNITYSDK_OFFSET(0x12845E50)
#define CLASS_1_F081267A1EDA8B0F_METHOD_1_E8147D66C9417041_OFFSET UNITYSDK_OFFSET(0x128454A0)
#define CLASS_1_F081267A1EDA8B0F_METHOD_1_F14F8BD70CDDE8D1_OFFSET UNITYSDK_OFFSET(0x12847260)
#define CLASS_1_F081267A1EDA8B0F_METHOD_1_F22CDCE4180D0D8A_1_OFFSET UNITYSDK_OFFSET(0x12846A80)
#define CLASS_1_F081267A1EDA8B0F_METHOD_1_F22CDCE4180D0D8A_2_OFFSET UNITYSDK_OFFSET(0x12846E90)
#define CLASS_1_F081267A1EDA8B0F_METHOD_1_F22CDCE4180D0D8A_OFFSET UNITYSDK_OFFSET(0x12844CE0)
#define CLASS_1_F081267A1EDA8B0F_METHOD_1_F4502266FC6E9B8B_OFFSET UNITYSDK_OFFSET(0x12846770)
#define CLASS_1_F081267A1EDA8B0F_METHOD_1_FD1E3D35875A9301_OFFSET UNITYSDK_OFFSET(0x12845920)
#define CLASS_1_F081267A1EDA8B0F_METHOD_1_FF57CAB1AEAA73D0_OFFSET UNITYSDK_OFFSET(0x12844A20)
#define CLASS_1_F081267A1EDA8B0F_TOSTRING_OFFSET UNITYSDK_OFFSET(0x12843DB0)
#define CLASS_1_F081267A1EDA8B0F__CTOR_OFFSET UNITYSDK_OFFSET(0x12843F40)

inline static constexpr unsigned int Class_1_F081267A1EDA8B0F_TypeDefinitionIndex = 74785;

class Class_1_F081267A1EDA8B0F : public ::System::Object
{
public:
	::MoleMole::MonoRenderHandler* Field_1_3; // 0x10
	::System::Collections::Generic::List_1<::Class_1_9610394F487FC231*>* Field_1_0; // 0x18
	::System::Collections::Generic::List_1<::Class_1_9610394F487FC231*>* Field_1_1; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::Class_1_9610394F487FC231*>*>* Field_1_2; // 0x28
	::System::Collections::Generic::List_1<::System::String*>* Field_1_4; // 0x30
	::Class_3_FFD0045B4597F294* Field_1_5; // 0x38

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

	::System::Void Method_1_5965447AF748C7A6(::MoleMole::MonoRenderHandler* a1, ::Class_3_FFD0045B4597F294* a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::MonoRenderHandler*, ::Class_3_FFD0045B4597F294*))((::PBYTE)hIl2Cpp + CLASS_1_F081267A1EDA8B0F_METHOD_1_5965447AF748C7A6_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_AFE2E9D8863D6F6A(::Class_1_9610394F487FC231* a1, ::MoleMole::Config::MaterialPropertyType a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_9610394F487FC231*, ::MoleMole::Config::MaterialPropertyType))((::PBYTE)hIl2Cpp + CLASS_1_F081267A1EDA8B0F_METHOD_1_AFE2E9D8863D6F6A_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_1_BFC40B221EFB2027(::System::String* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_F081267A1EDA8B0F_METHOD_1_BFC40B221EFB2027_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_05403F8C3D5C4318(::Class_1_9610394F487FC231* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_1_9610394F487FC231*))((::PBYTE)hIl2Cpp + CLASS_1_F081267A1EDA8B0F_METHOD_1_05403F8C3D5C4318_OFFSET))(this, a1);
	}

	::System::Void Method_1_F22CDCE4180D0D8A(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_F081267A1EDA8B0F_METHOD_1_F22CDCE4180D0D8A_OFFSET))(this, a1);
	}

	::System::Void Method_1_14E642F5D906264F(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_F081267A1EDA8B0F_METHOD_1_14E642F5D906264F_OFFSET))(this, a1);
	}

	::System::Void Method_1_E8147D66C9417041(::System::Func_2<::System::String*, ::System::Boolean>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Func_2<::System::String*, ::System::Boolean>*))((::PBYTE)hIl2Cpp + CLASS_1_F081267A1EDA8B0F_METHOD_1_E8147D66C9417041_OFFSET))(this, a1);
	}

	::System::Void Method_1_8E89BE9866A768ED()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F081267A1EDA8B0F_METHOD_1_8E89BE9866A768ED_OFFSET))(this);
	}

	::System::Void Method_1_D9DF82C7A47900EC(::Class_1_9610394F487FC231* a1, ::Enum_3_CC22F13312585645 a2, ::Enum_3_CC22F13312585645 a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_9610394F487FC231*, ::Enum_3_CC22F13312585645, ::Enum_3_CC22F13312585645))((::PBYTE)hIl2Cpp + CLASS_1_F081267A1EDA8B0F_METHOD_1_D9DF82C7A47900EC_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_FD1E3D35875A9301(::System::String* a1, ::System::Boolean a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_F081267A1EDA8B0F_METHOD_1_FD1E3D35875A9301_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_7D30D10C676AAF99(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_F081267A1EDA8B0F_METHOD_1_7D30D10C676AAF99_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_29D4F155A0F84902(::System::String* a1, ::Class_1_9610394F487FC231*& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::Class_1_9610394F487FC231*&))((::PBYTE)hIl2Cpp + CLASS_1_F081267A1EDA8B0F_METHOD_1_29D4F155A0F84902_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_4713FE91C3103ABF(::System::String* a1, ::MoleMole::ConfigMaterialPropertyModifier* a2, ::System::Int32 a3, ::System::String* a4, ::System::Collections::Generic::List_1<::MoleMole::Config::RenderMaterial*>* a5, ::MoleMole::Battle::MaterialPropertyModifierExtraParams a6, ::Class_1_9610394F487FC231*& a7)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::MoleMole::ConfigMaterialPropertyModifier*, ::System::Int32, ::System::String*, ::System::Collections::Generic::List_1<::MoleMole::Config::RenderMaterial*>*, ::MoleMole::Battle::MaterialPropertyModifierExtraParams, ::Class_1_9610394F487FC231*&))((::PBYTE)hIl2Cpp + CLASS_1_F081267A1EDA8B0F_METHOD_1_4713FE91C3103ABF_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	::System::Void Method_1_E38609574BA0AD99(::System::String* a1, ::System::Boolean a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_F081267A1EDA8B0F_METHOD_1_E38609574BA0AD99_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_CF6A5C41E97F385F(::System::String* a1, ::Class_1_9610394F487FC231* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::Class_1_9610394F487FC231*))((::PBYTE)hIl2Cpp + CLASS_1_F081267A1EDA8B0F_METHOD_1_CF6A5C41E97F385F_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_F4502266FC6E9B8B(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Single a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_F081267A1EDA8B0F_METHOD_1_F4502266FC6E9B8B_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_28C834B59E1D0120()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F081267A1EDA8B0F_METHOD_1_28C834B59E1D0120_OFFSET))(this);
	}

	::System::Void Method_1_F22CDCE4180D0D8A_1(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_F081267A1EDA8B0F_METHOD_1_F22CDCE4180D0D8A_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_3554EF21965B9AA0(::System::String* a1, ::System::Collections::Generic::List_1<::Class_1_9610394F487FC231*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Collections::Generic::List_1<::Class_1_9610394F487FC231*>*))((::PBYTE)hIl2Cpp + CLASS_1_F081267A1EDA8B0F_METHOD_1_3554EF21965B9AA0_OFFSET))(this, a1, a2);
	}

	::System::String* Method_1_128774387667156B()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F081267A1EDA8B0F_METHOD_1_128774387667156B_OFFSET))(this);
	}

	::System::Void Method_1_F22CDCE4180D0D8A_2(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_F081267A1EDA8B0F_METHOD_1_F22CDCE4180D0D8A_2_OFFSET))(this, a1);
	}

	static ::System::Type* Method_1_FF57CAB1AEAA73D0(::MoleMole::Config::MaterialPropertyType a1)
	{
		return ((::System::Type*(*)(::MoleMole::Config::MaterialPropertyType))((::PBYTE)hIl2Cpp + CLASS_1_F081267A1EDA8B0F_METHOD_1_FF57CAB1AEAA73D0_OFFSET))(a1);
	}

	::System::Void Method_1_8F42D17763B37BEB(::MoleMole::Config::MaterialPropertyType a1, ::System::Action_1<::System::String*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::MaterialPropertyType, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_1_F081267A1EDA8B0F_METHOD_1_8F42D17763B37BEB_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_858EE0E3CEF5E9F3(::System::String* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_F081267A1EDA8B0F_METHOD_1_858EE0E3CEF5E9F3_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_83ABEDAA83837786(::Class_1_9610394F487FC231* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_9610394F487FC231*))((::PBYTE)hIl2Cpp + CLASS_1_F081267A1EDA8B0F_METHOD_1_83ABEDAA83837786_OFFSET))(this, a1);
	}

	::System::Void Method_1_0E72B12FCD9FB8F6(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_F081267A1EDA8B0F_METHOD_1_0E72B12FCD9FB8F6_OFFSET))(this, a1);
	}

	::System::Void Method_1_398542EDB9307BBA(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_F081267A1EDA8B0F_METHOD_1_398542EDB9307BBA_OFFSET))(this, a1);
	}

	::System::Void Method_1_A0BF5729B5768209(::Class_1_9610394F487FC231* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_9610394F487FC231*))((::PBYTE)hIl2Cpp + CLASS_1_F081267A1EDA8B0F_METHOD_1_A0BF5729B5768209_OFFSET))(this, a1);
	}

	static ::System::Type* Method_1_41196B141D48C333(::MoleMole::Config::MaterialPropertyType a1)
	{
		return ((::System::Type*(*)(::MoleMole::Config::MaterialPropertyType))((::PBYTE)hIl2Cpp + CLASS_1_F081267A1EDA8B0F_METHOD_1_41196B141D48C333_OFFSET))(a1);
	}

	::System::Void Method_1_48AFEAB047F4521B(::MoleMole::Config::MaterialPropertyType a1, ::System::Collections::Generic::List_1<::Class_1_9610394F487FC231*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::MaterialPropertyType, ::System::Collections::Generic::List_1<::Class_1_9610394F487FC231*>*))((::PBYTE)hIl2Cpp + CLASS_1_F081267A1EDA8B0F_METHOD_1_48AFEAB047F4521B_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_6BB86695870EFBD1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F081267A1EDA8B0F_METHOD_1_6BB86695870EFBD1_OFFSET))(this);
	}

	::System::Void Method_1_F14F8BD70CDDE8D1(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_F081267A1EDA8B0F_METHOD_1_F14F8BD70CDDE8D1_OFFSET))(this, a1);
	}

	::System::Void Method_1_86143FF46EAE82B7(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_F081267A1EDA8B0F_METHOD_1_86143FF46EAE82B7_OFFSET))(this, a1);
	}

	::System::Void Method_1_6D93101E4CE10A96()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F081267A1EDA8B0F_METHOD_1_6D93101E4CE10A96_OFFSET))(this);
	}

	::Class_1_9610394F487FC231* Method_1_9B1146C0C22FB04B(::System::String* a1)
	{
		return ((::Class_1_9610394F487FC231*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_F081267A1EDA8B0F_METHOD_1_9B1146C0C22FB04B_OFFSET))(this, a1);
	}
};
