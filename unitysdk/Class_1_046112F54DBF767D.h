#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/PixAirEquipTag.h"
#include "unitysdk/RPG/GameCore/PixAirEventType.h"
#include "unitysdk/RPG/GameCore/PixAirSlotType.h"
#include "unitysdk/System/Object.h"

class Class_1_45D6DE6073A1FCE3;
namespace RPG::Client::PixAir { class PixAirEquipInstance; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_046112F54DBF767D_METHOD_1_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x152E5B60)
#define CLASS_1_046112F54DBF767D_METHOD_1_D801D69224C99A5F_OFFSET UNITYSDK_OFFSET(0x152E5750)
#define CLASS_1_046112F54DBF767D__CTOR_OFFSET UNITYSDK_OFFSET(0x152E5B50)

inline static constexpr unsigned int Class_1_046112F54DBF767D_TypeDefinitionIndex = 78920;

class Class_1_046112F54DBF767D : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::PixAirEventType, ::System::Collections::Generic::List_1<::Class_1_45D6DE6073A1FCE3*>*>* KHBNAGNKKJL; // 0x10
	::System::Collections::Generic::HashSet_1<::RPG::GameCore::PixAirEquipTag>* OJFFPIIKPDJ; // 0x18
	::RPG::Client::PixAir::PixAirEquipInstance* BMEOCHBMBGF; // 0x20
	::RPG::GameCore::FixPoint AJMPIDBBJMH; // 0x28
	::RPG::GameCore::FixPoint DALHCOIABHF; // 0x30
	::RPG::GameCore::PixAirSlotType MPADIDFJBEF; // 0x38
	::System::UInt32 AHGIENEMKFI; // 0x3C
	::RPG::GameCore::FixPoint NPJOPHICDFD; // 0x40
	::RPG::GameCore::FixPoint MNMIDHLADCO; // 0x48
	::RPG::GameCore::FixPoint JFOBGGBOFLC; // 0x50
	::RPG::GameCore::FixPoint IIPCIGIOIDB; // 0x58
	::RPG::GameCore::FixPoint NBPEHFCAIHB; // 0x60
	::RPG::GameCore::FixPoint KIEICALFCEM; // 0x68
	::RPG::GameCore::FixPoint LAJJIEFELIO; // 0x70
	::RPG::GameCore::FixPoint EPKJNNKPIPI; // 0x78
	::RPG::GameCore::FixPoint DHMPEOAJCCK; // 0x80
	::System::Int32 DAKBJLLPJCN; // 0x88
	::System::Int32 CFBDMBKCNJO; // 0x8C
	::System::UInt32 NBFOFKGNNIO; // 0x90
	::System::Int32 NJGKCPOOHDM; // 0x94
	::System::UInt32 AAGKEBFHLMC; // 0x98
	::System::Int32 EEFIPNFMELC; // 0x9C
	::RPG::GameCore::FixPoint HNJLMDKOKKD; // 0xA0
	::RPG::GameCore::FixPoint BKICHKPMKLF; // 0xA8
	::RPG::GameCore::FixPoint JDADMEJFLLL; // 0xB0
	::RPG::GameCore::FixPoint ENEOBDACJOH; // 0xB8
	::System::Boolean NCCJHHCGFHF; // 0xC0
	::System::Int32 NPHAJEKCBKF; // 0xC4
	::RPG::GameCore::FixPoint HJNPFANCFEC; // 0xC8
	::RPG::GameCore::FixPoint FNHLJAHDEFB; // 0xD0
	::RPG::GameCore::FixPoint FPEEMPIEDEM; // 0xD8
	::RPG::GameCore::FixPoint EAFHJMECPEO; // 0xE0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_046112F54DBF767D__CTOR_OFFSET))(this);
	}

	static ::Class_1_046112F54DBF767D* Method_1_D801D69224C99A5F(::RPG::Client::PixAir::PixAirEquipInstance* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4)
	{
		return ((::Class_1_046112F54DBF767D*(*)(::RPG::Client::PixAir::PixAirEquipInstance*, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_046112F54DBF767D_METHOD_1_D801D69224C99A5F_OFFSET))(a1, a2, a3, a4);
	}

	::System::Int32 Method_1_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_046112F54DBF767D_METHOD_1_A1D8CD775DEC3C21_OFFSET))(this);
	}
};
