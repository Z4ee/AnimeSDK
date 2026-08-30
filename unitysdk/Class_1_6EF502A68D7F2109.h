#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_6EF502A68D7F2109_Struct_2_BE8D3ACB5E418603.h"
#include "unitysdk/Class_1_6EF502A68D7F2109_Struct_2_E7B8E3FDAA2A0F63.h"
#include "unitysdk/Class_1_6EF502A68D7F2109_Struct_2_F8EFABBCD4062A4D.h"
#include "unitysdk/RPG/Client/EPedestrianV2InitialFillMode.h"
#include "unitysdk/RPG/Client/EPedestrianV2MotionState.h"
#include "unitysdk/Struct_2_085541A9CFF64383.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_483ED67B5E0A21FB;
class Class_1_6EF502A68D7F2109_Class_1_54CAECE1F8F98C6F;
class Class_1_6EF502A68D7F2109_Class_1_C1B169CA84D38422;
class Class_1_6EF502A68D7F2109_Class_1_CFC85BE6AD817975;
namespace Collections::Pooled { template <typename T> class PooledList_1; }
namespace RPG::GameCore { class LevelPedestrianV2EmitInfo; }
namespace RPG::GameCore { class LevelPedestrianV2MemberInfo; }
namespace RPG::GameCore { class LevelPedestrianV2RoadEntryInfo; }
namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }
namespace System { template <typename T> class Comparison_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_6EF502A68D7F2109_DISPOSE_OFFSET UNITYSDK_OFFSET(0x17061620)
#define CLASS_1_6EF502A68D7F2109_METHOD_1_1E13A8A5C0FF7D62_OFFSET UNITYSDK_OFFSET(0x17061B30)
#define CLASS_1_6EF502A68D7F2109_METHOD_1_1E7D5036D6CE8716_OFFSET UNITYSDK_OFFSET(0x17062850)
#define CLASS_1_6EF502A68D7F2109_METHOD_1_33AF7ECB6F6E27DC_OFFSET UNITYSDK_OFFSET(0x17061E90)
#define CLASS_1_6EF502A68D7F2109_METHOD_1_342CA9FBB8A32593_OFFSET UNITYSDK_OFFSET(0x17061E30)
#define CLASS_1_6EF502A68D7F2109_METHOD_1_3B8AF6297DBAD158_OFFSET UNITYSDK_OFFSET(0x17067F90)
#define CLASS_1_6EF502A68D7F2109_METHOD_1_3C4D87EDFF0D24C6_OFFSET UNITYSDK_OFFSET(0x17067350)
#define CLASS_1_6EF502A68D7F2109_METHOD_1_3D1D38106B4F16A7_OFFSET UNITYSDK_OFFSET(0x17061790)
#define CLASS_1_6EF502A68D7F2109_METHOD_1_3E33BC7492901507_OFFSET UNITYSDK_OFFSET(0x17062030)
#define CLASS_1_6EF502A68D7F2109_METHOD_1_43F7AF3FD2D98564_OFFSET UNITYSDK_OFFSET(0x17068770)
#define CLASS_1_6EF502A68D7F2109_METHOD_1_4403B8628765AF2F_OFFSET UNITYSDK_OFFSET(0x17063EF0)
#define CLASS_1_6EF502A68D7F2109_METHOD_1_4A41C63BFE58D26F_OFFSET UNITYSDK_OFFSET(0x170625F0)
#define CLASS_1_6EF502A68D7F2109_METHOD_1_5973B8751B4C3E90_OFFSET UNITYSDK_OFFSET(0x17063600)
#define CLASS_1_6EF502A68D7F2109_METHOD_1_7627450954D5DE1B_OFFSET UNITYSDK_OFFSET(0x17062250)
#define CLASS_1_6EF502A68D7F2109_METHOD_1_7BB7C527213AEE62_OFFSET UNITYSDK_OFFSET(0x170619F0)
#define CLASS_1_6EF502A68D7F2109_METHOD_1_87CE2F05A932928F_OFFSET UNITYSDK_OFFSET(0x170646A0)
#define CLASS_1_6EF502A68D7F2109_METHOD_1_90D78FB0E75A3C6D_OFFSET UNITYSDK_OFFSET(0x170636C0)
#define CLASS_1_6EF502A68D7F2109_METHOD_1_AC8DF530E112AA0D_OFFSET UNITYSDK_OFFSET(0x17064C40)
#define CLASS_1_6EF502A68D7F2109_METHOD_1_B3F016178B72AC1E_OFFSET UNITYSDK_OFFSET(0x17062B70)
#define CLASS_1_6EF502A68D7F2109_METHOD_1_B6674F7A41BE2643_OFFSET UNITYSDK_OFFSET(0x170639C0)
#define CLASS_1_6EF502A68D7F2109_METHOD_1_C04C10246EBC8F79_OFFSET UNITYSDK_OFFSET(0x17068360)
#define CLASS_1_6EF502A68D7F2109_METHOD_1_C06A6F889C0AEEC9_OFFSET UNITYSDK_OFFSET(0x17061AC0)
#define CLASS_1_6EF502A68D7F2109_METHOD_1_C561FF611C07A44C_OFFSET UNITYSDK_OFFSET(0x17068700)
#define CLASS_1_6EF502A68D7F2109_METHOD_1_D15FEB65F503ED6B_OFFSET UNITYSDK_OFFSET(0x17068900)
#define CLASS_1_6EF502A68D7F2109_METHOD_1_D242C5E37BC4FE18_OFFSET UNITYSDK_OFFSET(0x170686B0)
#define CLASS_1_6EF502A68D7F2109_METHOD_1_D96E785960996567_OFFSET UNITYSDK_OFFSET(0x17061D20)
#define CLASS_1_6EF502A68D7F2109_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x17062020)
#define CLASS_1_6EF502A68D7F2109_METHOD_1_F2AC737E810B3EE7_OFFSET UNITYSDK_OFFSET(0x17062180)
#define CLASS_1_6EF502A68D7F2109_METHOD_1_FE33FD83F0C0DDE3_OFFSET UNITYSDK_OFFSET(0x17068260)
#define CLASS_1_6EF502A68D7F2109__CCTOR_OFFSET UNITYSDK_OFFSET(0x17068A60)
#define CLASS_1_6EF502A68D7F2109__CTOR_OFFSET UNITYSDK_OFFSET(0x17060EF0)

inline static constexpr unsigned int Class_1_6EF502A68D7F2109_TypeDefinitionIndex = 69250;

class Class_1_6EF502A68D7F2109 : public ::System::Object
{
public:
	static ::Class_1_6EF502A68D7F2109_Class_1_C1B169CA84D38422** StaticGet_BFMCIAPHGEK()
	{
		return (::Class_1_6EF502A68D7F2109_Class_1_C1B169CA84D38422**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6EF502A68D7F2109_TypeDefinitionIndex)->GetStaticField(0x5C140);
	}
	// static const ::System::Single IOPHJDDFMNL; // 0x0
	// static const ::System::Single ECBDAJDMLEN; // 0x0
	// static const ::System::Single MCKCLEGNCGG; // 0x0
	// static const ::System::Single BMLCGEJFFHI; // 0x0
	// static const ::System::Int32 JMIILLLKFBK = 0x4; // 0x0
	// static const ::System::Int32 ODIDMEOMKPF = 0x400; // 0x0
	// static const ::System::Int32 CFCJFHHOFJA = 0x20; // 0x0
	// static const ::System::Int32 BGLCEAIGEBM = 0x200; // 0x0
	// static const ::System::Int32 OBECNOKFLIJ = 0x2000; // 0x0
	// static const ::System::Int32 HDDNDOKGDGG = 0x400; // 0x0
	// static const ::System::Int32 LMMMLNKNFNL = 0x800; // 0x0
	// static const ::System::Int32 EPDJFPNJKGH = 0x8000; // 0x0
	// static const ::System::Int32 LPGLBEPJOFP = 0x1000; // 0x0
	::Il2CppArray<::System::Collections::Generic::List_1<::Class_1_6EF502A68D7F2109_Struct_2_F8EFABBCD4062A4D>*>* CDOGDPBABKH; // 0x10
	::System::Comparison_1<::Class_1_6EF502A68D7F2109_Class_1_CFC85BE6AD817975*>* PHHHGMJDDAM; // 0x18
	::Il2CppArray<::Class_1_6EF502A68D7F2109_Class_1_CFC85BE6AD817975*>* PELMKGJALAP; // 0x20
	::System::Collections::Generic::HashSet_1<::System::Int64>* LNIGNEBPMCK; // 0x28
	::Il2CppArray<::System::Boolean>* ABILPBBKDEB; // 0x30
	::System::Collections::Generic::Dictionary_2<::System::Int64, ::UnityEngine::Vector3>* FMEHKNLFINL; // 0x38
	::System::Collections::Generic::HashSet_1<::System::String*>* GJANKHMIHEE; // 0x40
	::Il2CppArray<::Class_1_6EF502A68D7F2109_Class_1_CFC85BE6AD817975*>* OJJMLFIMGMF; // 0x48
	::System::Collections::Generic::HashSet_1<::System::Int64>* FEPMGNBGEMF; // 0x50
	::Class_1_483ED67B5E0A21FB* LGEGKIKIPOB; // 0x58
	::Il2CppArray<::RPG::GameCore::LevelPedestrianV2MemberInfo*>* FAFMPBKGNPN; // 0x60
	::Il2CppArray<::System::Boolean>* EGEBPLMONPP; // 0x68
	::Il2CppArray<::RPG::GameCore::LevelPedestrianV2EmitInfo*>* AHEEICBHNHG; // 0x70
	::System::Boolean KOBMCMGKDEL; // 0x78
	::System::Boolean KKLKNNHPGAO; // 0x79
	::System::Single KMOLAPGABHI; // 0x7C

	::System::Void _ctor(::Class_1_483ED67B5E0A21FB* a1, ::Il2CppArray<::RPG::GameCore::LevelPedestrianV2EmitInfo*>* a2, ::Il2CppArray<::RPG::GameCore::LevelPedestrianV2MemberInfo*>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_483ED67B5E0A21FB*, ::Il2CppArray<::RPG::GameCore::LevelPedestrianV2EmitInfo*>*, ::Il2CppArray<::RPG::GameCore::LevelPedestrianV2MemberInfo*>*))((::PBYTE)hIl2Cpp + CLASS_1_6EF502A68D7F2109__CTOR_OFFSET))(this, a1, a2, a3);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_6EF502A68D7F2109__CCTOR_OFFSET))();
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6EF502A68D7F2109_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_3D1D38106B4F16A7(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_6EF502A68D7F2109_METHOD_1_3D1D38106B4F16A7_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_C06A6F889C0AEEC9(::RPG::Client::EPedestrianV2InitialFillMode a1)
	{
		return ((::System::Int32(*)(::PVOID, ::RPG::Client::EPedestrianV2InitialFillMode))((::PBYTE)hIl2Cpp + CLASS_1_6EF502A68D7F2109_METHOD_1_C06A6F889C0AEEC9_OFFSET))(this, a1);
	}

	::System::Void Method_1_342CA9FBB8A32593(::RPG::Client::EPedestrianV2InitialFillMode a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::EPedestrianV2InitialFillMode))((::PBYTE)hIl2Cpp + CLASS_1_6EF502A68D7F2109_METHOD_1_342CA9FBB8A32593_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_D96E785960996567()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6EF502A68D7F2109_METHOD_1_D96E785960996567_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6EF502A68D7F2109_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_3E33BC7492901507(::System::Int64 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + CLASS_1_6EF502A68D7F2109_METHOD_1_3E33BC7492901507_OFFSET))(this, a1);
	}

	::System::Void Method_1_1E13A8A5C0FF7D62()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6EF502A68D7F2109_METHOD_1_1E13A8A5C0FF7D62_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerable_1<::Class_1_6EF502A68D7F2109_Struct_2_E7B8E3FDAA2A0F63>* Method_1_F2AC737E810B3EE7(::System::Single a1)
	{
		return ((::System::Collections::Generic::IEnumerable_1<::Class_1_6EF502A68D7F2109_Struct_2_E7B8E3FDAA2A0F63>*(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_6EF502A68D7F2109_METHOD_1_F2AC737E810B3EE7_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_7627450954D5DE1B(::Class_1_6EF502A68D7F2109_Struct_2_E7B8E3FDAA2A0F63& a1, ::RPG::Client::EPedestrianV2InitialFillMode a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_6EF502A68D7F2109_Struct_2_E7B8E3FDAA2A0F63&, ::RPG::Client::EPedestrianV2InitialFillMode))((::PBYTE)hIl2Cpp + CLASS_1_6EF502A68D7F2109_METHOD_1_7627450954D5DE1B_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_B6674F7A41BE2643(::Class_1_6EF502A68D7F2109_Struct_2_E7B8E3FDAA2A0F63& a1, ::System::Single& a2, ::RPG::Client::EPedestrianV2InitialFillMode a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_6EF502A68D7F2109_Struct_2_E7B8E3FDAA2A0F63&, ::System::Single&, ::RPG::Client::EPedestrianV2InitialFillMode))((::PBYTE)hIl2Cpp + CLASS_1_6EF502A68D7F2109_METHOD_1_B6674F7A41BE2643_OFFSET))(this, a1, a2, a3);
	}

	::Class_1_6EF502A68D7F2109_Struct_2_E7B8E3FDAA2A0F63 Method_1_87CE2F05A932928F(::Struct_2_085541A9CFF64383 a1, ::RPG::Client::EPedestrianV2MotionState a2, ::System::Int32 a3, ::System::String* a4)
	{
		return ((::Class_1_6EF502A68D7F2109_Struct_2_E7B8E3FDAA2A0F63(*)(::PVOID, ::Struct_2_085541A9CFF64383, ::RPG::Client::EPedestrianV2MotionState, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_6EF502A68D7F2109_METHOD_1_87CE2F05A932928F_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Single Method_1_5973B8751B4C3E90(::Struct_2_085541A9CFF64383 a1, ::System::Int32 a2)
	{
		return ((::System::Single(*)(::PVOID, ::Struct_2_085541A9CFF64383, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_6EF502A68D7F2109_METHOD_1_5973B8751B4C3E90_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_1_33AF7ECB6F6E27DC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6EF502A68D7F2109_METHOD_1_33AF7ECB6F6E27DC_OFFSET))(this);
	}

	::System::Int32 Method_1_AC8DF530E112AA0D(::Class_1_6EF502A68D7F2109_Class_1_C1B169CA84D38422* a1, ::System::Int32 a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_1_6EF502A68D7F2109_Class_1_C1B169CA84D38422*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_6EF502A68D7F2109_METHOD_1_AC8DF530E112AA0D_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_3C4D87EDFF0D24C6(::Class_1_6EF502A68D7F2109_Class_1_C1B169CA84D38422* a1, ::Class_1_6EF502A68D7F2109_Class_1_CFC85BE6AD817975* a2, ::Class_1_6EF502A68D7F2109_Class_1_54CAECE1F8F98C6F* a3, ::System::Int32 a4, ::System::Int32 a5, ::System::Int32 a6, ::System::Action_3<::Struct_2_085541A9CFF64383, ::System::Int32, ::UnityEngine::Vector3>* a7)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_6EF502A68D7F2109_Class_1_C1B169CA84D38422*, ::Class_1_6EF502A68D7F2109_Class_1_CFC85BE6AD817975*, ::Class_1_6EF502A68D7F2109_Class_1_54CAECE1F8F98C6F*, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Action_3<::Struct_2_085541A9CFF64383, ::System::Int32, ::UnityEngine::Vector3>*))((::PBYTE)hIl2Cpp + CLASS_1_6EF502A68D7F2109_METHOD_1_3C4D87EDFF0D24C6_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	static ::System::Boolean Method_1_7BB7C527213AEE62(::Class_1_6EF502A68D7F2109_Class_1_CFC85BE6AD817975* a1)
	{
		return ((::System::Boolean(*)(::Class_1_6EF502A68D7F2109_Class_1_CFC85BE6AD817975*))((::PBYTE)hIl2Cpp + CLASS_1_6EF502A68D7F2109_METHOD_1_7BB7C527213AEE62_OFFSET))(a1);
	}

	::System::Boolean Method_1_C04C10246EBC8F79(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_6EF502A68D7F2109_METHOD_1_C04C10246EBC8F79_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_1E7D5036D6CE8716(::System::Int32 a1, ::Class_1_6EF502A68D7F2109_Struct_2_F8EFABBCD4062A4D& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::Class_1_6EF502A68D7F2109_Struct_2_F8EFABBCD4062A4D&))((::PBYTE)hIl2Cpp + CLASS_1_6EF502A68D7F2109_METHOD_1_1E7D5036D6CE8716_OFFSET))(this, a1, a2);
	}

	static ::System::Int64 Method_1_D242C5E37BC4FE18(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Int64(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_6EF502A68D7F2109_METHOD_1_D242C5E37BC4FE18_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_3B8AF6297DBAD158(::System::Int64 a1, ::UnityEngine::Vector3 a2, ::Collections::Pooled::PooledList_1<::Class_1_6EF502A68D7F2109_Struct_2_BE8D3ACB5E418603>* a3, ::System::Single& a4)
	{
		return ((::System::Boolean(*)(::System::Int64, ::UnityEngine::Vector3, ::Collections::Pooled::PooledList_1<::Class_1_6EF502A68D7F2109_Struct_2_BE8D3ACB5E418603>*, ::System::Single&))((::PBYTE)hIl2Cpp + CLASS_1_6EF502A68D7F2109_METHOD_1_3B8AF6297DBAD158_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Single Method_1_FE33FD83F0C0DDE3(::System::Int64 a1, ::System::Int64 a2)
	{
		return ((::System::Single(*)(::System::Int64, ::System::Int64))((::PBYTE)hIl2Cpp + CLASS_1_6EF502A68D7F2109_METHOD_1_FE33FD83F0C0DDE3_OFFSET))(a1, a2);
	}

	::System::Boolean Method_1_4403B8628765AF2F(::Struct_2_085541A9CFF64383 a1, ::Struct_2_085541A9CFF64383& a2, ::System::Int32& a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_085541A9CFF64383, ::Struct_2_085541A9CFF64383&, ::System::Int32&))((::PBYTE)hIl2Cpp + CLASS_1_6EF502A68D7F2109_METHOD_1_4403B8628765AF2F_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_B3F016178B72AC1E(::Struct_2_085541A9CFF64383 a1, ::Struct_2_085541A9CFF64383& a2, ::System::Int32& a3)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_085541A9CFF64383, ::Struct_2_085541A9CFF64383&, ::System::Int32&))((::PBYTE)hIl2Cpp + CLASS_1_6EF502A68D7F2109_METHOD_1_B3F016178B72AC1E_OFFSET))(this, a1, a2, a3);
	}

	::System::Single Method_1_43F7AF3FD2D98564(::RPG::GameCore::LevelPedestrianV2RoadEntryInfo* a1)
	{
		return ((::System::Single(*)(::PVOID, ::RPG::GameCore::LevelPedestrianV2RoadEntryInfo*))((::PBYTE)hIl2Cpp + CLASS_1_6EF502A68D7F2109_METHOD_1_43F7AF3FD2D98564_OFFSET))(this, a1);
	}

	::System::Single Method_1_D15FEB65F503ED6B(::Struct_2_085541A9CFF64383 a1)
	{
		return ((::System::Single(*)(::PVOID, ::Struct_2_085541A9CFF64383))((::PBYTE)hIl2Cpp + CLASS_1_6EF502A68D7F2109_METHOD_1_D15FEB65F503ED6B_OFFSET))(this, a1);
	}

	::System::Void Method_1_4A41C63BFE58D26F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6EF502A68D7F2109_METHOD_1_4A41C63BFE58D26F_OFFSET))(this);
	}

	::RPG::GameCore::LevelPedestrianV2MemberInfo* Method_1_90D78FB0E75A3C6D(::System::String* a1)
	{
		return ((::RPG::GameCore::LevelPedestrianV2MemberInfo*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_6EF502A68D7F2109_METHOD_1_90D78FB0E75A3C6D_OFFSET))(this, a1);
	}

	::System::Void Method_1_C561FF611C07A44C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6EF502A68D7F2109_METHOD_1_C561FF611C07A44C_OFFSET))(this);
	}
};
