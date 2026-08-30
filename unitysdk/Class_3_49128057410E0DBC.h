#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_BEDC597CF9F6E647.h"
#include "unitysdk/RPG/Client/LittleGameShare/FightServerLogLevel.h"
#include "unitysdk/RPG/LogTag.h"
#include "unitysdk/Struct_2_9D8AC967EA14E5A2.h"

class Class_0_16E4307DCC419505_50;
class Class_0_16E4307DCC419505_51;
class Class_1_3F5064ADB89DA8D3;
class Class_1_57B0727320B17159;
class Class_1_9AD828BA811E7C7A;
class Class_1_9AD828BA811E7C7A_1;
class Class_1_CE89E018B1132F67_1;
class Class_1_DDEA15C15400616B;
class Class_1_FDFA365FE186E8F2_14;
class Class_2_350C5DFBFCC8BFB8;
namespace Entitas { template <typename T> class Context_1; }
namespace Entitas { template <typename T> class IContext_1; }
namespace Entitas { template <typename T> class IMatcher_1; }
namespace Google::Protobuf { class IMessage; }
namespace RPG::Client { class RPGProfilerMarker; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyCollection_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_49128057410E0DBC_GET_ISWAITCLEAN_OFFSET UNITYSDK_OFFSET(0x1C0307F0)
#define CLASS_3_49128057410E0DBC_GET_LEAVEPLAYERUIDLIST_OFFSET UNITYSDK_OFFSET(0x1C030830)
#define CLASS_3_49128057410E0DBC_METHOD_3_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1C031210)
#define CLASS_3_49128057410E0DBC_METHOD_3_0AB718BEE9EA06D7_OFFSET UNITYSDK_OFFSET(0x1C0316C0)
#define CLASS_3_49128057410E0DBC_METHOD_3_18DCCDB9FE9C2A50_OFFSET UNITYSDK_OFFSET(0x1C031140)
#define CLASS_3_49128057410E0DBC_METHOD_3_19E89B4D61AF5CBB_OFFSET UNITYSDK_OFFSET(0x1C033480)
#define CLASS_3_49128057410E0DBC_METHOD_3_241FCB0507EB9FA1_OFFSET UNITYSDK_OFFSET(0x1C033210)
#define CLASS_3_49128057410E0DBC_METHOD_3_29E8EBCBB63706B4_OFFSET UNITYSDK_OFFSET(0x1C033690)
#define CLASS_3_49128057410E0DBC_METHOD_3_3D25BCF2F8C75054_OFFSET UNITYSDK_OFFSET(0x1C032840)
#define CLASS_3_49128057410E0DBC_METHOD_3_4EBAACBDEF0A2B55_1_OFFSET UNITYSDK_OFFSET(0x1C0327D0)
#define CLASS_3_49128057410E0DBC_METHOD_3_4EBAACBDEF0A2B55_OFFSET UNITYSDK_OFFSET(0x1C033410)
#define CLASS_3_49128057410E0DBC_METHOD_3_54B645BC6591A3AC_OFFSET UNITYSDK_OFFSET(0x1C031D30)
#define CLASS_3_49128057410E0DBC_METHOD_3_56CE4AFC5339F746_OFFSET UNITYSDK_OFFSET(0x1C0319D0)
#define CLASS_3_49128057410E0DBC_METHOD_3_593F7847A94BDD52_OFFSET UNITYSDK_OFFSET(0x1C032660)
#define CLASS_3_49128057410E0DBC_METHOD_3_80BEA989E4652E88_OFFSET UNITYSDK_OFFSET(0x1C031CE0)
#define CLASS_3_49128057410E0DBC_METHOD_3_833665EAA0E42A53_OFFSET UNITYSDK_OFFSET(0x1C030850)
#define CLASS_3_49128057410E0DBC_METHOD_3_88AB60EC06BE78FB_OFFSET UNITYSDK_OFFSET(0x1C032AF0)
#define CLASS_3_49128057410E0DBC_METHOD_3_9A8BFEB2D43F0EAB_OFFSET UNITYSDK_OFFSET(0x1C0335C0)
#define CLASS_3_49128057410E0DBC_METHOD_3_9B39F7D7C1FF70D6_OFFSET UNITYSDK_OFFSET(0x1C032A90)
#define CLASS_3_49128057410E0DBC_METHOD_3_A3FAE12D7B6ACD62_OFFSET UNITYSDK_OFFSET(0x1C033190)
#define CLASS_3_49128057410E0DBC_METHOD_3_B86FB61B32E1718F_1_OFFSET UNITYSDK_OFFSET(0x1C033570)
#define CLASS_3_49128057410E0DBC_METHOD_3_B86FB61B32E1718F_OFFSET UNITYSDK_OFFSET(0x1C033520)
#define CLASS_3_49128057410E0DBC_METHOD_3_C11063C299BBAF69_OFFSET UNITYSDK_OFFSET(0x1C031220)
#define CLASS_3_49128057410E0DBC_METHOD_3_C42DF27058E2C758_OFFSET UNITYSDK_OFFSET(0x1C0325D0)
#define CLASS_3_49128057410E0DBC_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1C031750)
#define CLASS_3_49128057410E0DBC_METHOD_3_CA6BDDCC5F7CE11E_OFFSET UNITYSDK_OFFSET(0x1C031790)
#define CLASS_3_49128057410E0DBC_METHOD_3_CCE3B527FE032628_OFFSET UNITYSDK_OFFSET(0x1C030FA0)
#define CLASS_3_49128057410E0DBC_METHOD_3_CEE772DE95055C01_OFFSET UNITYSDK_OFFSET(0x1C031810)
#define CLASS_3_49128057410E0DBC_METHOD_3_D329119D0317233F_OFFSET UNITYSDK_OFFSET(0x1C033260)
#define CLASS_3_49128057410E0DBC_METHOD_3_D8618198BDAD0561_1_OFFSET UNITYSDK_OFFSET(0x1C030820)
#define CLASS_3_49128057410E0DBC_METHOD_3_D8618198BDAD0561_OFFSET UNITYSDK_OFFSET(0x1C030810)
#define CLASS_3_49128057410E0DBC_METHOD_3_E9A575D18A0748D9_OFFSET UNITYSDK_OFFSET(0x1C032A40)
#define CLASS_3_49128057410E0DBC_METHOD_3_F4F61B09D32675B2_OFFSET UNITYSDK_OFFSET(0x1C031C20)
#define CLASS_3_49128057410E0DBC_METHOD_3_F693D0E62C0A7D5B_OFFSET UNITYSDK_OFFSET(0x1C031B80)
#define CLASS_3_49128057410E0DBC_SET_ISWAITCLEAN_OFFSET UNITYSDK_OFFSET(0x1C030800)
#define CLASS_3_49128057410E0DBC_SET_LEAVEPLAYERUIDLIST_OFFSET UNITYSDK_OFFSET(0x1C030840)
#define CLASS_3_49128057410E0DBC__CTOR_OFFSET UNITYSDK_OFFSET(0x1C0313D0)

inline static constexpr unsigned int Class_3_49128057410E0DBC_TypeDefinitionIndex = 36185;

class Class_3_49128057410E0DBC : public ::Class_2_BEDC597CF9F6E647
{
public:
	::System::Collections::Generic::List_1<::System::UInt32>* BOMEFEDKKBP; // 0x68
	::RPG::Client::RPGProfilerMarker* FNMNEBJAGFH; // 0x70
	::System::Collections::Generic::HashSet_1<::System::UInt32>* DINDMACJNAB; // 0x78
	::RPG::Client::RPGProfilerMarker* GOFKFBACCAL; // 0x80
	::System::Collections::Generic::List_1<::System::UInt32>* _LeavePlayerUidList_k__BackingField; // 0x88
	::Class_0_16E4307DCC419505_50* HGBEBKPCOLN; // 0x90
	::Class_2_350C5DFBFCC8BFB8* CLDGCBJIBKB; // 0x98
	::Class_0_16E4307DCC419505_51* OBPEEMKADBF; // 0xA0
	::System::Collections::Generic::List_1<::Class_1_9AD828BA811E7C7A_1*>* HFAGALAPGLA; // 0xA8
	::Class_1_CE89E018B1132F67_1* IDMFFMEJLCE; // 0xB0
	::System::Collections::Generic::HashSet_1<::System::UInt32>* DPCOCIHMDHJ; // 0xB8
	::System::Collections::Generic::List_1<::Struct_2_9D8AC967EA14E5A2>* CKBHIHKPMCL; // 0xC0
	::System::Boolean _IsWaitClean_k__BackingField; // 0xC8

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_49128057410E0DBC__CTOR_OFFSET))(this);
	}

	::System::Boolean get_IsWaitClean()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_49128057410E0DBC_GET_ISWAITCLEAN_OFFSET))(this);
	}

	::System::Void set_IsWaitClean(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_49128057410E0DBC_SET_ISWAITCLEAN_OFFSET))(this, a1);
	}

	::System::Collections::Generic::IReadOnlyCollection_1<::System::UInt32>* Method_3_D8618198BDAD0561()
	{
		return ((::System::Collections::Generic::IReadOnlyCollection_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_49128057410E0DBC_METHOD_3_D8618198BDAD0561_OFFSET))(this);
	}

	::System::Collections::Generic::IReadOnlyCollection_1<::System::UInt32>* Method_3_D8618198BDAD0561_1()
	{
		return ((::System::Collections::Generic::IReadOnlyCollection_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_49128057410E0DBC_METHOD_3_D8618198BDAD0561_1_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::UInt32>* get_LeavePlayerUidList()
	{
		return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_49128057410E0DBC_GET_LEAVEPLAYERUIDLIST_OFFSET))(this);
	}

	::System::Void set_LeavePlayerUidList(::System::Collections::Generic::List_1<::System::UInt32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_3_49128057410E0DBC_SET_LEAVEPLAYERUIDLIST_OFFSET))(this, a1);
	}

	::System::Void Method_3_833665EAA0E42A53(::System::String* a1, ::Il2CppArray<::System::Object*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_3_49128057410E0DBC_METHOD_3_833665EAA0E42A53_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_CCE3B527FE032628(::System::UInt32 a1, ::System::String* a2, ::Il2CppArray<::System::Object*>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_3_49128057410E0DBC_METHOD_3_CCE3B527FE032628_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_3_18DCCDB9FE9C2A50(::System::UInt32 a1, ::System::String* a2, ::Il2CppArray<::System::Object*>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_3_49128057410E0DBC_METHOD_3_18DCCDB9FE9C2A50_OFFSET))(this, a1, a2, a3);
	}

	::System::UInt32 Method_3_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_49128057410E0DBC_METHOD_3_02A3D10A9D535169_OFFSET))(this);
	}

	::Class_1_DDEA15C15400616B* Method_3_C11063C299BBAF69(::System::UInt32 a1, ::System::Collections::Generic::List_1<::System::Int32>* a2)
	{
		return ((::Class_1_DDEA15C15400616B*(*)(::PVOID, ::System::UInt32, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_3_49128057410E0DBC_METHOD_3_C11063C299BBAF69_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_0AB718BEE9EA06D7(::Class_1_57B0727320B17159* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_57B0727320B17159*))((::PBYTE)hIl2Cpp + CLASS_3_49128057410E0DBC_METHOD_3_0AB718BEE9EA06D7_OFFSET))(this, a1);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_49128057410E0DBC_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_3_CA6BDDCC5F7CE11E(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_49128057410E0DBC_METHOD_3_CA6BDDCC5F7CE11E_OFFSET))(this, a1);
	}

	::System::Void Method_3_CEE772DE95055C01(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_49128057410E0DBC_METHOD_3_CEE772DE95055C01_OFFSET))(this, a1);
	}

	::System::Void Method_3_56CE4AFC5339F746()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_49128057410E0DBC_METHOD_3_56CE4AFC5339F746_OFFSET))(this);
	}

	::System::Void Method_3_F693D0E62C0A7D5B(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_49128057410E0DBC_METHOD_3_F693D0E62C0A7D5B_OFFSET))(this, a1);
	}

	::System::Void Method_3_F4F61B09D32675B2(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_49128057410E0DBC_METHOD_3_F4F61B09D32675B2_OFFSET))(this, a1);
	}

	::System::Void Method_3_80BEA989E4652E88(::Il2CppArray<::System::String*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_3_49128057410E0DBC_METHOD_3_80BEA989E4652E88_OFFSET))(this, a1);
	}

	::System::Void Method_3_54B645BC6591A3AC(::System::UInt32 a1, ::Class_1_9AD828BA811E7C7A* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Class_1_9AD828BA811E7C7A*))((::PBYTE)hIl2Cpp + CLASS_3_49128057410E0DBC_METHOD_3_54B645BC6591A3AC_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_593F7847A94BDD52(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_49128057410E0DBC_METHOD_3_593F7847A94BDD52_OFFSET))(this, a1);
	}

	::System::Void Method_3_3D25BCF2F8C75054(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_49128057410E0DBC_METHOD_3_3D25BCF2F8C75054_OFFSET))(this, a1);
	}

	::System::Void Method_3_E9A575D18A0748D9(::Class_1_CE89E018B1132F67_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_CE89E018B1132F67_1*))((::PBYTE)hIl2Cpp + CLASS_3_49128057410E0DBC_METHOD_3_E9A575D18A0748D9_OFFSET))(this, a1);
	}

	::Class_1_CE89E018B1132F67_1* Method_3_9B39F7D7C1FF70D6()
	{
		return ((::Class_1_CE89E018B1132F67_1*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_49128057410E0DBC_METHOD_3_9B39F7D7C1FF70D6_OFFSET))(this);
	}

	::System::Void Method_3_88AB60EC06BE78FB(::Class_1_FDFA365FE186E8F2_14* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_FDFA365FE186E8F2_14*))((::PBYTE)hIl2Cpp + CLASS_3_49128057410E0DBC_METHOD_3_88AB60EC06BE78FB_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_A3FAE12D7B6ACD62()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_49128057410E0DBC_METHOD_3_A3FAE12D7B6ACD62_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Class_1_9AD828BA811E7C7A_1*>* Method_3_241FCB0507EB9FA1()
	{
		return ((::System::Collections::Generic::List_1<::Class_1_9AD828BA811E7C7A_1*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_49128057410E0DBC_METHOD_3_241FCB0507EB9FA1_OFFSET))(this);
	}

	::System::Void Method_3_D329119D0317233F(::System::UInt32 a1, ::Google::Protobuf::IMessage* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Google::Protobuf::IMessage*))((::PBYTE)hIl2Cpp + CLASS_3_49128057410E0DBC_METHOD_3_D329119D0317233F_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_4EBAACBDEF0A2B55(::System::String* a1, ::RPG::LogTag a2, ::System::String* a3, ::System::String* a4, ::System::Int32 a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::RPG::LogTag, ::System::String*, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_49128057410E0DBC_METHOD_3_4EBAACBDEF0A2B55_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_3_4EBAACBDEF0A2B55_1(::System::String* a1, ::RPG::LogTag a2, ::System::String* a3, ::System::String* a4, ::System::Int32 a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::RPG::LogTag, ::System::String*, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_49128057410E0DBC_METHOD_3_4EBAACBDEF0A2B55_1_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_3_C42DF27058E2C758(::System::String* a1, ::RPG::LogTag a2, ::System::String* a3, ::System::String* a4, ::System::Int32 a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::RPG::LogTag, ::System::String*, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_49128057410E0DBC_METHOD_3_C42DF27058E2C758_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_3_19E89B4D61AF5CBB(::System::Collections::Generic::List_1<::Struct_2_9D8AC967EA14E5A2>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Struct_2_9D8AC967EA14E5A2>*))((::PBYTE)hIl2Cpp + CLASS_3_49128057410E0DBC_METHOD_3_19E89B4D61AF5CBB_OFFSET))(this, a1);
	}

	::System::Void Method_3_B86FB61B32E1718F(::System::String* a1, ::RPG::Client::LittleGameShare::FightServerLogLevel a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::RPG::Client::LittleGameShare::FightServerLogLevel))((::PBYTE)hIl2Cpp + CLASS_3_49128057410E0DBC_METHOD_3_B86FB61B32E1718F_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_B86FB61B32E1718F_1(::System::String* a1, ::RPG::Client::LittleGameShare::FightServerLogLevel a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::RPG::Client::LittleGameShare::FightServerLogLevel))((::PBYTE)hIl2Cpp + CLASS_3_49128057410E0DBC_METHOD_3_B86FB61B32E1718F_1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_9A8BFEB2D43F0EAB(::System::UInt64 a1, ::System::UInt32 a2, ::Class_1_3F5064ADB89DA8D3* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt64, ::System::UInt32, ::Class_1_3F5064ADB89DA8D3*))((::PBYTE)hIl2Cpp + CLASS_3_49128057410E0DBC_METHOD_3_9A8BFEB2D43F0EAB_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_3_29E8EBCBB63706B4(::System::String* a1, ::RPG::Client::LittleGameShare::FightServerLogLevel a2, ::RPG::LogTag a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::RPG::Client::LittleGameShare::FightServerLogLevel, ::RPG::LogTag))((::PBYTE)hIl2Cpp + CLASS_3_49128057410E0DBC_METHOD_3_29E8EBCBB63706B4_OFFSET))(this, a1, a2, a3);
	}
};
