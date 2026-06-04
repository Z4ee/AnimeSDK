#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/UIController.h"
#include "unitysdk/UnityEngine/NativeString.h"

class Class_2_A48F3719AA1CF200_29;
namespace System { class Object; }
namespace System { class String; }
namespace System::Text { class StringBuilder; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Text; }

#define CLASS_2_3E17E61D9F6875C4_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x1452CF00)
#define CLASS_2_3E17E61D9F6875C4_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x1452D020)
#define CLASS_2_3E17E61D9F6875C4_METHOD_2_049407E7CFE73C8B_OFFSET UNITYSDK_OFFSET(0x1452BD40)
#define CLASS_2_3E17E61D9F6875C4_METHOD_2_0D64F99BAAA7B5C4_OFFSET UNITYSDK_OFFSET(0x1452C1B0)
#define CLASS_2_3E17E61D9F6875C4_METHOD_2_16323FC6A31C6693_OFFSET UNITYSDK_OFFSET(0x14526020)
#define CLASS_2_3E17E61D9F6875C4_METHOD_2_19CCC07C980409E4_OFFSET UNITYSDK_OFFSET(0x1452C960)
#define CLASS_2_3E17E61D9F6875C4_METHOD_2_1B9CC121BDC8766D_1_OFFSET UNITYSDK_OFFSET(0x1452C740)
#define CLASS_2_3E17E61D9F6875C4_METHOD_2_1B9CC121BDC8766D_OFFSET UNITYSDK_OFFSET(0x1452B8E0)
#define CLASS_2_3E17E61D9F6875C4_METHOD_2_1CC698E8ABED00A4_OFFSET UNITYSDK_OFFSET(0x14528C20)
#define CLASS_2_3E17E61D9F6875C4_METHOD_2_288AA83E8506706B_OFFSET UNITYSDK_OFFSET(0x1452A6A0)
#define CLASS_2_3E17E61D9F6875C4_METHOD_2_28C532CD321F20DC_OFFSET UNITYSDK_OFFSET(0x14529270)
#define CLASS_2_3E17E61D9F6875C4_METHOD_2_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0x14529F10)
#define CLASS_2_3E17E61D9F6875C4_METHOD_2_3FC5D2EAE16048C0_OFFSET UNITYSDK_OFFSET(0x1452AB90)
#define CLASS_2_3E17E61D9F6875C4_METHOD_2_5152ABC5D08CE614_OFFSET UNITYSDK_OFFSET(0x1452C3A0)
#define CLASS_2_3E17E61D9F6875C4_METHOD_2_61EC2AC0BD93363E_OFFSET UNITYSDK_OFFSET(0x1452B740)
#define CLASS_2_3E17E61D9F6875C4_METHOD_2_64B6514CFF8F8D76_OFFSET UNITYSDK_OFFSET(0x145257D0)
#define CLASS_2_3E17E61D9F6875C4_METHOD_2_73C23613314BF1A1_OFFSET UNITYSDK_OFFSET(0x1452A470)
#define CLASS_2_3E17E61D9F6875C4_METHOD_2_79C171A8034611D5_OFFSET UNITYSDK_OFFSET(0x1452A210)
#define CLASS_2_3E17E61D9F6875C4_METHOD_2_7DD84EAFF333A1E4_1_OFFSET UNITYSDK_OFFSET(0x1452A3E0)
#define CLASS_2_3E17E61D9F6875C4_METHOD_2_7DD84EAFF333A1E4_OFFSET UNITYSDK_OFFSET(0x1452A390)
#define CLASS_2_3E17E61D9F6875C4_METHOD_2_809818D33F5A75DB_OFFSET UNITYSDK_OFFSET(0x14528A60)
#define CLASS_2_3E17E61D9F6875C4_METHOD_2_8C3DB70FFBBF01C7_OFFSET UNITYSDK_OFFSET(0x1452A260)
#define CLASS_2_3E17E61D9F6875C4_METHOD_2_90EC931103FB6F31_OFFSET UNITYSDK_OFFSET(0x1452C8E0)
#define CLASS_2_3E17E61D9F6875C4_METHOD_2_916B8A6B72C96F5C_OFFSET UNITYSDK_OFFSET(0x1452B650)
#define CLASS_2_3E17E61D9F6875C4_METHOD_2_943E1EFDF67DA624_OFFSET UNITYSDK_OFFSET(0x1452CA80)
#define CLASS_2_3E17E61D9F6875C4_METHOD_2_A24997ADD41BAAD9_OFFSET UNITYSDK_OFFSET(0x1452C870)
#define CLASS_2_3E17E61D9F6875C4_METHOD_2_A6544B958241856F_OFFSET UNITYSDK_OFFSET(0x14529CB0)
#define CLASS_2_3E17E61D9F6875C4_METHOD_2_AC9E9450F9A55C57_OFFSET UNITYSDK_OFFSET(0x14529830)
#define CLASS_2_3E17E61D9F6875C4_METHOD_2_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x1452A660)
#define CLASS_2_3E17E61D9F6875C4_METHOD_2_CA373AA1C7054598_2_OFFSET UNITYSDK_OFFSET(0x1452B860)
#define CLASS_2_3E17E61D9F6875C4_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1452A430)
#define CLASS_2_3E17E61D9F6875C4_METHOD_2_CEE2550285AA5985_OFFSET UNITYSDK_OFFSET(0x1452C060)
#define CLASS_2_3E17E61D9F6875C4_METHOD_2_D7852DE078ACC1F1_OFFSET UNITYSDK_OFFSET(0x1452A9C0)
#define CLASS_2_3E17E61D9F6875C4_METHOD_2_E981EFEFFC0B047D_OFFSET UNITYSDK_OFFSET(0x1452A580)
#define CLASS_2_3E17E61D9F6875C4_METHOD_2_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x1452C950)
#define CLASS_2_3E17E61D9F6875C4_METHOD_2_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x1452B8A0)
#define CLASS_2_3E17E61D9F6875C4_METHOD_2_F37CDBD6D46274D2_1_OFFSET UNITYSDK_OFFSET(0x1452CE80)
#define CLASS_2_3E17E61D9F6875C4_METHOD_2_F37CDBD6D46274D2_OFFSET UNITYSDK_OFFSET(0x1452CE00)
#define CLASS_2_3E17E61D9F6875C4_METHOD_2_F713E417997556FC_OFFSET UNITYSDK_OFFSET(0x1452AB40)
#define CLASS_2_3E17E61D9F6875C4_METHOD_2_FB31A773A52994BE_OFFSET UNITYSDK_OFFSET(0x1452B9D0)
#define CLASS_2_3E17E61D9F6875C4__ADDHANDLERS_OFFSET UNITYSDK_OFFSET(0x14525800)
#define CLASS_2_3E17E61D9F6875C4__CCTOR_OFFSET UNITYSDK_OFFSET(0x1452D110)
#define CLASS_2_3E17E61D9F6875C4__CTOR_OFFSET UNITYSDK_OFFSET(0x14525520)
#define CLASS_2_3E17E61D9F6875C4__CUSTOMBINDVIEW_OFFSET UNITYSDK_OFFSET(0x14525660)
#define CLASS_2_3E17E61D9F6875C4__ONTICK_OFFSET UNITYSDK_OFFSET(0x145266E0)
#define CLASS_2_3E17E61D9F6875C4__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0x14525D10)
#define CLASS_2_3E17E61D9F6875C4___IFIXBASEPROXY_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x1452D2C0)
#define CLASS_2_3E17E61D9F6875C4___IFIXBASEPROXY_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x1452D320)
#define CLASS_2_3E17E61D9F6875C4___IFIXBASEPROXY__ADDHANDLERS_OFFSET UNITYSDK_OFFSET(0x1452D1A0)
#define CLASS_2_3E17E61D9F6875C4___IFIXBASEPROXY__CUSTOMBINDVIEW_OFFSET UNITYSDK_OFFSET(0x1452D140)
#define CLASS_2_3E17E61D9F6875C4___IFIXBASEPROXY__ONTICK_OFFSET UNITYSDK_OFFSET(0x1452D260)
#define CLASS_2_3E17E61D9F6875C4___IFIXBASEPROXY__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0x1452D200)

inline static constexpr unsigned int Class_2_3E17E61D9F6875C4_TypeDefinitionIndex = 67947;

class Class_2_3E17E61D9F6875C4 : public ::RPG::Client::UIController
{
public:
	static ::System::Single* StaticGet_Field_2_0()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_2_3E17E61D9F6875C4_TypeDefinitionIndex)->GetStaticField(0xE330);
	}
	static ::System::Boolean* StaticGet_Field_2_1()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_2_3E17E61D9F6875C4_TypeDefinitionIndex)->GetStaticField(0xE334);
	}
	static ::System::Boolean* StaticGet_Field_2_2()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_2_3E17E61D9F6875C4_TypeDefinitionIndex)->GetStaticField(0xE335);
	}
	static ::System::Boolean* StaticGet_Field_2_3()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_2_3E17E61D9F6875C4_TypeDefinitionIndex)->GetStaticField(0xE336);
	}
	static ::System::Boolean* StaticGet_Field_2_4()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_2_3E17E61D9F6875C4_TypeDefinitionIndex)->GetStaticField(0xE337);
	}
	static ::System::Boolean* StaticGet_Field_2_5()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_2_3E17E61D9F6875C4_TypeDefinitionIndex)->GetStaticField(0xE338);
	}
	static ::System::Boolean* StaticGet_Field_2_6()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_2_3E17E61D9F6875C4_TypeDefinitionIndex)->GetStaticField(0xE339);
	}
	static ::System::Boolean* StaticGet_Field_2_7()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_2_3E17E61D9F6875C4_TypeDefinitionIndex)->GetStaticField(0xE33A);
	}
	::System::Text::StringBuilder* Field_2_8; // 0x180
	::System::Text::StringBuilder* Field_2_9; // 0x188
	::UnityEngine::Transform* Field_2_10; // 0x190
	::System::String* Field_2_11; // 0x198
	::System::Int64 Field_2_12; // 0x1A0
	::System::Int64 Field_2_13; // 0x1A8
	::System::Boolean Field_2_14; // 0x1B0
	::System::Single Field_2_15; // 0x1B4
	::System::Int32 Field_2_16; // 0x1B8
	::System::Int64 Field_2_17; // 0x1C0
	::System::Single Field_2_18; // 0x1C8
	::System::Int32 Field_2_19; // 0x1CC
	::System::Int64 Field_2_20; // 0x1D0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3E17E61D9F6875C4__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_3E17E61D9F6875C4__CCTOR_OFFSET))();
	}

	::System::Void _CustomBindView()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3E17E61D9F6875C4__CUSTOMBINDVIEW_OFFSET))(this);
	}

	::System::Void _AddHandlers()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3E17E61D9F6875C4__ADDHANDLERS_OFFSET))(this);
	}

	::System::Void _SetupView()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3E17E61D9F6875C4__SETUPVIEW_OFFSET))(this);
	}

	::System::Void _OnTick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_3E17E61D9F6875C4__ONTICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_79C171A8034611D5(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_3E17E61D9F6875C4_METHOD_2_79C171A8034611D5_OFFSET))(this, a1);
	}

	::System::Void Method_2_7DD84EAFF333A1E4(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_3E17E61D9F6875C4_METHOD_2_7DD84EAFF333A1E4_OFFSET))(this, a1);
	}

	::System::Void Method_2_7DD84EAFF333A1E4_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_3E17E61D9F6875C4_METHOD_2_7DD84EAFF333A1E4_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3E17E61D9F6875C4_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_73C23613314BF1A1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_3E17E61D9F6875C4_METHOD_2_73C23613314BF1A1_OFFSET))(this, a1);
	}

	::System::Void Method_2_E981EFEFFC0B047D(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_3E17E61D9F6875C4_METHOD_2_E981EFEFFC0B047D_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3E17E61D9F6875C4_METHOD_2_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Method_2_288AA83E8506706B(::System::UInt16 a1, ::System::Object* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_3E17E61D9F6875C4_METHOD_2_288AA83E8506706B_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_33ACA6CB2ABC73F7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3E17E61D9F6875C4_METHOD_2_33ACA6CB2ABC73F7_OFFSET))(this);
	}

	::System::Void Method_2_F713E417997556FC(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_3E17E61D9F6875C4_METHOD_2_F713E417997556FC_OFFSET))(this, a1);
	}

	::System::Void Method_2_D7852DE078ACC1F1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3E17E61D9F6875C4_METHOD_2_D7852DE078ACC1F1_OFFSET))(this);
	}

	::System::Void Method_2_3FC5D2EAE16048C0(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_3E17E61D9F6875C4_METHOD_2_3FC5D2EAE16048C0_OFFSET))(this, a1);
	}

	::System::Void Method_2_916B8A6B72C96F5C(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_3E17E61D9F6875C4_METHOD_2_916B8A6B72C96F5C_OFFSET))(this, a1);
	}

	::System::Void Method_2_61EC2AC0BD93363E(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_3E17E61D9F6875C4_METHOD_2_61EC2AC0BD93363E_OFFSET))(this, a1);
	}

	::System::Void Method_2_28C532CD321F20DC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3E17E61D9F6875C4_METHOD_2_28C532CD321F20DC_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3E17E61D9F6875C4_METHOD_2_CA373AA1C7054598_2_OFFSET))(this);
	}

	::System::Void Method_2_A6544B958241856F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3E17E61D9F6875C4_METHOD_2_A6544B958241856F_OFFSET))(this);
	}

	::System::Boolean Method_2_F0E307B84478A272()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3E17E61D9F6875C4_METHOD_2_F0E307B84478A272_OFFSET))(this);
	}

	::System::Void Method_2_1B9CC121BDC8766D(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_3E17E61D9F6875C4_METHOD_2_1B9CC121BDC8766D_OFFSET))(this, a1);
	}

	::System::Void Method_2_FB31A773A52994BE(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_3E17E61D9F6875C4_METHOD_2_FB31A773A52994BE_OFFSET))(this, a1);
	}

	::System::Void Method_2_16323FC6A31C6693(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_3E17E61D9F6875C4_METHOD_2_16323FC6A31C6693_OFFSET))(this, a1);
	}

	::System::Void Method_2_8C3DB70FFBBF01C7(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_3E17E61D9F6875C4_METHOD_2_8C3DB70FFBBF01C7_OFFSET))(this, a1);
	}

	::System::Void Method_2_049407E7CFE73C8B(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_3E17E61D9F6875C4_METHOD_2_049407E7CFE73C8B_OFFSET))(this, a1);
	}

	::System::Void Method_2_CEE2550285AA5985(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_3E17E61D9F6875C4_METHOD_2_CEE2550285AA5985_OFFSET))(this, a1);
	}

	::System::Void Method_2_0D64F99BAAA7B5C4(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_3E17E61D9F6875C4_METHOD_2_0D64F99BAAA7B5C4_OFFSET))(this, a1);
	}

	::System::Void Method_2_AC9E9450F9A55C57(::UnityEngine::UI::Text* a1, ::System::String* a2, ::System::Int64 a3, ::System::Int64 a4, ::System::Int64 a5, ::System::Int64 a6)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Text*, ::System::String*, ::System::Int64, ::System::Int64, ::System::Int64, ::System::Int64))((::PBYTE)hIl2Cpp + CLASS_2_3E17E61D9F6875C4_METHOD_2_AC9E9450F9A55C57_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Void Method_2_809818D33F5A75DB(::UnityEngine::UI::Text* a1, ::System::String* a2, ::System::Single a3, ::System::Single a4, ::System::Single a5, ::System::Single a6, ::System::Boolean a7, ::System::Boolean a8)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Text*, ::System::String*, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_3E17E61D9F6875C4_METHOD_2_809818D33F5A75DB_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
	}

	::System::Void Method_2_1CC698E8ABED00A4(::UnityEngine::UI::Text* a1, ::UnityEngine::NativeString a2, ::System::Single a3, ::System::Single a4, ::System::Single a5, ::System::Single a6, ::System::Boolean a7, ::System::Boolean a8)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Text*, ::UnityEngine::NativeString, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_3E17E61D9F6875C4_METHOD_2_1CC698E8ABED00A4_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
	}

	::System::Void Method_2_5152ABC5D08CE614(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_3E17E61D9F6875C4_METHOD_2_5152ABC5D08CE614_OFFSET))(this, a1);
	}

	::System::Void Method_2_1B9CC121BDC8766D_1(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_3E17E61D9F6875C4_METHOD_2_1B9CC121BDC8766D_1_OFFSET))(this, a1);
	}

	::UnityEngine::UI::Text* Method_2_A24997ADD41BAAD9()
	{
		return ((::UnityEngine::UI::Text*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3E17E61D9F6875C4_METHOD_2_A24997ADD41BAAD9_OFFSET))(this);
	}

	::UnityEngine::Transform* Method_2_90EC931103FB6F31()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3E17E61D9F6875C4_METHOD_2_90EC931103FB6F31_OFFSET))(this);
	}

	::System::Boolean Method_2_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3E17E61D9F6875C4_METHOD_2_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_2_19CCC07C980409E4(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_3E17E61D9F6875C4_METHOD_2_19CCC07C980409E4_OFFSET))(this, a1);
	}

	::System::Void Method_2_943E1EFDF67DA624(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_3E17E61D9F6875C4_METHOD_2_943E1EFDF67DA624_OFFSET))(this, a1);
	}

	::Class_2_A48F3719AA1CF200_29* Method_2_64B6514CFF8F8D76()
	{
		return ((::Class_2_A48F3719AA1CF200_29*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3E17E61D9F6875C4_METHOD_2_64B6514CFF8F8D76_OFFSET))(this);
	}

	::System::Void Method_2_F37CDBD6D46274D2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_3E17E61D9F6875C4_METHOD_2_F37CDBD6D46274D2_OFFSET))(this, a1);
	}

	::System::Void Method_2_F37CDBD6D46274D2_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_3E17E61D9F6875C4_METHOD_2_F37CDBD6D46274D2_1_OFFSET))(this, a1);
	}

	::System::Void AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3E17E61D9F6875C4_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3E17E61D9F6875C4_AUTOREMOVECALLBACK_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__CustomBindView()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3E17E61D9F6875C4___IFIXBASEPROXY__CUSTOMBINDVIEW_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__AddHandlers()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3E17E61D9F6875C4___IFIXBASEPROXY__ADDHANDLERS_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__SetupView()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3E17E61D9F6875C4___IFIXBASEPROXY__SETUPVIEW_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__OnTick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_3E17E61D9F6875C4___IFIXBASEPROXY__ONTICK_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3E17E61D9F6875C4___IFIXBASEPROXY_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3E17E61D9F6875C4___IFIXBASEPROXY_AUTOREMOVECALLBACK_OFFSET))(this);
	}
};
