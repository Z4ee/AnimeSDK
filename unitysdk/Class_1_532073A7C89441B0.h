#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CakeRaceCellType.h"
#include "unitysdk/RPG/GameCore/CakeRaceMoveState.h"
#include "unitysdk/RPG/GameCore/LittleGameEntityType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector3Int.h"

class Class_1_648C7B1B4B98AEC6;
class Class_3_FA020C2C23A72B3F;
namespace RPG::GameCore { class CakeRaceGameConfig; }
namespace RPG::GameCore { class CakeRaceMoveStateConfig; }
namespace RPG::GameCore { class CakeRaceTrapCellConfig; }
namespace RPG::GameCore { class LittleGameEntityConfig; }
namespace RPG::GameCore { class LittleGameLevelConfig; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_532073A7C89441B0_GET_GAMECONFIG_OFFSET UNITYSDK_OFFSET(0xBF1FB30)
#define CLASS_1_532073A7C89441B0_GET_REGIONCONFIGPROVIDER_OFFSET UNITYSDK_OFFSET(0xBF1FC00)
#define CLASS_1_532073A7C89441B0_GET_SERVICES_OFFSET UNITYSDK_OFFSET(0xBF1FAA0)
#define CLASS_1_532073A7C89441B0_METHOD_1_0AA8AFDA0080A6CB_OFFSET UNITYSDK_OFFSET(0xBF20300)
#define CLASS_1_532073A7C89441B0_METHOD_1_47CA6847BD027141_OFFSET UNITYSDK_OFFSET(0xBF20420)
#define CLASS_1_532073A7C89441B0_METHOD_1_5F43E23A4DAB3EF9_OFFSET UNITYSDK_OFFSET(0xBF1FC20)
#define CLASS_1_532073A7C89441B0_METHOD_1_688F4FCB430FDDC8_OFFSET UNITYSDK_OFFSET(0xBF20720)
#define CLASS_1_532073A7C89441B0_METHOD_1_6EA7FFD67A33C6EF_OFFSET UNITYSDK_OFFSET(0xBF20F10)
#define CLASS_1_532073A7C89441B0_METHOD_1_86BA2792D7CF609B_OFFSET UNITYSDK_OFFSET(0xBF20100)
#define CLASS_1_532073A7C89441B0_METHOD_1_9FD8E221709F0371_1_OFFSET UNITYSDK_OFFSET(0xBF20C70)
#define CLASS_1_532073A7C89441B0_METHOD_1_9FD8E221709F0371_OFFSET UNITYSDK_OFFSET(0xBF20650)
#define CLASS_1_532073A7C89441B0_METHOD_1_A40475C44AA8CEAB_1_OFFSET UNITYSDK_OFFSET(0xBF1FF60)
#define CLASS_1_532073A7C89441B0_METHOD_1_A40475C44AA8CEAB_OFFSET UNITYSDK_OFFSET(0xBF1FCA0)
#define CLASS_1_532073A7C89441B0_METHOD_1_B3F94C095ACAE0B6_OFFSET UNITYSDK_OFFSET(0xBF210F0)
#define CLASS_1_532073A7C89441B0_METHOD_1_BA2FCB635558A29A_OFFSET UNITYSDK_OFFSET(0xBF1FEE0)
#define CLASS_1_532073A7C89441B0_METHOD_1_BCB4D10ABD09AFD3_OFFSET UNITYSDK_OFFSET(0xBF20FF0)
#define CLASS_1_532073A7C89441B0_METHOD_1_BF4ED637A2F18D16_OFFSET UNITYSDK_OFFSET(0xBF1FE50)
#define CLASS_1_532073A7C89441B0_METHOD_1_E254052FA953AC88_OFFSET UNITYSDK_OFFSET(0xBF20E60)
#define CLASS_1_532073A7C89441B0_METHOD_1_E5885D2E35AD9A5C_OFFSET UNITYSDK_OFFSET(0xBF1FAB0)
#define CLASS_1_532073A7C89441B0_METHOD_1_F026F9F94BAA5E1F_1_OFFSET UNITYSDK_OFFSET(0xBF1FBA0)
#define CLASS_1_532073A7C89441B0_METHOD_1_F026F9F94BAA5E1F_OFFSET UNITYSDK_OFFSET(0xBF1FB40)
#define CLASS_1_532073A7C89441B0_METHOD_1_F13EC5A802809C06_OFFSET UNITYSDK_OFFSET(0xBF20D10)
#define CLASS_1_532073A7C89441B0_METHOD_1_F3A713F9850A9E5A_OFFSET UNITYSDK_OFFSET(0xBF209A0)
#define CLASS_1_532073A7C89441B0_SET_REGIONCONFIGPROVIDER_OFFSET UNITYSDK_OFFSET(0xBF1FC10)
#define CLASS_1_532073A7C89441B0__CTOR_OFFSET UNITYSDK_OFFSET(0xBF20280)

inline static constexpr unsigned int Class_1_532073A7C89441B0_TypeDefinitionIndex = 72549;

class Class_1_532073A7C89441B0 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_0 = 0x3E8; // 0x0
	::Class_1_648C7B1B4B98AEC6* _RegionConfigProvider_k__BackingField; // 0x10
	::RPG::GameCore::CakeRaceGameConfig* _GameConfig_k__BackingField; // 0x18
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CakeRaceMoveState, ::RPG::GameCore::CakeRaceMoveStateConfig*>* Field_1_3; // 0x20
	::Class_3_FA020C2C23A72B3F* _Services_k__BackingField; // 0x28
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CakeRaceCellType, ::RPG::GameCore::CakeRaceTrapCellConfig*>* Field_1_5; // 0x30

	::System::Void _ctor(::Class_3_FA020C2C23A72B3F* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_FA020C2C23A72B3F*))((::PBYTE)hIl2Cpp + CLASS_1_532073A7C89441B0__CTOR_OFFSET))(this, a1);
	}

	::Class_3_FA020C2C23A72B3F* get_Services()
	{
		return ((::Class_3_FA020C2C23A72B3F*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_532073A7C89441B0_GET_SERVICES_OFFSET))(this);
	}

	::RPG::GameCore::LittleGameLevelConfig* Method_1_E5885D2E35AD9A5C()
	{
		return ((::RPG::GameCore::LittleGameLevelConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_532073A7C89441B0_METHOD_1_E5885D2E35AD9A5C_OFFSET))(this);
	}

	::RPG::GameCore::CakeRaceGameConfig* get_GameConfig()
	{
		return ((::RPG::GameCore::CakeRaceGameConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_532073A7C89441B0_GET_GAMECONFIG_OFFSET))(this);
	}

	::System::Int32 Method_1_F026F9F94BAA5E1F()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_532073A7C89441B0_METHOD_1_F026F9F94BAA5E1F_OFFSET))(this);
	}

	::System::Int32 Method_1_F026F9F94BAA5E1F_1()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_532073A7C89441B0_METHOD_1_F026F9F94BAA5E1F_1_OFFSET))(this);
	}

	::Class_1_648C7B1B4B98AEC6* get_RegionConfigProvider()
	{
		return ((::Class_1_648C7B1B4B98AEC6*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_532073A7C89441B0_GET_REGIONCONFIGPROVIDER_OFFSET))(this);
	}

	::System::Void set_RegionConfigProvider(::Class_1_648C7B1B4B98AEC6* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_648C7B1B4B98AEC6*))((::PBYTE)hIl2Cpp + CLASS_1_532073A7C89441B0_SET_REGIONCONFIGPROVIDER_OFFSET))(this, a1);
	}

	::RPG::GameCore::CakeRaceMoveStateConfig* Method_1_5F43E23A4DAB3EF9(::RPG::GameCore::CakeRaceMoveState a1)
	{
		return ((::RPG::GameCore::CakeRaceMoveStateConfig*(*)(::PVOID, ::RPG::GameCore::CakeRaceMoveState))((::PBYTE)hIl2Cpp + CLASS_1_532073A7C89441B0_METHOD_1_5F43E23A4DAB3EF9_OFFSET))(this, a1);
	}

	::System::Void Method_1_A40475C44AA8CEAB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_532073A7C89441B0_METHOD_1_A40475C44AA8CEAB_OFFSET))(this);
	}

	::RPG::GameCore::CakeRaceMoveStateConfig* Method_1_BF4ED637A2F18D16(::RPG::GameCore::CakeRaceCellType a1)
	{
		return ((::RPG::GameCore::CakeRaceMoveStateConfig*(*)(::PVOID, ::RPG::GameCore::CakeRaceCellType))((::PBYTE)hIl2Cpp + CLASS_1_532073A7C89441B0_METHOD_1_BF4ED637A2F18D16_OFFSET))(this, a1);
	}

	::RPG::GameCore::CakeRaceTrapCellConfig* Method_1_BA2FCB635558A29A(::RPG::GameCore::CakeRaceCellType a1)
	{
		return ((::RPG::GameCore::CakeRaceTrapCellConfig*(*)(::PVOID, ::RPG::GameCore::CakeRaceCellType))((::PBYTE)hIl2Cpp + CLASS_1_532073A7C89441B0_METHOD_1_BA2FCB635558A29A_OFFSET))(this, a1);
	}

	::System::Void Method_1_A40475C44AA8CEAB_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_532073A7C89441B0_METHOD_1_A40475C44AA8CEAB_1_OFFSET))(this);
	}

	static ::Class_1_532073A7C89441B0* Method_1_86BA2792D7CF609B(::Class_3_FA020C2C23A72B3F* a1)
	{
		return ((::Class_1_532073A7C89441B0*(*)(::Class_3_FA020C2C23A72B3F*))((::PBYTE)hIl2Cpp + CLASS_1_532073A7C89441B0_METHOD_1_86BA2792D7CF609B_OFFSET))(a1);
	}

	::RPG::GameCore::LittleGameEntityConfig* Method_1_0AA8AFDA0080A6CB(::RPG::GameCore::LittleGameEntityType a1)
	{
		return ((::RPG::GameCore::LittleGameEntityConfig*(*)(::PVOID, ::RPG::GameCore::LittleGameEntityType))((::PBYTE)hIl2Cpp + CLASS_1_532073A7C89441B0_METHOD_1_0AA8AFDA0080A6CB_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::RPG::GameCore::LittleGameEntityConfig*>* Method_1_47CA6847BD027141(::RPG::GameCore::LittleGameEntityType a1)
	{
		return ((::System::Collections::Generic::List_1<::RPG::GameCore::LittleGameEntityConfig*>*(*)(::PVOID, ::RPG::GameCore::LittleGameEntityType))((::PBYTE)hIl2Cpp + CLASS_1_532073A7C89441B0_METHOD_1_47CA6847BD027141_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3Int Method_1_9FD8E221709F0371(::UnityEngine::Vector3 a1)
	{
		return ((::UnityEngine::Vector3Int(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_532073A7C89441B0_METHOD_1_9FD8E221709F0371_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3Int Method_1_F3A713F9850A9E5A(::UnityEngine::Vector3 a1)
	{
		return ((::UnityEngine::Vector3Int(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_532073A7C89441B0_METHOD_1_F3A713F9850A9E5A_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3Int Method_1_688F4FCB430FDDC8(::UnityEngine::Vector3 a1)
	{
		return ((::UnityEngine::Vector3Int(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_532073A7C89441B0_METHOD_1_688F4FCB430FDDC8_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 Method_1_9FD8E221709F0371_1(::UnityEngine::Vector3Int a1)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3Int))((::PBYTE)hIl2Cpp + CLASS_1_532073A7C89441B0_METHOD_1_9FD8E221709F0371_1_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 Method_1_F13EC5A802809C06(::UnityEngine::Vector3Int a1)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3Int))((::PBYTE)hIl2Cpp + CLASS_1_532073A7C89441B0_METHOD_1_F13EC5A802809C06_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3Int Method_1_E254052FA953AC88(::UnityEngine::Vector3Int a1)
	{
		return ((::UnityEngine::Vector3Int(*)(::PVOID, ::UnityEngine::Vector3Int))((::PBYTE)hIl2Cpp + CLASS_1_532073A7C89441B0_METHOD_1_E254052FA953AC88_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3Int Method_1_6EA7FFD67A33C6EF(::UnityEngine::Vector3 a1)
	{
		return ((::UnityEngine::Vector3Int(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_532073A7C89441B0_METHOD_1_6EA7FFD67A33C6EF_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_BCB4D10ABD09AFD3(::RPG::GameCore::CakeRaceCellType a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::CakeRaceCellType))((::PBYTE)hIl2Cpp + CLASS_1_532073A7C89441B0_METHOD_1_BCB4D10ABD09AFD3_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_B3F94C095ACAE0B6(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_532073A7C89441B0_METHOD_1_B3F94C095ACAE0B6_OFFSET))(this, a1);
	}
};
