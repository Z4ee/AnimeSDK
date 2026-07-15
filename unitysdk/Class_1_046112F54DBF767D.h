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

#define CLASS_1_046112F54DBF767D_METHOD_1_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x17EAB110)
#define CLASS_1_046112F54DBF767D_METHOD_1_D801D69224C99A5F_OFFSET UNITYSDK_OFFSET(0x17EAAD00)
#define CLASS_1_046112F54DBF767D__CTOR_OFFSET UNITYSDK_OFFSET(0x17EAB100)

inline static constexpr unsigned int Class_1_046112F54DBF767D_TypeDefinitionIndex = 75372;

class Class_1_046112F54DBF767D : public ::System::Object
{
public:
	::System::Collections::Generic::HashSet_1<::RPG::GameCore::PixAirEquipTag>* Field_1_0; // 0x10
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::PixAirEventType, ::System::Collections::Generic::List_1<::Class_1_45D6DE6073A1FCE3*>*>* Field_1_1; // 0x18
	::RPG::Client::PixAir::PixAirEquipInstance* Field_1_2; // 0x20
	::RPG::GameCore::FixPoint Field_1_3; // 0x28
	::RPG::GameCore::FixPoint Field_1_4; // 0x30
	::System::Int32 Field_1_5; // 0x38
	::System::UInt32 Field_1_6; // 0x3C
	::RPG::GameCore::FixPoint Field_1_7; // 0x40
	::RPG::GameCore::FixPoint Field_1_8; // 0x48
	::RPG::GameCore::FixPoint Field_1_9; // 0x50
	::RPG::GameCore::FixPoint Field_1_10; // 0x58
	::RPG::GameCore::FixPoint Field_1_11; // 0x60
	::RPG::GameCore::FixPoint Field_1_12; // 0x68
	::RPG::GameCore::FixPoint Field_1_13; // 0x70
	::RPG::GameCore::FixPoint Field_1_14; // 0x78
	::RPG::GameCore::FixPoint Field_1_15; // 0x80
	::RPG::GameCore::FixPoint Field_1_16; // 0x88
	::RPG::GameCore::FixPoint Field_1_17; // 0x90
	::RPG::GameCore::FixPoint Field_1_18; // 0x98
	::System::Int32 Field_1_19; // 0xA0
	::System::Boolean Field_1_20; // 0xA4
	::System::UInt32 Field_1_21; // 0xA8
	::System::Int32 Field_1_22; // 0xAC
	::RPG::GameCore::FixPoint Field_1_23; // 0xB0
	::RPG::GameCore::FixPoint Field_1_24; // 0xB8
	::RPG::GameCore::FixPoint Field_1_25; // 0xC0
	::System::UInt32 Field_1_26; // 0xC8
	::RPG::GameCore::PixAirSlotType Field_1_27; // 0xCC
	::System::Int32 Field_1_28; // 0xD0
	::System::Int32 Field_1_29; // 0xD4
	::RPG::GameCore::FixPoint Field_1_30; // 0xD8
	::RPG::GameCore::FixPoint Field_1_31; // 0xE0

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
