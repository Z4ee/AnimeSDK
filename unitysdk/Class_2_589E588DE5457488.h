#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_1750960FB5F747AB.h"
#include "unitysdk/RPG/GameCore/AttackType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"

class Class_1_F0825ADB8AC159C8;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_2_589E588DE5457488__CTOR_OFFSET UNITYSDK_OFFSET(0xB7D7100)

inline static constexpr unsigned int Class_2_589E588DE5457488_TypeDefinitionIndex = 57778;

class Class_2_589E588DE5457488 : public ::Class_1_1750960FB5F747AB
{
public:
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AttackType, ::System::Double>* HNJNDLEFMBE; // 0x30
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AttackType, ::System::Double>* KEOOJBHFLFD; // 0x38
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::UInt32>* NKBJJKNKEHI; // 0x40
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_F0825ADB8AC159C8*>* GPEDJCOOAHK; // 0x48
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AttackType, ::System::Double>* EKOIOILEJID; // 0x50
	::RPG::GameCore::FixPoint GKEEIFGGKHJ; // 0x58
	::RPG::GameCore::FixPoint FLDANBDGGLO; // 0x60
	::RPG::GameCore::FixPoint OOKAPAKPFGK; // 0x68
	::System::Int32 LIMCHBECKPC; // 0x70
	::System::Int32 MGGOBENBMGI; // 0x74
	::RPG::GameCore::FixPoint EAPPECOODMI; // 0x78
	::RPG::GameCore::FixPoint ENCMPAHMDBN; // 0x80
	::System::Int32 CPEINOFIHEI; // 0x88
	::System::Int32 CJGCEKPOGBF; // 0x8C
	::RPG::GameCore::FixPoint FLBALEEBHKN; // 0x90

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_589E588DE5457488__CTOR_OFFSET))(this);
	}
};
