#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/RewardItem/RewardItemMarkFlags.h"
#include "unitysdk/RPG/GameCore/ItemRarity.h"
#include "unitysdk/RPG/GameCore/ItemRecycleShowType.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_318;
class Class_1_90889A2023AB884E_7;
namespace R3 { template <typename T> class Observable_1; }
namespace R3 { template <typename T> class ReactiveProperty_1; }
namespace RPG::Client { class ItemDisplayData; }
namespace System { class String; }

#define CLASS_1_C37C00DA564601E2_GET_CLICKCOMMAND_OFFSET UNITYSDK_OFFSET(0x154118C0)
#define CLASS_1_C37C00DA564601E2_METHOD_1_41CAA728C2361718_OFFSET UNITYSDK_OFFSET(0x15413240)
#define CLASS_1_C37C00DA564601E2_METHOD_1_59C71AB384B1430D_1_OFFSET UNITYSDK_OFFSET(0x154119E0)
#define CLASS_1_C37C00DA564601E2_METHOD_1_59C71AB384B1430D_2_OFFSET UNITYSDK_OFFSET(0x15411A60)
#define CLASS_1_C37C00DA564601E2_METHOD_1_59C71AB384B1430D_3_OFFSET UNITYSDK_OFFSET(0x15411AB0)
#define CLASS_1_C37C00DA564601E2_METHOD_1_59C71AB384B1430D_4_OFFSET UNITYSDK_OFFSET(0x15411B30)
#define CLASS_1_C37C00DA564601E2_METHOD_1_59C71AB384B1430D_5_OFFSET UNITYSDK_OFFSET(0x15411BF0)
#define CLASS_1_C37C00DA564601E2_METHOD_1_59C71AB384B1430D_6_OFFSET UNITYSDK_OFFSET(0x15411C70)
#define CLASS_1_C37C00DA564601E2_METHOD_1_59C71AB384B1430D_7_OFFSET UNITYSDK_OFFSET(0x15411D50)
#define CLASS_1_C37C00DA564601E2_METHOD_1_59C71AB384B1430D_OFFSET UNITYSDK_OFFSET(0x15411950)
#define CLASS_1_C37C00DA564601E2_METHOD_1_5C4BEEBCBDE3CF1A_OFFSET UNITYSDK_OFFSET(0x154139C0)
#define CLASS_1_C37C00DA564601E2_METHOD_1_6423291ED13007B8_1_OFFSET UNITYSDK_OFFSET(0x15413800)
#define CLASS_1_C37C00DA564601E2_METHOD_1_6423291ED13007B8_2_OFFSET UNITYSDK_OFFSET(0x154138E0)
#define CLASS_1_C37C00DA564601E2_METHOD_1_6423291ED13007B8_OFFSET UNITYSDK_OFFSET(0x15412FB0)
#define CLASS_1_C37C00DA564601E2_METHOD_1_653D5DB2D5C019FD_1_OFFSET UNITYSDK_OFFSET(0x154128F0)
#define CLASS_1_C37C00DA564601E2_METHOD_1_653D5DB2D5C019FD_OFFSET UNITYSDK_OFFSET(0x154126B0)
#define CLASS_1_C37C00DA564601E2_METHOD_1_6DA77FDACBF3863F_OFFSET UNITYSDK_OFFSET(0x15411D10)
#define CLASS_1_C37C00DA564601E2_METHOD_1_8B328B669368F123_OFFSET UNITYSDK_OFFSET(0x15412E00)
#define CLASS_1_C37C00DA564601E2_METHOD_1_92508C0236349FD2_OFFSET UNITYSDK_OFFSET(0x15412650)
#define CLASS_1_C37C00DA564601E2_METHOD_1_9BE4B87CA60A0CB8_OFFSET UNITYSDK_OFFSET(0x15412B30)
#define CLASS_1_C37C00DA564601E2_METHOD_1_A1E1A3DF68C7BFD3_OFFSET UNITYSDK_OFFSET(0x15413650)
#define CLASS_1_C37C00DA564601E2_METHOD_1_A31A9321FF66DBDB_OFFSET UNITYSDK_OFFSET(0x15413350)
#define CLASS_1_C37C00DA564601E2_METHOD_1_B1A83F23310F336A_OFFSET UNITYSDK_OFFSET(0x15411CC0)
#define CLASS_1_C37C00DA564601E2_METHOD_1_B604E655BA2592AD_OFFSET UNITYSDK_OFFSET(0x15413090)
#define CLASS_1_C37C00DA564601E2_METHOD_1_CE389F49E4D441AB_OFFSET UNITYSDK_OFFSET(0x15413AA0)
#define CLASS_1_C37C00DA564601E2_METHOD_1_D68E1CAE64731ECE_OFFSET UNITYSDK_OFFSET(0x15413B80)
#define CLASS_1_C37C00DA564601E2_METHOD_1_D7E4C54DA3DD2FE9_OFFSET UNITYSDK_OFFSET(0x15412C30)
#define CLASS_1_C37C00DA564601E2_METHOD_1_DFD8FD4BA7D3ACA8_OFFSET UNITYSDK_OFFSET(0x15413C70)
#define CLASS_1_C37C00DA564601E2_METHOD_1_E849EE462C26CBA3_OFFSET UNITYSDK_OFFSET(0x15411850)
#define CLASS_1_C37C00DA564601E2_METHOD_1_FB5550CC734284FC_1_OFFSET UNITYSDK_OFFSET(0x15411910)
#define CLASS_1_C37C00DA564601E2_METHOD_1_FB5550CC734284FC_2_OFFSET UNITYSDK_OFFSET(0x15411990)
#define CLASS_1_C37C00DA564601E2_METHOD_1_FB5550CC734284FC_3_OFFSET UNITYSDK_OFFSET(0x15411A20)
#define CLASS_1_C37C00DA564601E2_METHOD_1_FB5550CC734284FC_4_OFFSET UNITYSDK_OFFSET(0x15411AF0)
#define CLASS_1_C37C00DA564601E2_METHOD_1_FB5550CC734284FC_5_OFFSET UNITYSDK_OFFSET(0x15411B70)
#define CLASS_1_C37C00DA564601E2_METHOD_1_FB5550CC734284FC_6_OFFSET UNITYSDK_OFFSET(0x15411BB0)
#define CLASS_1_C37C00DA564601E2_METHOD_1_FB5550CC734284FC_7_OFFSET UNITYSDK_OFFSET(0x15411C30)
#define CLASS_1_C37C00DA564601E2_METHOD_1_FB5550CC734284FC_OFFSET UNITYSDK_OFFSET(0x154118D0)
#define CLASS_1_C37C00DA564601E2__CTOR_OFFSET UNITYSDK_OFFSET(0x15411DA0)

inline static constexpr unsigned int Class_1_C37C00DA564601E2_TypeDefinitionIndex = 78669;

class Class_1_C37C00DA564601E2 : public ::System::Object
{
public:
	// static const ::System::String* BLNNICFOLNL; // 0x0
	// static const ::System::String* HBFCDLELJEF; // 0x0
	::R3::ReactiveProperty_1<::System::Boolean>* DOKCPKDAOND; // 0x10
	::R3::ReactiveProperty_1<::System::String*>* ABDMOBMHIDM; // 0x18
	::R3::ReactiveProperty_1<::System::Boolean>* AECJCEAHEKE; // 0x20
	::R3::ReactiveProperty_1<::System::Boolean>* BGMHOCCCLGC; // 0x28
	::R3::ReactiveProperty_1<::System::Boolean>* PGNIIDNPONO; // 0x30
	::R3::ReactiveProperty_1<::System::Boolean>* HPHFFGJOJGP; // 0x38
	::R3::ReactiveProperty_1<::System::String*>* PIJCLNJOCKI; // 0x40
	::R3::ReactiveProperty_1<::System::String*>* GKELCEIPBPB; // 0x48
	::R3::ReactiveProperty_1<::RPG::GameCore::ItemRecycleShowType>* ANAEBPBLANB; // 0x50
	::Class_1_90889A2023AB884E_7* IGHAHBNLIJA; // 0x58
	::R3::ReactiveProperty_1<::System::Boolean>* FDCLMBHACKK; // 0x60
	::R3::ReactiveProperty_1<::System::String*>* FADILKPGCEM; // 0x68
	::R3::ReactiveProperty_1<::System::String*>* ECCKOOLLLPD; // 0x70
	::R3::ReactiveProperty_1<::System::Boolean>* OFPMEIGOKIM; // 0x78
	::R3::ReactiveProperty_1<::System::Boolean>* FENGMGECKJK; // 0x80
	::RPG::Client::ItemDisplayData* DFFADPOICGE; // 0x88
	::Class_0_16E4307DCC419505_318* _ClickCommand_k__BackingField; // 0x90
	::R3::ReactiveProperty_1<::System::String*>* GAFFDOFDLMC; // 0x98
	::R3::ReactiveProperty_1<::System::String*>* DFCELAPKGIB; // 0xA0
	::R3::ReactiveProperty_1<::System::String*>* GIDAEFPOGHI; // 0xA8
	::R3::ReactiveProperty_1<::RPG::Client::RewardItem::RewardItemMarkFlags>* POGKIAPKJLH; // 0xB0
	::System::Boolean KCFKLMOGNEL; // 0xB8
	::System::UInt32 GGMHFPEHBOK; // 0xBC

	::System::Void _ctor(::System::Boolean a1, ::Class_1_90889A2023AB884E_7* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::Class_1_90889A2023AB884E_7*))((::PBYTE)hIl2Cpp + CLASS_1_C37C00DA564601E2__CTOR_OFFSET))(this, a1, a2);
	}

	::R3::Observable_1<::Class_1_90889A2023AB884E_7*>* Method_1_E849EE462C26CBA3()
	{
		return ((::R3::Observable_1<::Class_1_90889A2023AB884E_7*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C37C00DA564601E2_METHOD_1_E849EE462C26CBA3_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_318* get_ClickCommand()
	{
		return ((::Class_0_16E4307DCC419505_318*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C37C00DA564601E2_GET_CLICKCOMMAND_OFFSET))(this);
	}

	::R3::Observable_1<::System::Boolean>* Method_1_FB5550CC734284FC()
	{
		return ((::R3::Observable_1<::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C37C00DA564601E2_METHOD_1_FB5550CC734284FC_OFFSET))(this);
	}

	::R3::Observable_1<::System::Boolean>* Method_1_FB5550CC734284FC_1()
	{
		return ((::R3::Observable_1<::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C37C00DA564601E2_METHOD_1_FB5550CC734284FC_1_OFFSET))(this);
	}

	::R3::Observable_1<::System::String*>* Method_1_59C71AB384B1430D()
	{
		return ((::R3::Observable_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C37C00DA564601E2_METHOD_1_59C71AB384B1430D_OFFSET))(this);
	}

	::R3::Observable_1<::System::Boolean>* Method_1_FB5550CC734284FC_2()
	{
		return ((::R3::Observable_1<::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C37C00DA564601E2_METHOD_1_FB5550CC734284FC_2_OFFSET))(this);
	}

	::R3::Observable_1<::System::String*>* Method_1_59C71AB384B1430D_1()
	{
		return ((::R3::Observable_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C37C00DA564601E2_METHOD_1_59C71AB384B1430D_1_OFFSET))(this);
	}

	::R3::Observable_1<::System::Boolean>* Method_1_FB5550CC734284FC_3()
	{
		return ((::R3::Observable_1<::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C37C00DA564601E2_METHOD_1_FB5550CC734284FC_3_OFFSET))(this);
	}

	::R3::Observable_1<::System::String*>* Method_1_59C71AB384B1430D_2()
	{
		return ((::R3::Observable_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C37C00DA564601E2_METHOD_1_59C71AB384B1430D_2_OFFSET))(this);
	}

	::R3::Observable_1<::System::String*>* Method_1_59C71AB384B1430D_3()
	{
		return ((::R3::Observable_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C37C00DA564601E2_METHOD_1_59C71AB384B1430D_3_OFFSET))(this);
	}

	::R3::Observable_1<::System::Boolean>* Method_1_FB5550CC734284FC_4()
	{
		return ((::R3::Observable_1<::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C37C00DA564601E2_METHOD_1_FB5550CC734284FC_4_OFFSET))(this);
	}

	::R3::Observable_1<::System::String*>* Method_1_59C71AB384B1430D_4()
	{
		return ((::R3::Observable_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C37C00DA564601E2_METHOD_1_59C71AB384B1430D_4_OFFSET))(this);
	}

	::R3::Observable_1<::System::Boolean>* Method_1_FB5550CC734284FC_5()
	{
		return ((::R3::Observable_1<::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C37C00DA564601E2_METHOD_1_FB5550CC734284FC_5_OFFSET))(this);
	}

	::R3::Observable_1<::System::Boolean>* Method_1_FB5550CC734284FC_6()
	{
		return ((::R3::Observable_1<::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C37C00DA564601E2_METHOD_1_FB5550CC734284FC_6_OFFSET))(this);
	}

	::R3::Observable_1<::System::String*>* Method_1_59C71AB384B1430D_5()
	{
		return ((::R3::Observable_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C37C00DA564601E2_METHOD_1_59C71AB384B1430D_5_OFFSET))(this);
	}

	::R3::Observable_1<::System::Boolean>* Method_1_FB5550CC734284FC_7()
	{
		return ((::R3::Observable_1<::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C37C00DA564601E2_METHOD_1_FB5550CC734284FC_7_OFFSET))(this);
	}

	::R3::Observable_1<::System::String*>* Method_1_59C71AB384B1430D_6()
	{
		return ((::R3::Observable_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C37C00DA564601E2_METHOD_1_59C71AB384B1430D_6_OFFSET))(this);
	}

	::R3::Observable_1<::RPG::Client::RewardItem::RewardItemMarkFlags>* Method_1_B1A83F23310F336A()
	{
		return ((::R3::Observable_1<::RPG::Client::RewardItem::RewardItemMarkFlags>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C37C00DA564601E2_METHOD_1_B1A83F23310F336A_OFFSET))(this);
	}

	::R3::Observable_1<::RPG::GameCore::ItemRecycleShowType>* Method_1_6DA77FDACBF3863F()
	{
		return ((::R3::Observable_1<::RPG::GameCore::ItemRecycleShowType>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C37C00DA564601E2_METHOD_1_6DA77FDACBF3863F_OFFSET))(this);
	}

	::R3::Observable_1<::System::String*>* Method_1_59C71AB384B1430D_7()
	{
		return ((::R3::Observable_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C37C00DA564601E2_METHOD_1_59C71AB384B1430D_7_OFFSET))(this);
	}

	::System::Void Method_1_92508C0236349FD2(::System::UInt32 a1, ::RPG::Client::ItemDisplayData* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::Client::ItemDisplayData*))((::PBYTE)hIl2Cpp + CLASS_1_C37C00DA564601E2_METHOD_1_92508C0236349FD2_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_653D5DB2D5C019FD(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_C37C00DA564601E2_METHOD_1_653D5DB2D5C019FD_OFFSET))(this, a1);
	}

	::System::Void Method_1_653D5DB2D5C019FD_1(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_C37C00DA564601E2_METHOD_1_653D5DB2D5C019FD_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_9BE4B87CA60A0CB8(::RPG::GameCore::ItemRarity a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ItemRarity))((::PBYTE)hIl2Cpp + CLASS_1_C37C00DA564601E2_METHOD_1_9BE4B87CA60A0CB8_OFFSET))(this, a1);
	}

	::System::Void Method_1_D7E4C54DA3DD2FE9(::RPG::GameCore::ItemRarity a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ItemRarity))((::PBYTE)hIl2Cpp + CLASS_1_C37C00DA564601E2_METHOD_1_D7E4C54DA3DD2FE9_OFFSET))(this, a1);
	}

	::System::Void Method_1_8B328B669368F123(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_C37C00DA564601E2_METHOD_1_8B328B669368F123_OFFSET))(this, a1);
	}

	::System::Void Method_1_6423291ED13007B8(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_C37C00DA564601E2_METHOD_1_6423291ED13007B8_OFFSET))(this, a1);
	}

	::System::Void Method_1_B604E655BA2592AD(::System::String* a1, ::System::String* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_C37C00DA564601E2_METHOD_1_B604E655BA2592AD_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_A31A9321FF66DBDB(::System::String* a1, ::System::String* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_C37C00DA564601E2_METHOD_1_A31A9321FF66DBDB_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_A1E1A3DF68C7BFD3(::System::Boolean a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_C37C00DA564601E2_METHOD_1_A1E1A3DF68C7BFD3_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_6423291ED13007B8_1(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_C37C00DA564601E2_METHOD_1_6423291ED13007B8_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_6423291ED13007B8_2(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_C37C00DA564601E2_METHOD_1_6423291ED13007B8_2_OFFSET))(this, a1);
	}

	::System::Void Method_1_5C4BEEBCBDE3CF1A(::RPG::Client::RewardItem::RewardItemMarkFlags a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::RewardItem::RewardItemMarkFlags))((::PBYTE)hIl2Cpp + CLASS_1_C37C00DA564601E2_METHOD_1_5C4BEEBCBDE3CF1A_OFFSET))(this, a1);
	}

	::System::Void Method_1_CE389F49E4D441AB(::RPG::GameCore::ItemRecycleShowType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ItemRecycleShowType))((::PBYTE)hIl2Cpp + CLASS_1_C37C00DA564601E2_METHOD_1_CE389F49E4D441AB_OFFSET))(this, a1);
	}

	::System::Void Method_1_D68E1CAE64731ECE(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_C37C00DA564601E2_METHOD_1_D68E1CAE64731ECE_OFFSET))(this, a1);
	}

	static ::System::String* Method_1_41CAA728C2361718(::System::String* a1, ::System::String* a2, ::System::Boolean a3)
	{
		return ((::System::String*(*)(::System::String*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_C37C00DA564601E2_METHOD_1_41CAA728C2361718_OFFSET))(a1, a2, a3);
	}

	::System::Void Method_1_DFD8FD4BA7D3ACA8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C37C00DA564601E2_METHOD_1_DFD8FD4BA7D3ACA8_OFFSET))(this);
	}
};
