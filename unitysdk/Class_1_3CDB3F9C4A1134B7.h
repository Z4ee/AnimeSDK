#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BitFlag_1.h"
#include "unitysdk/RPG/Client/TABehaviorTickMode.h"
#include "unitysdk/RPG/Client/TickListType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_1063;
class Class_0_16E4307DCC419505_1064;
class Class_1_38A2F0A5FF65A448;
class Class_1_8F949AB60F8EDF2A;
class Class_1_C5AD4785D6103ABB;
class Class_1_D70A30D666F20D90;
class Class_2_16D3F743BDA74181;
namespace RPG::Client { class TABehaviorBase; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_3CDB3F9C4A1134B7_DISPOSE_OFFSET UNITYSDK_OFFSET(0xCF93E50)
#define CLASS_1_3CDB3F9C4A1134B7_METHOD_1_02A15A4CE163D404_OFFSET UNITYSDK_OFFSET(0xCF92050)
#define CLASS_1_3CDB3F9C4A1134B7_METHOD_1_02B82BCB361D323F_OFFSET UNITYSDK_OFFSET(0xCF92220)
#define CLASS_1_3CDB3F9C4A1134B7_METHOD_1_0A4FFA9DB2994FB6_OFFSET UNITYSDK_OFFSET(0xCF94710)
#define CLASS_1_3CDB3F9C4A1134B7_METHOD_1_0CA9C5F712F7B0FC_OFFSET UNITYSDK_OFFSET(0xCF91260)
#define CLASS_1_3CDB3F9C4A1134B7_METHOD_1_36A43EE474699637_OFFSET UNITYSDK_OFFSET(0xCF93C90)
#define CLASS_1_3CDB3F9C4A1134B7_METHOD_1_38965D1693F193C4_OFFSET UNITYSDK_OFFSET(0xCF91620)
#define CLASS_1_3CDB3F9C4A1134B7_METHOD_1_3BCC4B89109F9873_OFFSET UNITYSDK_OFFSET(0xCF91780)
#define CLASS_1_3CDB3F9C4A1134B7_METHOD_1_42B512C32D79A847_OFFSET UNITYSDK_OFFSET(0xCF90420)
#define CLASS_1_3CDB3F9C4A1134B7_METHOD_1_4BE52DADC97434AA_OFFSET UNITYSDK_OFFSET(0xCF913C0)
#define CLASS_1_3CDB3F9C4A1134B7_METHOD_1_5012DEB7320C101A_OFFSET UNITYSDK_OFFSET(0xCF905E0)
#define CLASS_1_3CDB3F9C4A1134B7_METHOD_1_53F8E7A039DF377D_OFFSET UNITYSDK_OFFSET(0xCF90090)
#define CLASS_1_3CDB3F9C4A1134B7_METHOD_1_59C45CD2407139C5_OFFSET UNITYSDK_OFFSET(0xCF907B0)
#define CLASS_1_3CDB3F9C4A1134B7_METHOD_1_6161A7BAB784EB4F_OFFSET UNITYSDK_OFFSET(0xCF93980)
#define CLASS_1_3CDB3F9C4A1134B7_METHOD_1_6DB903DFC9E782DB_OFFSET UNITYSDK_OFFSET(0xCF93070)
#define CLASS_1_3CDB3F9C4A1134B7_METHOD_1_70437D85C11C5222_OFFSET UNITYSDK_OFFSET(0xCF90360)
#define CLASS_1_3CDB3F9C4A1134B7_METHOD_1_77044EC8B928BA79_OFFSET UNITYSDK_OFFSET(0xCF92F10)
#define CLASS_1_3CDB3F9C4A1134B7_METHOD_1_7884F89C68949BD8_OFFSET UNITYSDK_OFFSET(0xCF93B60)
#define CLASS_1_3CDB3F9C4A1134B7_METHOD_1_841D90BDB3E94FF6_OFFSET UNITYSDK_OFFSET(0xCF935E0)
#define CLASS_1_3CDB3F9C4A1134B7_METHOD_1_8CBE5FFA05BA679F_OFFSET UNITYSDK_OFFSET(0xCF91E80)
#define CLASS_1_3CDB3F9C4A1134B7_METHOD_1_97A202EF9EC5BB60_OFFSET UNITYSDK_OFFSET(0xCF91560)
#define CLASS_1_3CDB3F9C4A1134B7_METHOD_1_A94BAB85685275CB_OFFSET UNITYSDK_OFFSET(0xCF92CD0)
#define CLASS_1_3CDB3F9C4A1134B7_METHOD_1_A9775C21D578B865_OFFSET UNITYSDK_OFFSET(0xCF93550)
#define CLASS_1_3CDB3F9C4A1134B7_METHOD_1_AA7E3074254D484A_OFFSET UNITYSDK_OFFSET(0xCF943D0)
#define CLASS_1_3CDB3F9C4A1134B7_METHOD_1_B235E757922104A8_OFFSET UNITYSDK_OFFSET(0xCF8FB00)
#define CLASS_1_3CDB3F9C4A1134B7_METHOD_1_BCBE87295FBA3BA2_OFFSET UNITYSDK_OFFSET(0xCF91F60)
#define CLASS_1_3CDB3F9C4A1134B7_METHOD_1_BD357EF9E725C78E_OFFSET UNITYSDK_OFFSET(0xCF91DB0)
#define CLASS_1_3CDB3F9C4A1134B7_METHOD_1_C20386CBEAF831F1_OFFSET UNITYSDK_OFFSET(0xCF8FE20)
#define CLASS_1_3CDB3F9C4A1134B7_METHOD_1_CC01F3DE1BDF821E_OFFSET UNITYSDK_OFFSET(0xCF933E0)
#define CLASS_1_3CDB3F9C4A1134B7_METHOD_1_D155D4917B3D2C6A_OFFSET UNITYSDK_OFFSET(0xCF94EB0)
#define CLASS_1_3CDB3F9C4A1134B7_METHOD_1_D9194CE1BB06AEE4_1_OFFSET UNITYSDK_OFFSET(0xCF91110)
#define CLASS_1_3CDB3F9C4A1134B7_METHOD_1_D9194CE1BB06AEE4_OFFSET UNITYSDK_OFFSET(0xCF90670)
#define CLASS_1_3CDB3F9C4A1134B7_METHOD_1_F8CE21D50466542B_OFFSET UNITYSDK_OFFSET(0xCF92E60)
#define CLASS_1_3CDB3F9C4A1134B7_METHOD_1_FC43509A58CE148E_OFFSET UNITYSDK_OFFSET(0xCF92580)
#define CLASS_1_3CDB3F9C4A1134B7_METHOD_1_FE9DE604D6726913_OFFSET UNITYSDK_OFFSET(0xCF938A0)
#define CLASS_1_3CDB3F9C4A1134B7__CTOR_OFFSET UNITYSDK_OFFSET(0xCF8F830)

inline static constexpr unsigned int Class_1_3CDB3F9C4A1134B7_TypeDefinitionIndex = 70116;

class Class_1_3CDB3F9C4A1134B7 : public ::System::Object
{
public:
	// static const ::System::Int32 DJGDBJNCCAM = 0x5; // 0x0
	::Class_2_16D3F743BDA74181* JGOJMLEJILE; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_D70A30D666F20D90*>* NDAKONPAFBL; // 0x18
	::Il2CppArray<::System::Int32>* MHKIIMKJJLH; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_38A2F0A5FF65A448*>* DMCMKDIGKOK; // 0x28
	::Class_1_C5AD4785D6103ABB* NEOGKKGHEAD; // 0x30
	::Il2CppArray<::System::Collections::Generic::List_1<::System::Int32>*>* NALGMLIMPPF; // 0x38
	::Il2CppArray<::System::Int32>* FFDJBEPLLOC; // 0x40
	::System::Collections::Generic::List_1<::Class_1_8F949AB60F8EDF2A*>* FBJKEKGEFOI; // 0x48
	::Il2CppArray<::System::Int32>* ACKDKJJNLFP; // 0x50
	::Il2CppArray<::System::Int32>* IGMFMNDHBHL; // 0x58
	::Il2CppArray<::System::Int32>* CLDCACDJIDP; // 0x60
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::RPG::Client::BitFlag_1<::RPG::Client::TickListType>>* ELLOCACFJML; // 0x68
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_8F949AB60F8EDF2A*>* BOKIEABDFCL; // 0x70

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3CDB3F9C4A1134B7__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_B235E757922104A8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3CDB3F9C4A1134B7_METHOD_1_B235E757922104A8_OFFSET))(this);
	}

	::System::Void Method_1_C20386CBEAF831F1(::Class_1_D70A30D666F20D90* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D70A30D666F20D90*))((::PBYTE)hIl2Cpp + CLASS_1_3CDB3F9C4A1134B7_METHOD_1_C20386CBEAF831F1_OFFSET))(this, a1);
	}

	::System::Void Method_1_53F8E7A039DF377D(::Class_1_D70A30D666F20D90* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D70A30D666F20D90*))((::PBYTE)hIl2Cpp + CLASS_1_3CDB3F9C4A1134B7_METHOD_1_53F8E7A039DF377D_OFFSET))(this, a1);
	}

	::Class_1_38A2F0A5FF65A448* Method_1_42B512C32D79A847(::System::Int32 a1)
	{
		return ((::Class_1_38A2F0A5FF65A448*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_3CDB3F9C4A1134B7_METHOD_1_42B512C32D79A847_OFFSET))(this, a1);
	}

	::Class_1_D70A30D666F20D90* Method_1_5012DEB7320C101A(::System::Int32 a1)
	{
		return ((::Class_1_D70A30D666F20D90*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_3CDB3F9C4A1134B7_METHOD_1_5012DEB7320C101A_OFFSET))(this, a1);
	}

	::System::Void Method_1_D9194CE1BB06AEE4(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_3CDB3F9C4A1134B7_METHOD_1_D9194CE1BB06AEE4_OFFSET))(this, a1);
	}

	::System::Void Method_1_D9194CE1BB06AEE4_1(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_3CDB3F9C4A1134B7_METHOD_1_D9194CE1BB06AEE4_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_0CA9C5F712F7B0FC(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_3CDB3F9C4A1134B7_METHOD_1_0CA9C5F712F7B0FC_OFFSET))(this, a1);
	}

	::System::Void Method_1_59C45CD2407139C5(::Class_1_38A2F0A5FF65A448* a1, ::System::Single a2, ::RPG::Client::TickListType a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_38A2F0A5FF65A448*, ::System::Single, ::RPG::Client::TickListType))((::PBYTE)hIl2Cpp + CLASS_1_3CDB3F9C4A1134B7_METHOD_1_59C45CD2407139C5_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_4BE52DADC97434AA(::RPG::Client::TABehaviorBase* a1, ::System::Single a2, ::RPG::Client::TickListType a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::TABehaviorBase*, ::System::Single, ::RPG::Client::TickListType))((::PBYTE)hIl2Cpp + CLASS_1_3CDB3F9C4A1134B7_METHOD_1_4BE52DADC97434AA_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_97A202EF9EC5BB60(::System::Int32 a1, ::RPG::Client::TickListType a2, ::Class_0_16E4307DCC419505_1063* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::RPG::Client::TickListType, ::Class_0_16E4307DCC419505_1063*))((::PBYTE)hIl2Cpp + CLASS_1_3CDB3F9C4A1134B7_METHOD_1_97A202EF9EC5BB60_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_8CBE5FFA05BA679F(::System::Int32 a1, ::RPG::Client::TickListType a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::RPG::Client::TickListType))((::PBYTE)hIl2Cpp + CLASS_1_3CDB3F9C4A1134B7_METHOD_1_8CBE5FFA05BA679F_OFFSET))(this, a1, a2);
	}

	::Class_1_8F949AB60F8EDF2A* Method_1_3BCC4B89109F9873(::System::Int32 a1, ::Class_0_16E4307DCC419505_1063* a2)
	{
		return ((::Class_1_8F949AB60F8EDF2A*(*)(::PVOID, ::System::Int32, ::Class_0_16E4307DCC419505_1063*))((::PBYTE)hIl2Cpp + CLASS_1_3CDB3F9C4A1134B7_METHOD_1_3BCC4B89109F9873_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_1_BCBE87295FBA3BA2()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3CDB3F9C4A1134B7_METHOD_1_BCBE87295FBA3BA2_OFFSET))(this);
	}

	::Class_1_8F949AB60F8EDF2A* Method_1_FC43509A58CE148E(::Class_1_D70A30D666F20D90* a1, ::Class_0_16E4307DCC419505_1063* a2, ::Class_0_16E4307DCC419505_1064* a3, ::System::Single a4)
	{
		return ((::Class_1_8F949AB60F8EDF2A*(*)(::PVOID, ::Class_1_D70A30D666F20D90*, ::Class_0_16E4307DCC419505_1063*, ::Class_0_16E4307DCC419505_1064*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_3CDB3F9C4A1134B7_METHOD_1_FC43509A58CE148E_OFFSET))(this, a1, a2, a3, a4);
	}

	::Class_1_8F949AB60F8EDF2A* Method_1_02B82BCB361D323F(::System::Int32 a1, ::System::Int32 a2, ::RPG::Client::TABehaviorTickMode a3, ::System::String* a4, ::UnityEngine::Vector3 a5, ::System::Single a6)
	{
		return ((::Class_1_8F949AB60F8EDF2A*(*)(::PVOID, ::System::Int32, ::System::Int32, ::RPG::Client::TABehaviorTickMode, ::System::String*, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_3CDB3F9C4A1134B7_METHOD_1_02B82BCB361D323F_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Boolean Method_1_77044EC8B928BA79(::Class_1_8F949AB60F8EDF2A* a1, ::System::String* a2, ::System::Single a3, ::UnityEngine::Vector3 a4)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_8F949AB60F8EDF2A*, ::System::String*, ::System::Single, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_3CDB3F9C4A1134B7_METHOD_1_77044EC8B928BA79_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Boolean Method_1_F8CE21D50466542B(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_3CDB3F9C4A1134B7_METHOD_1_F8CE21D50466542B_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_6DB903DFC9E782DB(::Class_1_8F949AB60F8EDF2A* a1, ::System::String* a2, ::UnityEngine::Vector3 a3, ::System::Single a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_8F949AB60F8EDF2A*, ::System::String*, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_3CDB3F9C4A1134B7_METHOD_1_6DB903DFC9E782DB_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Single Method_1_02A15A4CE163D404(::System::Single a1, ::UnityEngine::Bounds a2)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single, ::UnityEngine::Bounds))((::PBYTE)hIl2Cpp + CLASS_1_3CDB3F9C4A1134B7_METHOD_1_02A15A4CE163D404_OFFSET))(this, a1, a2);
	}

	::System::Single Method_1_FE9DE604D6726913(::UnityEngine::Bounds a1)
	{
		return ((::System::Single(*)(::PVOID, ::UnityEngine::Bounds))((::PBYTE)hIl2Cpp + CLASS_1_3CDB3F9C4A1134B7_METHOD_1_FE9DE604D6726913_OFFSET))(this, a1);
	}

	::Class_1_8F949AB60F8EDF2A* Method_1_CC01F3DE1BDF821E(::System::Int32 a1, ::System::Int32 a2, ::RPG::Client::TABehaviorTickMode a3)
	{
		return ((::Class_1_8F949AB60F8EDF2A*(*)(::PVOID, ::System::Int32, ::System::Int32, ::RPG::Client::TABehaviorTickMode))((::PBYTE)hIl2Cpp + CLASS_1_3CDB3F9C4A1134B7_METHOD_1_CC01F3DE1BDF821E_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_841D90BDB3E94FF6(::Class_1_8F949AB60F8EDF2A* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_8F949AB60F8EDF2A*))((::PBYTE)hIl2Cpp + CLASS_1_3CDB3F9C4A1134B7_METHOD_1_841D90BDB3E94FF6_OFFSET))(this, a1);
	}

	::System::Void Method_1_A94BAB85685275CB(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_3CDB3F9C4A1134B7_METHOD_1_A94BAB85685275CB_OFFSET))(this, a1);
	}

	::System::Void Method_1_70437D85C11C5222(::Class_1_8F949AB60F8EDF2A* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_8F949AB60F8EDF2A*))((::PBYTE)hIl2Cpp + CLASS_1_3CDB3F9C4A1134B7_METHOD_1_70437D85C11C5222_OFFSET))(this, a1);
	}

	::System::Void Method_1_6161A7BAB784EB4F(::Class_1_8F949AB60F8EDF2A* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_8F949AB60F8EDF2A*))((::PBYTE)hIl2Cpp + CLASS_1_3CDB3F9C4A1134B7_METHOD_1_6161A7BAB784EB4F_OFFSET))(this, a1);
	}

	::System::Void Method_1_36A43EE474699637()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3CDB3F9C4A1134B7_METHOD_1_36A43EE474699637_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3CDB3F9C4A1134B7_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_AA7E3074254D484A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3CDB3F9C4A1134B7_METHOD_1_AA7E3074254D484A_OFFSET))(this);
	}

	::System::Void Method_1_0A4FFA9DB2994FB6(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_3CDB3F9C4A1134B7_METHOD_1_0A4FFA9DB2994FB6_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_D155D4917B3D2C6A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3CDB3F9C4A1134B7_METHOD_1_D155D4917B3D2C6A_OFFSET))(this);
	}

	::System::Boolean Method_1_BD357EF9E725C78E(::System::Int32 a1, ::RPG::Client::TickListType a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::RPG::Client::TickListType))((::PBYTE)hIl2Cpp + CLASS_1_3CDB3F9C4A1134B7_METHOD_1_BD357EF9E725C78E_OFFSET))(this, a1, a2);
	}

	::RPG::Client::BitFlag_1<::RPG::Client::TickListType> Method_1_A9775C21D578B865(::System::Int32 a1)
	{
		return ((::RPG::Client::BitFlag_1<::RPG::Client::TickListType>(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_3CDB3F9C4A1134B7_METHOD_1_A9775C21D578B865_OFFSET))(this, a1);
	}

	::System::Void Method_1_38965D1693F193C4(::System::Int32 a1, ::RPG::Client::TickListType a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::RPG::Client::TickListType, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_3CDB3F9C4A1134B7_METHOD_1_38965D1693F193C4_OFFSET))(this, a1, a2, a3);
	}

	static ::System::Void Method_1_7884F89C68949BD8(::System::Collections::Generic::List_1<::System::Int32>* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::System::Collections::Generic::List_1<::System::Int32>*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_3CDB3F9C4A1134B7_METHOD_1_7884F89C68949BD8_OFFSET))(a1, a2);
	}
};
