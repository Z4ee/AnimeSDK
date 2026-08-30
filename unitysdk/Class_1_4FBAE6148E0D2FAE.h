#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/StageInvasionMonsterState.h"
#include "unitysdk/RPG/GameCore/StageInvasionMonsterUIData.h"
#include "unitysdk/RPG/GameCore/StageMonsterInvasionParamType.h"
#include "unitysdk/Struct_2_7FA0A7029F37B727.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_460;
class Class_1_6EDF1562E8B73DA4;
class Class_2_AD549E15E6D5427E;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class MazeBuffData; }
namespace RPG::GameCore { class StageInvasionBuffRow; }
namespace RPG::GameCore { class StageInvasionConfigRow; }
namespace RPG::GameCore { class StageMonsterInvasionParamRow; }
namespace RPG::GameCore { class StatisticsComponent; }
namespace RPG::GameCore { class TurnBasedGameMode; }
namespace System::Collections { class BitArray; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_4FBAE6148E0D2FAE_METHOD_1_0960CAEE01038065_OFFSET UNITYSDK_OFFSET(0xB72BB90)
#define CLASS_1_4FBAE6148E0D2FAE_METHOD_1_267A0BF471A986CA_OFFSET UNITYSDK_OFFSET(0xB72CC30)
#define CLASS_1_4FBAE6148E0D2FAE_METHOD_1_4B10F84263C4F017_OFFSET UNITYSDK_OFFSET(0xB72C510)
#define CLASS_1_4FBAE6148E0D2FAE_METHOD_1_569C8A2D03C8AA85_OFFSET UNITYSDK_OFFSET(0xB72C920)
#define CLASS_1_4FBAE6148E0D2FAE_METHOD_1_5B0531D5B96D6B96_OFFSET UNITYSDK_OFFSET(0xB72C890)
#define CLASS_1_4FBAE6148E0D2FAE_METHOD_1_6151E230327C7564_OFFSET UNITYSDK_OFFSET(0xB72C070)
#define CLASS_1_4FBAE6148E0D2FAE_METHOD_1_86D55F79EA296C22_OFFSET UNITYSDK_OFFSET(0xB72BE60)
#define CLASS_1_4FBAE6148E0D2FAE_METHOD_1_878EA953B73E6E80_OFFSET UNITYSDK_OFFSET(0xB72C480)
#define CLASS_1_4FBAE6148E0D2FAE_METHOD_1_8894E534FED3129C_OFFSET UNITYSDK_OFFSET(0xB72BBF0)
#define CLASS_1_4FBAE6148E0D2FAE_METHOD_1_8E7E4D966A3D3048_OFFSET UNITYSDK_OFFSET(0xB72CC40)
#define CLASS_1_4FBAE6148E0D2FAE_METHOD_1_97CAD17442913F0E_OFFSET UNITYSDK_OFFSET(0xB72BD50)
#define CLASS_1_4FBAE6148E0D2FAE_METHOD_1_9AB55F553C4AC6E8_OFFSET UNITYSDK_OFFSET(0xB72BA30)
#define CLASS_1_4FBAE6148E0D2FAE_METHOD_1_9EB92E1BAB312EBE_OFFSET UNITYSDK_OFFSET(0xB72C5E0)
#define CLASS_1_4FBAE6148E0D2FAE_METHOD_1_AA2D3E889C8A52CA_OFFSET UNITYSDK_OFFSET(0xB72C430)
#define CLASS_1_4FBAE6148E0D2FAE_METHOD_1_C2D0A28EDD88D4E9_OFFSET UNITYSDK_OFFSET(0xB72BDE0)
#define CLASS_1_4FBAE6148E0D2FAE_METHOD_1_C980F30C1DA81B6D_OFFSET UNITYSDK_OFFSET(0xB72B980)
#define CLASS_1_4FBAE6148E0D2FAE_METHOD_1_E18F3B9E6FAE6526_OFFSET UNITYSDK_OFFSET(0xB72BF90)
#define CLASS_1_4FBAE6148E0D2FAE_METHOD_1_E23B1B7FCD82A4A2_OFFSET UNITYSDK_OFFSET(0xB72C690)
#define CLASS_1_4FBAE6148E0D2FAE_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0xB72CC20)
#define CLASS_1_4FBAE6148E0D2FAE__CTOR_OFFSET UNITYSDK_OFFSET(0xB72B140)

inline static constexpr unsigned int Class_1_4FBAE6148E0D2FAE_TypeDefinitionIndex = 56364;

class Class_1_4FBAE6148E0D2FAE : public ::System::Object
{
public:
	::RPG::GameCore::TurnBasedGameMode* GICHGNGMBGD; // 0x10
	::RPG::GameCore::StageInvasionBuffRow* HAENOCFNAMF; // 0x18
	::RPG::GameCore::StatisticsComponent* BCBGNBGMBAL; // 0x20
	::Il2CppArray<::System::Int32>* HHCJCOEAGGI; // 0x28
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_6EDF1562E8B73DA4*>* MINMNJGAGOM; // 0x30
	::System::Collections::BitArray* PIJBEDOOEGF; // 0x38
	::System::Collections::Generic::HashSet_1<::System::UInt32>* DLKBMJMOMEB; // 0x40
	::RPG::GameCore::StageInvasionConfigRow* LDOKFGNDIAE; // 0x48
	::System::Collections::Generic::List_1<::System::UInt32>* DONPAEODKCC; // 0x50
	::System::Int32 JJBGALIHHAG; // 0x58

	::System::Void _ctor(::RPG::GameCore::TurnBasedGameMode* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedGameMode*))((::PBYTE)hIl2Cpp + CLASS_1_4FBAE6148E0D2FAE__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_0960CAEE01038065()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4FBAE6148E0D2FAE_METHOD_1_0960CAEE01038065_OFFSET))(this);
	}

	::System::Boolean Method_1_97CAD17442913F0E(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_4FBAE6148E0D2FAE_METHOD_1_97CAD17442913F0E_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_C2D0A28EDD88D4E9(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_4FBAE6148E0D2FAE_METHOD_1_C2D0A28EDD88D4E9_OFFSET))(this, a1);
	}

	::System::Void Method_1_86D55F79EA296C22(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::StageInvasionMonsterState a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::StageInvasionMonsterState))((::PBYTE)hIl2Cpp + CLASS_1_4FBAE6148E0D2FAE_METHOD_1_86D55F79EA296C22_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_E18F3B9E6FAE6526(::System::UInt32 a1, ::RPG::GameCore::StageInvasionMonsterUIData& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::StageInvasionMonsterUIData&))((::PBYTE)hIl2Cpp + CLASS_1_4FBAE6148E0D2FAE_METHOD_1_E18F3B9E6FAE6526_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_6151E230327C7564(::System::UInt32 a1, ::Class_2_AD549E15E6D5427E* a2, ::Struct_2_7FA0A7029F37B727& a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Class_2_AD549E15E6D5427E*, ::Struct_2_7FA0A7029F37B727&))((::PBYTE)hIl2Cpp + CLASS_1_4FBAE6148E0D2FAE_METHOD_1_6151E230327C7564_OFFSET))(this, a1, a2, a3);
	}

	::RPG::GameCore::FixPoint Method_1_878EA953B73E6E80(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::StageMonsterInvasionParamType a2)
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::StageMonsterInvasionParamType))((::PBYTE)hIl2Cpp + CLASS_1_4FBAE6148E0D2FAE_METHOD_1_878EA953B73E6E80_OFFSET))(this, a1, a2);
	}

	::RPG::GameCore::StageMonsterInvasionParamRow* Method_1_4B10F84263C4F017(::RPG::GameCore::GameEntity* a1)
	{
		return ((::RPG::GameCore::StageMonsterInvasionParamRow*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_4FBAE6148E0D2FAE_METHOD_1_4B10F84263C4F017_OFFSET))(this, a1);
	}

	static ::RPG::GameCore::StageMonsterInvasionParamRow* Method_1_9EB92E1BAB312EBE(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::RPG::GameCore::StageMonsterInvasionParamRow*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_4FBAE6148E0D2FAE_METHOD_1_9EB92E1BAB312EBE_OFFSET))(a1, a2);
	}

	::System::Void Method_1_E23B1B7FCD82A4A2(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_4FBAE6148E0D2FAE_METHOD_1_E23B1B7FCD82A4A2_OFFSET))(this, a1);
	}

	::System::Void Method_1_9AB55F553C4AC6E8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4FBAE6148E0D2FAE_METHOD_1_9AB55F553C4AC6E8_OFFSET))(this);
	}

	::System::Void Method_1_8894E534FED3129C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4FBAE6148E0D2FAE_METHOD_1_8894E534FED3129C_OFFSET))(this);
	}

	static ::System::Boolean Method_1_C980F30C1DA81B6D(::System::Collections::Generic::List_1<::RPG::GameCore::MazeBuffData*>* a1, ::System::UInt32 a2)
	{
		return ((::System::Boolean(*)(::System::Collections::Generic::List_1<::RPG::GameCore::MazeBuffData*>*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_4FBAE6148E0D2FAE_METHOD_1_C980F30C1DA81B6D_OFFSET))(a1, a2);
	}

	::System::Void Method_1_5B0531D5B96D6B96(::Class_0_16E4307DCC419505_460* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_460*))((::PBYTE)hIl2Cpp + CLASS_1_4FBAE6148E0D2FAE_METHOD_1_5B0531D5B96D6B96_OFFSET))(this, a1);
	}

	::System::Void Method_1_569C8A2D03C8AA85(::Class_0_16E4307DCC419505_460* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_460*))((::PBYTE)hIl2Cpp + CLASS_1_4FBAE6148E0D2FAE_METHOD_1_569C8A2D03C8AA85_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_AA2D3E889C8A52CA()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4FBAE6148E0D2FAE_METHOD_1_AA2D3E889C8A52CA_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4FBAE6148E0D2FAE_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::RPG::GameCore::StageInvasionBuffRow* Method_1_267A0BF471A986CA()
	{
		return ((::RPG::GameCore::StageInvasionBuffRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4FBAE6148E0D2FAE_METHOD_1_267A0BF471A986CA_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::UInt32>* Method_1_8E7E4D966A3D3048()
	{
		return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4FBAE6148E0D2FAE_METHOD_1_8E7E4D966A3D3048_OFFSET))(this);
	}
};
