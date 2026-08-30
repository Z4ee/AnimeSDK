#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateRinCaseBoardTeamType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_1_C852F5794E5A33A5_1;
namespace RPG::Client::FateRin::CaseBoard { class GrailViewModel; }
namespace RPG::Client::FateRin::CaseBoard { class TeamRelationViewModel; }
namespace RPG::Client::FateRin::CaseBoard { class TeamViewModel; }
namespace RPG::GameCore { class FateRinCaseBoardBaseTeamInfo; }
namespace RPG::GameCore { class FateRinCaseBoardTeamRelationInfo; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_C28E571CD1C66CE4_GET_GRAIL_OFFSET UNITYSDK_OFFSET(0x16402150)
#define CLASS_1_C28E571CD1C66CE4_METHOD_1_0F6F41CFCC4EDF2C_OFFSET UNITYSDK_OFFSET(0x16402450)
#define CLASS_1_C28E571CD1C66CE4_METHOD_1_3ADE2C089ACFA658_OFFSET UNITYSDK_OFFSET(0x164027E0)
#define CLASS_1_C28E571CD1C66CE4_METHOD_1_508D4DD02D3DB74E_OFFSET UNITYSDK_OFFSET(0x164021C0)
#define CLASS_1_C28E571CD1C66CE4_METHOD_1_5471870312866DAA_OFFSET UNITYSDK_OFFSET(0x164026A0)
#define CLASS_1_C28E571CD1C66CE4_METHOD_1_67C0115A04856BAC_OFFSET UNITYSDK_OFFSET(0x16402990)
#define CLASS_1_C28E571CD1C66CE4_METHOD_1_7016A20C0F1FC30B_OFFSET UNITYSDK_OFFSET(0x164025C0)
#define CLASS_1_C28E571CD1C66CE4_METHOD_1_73A3056C136A6E47_OFFSET UNITYSDK_OFFSET(0x16402530)
#define CLASS_1_C28E571CD1C66CE4_METHOD_1_95780ED94B90ED36_OFFSET UNITYSDK_OFFSET(0x16402170)
#define CLASS_1_C28E571CD1C66CE4_METHOD_1_AAB2B07AE196C882_OFFSET UNITYSDK_OFFSET(0x16402310)
#define CLASS_1_C28E571CD1C66CE4_METHOD_1_D0845F62F4A644A1_OFFSET UNITYSDK_OFFSET(0x164028D0)
#define CLASS_1_C28E571CD1C66CE4_SET_GRAIL_OFFSET UNITYSDK_OFFSET(0x16402160)
#define CLASS_1_C28E571CD1C66CE4__CTOR_OFFSET UNITYSDK_OFFSET(0x16401FC0)

inline static constexpr unsigned int Class_1_C28E571CD1C66CE4_TypeDefinitionIndex = 79463;

class Class_1_C28E571CD1C66CE4 : public ::System::Object
{
public:
	::RPG::Client::FateRin::CaseBoard::GrailViewModel* _Grail_k__BackingField; // 0x10
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::FateRinCaseBoardTeamType, ::RPG::Client::FateRin::CaseBoard::TeamViewModel*>* ABBHEIAHCKI; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::RPG::GameCore::FateRinCaseBoardTeamType, ::RPG::GameCore::FateRinCaseBoardTeamType>, ::RPG::Client::FateRin::CaseBoard::TeamRelationViewModel*>* CBNIMGHEFMF; // 0x20
	::Class_1_C852F5794E5A33A5_1* FINDGMLOJNL; // 0x28

	::System::Void _ctor(::Class_1_C852F5794E5A33A5_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C852F5794E5A33A5_1*))((::PBYTE)hIl2Cpp + CLASS_1_C28E571CD1C66CE4__CTOR_OFFSET))(this, a1);
	}

	::RPG::Client::FateRin::CaseBoard::GrailViewModel* get_Grail()
	{
		return ((::RPG::Client::FateRin::CaseBoard::GrailViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C28E571CD1C66CE4_GET_GRAIL_OFFSET))(this);
	}

	::System::Void set_Grail(::RPG::Client::FateRin::CaseBoard::GrailViewModel* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::FateRin::CaseBoard::GrailViewModel*))((::PBYTE)hIl2Cpp + CLASS_1_C28E571CD1C66CE4_SET_GRAIL_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_95780ED94B90ED36()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C28E571CD1C66CE4_METHOD_1_95780ED94B90ED36_OFFSET))(this);
	}

	::System::Void Method_1_508D4DD02D3DB74E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C28E571CD1C66CE4_METHOD_1_508D4DD02D3DB74E_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::RPG::Client::FateRin::CaseBoard::TeamViewModel*>* Method_1_AAB2B07AE196C882()
	{
		return ((::System::Collections::Generic::List_1<::RPG::Client::FateRin::CaseBoard::TeamViewModel*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C28E571CD1C66CE4_METHOD_1_AAB2B07AE196C882_OFFSET))(this);
	}

	::RPG::Client::FateRin::CaseBoard::TeamViewModel* Method_1_0F6F41CFCC4EDF2C(::RPG::GameCore::FateRinCaseBoardTeamType a1)
	{
		return ((::RPG::Client::FateRin::CaseBoard::TeamViewModel*(*)(::PVOID, ::RPG::GameCore::FateRinCaseBoardTeamType))((::PBYTE)hIl2Cpp + CLASS_1_C28E571CD1C66CE4_METHOD_1_0F6F41CFCC4EDF2C_OFFSET))(this, a1);
	}

	::RPG::Client::FateRin::CaseBoard::TeamViewModel* Method_1_73A3056C136A6E47(::RPG::GameCore::FateRinCaseBoardTeamType a1, ::RPG::GameCore::FateRinCaseBoardBaseTeamInfo* a2)
	{
		return ((::RPG::Client::FateRin::CaseBoard::TeamViewModel*(*)(::PVOID, ::RPG::GameCore::FateRinCaseBoardTeamType, ::RPG::GameCore::FateRinCaseBoardBaseTeamInfo*))((::PBYTE)hIl2Cpp + CLASS_1_C28E571CD1C66CE4_METHOD_1_73A3056C136A6E47_OFFSET))(this, a1, a2);
	}

	::RPG::Client::FateRin::CaseBoard::TeamViewModel* Method_1_7016A20C0F1FC30B(::RPG::GameCore::FateRinCaseBoardTeamType a1, ::RPG::GameCore::FateRinCaseBoardBaseTeamInfo* a2)
	{
		return ((::RPG::Client::FateRin::CaseBoard::TeamViewModel*(*)(::PVOID, ::RPG::GameCore::FateRinCaseBoardTeamType, ::RPG::GameCore::FateRinCaseBoardBaseTeamInfo*))((::PBYTE)hIl2Cpp + CLASS_1_C28E571CD1C66CE4_METHOD_1_7016A20C0F1FC30B_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::RPG::Client::FateRin::CaseBoard::TeamRelationViewModel*>* Method_1_5471870312866DAA()
	{
		return ((::System::Collections::Generic::List_1<::RPG::Client::FateRin::CaseBoard::TeamRelationViewModel*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C28E571CD1C66CE4_METHOD_1_5471870312866DAA_OFFSET))(this);
	}

	::RPG::Client::FateRin::CaseBoard::TeamRelationViewModel* Method_1_3ADE2C089ACFA658(::RPG::GameCore::FateRinCaseBoardTeamType a1, ::RPG::GameCore::FateRinCaseBoardTeamType a2)
	{
		return ((::RPG::Client::FateRin::CaseBoard::TeamRelationViewModel*(*)(::PVOID, ::RPG::GameCore::FateRinCaseBoardTeamType, ::RPG::GameCore::FateRinCaseBoardTeamType))((::PBYTE)hIl2Cpp + CLASS_1_C28E571CD1C66CE4_METHOD_1_3ADE2C089ACFA658_OFFSET))(this, a1, a2);
	}

	::RPG::Client::FateRin::CaseBoard::TeamRelationViewModel* Method_1_D0845F62F4A644A1(::RPG::GameCore::FateRinCaseBoardTeamRelationInfo* a1)
	{
		return ((::RPG::Client::FateRin::CaseBoard::TeamRelationViewModel*(*)(::PVOID, ::RPG::GameCore::FateRinCaseBoardTeamRelationInfo*))((::PBYTE)hIl2Cpp + CLASS_1_C28E571CD1C66CE4_METHOD_1_D0845F62F4A644A1_OFFSET))(this, a1);
	}

	::RPG::Client::FateRin::CaseBoard::TeamRelationViewModel* Method_1_67C0115A04856BAC(::RPG::GameCore::FateRinCaseBoardTeamRelationInfo* a1)
	{
		return ((::RPG::Client::FateRin::CaseBoard::TeamRelationViewModel*(*)(::PVOID, ::RPG::GameCore::FateRinCaseBoardTeamRelationInfo*))((::PBYTE)hIl2Cpp + CLASS_1_C28E571CD1C66CE4_METHOD_1_67C0115A04856BAC_OFFSET))(this, a1);
	}
};
