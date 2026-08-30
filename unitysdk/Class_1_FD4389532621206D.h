#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_49AB19924B4FCC28;
class Class_1_A0E178FC9445316D;
class Class_1_F08A242BEA9D3BCB;
class Class_1_FD4389532621206D_Class_1_719CE65A0484D0E7;
namespace RPG::GameCore { class ConfigGetOffTrain; }
namespace RPG::GameCore { class LevelPedestrianFlowInfo; }
namespace RPG::GameCore { class LevelPedestrianInfo; }
namespace RPG::GameCore { class LevelPedestrianLineUpPointInfo; }
namespace RPG::GameCore { class NpcWalkStyleWeightInfo; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_FD4389532621206D_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x16B74990)
#define CLASS_1_FD4389532621206D_METHOD_1_09B8F368BEF6ADA5_OFFSET UNITYSDK_OFFSET(0x16B78370)
#define CLASS_1_FD4389532621206D_METHOD_1_13E97A3FA546E8BC_OFFSET UNITYSDK_OFFSET(0x16B77810)
#define CLASS_1_FD4389532621206D_METHOD_1_198EA9276B321A52_OFFSET UNITYSDK_OFFSET(0x16B76820)
#define CLASS_1_FD4389532621206D_METHOD_1_1ED53B09AFE91718_OFFSET UNITYSDK_OFFSET(0x16B77F70)
#define CLASS_1_FD4389532621206D_METHOD_1_226558B48AF9A6C1_OFFSET UNITYSDK_OFFSET(0x16B76780)
#define CLASS_1_FD4389532621206D_METHOD_1_31A4AB32A702B4E9_OFFSET UNITYSDK_OFFSET(0x16B76D80)
#define CLASS_1_FD4389532621206D_METHOD_1_3BCF0226A6CDC13B_OFFSET UNITYSDK_OFFSET(0x16B74CF0)
#define CLASS_1_FD4389532621206D_METHOD_1_4307B2A4B4A12C1A_OFFSET UNITYSDK_OFFSET(0x16B76290)
#define CLASS_1_FD4389532621206D_METHOD_1_66CC9828DB1F478F_OFFSET UNITYSDK_OFFSET(0x16B75720)
#define CLASS_1_FD4389532621206D_METHOD_1_6C45DFFB47F952B7_OFFSET UNITYSDK_OFFSET(0x16B754C0)
#define CLASS_1_FD4389532621206D_METHOD_1_6C66352BB475DD12_OFFSET UNITYSDK_OFFSET(0x16B77470)
#define CLASS_1_FD4389532621206D_METHOD_1_6E10DBA521A04356_OFFSET UNITYSDK_OFFSET(0x16B75340)
#define CLASS_1_FD4389532621206D_METHOD_1_84B92802FDAFF6C8_OFFSET UNITYSDK_OFFSET(0x16B75FE0)
#define CLASS_1_FD4389532621206D_METHOD_1_9A9557DB574514FF_OFFSET UNITYSDK_OFFSET(0x16B749A0)
#define CLASS_1_FD4389532621206D_METHOD_1_A620EF59D0C51DCA_OFFSET UNITYSDK_OFFSET(0x16B775F0)
#define CLASS_1_FD4389532621206D_METHOD_1_A9F6594EA869CA9D_OFFSET UNITYSDK_OFFSET(0x16B77A40)
#define CLASS_1_FD4389532621206D_METHOD_1_AF2CFBAAD2629B3B_OFFSET UNITYSDK_OFFSET(0x16B76190)
#define CLASS_1_FD4389532621206D_METHOD_1_C3697B3FFADF66DE_OFFSET UNITYSDK_OFFSET(0x16B78220)
#define CLASS_1_FD4389532621206D_METHOD_1_C836268BEBB9DBE1_OFFSET UNITYSDK_OFFSET(0x16B765E0)
#define CLASS_1_FD4389532621206D_METHOD_1_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x16B76250)
#define CLASS_1_FD4389532621206D_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x16B78620)
#define CLASS_1_FD4389532621206D_METHOD_1_CBE8D2C3CB91C620_OFFSET UNITYSDK_OFFSET(0x16B77210)
#define CLASS_1_FD4389532621206D_METHOD_1_D64D578E7D225532_OFFSET UNITYSDK_OFFSET(0x16B779B0)
#define CLASS_1_FD4389532621206D_METHOD_1_E1CE0A1C7957700D_1_OFFSET UNITYSDK_OFFSET(0x16B764F0)
#define CLASS_1_FD4389532621206D_METHOD_1_E1CE0A1C7957700D_OFFSET UNITYSDK_OFFSET(0x16B763F0)
#define CLASS_1_FD4389532621206D_METHOD_1_F0C3B798E2EE87DB_OFFSET UNITYSDK_OFFSET(0x16B77B80)
#define CLASS_1_FD4389532621206D_METHOD_1_F37CDBD6D46274D2_OFFSET UNITYSDK_OFFSET(0x16B78690)
#define CLASS_1_FD4389532621206D__CCTOR_OFFSET UNITYSDK_OFFSET(0x16B78770)
#define CLASS_1_FD4389532621206D__CTOR_OFFSET UNITYSDK_OFFSET(0x16B749C0)

inline static constexpr unsigned int Class_1_FD4389532621206D_TypeDefinitionIndex = 69188;

class Class_1_FD4389532621206D : public ::System::Object
{
public:
	static ::System::Int32* StaticGet_DIBAGJDGCCN()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_FD4389532621206D_TypeDefinitionIndex)->GetStaticField(0xF780);
	}
	static ::System::Single* StaticGet_FPGFNLNJHED()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_1_FD4389532621206D_TypeDefinitionIndex)->GetStaticField(0xF784);
	}
	// static const ::System::Single HIKEFDNFNMP; // 0x0
	// static const ::System::Single OCCLIPOAILA; // 0x0
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::RPG::GameCore::LevelPedestrianLineUpPointInfo*>* IEOBLNPGKLE; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_F08A242BEA9D3BCB*>* BLFMCPJPLGK; // 0x18
	::Il2CppArray<::UnityEngine::Vector3>* BCIIENNJPGB; // 0x20
	::System::Collections::Generic::List_1<::Class_1_F08A242BEA9D3BCB*>* HMFAHECCONK; // 0x28
	::Il2CppArray<::System::Single>* KMFLEPKOIPP; // 0x30
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_FD4389532621206D_Class_1_719CE65A0484D0E7*>* FFDIIHGCGDG; // 0x38
	::System::Collections::Generic::List_1<::Class_1_A0E178FC9445316D*>* LONEFFPMKHA; // 0x40
	::RPG::GameCore::ConfigGetOffTrain* JKELLOECBAI; // 0x48
	::Il2CppArray<::System::Single>* CCLMLBIPKOF; // 0x50
	::RPG::GameCore::LevelPedestrianInfo* MKCCPADBDGM; // 0x58
	::System::Int32 LOJMFKADCLM; // 0x60
	::System::Single CDCKJBJKOPD; // 0x64
	::System::Int32 PNILLJBIBFO; // 0x68
	::System::Single GCNGAKIKCNM; // 0x6C
	::System::Single LJGHMDIJKGI; // 0x70
	::System::Boolean MGOAHLPJCOA; // 0x74
	::System::UInt32 MJPPOIHKCCB; // 0x78
	::System::Int32 IFDHALOKAFO; // 0x7C
	::System::Int32 NELLACOGDBM; // 0x80
	::System::Single CIOGANKFPNK; // 0x84
	::System::Single HGBNOKOANKF; // 0x88
	::System::Single NDNFBONCEDC; // 0x8C
	::System::Int32 EIFFDBJADGB; // 0x90
	::System::Single HPDDPEGFBBP; // 0x94
	::System::Boolean JONFGPAKEHF; // 0x98
	::System::Boolean POMIECMCHID; // 0x99
	::System::Boolean DMPDAMDINJE; // 0x9A
	::System::Boolean PCJPBCKGCAL; // 0x9B

	::System::Void _ctor(::System::UInt32 a1, ::RPG::GameCore::LevelPedestrianInfo* a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::LevelPedestrianInfo*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_FD4389532621206D__CTOR_OFFSET))(this, a1, a2, a3);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_FD4389532621206D__CCTOR_OFFSET))();
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FD4389532621206D_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::Il2CppArray<::RPG::GameCore::NpcWalkStyleWeightInfo*>* Method_1_9A9557DB574514FF()
	{
		return ((::Il2CppArray<::RPG::GameCore::NpcWalkStyleWeightInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FD4389532621206D_METHOD_1_9A9557DB574514FF_OFFSET))(this);
	}

	::System::Void Method_1_84B92802FDAFF6C8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FD4389532621206D_METHOD_1_84B92802FDAFF6C8_OFFSET))(this);
	}

	::System::Void Method_1_AF2CFBAAD2629B3B(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_FD4389532621206D_METHOD_1_AF2CFBAAD2629B3B_OFFSET))(this, a1);
	}

	::System::Void Method_1_226558B48AF9A6C1(::System::Single a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_FD4389532621206D_METHOD_1_226558B48AF9A6C1_OFFSET))(this, a1, a2);
	}

	::Class_1_49AB19924B4FCC28* Method_1_198EA9276B321A52(::System::Boolean a1)
	{
		return ((::Class_1_49AB19924B4FCC28*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_FD4389532621206D_METHOD_1_198EA9276B321A52_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_31A4AB32A702B4E9(::Class_1_49AB19924B4FCC28*& a1, ::System::Int32 a2, ::System::Boolean a3, ::System::Int32 a4, ::RPG::GameCore::LevelPedestrianFlowInfo*& a5)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_49AB19924B4FCC28*&, ::System::Int32, ::System::Boolean, ::System::Int32, ::RPG::GameCore::LevelPedestrianFlowInfo*&))((::PBYTE)hIl2Cpp + CLASS_1_FD4389532621206D_METHOD_1_31A4AB32A702B4E9_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Boolean Method_1_A620EF59D0C51DCA(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*& a1, ::System::Int32 a2, ::System::Boolean a3, ::System::Int32 a4, ::RPG::GameCore::LevelPedestrianFlowInfo*& a5)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*&, ::System::Int32, ::System::Boolean, ::System::Int32, ::RPG::GameCore::LevelPedestrianFlowInfo*&))((::PBYTE)hIl2Cpp + CLASS_1_FD4389532621206D_METHOD_1_A620EF59D0C51DCA_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_1_13E97A3FA546E8BC(::RPG::GameCore::ConfigGetOffTrain* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ConfigGetOffTrain*))((::PBYTE)hIl2Cpp + CLASS_1_FD4389532621206D_METHOD_1_13E97A3FA546E8BC_OFFSET))(this, a1);
	}

	::System::Void Method_1_D64D578E7D225532(::System::Boolean a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_FD4389532621206D_METHOD_1_D64D578E7D225532_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_1ED53B09AFE91718(::System::Int32 a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_FD4389532621206D_METHOD_1_1ED53B09AFE91718_OFFSET))(this, a1, a2);
	}

	::UnityEngine::Vector3 Method_1_CBE8D2C3CB91C620(::System::Int32 a1, ::System::Int32 a2, ::System::Boolean a3)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_FD4389532621206D_METHOD_1_CBE8D2C3CB91C620_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_C3697B3FFADF66DE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_FD4389532621206D_METHOD_1_C3697B3FFADF66DE_OFFSET))(this, a1);
	}

	::System::Void Method_1_6E10DBA521A04356()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FD4389532621206D_METHOD_1_6E10DBA521A04356_OFFSET))(this);
	}

	::System::Void Method_1_66CC9828DB1F478F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FD4389532621206D_METHOD_1_66CC9828DB1F478F_OFFSET))(this);
	}

	::System::Int32 Method_1_09B8F368BEF6ADA5()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FD4389532621206D_METHOD_1_09B8F368BEF6ADA5_OFFSET))(this);
	}

	::System::Void Method_1_4307B2A4B4A12C1A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FD4389532621206D_METHOD_1_4307B2A4B4A12C1A_OFFSET))(this);
	}

	::System::Void Method_1_E1CE0A1C7957700D(::System::Single a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_FD4389532621206D_METHOD_1_E1CE0A1C7957700D_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_E1CE0A1C7957700D_1(::System::Single a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_FD4389532621206D_METHOD_1_E1CE0A1C7957700D_1_OFFSET))(this, a1, a2);
	}

	::System::Single Method_1_6C45DFFB47F952B7(::System::Single a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_FD4389532621206D_METHOD_1_6C45DFFB47F952B7_OFFSET))(this, a1);
	}

	::System::Void Method_1_3BCF0226A6CDC13B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FD4389532621206D_METHOD_1_3BCF0226A6CDC13B_OFFSET))(this);
	}

	::System::Int32 Method_1_6C66352BB475DD12(::System::Int32 a1, ::System::Boolean a2, ::RPG::GameCore::LevelPedestrianFlowInfo*& a3)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Boolean, ::RPG::GameCore::LevelPedestrianFlowInfo*&))((::PBYTE)hIl2Cpp + CLASS_1_FD4389532621206D_METHOD_1_6C66352BB475DD12_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_C836268BEBB9DBE1(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_FD4389532621206D_METHOD_1_C836268BEBB9DBE1_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_A9F6594EA869CA9D()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FD4389532621206D_METHOD_1_A9F6594EA869CA9D_OFFSET))(this);
	}

	::System::Void Method_1_F0C3B798E2EE87DB(::Class_1_49AB19924B4FCC28* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_49AB19924B4FCC28*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_FD4389532621206D_METHOD_1_F0C3B798E2EE87DB_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_F37CDBD6D46274D2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_FD4389532621206D_METHOD_1_F37CDBD6D46274D2_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FD4389532621206D_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FD4389532621206D_METHOD_1_CA373AA1C7054598_1_OFFSET))(this);
	}
};
