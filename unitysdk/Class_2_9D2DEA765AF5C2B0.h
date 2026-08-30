#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B8FB38F0526A59B0.h"
#include "unitysdk/Enum_3_01618AD0437C8486.h"
#include "unitysdk/Enum_3_0A3761FE34514D6C_13.h"
#include "unitysdk/RPG/GameCore/AbilityProperty.h"
#include "unitysdk/RPG/GameCore/AvatarChangeOption.h"
#include "unitysdk/RPG/GameCore/AvatarRowWrapperDeriveType.h"
#include "unitysdk/RPG/GameCore/BattleExtraPropertyAddition.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"

class Class_1_4AAB34DEAFC894B3;
class Class_1_7AB88D713F5121B3_49;
class Class_1_EA6B9573C4BF1DD5;
namespace RPG::GameCore { class BattleGridFightAvatarData; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_9D2DEA765AF5C2B0__CTOR_OFFSET UNITYSDK_OFFSET(0xFA62210)

inline static constexpr unsigned int Class_2_9D2DEA765AF5C2B0_TypeDefinitionIndex = 57053;

class Class_2_9D2DEA765AF5C2B0 : public ::Class_1_B8FB38F0526A59B0
{
public:
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::BattleExtraPropertyAddition, ::RPG::GameCore::FixPoint>* HHMKHBIKCPN; // 0x58
	::System::Collections::Generic::List_1<::Class_1_7AB88D713F5121B3_49*>* HPLFPOEIFAJ; // 0x60
	::Class_1_EA6B9573C4BF1DD5* DAJPFEDOLAI; // 0x68
	::RPG::GameCore::BattleGridFightAvatarData* CLMELKFEKMA; // 0x70
	::Il2CppArray<::System::UInt32>* PFHEKAOOOPJ; // 0x78
	::Il2CppArray<::RPG::GameCore::AbilityProperty>* FHOELNDHGEH; // 0x80
	::System::Collections::Generic::List_1<::Class_1_7AB88D713F5121B3_49*>* HHHKPJHAOKK; // 0x88
	::Il2CppArray<::RPG::GameCore::AbilityProperty>* DIGCNLPAJEB; // 0x90
	::Il2CppArray<::Class_1_4AAB34DEAFC894B3*>* OEJACCAHJHH; // 0x98
	::RPG::GameCore::FixPoint JHOIBMEKNOD; // 0xA0
	::RPG::GameCore::AvatarRowWrapperDeriveType DJLAEMKAOKE; // 0xA8
	::System::Boolean LHFPPPKPNMM; // 0xAC
	::RPG::GameCore::FixPoint AIFOJKHJLDD; // 0xB0
	::RPG::GameCore::FixPoint NEPGILFFENF; // 0xB8
	::RPG::GameCore::FixPoint JCDBMGGLNIB; // 0xC0
	::Enum_3_01618AD0437C8486 NMFLLIDLOJE; // 0xC8
	::RPG::GameCore::AvatarChangeOption KFGPAOBJKKB; // 0xCC
	::System::UInt32 BAFNGNPHHEC; // 0xD0
	::System::UInt32 GBJLLAJJEOL; // 0xD4
	::System::UInt32 AAGKEBFHLMC; // 0xD8
	::System::UInt32 DLOOMDHHNGC; // 0xDC
	::System::UInt32 GDIMKFNECOK; // 0xE0
	::System::Int32 BLIFOAEFHIB; // 0xE4
	::Enum_3_0A3761FE34514D6C_13 IJEBEEMGOOJ; // 0xE8
	::System::UInt32 PKJDFMCKNMC; // 0xEC
	::System::UInt32 KPAHFGEFKEB; // 0xF0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9D2DEA765AF5C2B0__CTOR_OFFSET))(this);
	}
};
