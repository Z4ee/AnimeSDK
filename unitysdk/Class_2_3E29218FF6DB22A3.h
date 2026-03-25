#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_47C4886CB6C61234.h"

class Class_0_16E4307DCC419505_375;
class Class_2_3E29218FF6DB22A3_Class_1_0EDA766EC67D9DC4;
class Class_2_3E29218FF6DB22A3_Class_1_63C9E021BC4D3A9D_1;
class Class_2_3E29218FF6DB22A3_Class_1_F3D4428E52CDFBC6;
class Class_3_5775A4FEC79026BC;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class PropStateMatchConfig; }
namespace RPG::GameCore { class TaskConfig; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Tuple_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_3E29218FF6DB22A3_GET_CURROUTEDISPLAYID_OFFSET UNITYSDK_OFFSET(0x115EFF60)
#define CLASS_2_3E29218FF6DB22A3_GET_NEEDTICK_OFFSET UNITYSDK_OFFSET(0x115EB430)
#define CLASS_2_3E29218FF6DB22A3_GET_PLANETDISPLAYID_OFFSET UNITYSDK_OFFSET(0x115EFF40)
#define CLASS_2_3E29218FF6DB22A3_METHOD_2_1DE6E59E2CDB6056_OFFSET UNITYSDK_OFFSET(0x115EF990)
#define CLASS_2_3E29218FF6DB22A3_METHOD_2_2D818BAFF75745B7_OFFSET UNITYSDK_OFFSET(0x115EEA10)
#define CLASS_2_3E29218FF6DB22A3_METHOD_2_2DDA66E72D33DB14_OFFSET UNITYSDK_OFFSET(0x115EE9B0)
#define CLASS_2_3E29218FF6DB22A3_METHOD_2_3636D311066F9CA8_OFFSET UNITYSDK_OFFSET(0x115ECBC0)
#define CLASS_2_3E29218FF6DB22A3_METHOD_2_3F6BEE6DF04588BD_OFFSET UNITYSDK_OFFSET(0x115EC020)
#define CLASS_2_3E29218FF6DB22A3_METHOD_2_4307B2A4B4A12C1A_OFFSET UNITYSDK_OFFSET(0x115ED600)
#define CLASS_2_3E29218FF6DB22A3_METHOD_2_475D7AF7572E6782_OFFSET UNITYSDK_OFFSET(0x115EFEA0)
#define CLASS_2_3E29218FF6DB22A3_METHOD_2_56CE4AFC5339F746_OFFSET UNITYSDK_OFFSET(0x115EE540)
#define CLASS_2_3E29218FF6DB22A3_METHOD_2_7541FB7EB0923E08_OFFSET UNITYSDK_OFFSET(0x115EFBA0)
#define CLASS_2_3E29218FF6DB22A3_METHOD_2_8677DFDF847E7A1D_OFFSET UNITYSDK_OFFSET(0x115EC5F0)
#define CLASS_2_3E29218FF6DB22A3_METHOD_2_937F8473216A3162_OFFSET UNITYSDK_OFFSET(0x115EB4D0)
#define CLASS_2_3E29218FF6DB22A3_METHOD_2_9F8F85BA5EA1113D_OFFSET UNITYSDK_OFFSET(0x115EFF20)
#define CLASS_2_3E29218FF6DB22A3_METHOD_2_A0EFDC02874C650B_OFFSET UNITYSDK_OFFSET(0x115EE700)
#define CLASS_2_3E29218FF6DB22A3_METHOD_2_A626FD3D950B8B9D_OFFSET UNITYSDK_OFFSET(0x115EFE20)
#define CLASS_2_3E29218FF6DB22A3_METHOD_2_A693F2E8D4F4A766_OFFSET UNITYSDK_OFFSET(0x115EC750)
#define CLASS_2_3E29218FF6DB22A3_METHOD_2_AD4B4EE41381AC32_OFFSET UNITYSDK_OFFSET(0x115EC2E0)
#define CLASS_2_3E29218FF6DB22A3_METHOD_2_AE80CBC984AADFD5_OFFSET UNITYSDK_OFFSET(0x115ED970)
#define CLASS_2_3E29218FF6DB22A3_METHOD_2_B1445E8504415D4D_OFFSET UNITYSDK_OFFSET(0x115EFF30)
#define CLASS_2_3E29218FF6DB22A3_METHOD_2_B485CB3CF97F0A2D_OFFSET UNITYSDK_OFFSET(0x115ED730)
#define CLASS_2_3E29218FF6DB22A3_METHOD_2_BC7FF5ABD6485401_OFFSET UNITYSDK_OFFSET(0x115EF830)
#define CLASS_2_3E29218FF6DB22A3_METHOD_2_DF606F1BC273FE84_OFFSET UNITYSDK_OFFSET(0x115EFAB0)
#define CLASS_2_3E29218FF6DB22A3_METHOD_2_E2D95B0B613DA98B_OFFSET UNITYSDK_OFFSET(0x115EC7A0)
#define CLASS_2_3E29218FF6DB22A3_METHOD_2_EDFD49C942C75D6C_OFFSET UNITYSDK_OFFSET(0x115ED4B0)
#define CLASS_2_3E29218FF6DB22A3_METHOD_2_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x115EFF10)
#define CLASS_2_3E29218FF6DB22A3_METHOD_2_F00DB6CB3728D2C3_OFFSET UNITYSDK_OFFSET(0x115EFF80)
#define CLASS_2_3E29218FF6DB22A3_METHOD_2_F37CDBD6D46274D2_OFFSET UNITYSDK_OFFSET(0x115EF7A0)
#define CLASS_2_3E29218FF6DB22A3_ONINIT_OFFSET UNITYSDK_OFFSET(0x115EB440)
#define CLASS_2_3E29218FF6DB22A3_ONUNINIT_OFFSET UNITYSDK_OFFSET(0x115EB480)
#define CLASS_2_3E29218FF6DB22A3_SET_CURROUTEDISPLAYID_OFFSET UNITYSDK_OFFSET(0x115EFF70)
#define CLASS_2_3E29218FF6DB22A3_SET_PLANETDISPLAYID_OFFSET UNITYSDK_OFFSET(0x115EFF50)
#define CLASS_2_3E29218FF6DB22A3_TICK_OFFSET UNITYSDK_OFFSET(0x115EE690)
#define CLASS_2_3E29218FF6DB22A3__CCTOR_OFFSET UNITYSDK_OFFSET(0x115F0530)
#define CLASS_2_3E29218FF6DB22A3__CTOR_OFFSET UNITYSDK_OFFSET(0x115F0280)
#define CLASS_2_3E29218FF6DB22A3___IFIXBASEPROXY_ONINIT_OFFSET UNITYSDK_OFFSET(0x115F0580)
#define CLASS_2_3E29218FF6DB22A3___IFIXBASEPROXY_ONUNINIT_OFFSET UNITYSDK_OFFSET(0x115F05E0)
#define CLASS_2_3E29218FF6DB22A3___IFIXBASEPROXY_TICK_OFFSET UNITYSDK_OFFSET(0x115F0640)

inline static constexpr unsigned int Class_2_3E29218FF6DB22A3_TypeDefinitionIndex = 48805;

class Class_2_3E29218FF6DB22A3 : public ::Class_1_47C4886CB6C61234
{
public:
	static ::System::String** StaticGet_Field_2_17()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_2_3E29218FF6DB22A3_TypeDefinitionIndex)->GetStaticField(0x457C0);
	}
	static ::System::Single* StaticGet_Field_2_14()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_2_3E29218FF6DB22A3_TypeDefinitionIndex)->GetStaticField(0x12020);
	}
	::System::Collections::Generic::List_1<::System::UInt32>* Field_2_23; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* Field_2_22; // 0x28
	::System::Collections::Generic::List_1<::Class_3_5775A4FEC79026BC*>* Field_2_6; // 0x30
	::System::Collections::Generic::Dictionary_2<::System::Tuple_2<::System::UInt32, ::System::UInt32>*, ::Class_2_3E29218FF6DB22A3_Class_1_F3D4428E52CDFBC6*>* Field_2_24; // 0x38
	::RPG::GameCore::GameEntity* Field_2_4; // 0x40
	::System::String* Field_2_10; // 0x48
	::Class_3_5775A4FEC79026BC* Field_2_7; // 0x50
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* Field_2_2; // 0x58
	::System::String* Field_2_9; // 0x60
	::RPG::GameCore::TaskContext* Field_2_12; // 0x68
	::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* Field_2_13; // 0x70
	::System::Collections::Generic::List_1<::Class_2_3E29218FF6DB22A3_Class_1_63C9E021BC4D3A9D_1*>* Field_2_3; // 0x78
	::Class_3_5775A4FEC79026BC* Field_2_8; // 0x80
	::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* Field_2_1; // 0x88
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_2_3E29218FF6DB22A3_Class_1_0EDA766EC67D9DC4*>* Field_2_5; // 0x90
	::System::UInt32 _CurRouteDisplayID_k__BackingField; // 0x98
	::System::Int32 Field_2_18; // 0x9C
	::System::UInt32 _PlanetDisplayID_k__BackingField; // 0xA0
	::System::UInt32 Field_2_21; // 0xA4
	::System::Boolean Field_2_20; // 0xA8
	::System::Boolean Field_2_0; // 0xA9
	::System::Boolean Field_2_11; // 0xAA
	::System::UInt32 Field_2_19; // 0xAC

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3E29218FF6DB22A3__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_3E29218FF6DB22A3__CCTOR_OFFSET))();
	}

	::System::Boolean get_NeedTick()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3E29218FF6DB22A3_GET_NEEDTICK_OFFSET))(this);
	}

	::System::Void OnInit()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3E29218FF6DB22A3_ONINIT_OFFSET))(this);
	}

	::System::Void OnUninit()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3E29218FF6DB22A3_ONUNINIT_OFFSET))(this);
	}

	::System::Void Method_2_3F6BEE6DF04588BD(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_3E29218FF6DB22A3_METHOD_2_3F6BEE6DF04588BD_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_AD4B4EE41381AC32(::RPG::GameCore::GameEntity* a1, ::System::String* a2, ::System::String* a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_3E29218FF6DB22A3_METHOD_2_AD4B4EE41381AC32_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_8677DFDF847E7A1D(::RPG::GameCore::GameEntity* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_3E29218FF6DB22A3_METHOD_2_8677DFDF847E7A1D_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_A693F2E8D4F4A766(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_3E29218FF6DB22A3_METHOD_2_A693F2E8D4F4A766_OFFSET))(this, a1);
	}

	::System::Void Method_2_E2D95B0B613DA98B(::RPG::GameCore::TaskContext* a1, ::Il2CppArray<::RPG::GameCore::PropStateMatchConfig*>* a2, ::Il2CppArray<::RPG::GameCore::TaskConfig*>* a3, ::System::Boolean a4, ::System::UInt32 a5)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Il2CppArray<::RPG::GameCore::PropStateMatchConfig*>*, ::Il2CppArray<::RPG::GameCore::TaskConfig*>*, ::System::Boolean, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_3E29218FF6DB22A3_METHOD_2_E2D95B0B613DA98B_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_2_3636D311066F9CA8(::System::String* a1, ::System::String* a2, ::RPG::GameCore::TaskContext* a3, ::Il2CppArray<::RPG::GameCore::TaskConfig*>* a4, ::Il2CppArray<::RPG::GameCore::TaskConfig*>* a5, ::System::UInt32 a6)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::RPG::GameCore::TaskContext*, ::Il2CppArray<::RPG::GameCore::TaskConfig*>*, ::Il2CppArray<::RPG::GameCore::TaskConfig*>*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_3E29218FF6DB22A3_METHOD_2_3636D311066F9CA8_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Void Method_2_4307B2A4B4A12C1A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3E29218FF6DB22A3_METHOD_2_4307B2A4B4A12C1A_OFFSET))(this);
	}

	::System::Void Method_2_937F8473216A3162()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3E29218FF6DB22A3_METHOD_2_937F8473216A3162_OFFSET))(this);
	}

	::System::Void Method_2_56CE4AFC5339F746()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3E29218FF6DB22A3_METHOD_2_56CE4AFC5339F746_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_3E29218FF6DB22A3_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_2DDA66E72D33DB14(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_3E29218FF6DB22A3_METHOD_2_2DDA66E72D33DB14_OFFSET))(this, a1);
	}

	::System::Void Method_2_A0EFDC02874C650B(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_3E29218FF6DB22A3_METHOD_2_A0EFDC02874C650B_OFFSET))(this, a1);
	}

	::System::Void Method_2_2D818BAFF75745B7(::Class_0_16E4307DCC419505_375* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_375*))((::PBYTE)hIl2Cpp + CLASS_2_3E29218FF6DB22A3_METHOD_2_2D818BAFF75745B7_OFFSET))(this, a1);
	}

	::System::Void Method_2_F37CDBD6D46274D2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_3E29218FF6DB22A3_METHOD_2_F37CDBD6D46274D2_OFFSET))(this, a1);
	}

	::System::Void Method_2_BC7FF5ABD6485401(::Class_3_5775A4FEC79026BC* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_5775A4FEC79026BC*))((::PBYTE)hIl2Cpp + CLASS_2_3E29218FF6DB22A3_METHOD_2_BC7FF5ABD6485401_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_1DE6E59E2CDB6056(::Class_3_5775A4FEC79026BC* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_3_5775A4FEC79026BC*))((::PBYTE)hIl2Cpp + CLASS_2_3E29218FF6DB22A3_METHOD_2_1DE6E59E2CDB6056_OFFSET))(this, a1);
	}

	::System::Void Method_2_DF606F1BC273FE84(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_3E29218FF6DB22A3_METHOD_2_DF606F1BC273FE84_OFFSET))(this, a1);
	}

	::System::Void Method_2_7541FB7EB0923E08(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_3E29218FF6DB22A3_METHOD_2_7541FB7EB0923E08_OFFSET))(this, a1);
	}

	::System::Void Method_2_A626FD3D950B8B9D(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_3E29218FF6DB22A3_METHOD_2_A626FD3D950B8B9D_OFFSET))(this, a1);
	}

	::System::Void Method_2_475D7AF7572E6782(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_3E29218FF6DB22A3_METHOD_2_475D7AF7572E6782_OFFSET))(this, a1);
	}

	::System::UInt32 Method_2_B485CB3CF97F0A2D()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3E29218FF6DB22A3_METHOD_2_B485CB3CF97F0A2D_OFFSET))(this);
	}

	::System::Boolean Method_2_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3E29218FF6DB22A3_METHOD_2_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* Method_2_9F8F85BA5EA1113D()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3E29218FF6DB22A3_METHOD_2_9F8F85BA5EA1113D_OFFSET))(this);
	}

	::RPG::GameCore::GameEntity* Method_2_B1445E8504415D4D()
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3E29218FF6DB22A3_METHOD_2_B1445E8504415D4D_OFFSET))(this);
	}

	::System::UInt32 get_PlanetDisplayID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3E29218FF6DB22A3_GET_PLANETDISPLAYID_OFFSET))(this);
	}

	::System::Void set_PlanetDisplayID(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_3E29218FF6DB22A3_SET_PLANETDISPLAYID_OFFSET))(this, value);
	}

	::System::UInt32 get_CurRouteDisplayID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3E29218FF6DB22A3_GET_CURROUTEDISPLAYID_OFFSET))(this);
	}

	::System::Void set_CurRouteDisplayID(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_3E29218FF6DB22A3_SET_CURROUTEDISPLAYID_OFFSET))(this, value);
	}

	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_2_3E29218FF6DB22A3_Class_1_0EDA766EC67D9DC4*>* Method_2_F00DB6CB3728D2C3()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_2_3E29218FF6DB22A3_Class_1_0EDA766EC67D9DC4*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3E29218FF6DB22A3_METHOD_2_F00DB6CB3728D2C3_OFFSET))(this);
	}

	::System::Void Method_2_EDFD49C942C75D6C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3E29218FF6DB22A3_METHOD_2_EDFD49C942C75D6C_OFFSET))(this);
	}

	::System::Void Method_2_AE80CBC984AADFD5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3E29218FF6DB22A3_METHOD_2_AE80CBC984AADFD5_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnInit()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3E29218FF6DB22A3___IFIXBASEPROXY_ONINIT_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnUninit()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3E29218FF6DB22A3___IFIXBASEPROXY_ONUNINIT_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Tick(::System::Single P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_3E29218FF6DB22A3___IFIXBASEPROXY_TICK_OFFSET))(this, P0);
	}
};
