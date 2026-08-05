#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_CC22F13312585645.h"
#include "unitysdk/MoleMole/Battle/MaterialPropertyModifierExtraParams.h"
#include "unitysdk/System/Object.h"

class Class_3_FFD0045B4597F294;
namespace MoleMole { class ConfigMaterialPropertyModifier; }
namespace MoleMole { class MonoRenderHandler; }
namespace MoleMole::Config { class RenderMaterial; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_413B2BDBE645DB66_DISPOSE_OFFSET UNITYSDK_OFFSET(0x156EDE90)
#define CLASS_1_413B2BDBE645DB66_METHOD_1_06C79D9F95F098BC_1_OFFSET UNITYSDK_OFFSET(0x156EE7B0)
#define CLASS_1_413B2BDBE645DB66_METHOD_1_06C79D9F95F098BC_2_OFFSET UNITYSDK_OFFSET(0x156EE610)
#define CLASS_1_413B2BDBE645DB66_METHOD_1_06C79D9F95F098BC_OFFSET UNITYSDK_OFFSET(0x156EE950)
#define CLASS_1_413B2BDBE645DB66_METHOD_1_128774387667156B_OFFSET UNITYSDK_OFFSET(0x156EF270)
#define CLASS_1_413B2BDBE645DB66_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x156EDFB0)
#define CLASS_1_413B2BDBE645DB66_METHOD_1_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0x156EF4C0)
#define CLASS_1_413B2BDBE645DB66_METHOD_1_455E250D679F9642_1_OFFSET UNITYSDK_OFFSET(0x156EDF60)
#define CLASS_1_413B2BDBE645DB66_METHOD_1_455E250D679F9642_2_OFFSET UNITYSDK_OFFSET(0x156EF2B0)
#define CLASS_1_413B2BDBE645DB66_METHOD_1_455E250D679F9642_OFFSET UNITYSDK_OFFSET(0x156EE0D0)
#define CLASS_1_413B2BDBE645DB66_METHOD_1_4D048E895C608EDE_OFFSET UNITYSDK_OFFSET(0x156EEB00)
#define CLASS_1_413B2BDBE645DB66_METHOD_1_5323F2DF46A044DA_1_OFFSET UNITYSDK_OFFSET(0x156EF120)
#define CLASS_1_413B2BDBE645DB66_METHOD_1_5323F2DF46A044DA_2_OFFSET UNITYSDK_OFFSET(0x156EF200)
#define CLASS_1_413B2BDBE645DB66_METHOD_1_5323F2DF46A044DA_OFFSET UNITYSDK_OFFSET(0x156EEAF0)
#define CLASS_1_413B2BDBE645DB66_METHOD_1_77984DE08FE49DAE_OFFSET UNITYSDK_OFFSET(0x156EE130)
#define CLASS_1_413B2BDBE645DB66_METHOD_1_8E2613C0147FD640_OFFSET UNITYSDK_OFFSET(0x156EF380)
#define CLASS_1_413B2BDBE645DB66_METHOD_1_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x156EF400)
#define CLASS_1_413B2BDBE645DB66_METHOD_1_98F85FA4B74C9C19_OFFSET UNITYSDK_OFFSET(0x156EF080)
#define CLASS_1_413B2BDBE645DB66_METHOD_1_9C25D81B36F50A81_OFFSET UNITYSDK_OFFSET(0x156EE320)
#define CLASS_1_413B2BDBE645DB66_METHOD_1_A239DF324AF4215D_OFFSET UNITYSDK_OFFSET(0x156EF300)
#define CLASS_1_413B2BDBE645DB66_METHOD_1_A44A7715EC7490C5_OFFSET UNITYSDK_OFFSET(0x156EF130)
#define CLASS_1_413B2BDBE645DB66_METHOD_1_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x156EF5C0)
#define CLASS_1_413B2BDBE645DB66_METHOD_1_BF9BB9E2BBF3B6F4_OFFSET UNITYSDK_OFFSET(0x156EF5D0)
#define CLASS_1_413B2BDBE645DB66_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x156EF5B0)
#define CLASS_1_413B2BDBE645DB66_METHOD_1_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x156EF220)
#define CLASS_1_413B2BDBE645DB66_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x156EEF50)
#define CLASS_1_413B2BDBE645DB66_METHOD_1_CDEB5A211F02C596_OFFSET UNITYSDK_OFFSET(0x156EEFE0)
#define CLASS_1_413B2BDBE645DB66_METHOD_1_D3E17EE162EAD52F_OFFSET UNITYSDK_OFFSET(0x156EF630)
#define CLASS_1_413B2BDBE645DB66_METHOD_1_E7F1AECA7CFF8AAD_1_OFFSET UNITYSDK_OFFSET(0x156EF260)
#define CLASS_1_413B2BDBE645DB66_METHOD_1_E7F1AECA7CFF8AAD_2_OFFSET UNITYSDK_OFFSET(0x156EF6C0)
#define CLASS_1_413B2BDBE645DB66_METHOD_1_E7F1AECA7CFF8AAD_OFFSET UNITYSDK_OFFSET(0x156EF210)
#define CLASS_1_413B2BDBE645DB66_METHOD_1_F0088C88851A7DFB_1_OFFSET UNITYSDK_OFFSET(0x156EF3F0)
#define CLASS_1_413B2BDBE645DB66_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x156EF110)
#define CLASS_1_413B2BDBE645DB66_METHOD_1_FF7B2911BBACA4A9_OFFSET UNITYSDK_OFFSET(0x156EE5A0)
#define CLASS_1_413B2BDBE645DB66_TOSTRING_OFFSET UNITYSDK_OFFSET(0x156ED670)
#define CLASS_1_413B2BDBE645DB66__CTOR_OFFSET UNITYSDK_OFFSET(0x156EDE80)

inline static constexpr unsigned int Class_1_413B2BDBE645DB66_TypeDefinitionIndex = 43849;

class Class_1_413B2BDBE645DB66 : public ::System::Object
{
public:
	::MoleMole::MonoRenderHandler* Field_1_14; // 0x10
	::MoleMole::ConfigMaterialPropertyModifier* Field_1_9; // 0x18
	::System::String* Field_1_6; // 0x20
	::System::String* Field_1_11; // 0x28
	::System::Collections::Generic::List_1<::MoleMole::Config::RenderMaterial*>* Field_1_4; // 0x30
	::MoleMole::Battle::MaterialPropertyModifierExtraParams Field_1_12; // 0x38
	::Class_3_FFD0045B4597F294* Field_1_13; // 0x58
	::System::Action_1<::System::Boolean>* Field_1_17; // 0x60
	::System::Int32 Field_1_0; // 0x68
	::Enum_3_CC22F13312585645 Field_1_8; // 0x6C
	::System::Single Field_1_20; // 0x70
	::System::Single Field_1_16; // 0x74
	::System::Boolean Field_1_10; // 0x78
	::System::Boolean Field_1_15; // 0x79
	::System::Boolean Field_1_18; // 0x7A
	::System::Boolean Field_1_7; // 0x7B
	::System::Int32 Field_1_5; // 0x7C
	::System::Single Field_1_23; // 0x80
	::System::Boolean Field_1_21; // 0x84
	::System::Boolean Field_1_19; // 0x85
	::System::Single Field_1_22; // 0x88

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_413B2BDBE645DB66__CTOR_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_413B2BDBE645DB66_TOSTRING_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_413B2BDBE645DB66_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_455E250D679F9642()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_413B2BDBE645DB66_METHOD_1_455E250D679F9642_OFFSET))(this);
	}

	::System::Void Method_1_9C25D81B36F50A81(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_413B2BDBE645DB66_METHOD_1_9C25D81B36F50A81_OFFSET))(this, a1);
	}

	::System::Void Method_1_455E250D679F9642_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_413B2BDBE645DB66_METHOD_1_455E250D679F9642_1_OFFSET))(this);
	}

	::System::Single Method_1_5323F2DF46A044DA()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_413B2BDBE645DB66_METHOD_1_5323F2DF46A044DA_OFFSET))(this);
	}

	::System::Void Method_1_4D048E895C608EDE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_413B2BDBE645DB66_METHOD_1_4D048E895C608EDE_OFFSET))(this);
	}

	::System::Void Method_1_06C79D9F95F098BC(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_413B2BDBE645DB66_METHOD_1_06C79D9F95F098BC_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_413B2BDBE645DB66_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_CDEB5A211F02C596(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_413B2BDBE645DB66_METHOD_1_CDEB5A211F02C596_OFFSET))(this, a1);
	}

	::System::Void Method_1_98F85FA4B74C9C19(::System::String* a1, ::MoleMole::ConfigMaterialPropertyModifier* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::MoleMole::ConfigMaterialPropertyModifier*))((::PBYTE)hIl2Cpp + CLASS_1_413B2BDBE645DB66_METHOD_1_98F85FA4B74C9C19_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_413B2BDBE645DB66_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_06C79D9F95F098BC_1(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_413B2BDBE645DB66_METHOD_1_06C79D9F95F098BC_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_413B2BDBE645DB66_METHOD_1_30D1209326FA87FC_OFFSET))(this);
	}

	::System::Single Method_1_5323F2DF46A044DA_1()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_413B2BDBE645DB66_METHOD_1_5323F2DF46A044DA_1_OFFSET))(this);
	}

	::System::Void Method_1_A44A7715EC7490C5(::System::Int32 a1, ::System::String* a2, ::System::Collections::Generic::List_1<::MoleMole::Config::RenderMaterial*>* a3, ::MoleMole::Battle::MaterialPropertyModifierExtraParams a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::System::Collections::Generic::List_1<::MoleMole::Config::RenderMaterial*>*, ::MoleMole::Battle::MaterialPropertyModifierExtraParams))((::PBYTE)hIl2Cpp + CLASS_1_413B2BDBE645DB66_METHOD_1_A44A7715EC7490C5_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Single Method_1_5323F2DF46A044DA_2()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_413B2BDBE645DB66_METHOD_1_5323F2DF46A044DA_2_OFFSET))(this);
	}

	::System::Void Method_1_E7F1AECA7CFF8AAD(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_413B2BDBE645DB66_METHOD_1_E7F1AECA7CFF8AAD_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_413B2BDBE645DB66_METHOD_1_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Method_1_E7F1AECA7CFF8AAD_1(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_413B2BDBE645DB66_METHOD_1_E7F1AECA7CFF8AAD_1_OFFSET))(this, a1);
	}

	::System::String* Method_1_128774387667156B()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_413B2BDBE645DB66_METHOD_1_128774387667156B_OFFSET))(this);
	}

	::System::Void Method_1_455E250D679F9642_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_413B2BDBE645DB66_METHOD_1_455E250D679F9642_2_OFFSET))(this);
	}

	::System::Void Method_1_A239DF324AF4215D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_413B2BDBE645DB66_METHOD_1_A239DF324AF4215D_OFFSET))(this);
	}

	::System::Void Method_1_8E2613C0147FD640(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_413B2BDBE645DB66_METHOD_1_8E2613C0147FD640_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_413B2BDBE645DB66_METHOD_1_F0088C88851A7DFB_1_OFFSET))(this);
	}

	::System::Void Method_1_06C79D9F95F098BC_2(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_413B2BDBE645DB66_METHOD_1_06C79D9F95F098BC_2_OFFSET))(this, a1);
	}

	::System::Void Method_1_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_413B2BDBE645DB66_METHOD_1_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_1_33ACA6CB2ABC73F7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_413B2BDBE645DB66_METHOD_1_33ACA6CB2ABC73F7_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_413B2BDBE645DB66_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::Enum_3_CC22F13312585645 Method_1_A96DCA30C6927810()
	{
		return ((::Enum_3_CC22F13312585645(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_413B2BDBE645DB66_METHOD_1_A96DCA30C6927810_OFFSET))(this);
	}

	::System::Single Method_1_FF7B2911BBACA4A9()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_413B2BDBE645DB66_METHOD_1_FF7B2911BBACA4A9_OFFSET))(this);
	}

	::System::Void Method_1_77984DE08FE49DAE(::Enum_3_CC22F13312585645 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_CC22F13312585645))((::PBYTE)hIl2Cpp + CLASS_1_413B2BDBE645DB66_METHOD_1_77984DE08FE49DAE_OFFSET))(this, a1);
	}

	::System::Void Method_1_BF9BB9E2BBF3B6F4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_413B2BDBE645DB66_METHOD_1_BF9BB9E2BBF3B6F4_OFFSET))(this);
	}

	::System::Void Method_1_D3E17EE162EAD52F(::System::Boolean a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_413B2BDBE645DB66_METHOD_1_D3E17EE162EAD52F_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_E7F1AECA7CFF8AAD_2(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_413B2BDBE645DB66_METHOD_1_E7F1AECA7CFF8AAD_2_OFFSET))(this, a1);
	}
};
