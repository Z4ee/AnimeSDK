#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5BBB2050B3F3F683.h"

class Class_0_16E4307DCC419505_460;
class Class_2_4551A380DCBB3F00_Class_1_0EDA766EC67D9DC4;
class Class_2_4551A380DCBB3F00_Class_1_63C9E021BC4D3A9D_1;
class Class_2_4551A380DCBB3F00_Class_1_F3D4428E52CDFBC6;
class Class_3_07C3C4D2990C49EE;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class PropStateMatchConfig; }
namespace RPG::GameCore { class TaskConfig; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Tuple_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_4551A380DCBB3F00_GET_CURROUTEDISPLAYID_OFFSET UNITYSDK_OFFSET(0x16EBA6E0)
#define CLASS_2_4551A380DCBB3F00_GET_NEEDTICK_OFFSET UNITYSDK_OFFSET(0x16EB5670)
#define CLASS_2_4551A380DCBB3F00_GET_PLANETDISPLAYID_OFFSET UNITYSDK_OFFSET(0x16EBA6C0)
#define CLASS_2_4551A380DCBB3F00_METHOD_2_024876544C3FD21D_OFFSET UNITYSDK_OFFSET(0x16EB8FC0)
#define CLASS_2_4551A380DCBB3F00_METHOD_2_1380ECF184CE3DF4_OFFSET UNITYSDK_OFFSET(0x16EB9FB0)
#define CLASS_2_4551A380DCBB3F00_METHOD_2_1DE6E59E2CDB6056_OFFSET UNITYSDK_OFFSET(0x16EBA170)
#define CLASS_2_4551A380DCBB3F00_METHOD_2_2C5457C572E615C7_OFFSET UNITYSDK_OFFSET(0x16EB65D0)
#define CLASS_2_4551A380DCBB3F00_METHOD_2_3440376D6A1AC8F4_OFFSET UNITYSDK_OFFSET(0x16EB9020)
#define CLASS_2_4551A380DCBB3F00_METHOD_2_3F6E5E10CE187192_OFFSET UNITYSDK_OFFSET(0x16EB9EA0)
#define CLASS_2_4551A380DCBB3F00_METHOD_2_464B80C09A37526F_OFFSET UNITYSDK_OFFSET(0x16EB5710)
#define CLASS_2_4551A380DCBB3F00_METHOD_2_488C1B2DB927970A_OFFSET UNITYSDK_OFFSET(0x16EB62C0)
#define CLASS_2_4551A380DCBB3F00_METHOD_2_51CFFE2AF748ECD7_OFFSET UNITYSDK_OFFSET(0x16EB7850)
#define CLASS_2_4551A380DCBB3F00_METHOD_2_9F8F85BA5EA1113D_OFFSET UNITYSDK_OFFSET(0x16EBA6A0)
#define CLASS_2_4551A380DCBB3F00_METHOD_2_A626FD3D950B8B9D_1_OFFSET UNITYSDK_OFFSET(0x16EBA620)
#define CLASS_2_4551A380DCBB3F00_METHOD_2_A626FD3D950B8B9D_OFFSET UNITYSDK_OFFSET(0x16EBA5A0)
#define CLASS_2_4551A380DCBB3F00_METHOD_2_A693F2E8D4F4A766_OFFSET UNITYSDK_OFFSET(0x16EB6A50)
#define CLASS_2_4551A380DCBB3F00_METHOD_2_A9F37961B39B4273_OFFSET UNITYSDK_OFFSET(0x16EB6920)
#define CLASS_2_4551A380DCBB3F00_METHOD_2_AE80CBC984AADFD5_OFFSET UNITYSDK_OFFSET(0x16EB7CE0)
#define CLASS_2_4551A380DCBB3F00_METHOD_2_B01F5292A1B6EB04_OFFSET UNITYSDK_OFFSET(0x16EB7970)
#define CLASS_2_4551A380DCBB3F00_METHOD_2_B1445E8504415D4D_OFFSET UNITYSDK_OFFSET(0x16EBA6B0)
#define CLASS_2_4551A380DCBB3F00_METHOD_2_B485CB3CF97F0A2D_OFFSET UNITYSDK_OFFSET(0x16EB7A90)
#define CLASS_2_4551A380DCBB3F00_METHOD_2_BFA5B0A6958CED3A_OFFSET UNITYSDK_OFFSET(0x16EB6ED0)
#define CLASS_2_4551A380DCBB3F00_METHOD_2_DF7CEFC0E6C5FD0D_OFFSET UNITYSDK_OFFSET(0x16EBA290)
#define CLASS_2_4551A380DCBB3F00_METHOD_2_E2D95B0B613DA98B_OFFSET UNITYSDK_OFFSET(0x16EB6AA0)
#define CLASS_2_4551A380DCBB3F00_METHOD_2_E644604C8CC8D8E1_OFFSET UNITYSDK_OFFSET(0x16EBA370)
#define CLASS_2_4551A380DCBB3F00_METHOD_2_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x16EBA690)
#define CLASS_2_4551A380DCBB3F00_METHOD_2_F00DB6CB3728D2C3_OFFSET UNITYSDK_OFFSET(0x16EBA700)
#define CLASS_2_4551A380DCBB3F00_METHOD_2_F5447CD65612575D_OFFSET UNITYSDK_OFFSET(0x16EB8AF0)
#define CLASS_2_4551A380DCBB3F00_METHOD_2_FD6AF0F9AA9298B1_OFFSET UNITYSDK_OFFSET(0x16EB8C90)
#define CLASS_2_4551A380DCBB3F00_ONINIT_OFFSET UNITYSDK_OFFSET(0x16EB5680)
#define CLASS_2_4551A380DCBB3F00_ONUNINIT_OFFSET UNITYSDK_OFFSET(0x16EB56C0)
#define CLASS_2_4551A380DCBB3F00_SET_CURROUTEDISPLAYID_OFFSET UNITYSDK_OFFSET(0x16EBA6F0)
#define CLASS_2_4551A380DCBB3F00_SET_PLANETDISPLAYID_OFFSET UNITYSDK_OFFSET(0x16EBA6D0)
#define CLASS_2_4551A380DCBB3F00_TICK_OFFSET UNITYSDK_OFFSET(0x16EB8C20)
#define CLASS_2_4551A380DCBB3F00__CCTOR_OFFSET UNITYSDK_OFFSET(0x16EBACF0)
#define CLASS_2_4551A380DCBB3F00__CTOR_OFFSET UNITYSDK_OFFSET(0x16EBAA00)

inline static constexpr unsigned int Class_2_4551A380DCBB3F00_TypeDefinitionIndex = 60376;

class Class_2_4551A380DCBB3F00 : public ::Class_1_5BBB2050B3F3F683
{
public:
	static ::System::String** StaticGet_NGCPHLMENKB()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_2_4551A380DCBB3F00_TypeDefinitionIndex)->GetStaticField(0x10F20);
	}
	static ::System::Single* StaticGet_DKMOBOAMDMP()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_2_4551A380DCBB3F00_TypeDefinitionIndex)->GetStaticField(0x76B0);
	}
	::System::Collections::Generic::List_1<::Class_3_07C3C4D2990C49EE*>* LKGLIGEAFFN; // 0x20
	::Class_3_07C3C4D2990C49EE* ACAEPCEDPMD; // 0x28
	::System::String* EIHIPODEJNH; // 0x30
	::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* LMHMBEJEJFH; // 0x38
	::System::String* GBGDOEEJLNI; // 0x40
	::System::Collections::Generic::List_1<::Class_2_4551A380DCBB3F00_Class_1_63C9E021BC4D3A9D_1*>* NCIADIANLFG; // 0x48
	::System::Collections::Generic::List_1<::System::UInt32>* LILEAECHKKL; // 0x50
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_2_4551A380DCBB3F00_Class_1_0EDA766EC67D9DC4*>* CJFCODKGGAC; // 0x58
	::RPG::GameCore::TaskContext* EEFMDEHLLFI; // 0x60
	::System::Collections::Generic::Dictionary_2<::System::Tuple_2<::System::UInt32, ::System::UInt32>*, ::Class_2_4551A380DCBB3F00_Class_1_F3D4428E52CDFBC6*>* NEPCFGIMOAK; // 0x68
	::RPG::GameCore::GameEntity* ECPFOHPNNGB; // 0x70
	::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* PNFOAKFJFPJ; // 0x78
	::Class_3_07C3C4D2990C49EE* IHIKAHLOABK; // 0x80
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* FIIICPCKMGM; // 0x88
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* DKKBEIFJOJA; // 0x90
	::System::UInt32 KFNEFBFLBDC; // 0x98
	::System::Boolean HNALEMBOBFE; // 0x9C
	::System::Boolean FPOLDLNIEAC; // 0x9D
	::System::Boolean OGEHJFNHJBD; // 0x9E
	::System::UInt32 _CurRouteDisplayID_k__BackingField; // 0xA0
	::System::UInt32 _PlanetDisplayID_k__BackingField; // 0xA4
	::System::UInt32 LCAOJIDMINA; // 0xA8
	::System::Int32 KBDPMBDJIOF; // 0xAC

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4551A380DCBB3F00__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_4551A380DCBB3F00__CCTOR_OFFSET))();
	}

	::System::Boolean get_NeedTick()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4551A380DCBB3F00_GET_NEEDTICK_OFFSET))(this);
	}

	::System::Void OnInit()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4551A380DCBB3F00_ONINIT_OFFSET))(this);
	}

	::System::Void OnUninit()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4551A380DCBB3F00_ONUNINIT_OFFSET))(this);
	}

	::System::Void Method_2_488C1B2DB927970A(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_4551A380DCBB3F00_METHOD_2_488C1B2DB927970A_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_2C5457C572E615C7(::RPG::GameCore::GameEntity* a1, ::System::String* a2, ::System::String* a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_4551A380DCBB3F00_METHOD_2_2C5457C572E615C7_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_A9F37961B39B4273(::RPG::GameCore::GameEntity* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_4551A380DCBB3F00_METHOD_2_A9F37961B39B4273_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_A693F2E8D4F4A766(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_4551A380DCBB3F00_METHOD_2_A693F2E8D4F4A766_OFFSET))(this, a1);
	}

	::System::Void Method_2_E2D95B0B613DA98B(::RPG::GameCore::TaskContext* a1, ::Il2CppArray<::RPG::GameCore::PropStateMatchConfig*>* a2, ::Il2CppArray<::RPG::GameCore::TaskConfig*>* a3, ::System::Boolean a4, ::System::UInt32 a5)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Il2CppArray<::RPG::GameCore::PropStateMatchConfig*>*, ::Il2CppArray<::RPG::GameCore::TaskConfig*>*, ::System::Boolean, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_4551A380DCBB3F00_METHOD_2_E2D95B0B613DA98B_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_2_BFA5B0A6958CED3A(::System::String* a1, ::System::String* a2, ::RPG::GameCore::TaskContext* a3, ::Il2CppArray<::RPG::GameCore::TaskConfig*>* a4, ::Il2CppArray<::RPG::GameCore::TaskConfig*>* a5, ::System::UInt32 a6)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::RPG::GameCore::TaskContext*, ::Il2CppArray<::RPG::GameCore::TaskConfig*>*, ::Il2CppArray<::RPG::GameCore::TaskConfig*>*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_4551A380DCBB3F00_METHOD_2_BFA5B0A6958CED3A_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Void Method_2_B01F5292A1B6EB04()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4551A380DCBB3F00_METHOD_2_B01F5292A1B6EB04_OFFSET))(this);
	}

	::System::Void Method_2_464B80C09A37526F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4551A380DCBB3F00_METHOD_2_464B80C09A37526F_OFFSET))(this);
	}

	::System::Void Method_2_F5447CD65612575D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4551A380DCBB3F00_METHOD_2_F5447CD65612575D_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_4551A380DCBB3F00_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_024876544C3FD21D(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_4551A380DCBB3F00_METHOD_2_024876544C3FD21D_OFFSET))(this, a1);
	}

	::System::Void Method_2_FD6AF0F9AA9298B1(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_4551A380DCBB3F00_METHOD_2_FD6AF0F9AA9298B1_OFFSET))(this, a1);
	}

	::System::Void Method_2_3440376D6A1AC8F4(::Class_0_16E4307DCC419505_460* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_460*))((::PBYTE)hIl2Cpp + CLASS_2_4551A380DCBB3F00_METHOD_2_3440376D6A1AC8F4_OFFSET))(this, a1);
	}

	::System::Void Method_2_3F6E5E10CE187192(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_4551A380DCBB3F00_METHOD_2_3F6E5E10CE187192_OFFSET))(this, a1);
	}

	::System::Void Method_2_1380ECF184CE3DF4(::Class_3_07C3C4D2990C49EE* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_07C3C4D2990C49EE*))((::PBYTE)hIl2Cpp + CLASS_2_4551A380DCBB3F00_METHOD_2_1380ECF184CE3DF4_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_1DE6E59E2CDB6056(::Class_3_07C3C4D2990C49EE* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_3_07C3C4D2990C49EE*))((::PBYTE)hIl2Cpp + CLASS_2_4551A380DCBB3F00_METHOD_2_1DE6E59E2CDB6056_OFFSET))(this, a1);
	}

	::System::Void Method_2_DF7CEFC0E6C5FD0D(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_4551A380DCBB3F00_METHOD_2_DF7CEFC0E6C5FD0D_OFFSET))(this, a1);
	}

	::System::Void Method_2_E644604C8CC8D8E1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_4551A380DCBB3F00_METHOD_2_E644604C8CC8D8E1_OFFSET))(this, a1);
	}

	::System::Void Method_2_A626FD3D950B8B9D(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_4551A380DCBB3F00_METHOD_2_A626FD3D950B8B9D_OFFSET))(this, a1);
	}

	::System::Void Method_2_A626FD3D950B8B9D_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_4551A380DCBB3F00_METHOD_2_A626FD3D950B8B9D_1_OFFSET))(this, a1);
	}

	::System::UInt32 Method_2_B485CB3CF97F0A2D()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4551A380DCBB3F00_METHOD_2_B485CB3CF97F0A2D_OFFSET))(this);
	}

	::System::Boolean Method_2_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4551A380DCBB3F00_METHOD_2_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* Method_2_9F8F85BA5EA1113D()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4551A380DCBB3F00_METHOD_2_9F8F85BA5EA1113D_OFFSET))(this);
	}

	::RPG::GameCore::GameEntity* Method_2_B1445E8504415D4D()
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4551A380DCBB3F00_METHOD_2_B1445E8504415D4D_OFFSET))(this);
	}

	::System::UInt32 get_PlanetDisplayID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4551A380DCBB3F00_GET_PLANETDISPLAYID_OFFSET))(this);
	}

	::System::Void set_PlanetDisplayID(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_4551A380DCBB3F00_SET_PLANETDISPLAYID_OFFSET))(this, a1);
	}

	::System::UInt32 get_CurRouteDisplayID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4551A380DCBB3F00_GET_CURROUTEDISPLAYID_OFFSET))(this);
	}

	::System::Void set_CurRouteDisplayID(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_4551A380DCBB3F00_SET_CURROUTEDISPLAYID_OFFSET))(this, a1);
	}

	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_2_4551A380DCBB3F00_Class_1_0EDA766EC67D9DC4*>* Method_2_F00DB6CB3728D2C3()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_2_4551A380DCBB3F00_Class_1_0EDA766EC67D9DC4*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4551A380DCBB3F00_METHOD_2_F00DB6CB3728D2C3_OFFSET))(this);
	}

	::System::Void Method_2_51CFFE2AF748ECD7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4551A380DCBB3F00_METHOD_2_51CFFE2AF748ECD7_OFFSET))(this);
	}

	::System::Void Method_2_AE80CBC984AADFD5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4551A380DCBB3F00_METHOD_2_AE80CBC984AADFD5_OFFSET))(this);
	}
};
