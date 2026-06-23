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

#define CLASS_1_413B2BDBE645DB66_DISPOSE_OFFSET UNITYSDK_OFFSET(0x142D6690)
#define CLASS_1_413B2BDBE645DB66_METHOD_1_06C79D9F95F098BC_1_OFFSET UNITYSDK_OFFSET(0x142F0170)
#define CLASS_1_413B2BDBE645DB66_METHOD_1_06C79D9F95F098BC_2_OFFSET UNITYSDK_OFFSET(0x142F0400)
#define CLASS_1_413B2BDBE645DB66_METHOD_1_06C79D9F95F098BC_OFFSET UNITYSDK_OFFSET(0x142EF830)
#define CLASS_1_413B2BDBE645DB66_METHOD_1_128774387667156B_OFFSET UNITYSDK_OFFSET(0x142EF7F0)
#define CLASS_1_413B2BDBE645DB66_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x142EF170)
#define CLASS_1_413B2BDBE645DB66_METHOD_1_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0x142EF670)
#define CLASS_1_413B2BDBE645DB66_METHOD_1_455E250D679F9642_1_OFFSET UNITYSDK_OFFSET(0x142EF120)
#define CLASS_1_413B2BDBE645DB66_METHOD_1_455E250D679F9642_2_OFFSET UNITYSDK_OFFSET(0x142F03A0)
#define CLASS_1_413B2BDBE645DB66_METHOD_1_455E250D679F9642_OFFSET UNITYSDK_OFFSET(0x142EF290)
#define CLASS_1_413B2BDBE645DB66_METHOD_1_5323F2DF46A044DA_1_OFFSET UNITYSDK_OFFSET(0x142F0680)
#define CLASS_1_413B2BDBE645DB66_METHOD_1_5323F2DF46A044DA_2_OFFSET UNITYSDK_OFFSET(0x142F0690)
#define CLASS_1_413B2BDBE645DB66_METHOD_1_5323F2DF46A044DA_OFFSET UNITYSDK_OFFSET(0x142EF4E0)
#define CLASS_1_413B2BDBE645DB66_METHOD_1_53E26D27E4A5E056_OFFSET UNITYSDK_OFFSET(0x142EFEF0)
#define CLASS_1_413B2BDBE645DB66_METHOD_1_6F1A049270AD7843_OFFSET UNITYSDK_OFFSET(0x142F05A0)
#define CLASS_1_413B2BDBE645DB66_METHOD_1_77984DE08FE49DAE_OFFSET UNITYSDK_OFFSET(0x142EF2E0)
#define CLASS_1_413B2BDBE645DB66_METHOD_1_78C62398E94F0FB1_OFFSET UNITYSDK_OFFSET(0x142EF9D0)
#define CLASS_1_413B2BDBE645DB66_METHOD_1_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x142EFE30)
#define CLASS_1_413B2BDBE645DB66_METHOD_1_98F85FA4B74C9C19_OFFSET UNITYSDK_OFFSET(0x142F0310)
#define CLASS_1_413B2BDBE645DB66_METHOD_1_A239DF324AF4215D_OFFSET UNITYSDK_OFFSET(0x142F0600)
#define CLASS_1_413B2BDBE645DB66_METHOD_1_A44A7715EC7490C5_OFFSET UNITYSDK_OFFSET(0x142F0760)
#define CLASS_1_413B2BDBE645DB66_METHOD_1_A60FE005B3026E98_OFFSET UNITYSDK_OFFSET(0x142D6760)
#define CLASS_1_413B2BDBE645DB66_METHOD_1_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x142F0160)
#define CLASS_1_413B2BDBE645DB66_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x142F06B0)
#define CLASS_1_413B2BDBE645DB66_METHOD_1_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x142EF620)
#define CLASS_1_413B2BDBE645DB66_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x142EF4F0)
#define CLASS_1_413B2BDBE645DB66_METHOD_1_CDEB5A211F02C596_OFFSET UNITYSDK_OFFSET(0x142EF580)
#define CLASS_1_413B2BDBE645DB66_METHOD_1_D3E17EE162EAD52F_OFFSET UNITYSDK_OFFSET(0x142F06C0)
#define CLASS_1_413B2BDBE645DB66_METHOD_1_E7F1AECA7CFF8AAD_1_OFFSET UNITYSDK_OFFSET(0x142F06A0)
#define CLASS_1_413B2BDBE645DB66_METHOD_1_E7F1AECA7CFF8AAD_2_OFFSET UNITYSDK_OFFSET(0x142F0750)
#define CLASS_1_413B2BDBE645DB66_METHOD_1_E7F1AECA7CFF8AAD_OFFSET UNITYSDK_OFFSET(0x142F03F0)
#define CLASS_1_413B2BDBE645DB66_METHOD_1_F0088C88851A7DFB_1_OFFSET UNITYSDK_OFFSET(0x142EF7E0)
#define CLASS_1_413B2BDBE645DB66_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x142EF760)
#define CLASS_1_413B2BDBE645DB66_METHOD_1_FF7B2911BBACA4A9_OFFSET UNITYSDK_OFFSET(0x142EF770)
#define CLASS_1_413B2BDBE645DB66_TOSTRING_OFFSET UNITYSDK_OFFSET(0x142EE900)
#define CLASS_1_413B2BDBE645DB66__CTOR_OFFSET UNITYSDK_OFFSET(0x142EF110)

inline static constexpr unsigned int Class_1_413B2BDBE645DB66_TypeDefinitionIndex = 68064;

class Class_1_413B2BDBE645DB66 : public ::System::Object
{
public:
	::Class_3_FFD0045B4597F294* Field_1_11; // 0x10
	::System::String* Field_1_5; // 0x18
	::MoleMole::MonoRenderHandler* Field_1_10; // 0x20
	::System::Action_1<::System::Boolean>* Field_1_15; // 0x28
	::System::Collections::Generic::List_1<::MoleMole::Config::RenderMaterial*>* Field_1_4; // 0x30
	::MoleMole::ConfigMaterialPropertyModifier* Field_1_7; // 0x38
	::System::String* Field_1_2; // 0x40
	::MoleMole::Battle::MaterialPropertyModifierExtraParams Field_1_12; // 0x48
	::System::Int32 Field_1_0; // 0x68
	::System::Boolean Field_1_1; // 0x6C
	::System::Boolean Field_1_14; // 0x6D
	::Enum_3_CC22F13312585645 Field_1_8; // 0x70
	::System::Single Field_1_18; // 0x74
	::System::Single Field_1_16; // 0x78
	::System::Single Field_1_20; // 0x7C
	::System::Boolean Field_1_19; // 0x80
	::System::Boolean Field_1_9; // 0x81
	::System::Boolean Field_1_13; // 0x82
	::System::Boolean Field_1_6; // 0x83
	::System::Single Field_1_17; // 0x84
	::System::Int32 Field_1_3; // 0x88

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

	::System::Single Method_1_5323F2DF46A044DA()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_413B2BDBE645DB66_METHOD_1_5323F2DF46A044DA_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_413B2BDBE645DB66_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_CDEB5A211F02C596(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_413B2BDBE645DB66_METHOD_1_CDEB5A211F02C596_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_413B2BDBE645DB66_METHOD_1_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Method_1_33ACA6CB2ABC73F7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_413B2BDBE645DB66_METHOD_1_33ACA6CB2ABC73F7_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_413B2BDBE645DB66_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Single Method_1_FF7B2911BBACA4A9()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_413B2BDBE645DB66_METHOD_1_FF7B2911BBACA4A9_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_413B2BDBE645DB66_METHOD_1_F0088C88851A7DFB_1_OFFSET))(this);
	}

	::System::String* Method_1_128774387667156B()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_413B2BDBE645DB66_METHOD_1_128774387667156B_OFFSET))(this);
	}

	::System::Void Method_1_06C79D9F95F098BC(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_413B2BDBE645DB66_METHOD_1_06C79D9F95F098BC_OFFSET))(this, a1);
	}

	::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_413B2BDBE645DB66_METHOD_1_30D1209326FA87FC_OFFSET))(this);
	}

	::System::Void Method_1_78C62398E94F0FB1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_413B2BDBE645DB66_METHOD_1_78C62398E94F0FB1_OFFSET))(this);
	}

	::System::Void Method_1_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_413B2BDBE645DB66_METHOD_1_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_1_455E250D679F9642_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_413B2BDBE645DB66_METHOD_1_455E250D679F9642_1_OFFSET))(this);
	}

	::System::Void Method_1_A60FE005B3026E98(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_413B2BDBE645DB66_METHOD_1_A60FE005B3026E98_OFFSET))(this, a1);
	}

	::Enum_3_CC22F13312585645 Method_1_A96DCA30C6927810()
	{
		return ((::Enum_3_CC22F13312585645(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_413B2BDBE645DB66_METHOD_1_A96DCA30C6927810_OFFSET))(this);
	}

	::System::Void Method_1_06C79D9F95F098BC_1(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_413B2BDBE645DB66_METHOD_1_06C79D9F95F098BC_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_98F85FA4B74C9C19(::System::String* a1, ::MoleMole::ConfigMaterialPropertyModifier* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::MoleMole::ConfigMaterialPropertyModifier*))((::PBYTE)hIl2Cpp + CLASS_1_413B2BDBE645DB66_METHOD_1_98F85FA4B74C9C19_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_455E250D679F9642_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_413B2BDBE645DB66_METHOD_1_455E250D679F9642_2_OFFSET))(this);
	}

	::System::Void Method_1_E7F1AECA7CFF8AAD(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_413B2BDBE645DB66_METHOD_1_E7F1AECA7CFF8AAD_OFFSET))(this, a1);
	}

	::System::Void Method_1_06C79D9F95F098BC_2(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_413B2BDBE645DB66_METHOD_1_06C79D9F95F098BC_2_OFFSET))(this, a1);
	}

	::System::Void Method_1_77984DE08FE49DAE(::Enum_3_CC22F13312585645 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_CC22F13312585645))((::PBYTE)hIl2Cpp + CLASS_1_413B2BDBE645DB66_METHOD_1_77984DE08FE49DAE_OFFSET))(this, a1);
	}

	::System::Single Method_1_5323F2DF46A044DA_1()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_413B2BDBE645DB66_METHOD_1_5323F2DF46A044DA_1_OFFSET))(this);
	}

	::System::Void Method_1_A239DF324AF4215D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_413B2BDBE645DB66_METHOD_1_A239DF324AF4215D_OFFSET))(this);
	}

	::System::Single Method_1_5323F2DF46A044DA_2()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_413B2BDBE645DB66_METHOD_1_5323F2DF46A044DA_2_OFFSET))(this);
	}

	::System::Void Method_1_E7F1AECA7CFF8AAD_1(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_413B2BDBE645DB66_METHOD_1_E7F1AECA7CFF8AAD_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_413B2BDBE645DB66_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::Void Method_1_6F1A049270AD7843()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_413B2BDBE645DB66_METHOD_1_6F1A049270AD7843_OFFSET))(this);
	}

	::System::Void Method_1_D3E17EE162EAD52F(::System::Boolean a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_413B2BDBE645DB66_METHOD_1_D3E17EE162EAD52F_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_53E26D27E4A5E056(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_413B2BDBE645DB66_METHOD_1_53E26D27E4A5E056_OFFSET))(this, a1);
	}

	::System::Void Method_1_E7F1AECA7CFF8AAD_2(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_413B2BDBE645DB66_METHOD_1_E7F1AECA7CFF8AAD_2_OFFSET))(this, a1);
	}

	::System::Void Method_1_A44A7715EC7490C5(::System::Int32 a1, ::System::String* a2, ::System::Collections::Generic::List_1<::MoleMole::Config::RenderMaterial*>* a3, ::MoleMole::Battle::MaterialPropertyModifierExtraParams a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::System::Collections::Generic::List_1<::MoleMole::Config::RenderMaterial*>*, ::MoleMole::Battle::MaterialPropertyModifierExtraParams))((::PBYTE)hIl2Cpp + CLASS_1_413B2BDBE645DB66_METHOD_1_A44A7715EC7490C5_OFFSET))(this, a1, a2, a3, a4);
	}
};
