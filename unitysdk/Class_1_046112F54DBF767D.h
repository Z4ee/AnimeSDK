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

#define CLASS_1_046112F54DBF767D_METHOD_1_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x1A6DEED0)
#define CLASS_1_046112F54DBF767D_METHOD_1_D801D69224C99A5F_OFFSET UNITYSDK_OFFSET(0x1A6DEAC0)
#define CLASS_1_046112F54DBF767D__CTOR_OFFSET UNITYSDK_OFFSET(0x1A6DEEC0)

inline static constexpr unsigned int Class_1_046112F54DBF767D_TypeDefinitionIndex = 78919;

class Class_1_046112F54DBF767D : public ::System::Object
{
public:
	::RPG::Client::PixAir::PixAirEquipInstance* BMEOCHBMBGF; // 0x10
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::PixAirEventType, ::System::Collections::Generic::List_1<::Class_1_45D6DE6073A1FCE3*>*>* KHBNAGNKKJL; // 0x18
	::System::Collections::Generic::HashSet_1<::RPG::GameCore::PixAirEquipTag>* OJFFPIIKPDJ; // 0x20
	::RPG::GameCore::FixPoint JDADMEJFLLL; // 0x28
	::System::Boolean NCCJHHCGFHF; // 0x30
	::System::Int32 NJGKCPOOHDM; // 0x34
	::RPG::GameCore::FixPoint MNMIDHLADCO; // 0x38
	::RPG::GameCore::FixPoint NBPEHFCAIHB; // 0x40
	::RPG::GameCore::FixPoint AJMPIDBBJMH; // 0x48
	::RPG::GameCore::FixPoint IIPCIGIOIDB; // 0x50
	::RPG::GameCore::FixPoint FNHLJAHDEFB; // 0x58
	::RPG::GameCore::FixPoint KIEICALFCEM; // 0x60
	::RPG::GameCore::FixPoint ENEOBDACJOH; // 0x68
	::RPG::GameCore::FixPoint HNJLMDKOKKD; // 0x70
	::RPG::GameCore::FixPoint BKICHKPMKLF; // 0x78
	::RPG::GameCore::FixPoint EAFHJMECPEO; // 0x80
	::RPG::GameCore::FixPoint DALHCOIABHF; // 0x88
	::RPG::GameCore::FixPoint EPKJNNKPIPI; // 0x90
	::RPG::GameCore::FixPoint LAJJIEFELIO; // 0x98
	::System::Int32 DAKBJLLPJCN; // 0xA0
	::System::UInt32 AHGIENEMKFI; // 0xA4
	::RPG::GameCore::FixPoint FPEEMPIEDEM; // 0xA8
	::RPG::GameCore::FixPoint NPJOPHICDFD; // 0xB0
	::RPG::GameCore::FixPoint JFOBGGBOFLC; // 0xB8
	::RPG::GameCore::FixPoint HJNPFANCFEC; // 0xC0
	::System::Int32 EEFIPNFMELC; // 0xC8
	::System::Int32 NPHAJEKCBKF; // 0xCC
	::System::UInt32 NBFOFKGNNIO; // 0xD0
	::System::Int32 CFBDMBKCNJO; // 0xD4
	::RPG::GameCore::PixAirSlotType MPADIDFJBEF; // 0xD8
	::System::UInt32 AAGKEBFHLMC; // 0xDC
	::RPG::GameCore::FixPoint DHMPEOAJCCK; // 0xE0

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
