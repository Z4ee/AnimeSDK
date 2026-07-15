#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/AcquireFiveDimPlayerBeatBackReason.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/AcquireFiveDimPlayerRebornReason.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/FiveDimEnterType.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/FiveDimExitType.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/FiveDimMiniGameEnterType.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/FiveDimMiniGameExitType.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/FiveDimPlayerInteractType.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/FiveDimStatisticPlayerActionType.h"
#include "unitysdk/RPG/Client/LittleGame/Move/MoveState.h"
#include "unitysdk/RPG/GameCore/FiveDimGameplayMode.h"
#include "unitysdk/System/Object.h"

class Class_1_1D9161B95AEB2DA2_Class_1_EE9B86BAF05B6550;
class Class_1_B4357A1C72BABC6B;
class Class_1_CB93BA65C1FA482A;
class Class_2_B9E8C2EEAA5C96EC;
class Class_3_1E4F9B0ED3BF21DE;
namespace RPG { template <typename T1, typename T2> class PoolDictionary_2; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Tuple_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace UnityEngine { class Collider; }
namespace UnityEngine { class Collision; }

#define CLASS_1_1D9161B95AEB2DA2_DISPOSE_OFFSET UNITYSDK_OFFSET(0x176DC7E0)
#define CLASS_1_1D9161B95AEB2DA2_METHOD_1_07BBBCD8B7BDC663_OFFSET UNITYSDK_OFFSET(0x176EACA0)
#define CLASS_1_1D9161B95AEB2DA2_METHOD_1_0C1A9D6D9E04543C_OFFSET UNITYSDK_OFFSET(0x176CE990)
#define CLASS_1_1D9161B95AEB2DA2_METHOD_1_0CDB2F9957E5574B_OFFSET UNITYSDK_OFFSET(0x176E77B0)
#define CLASS_1_1D9161B95AEB2DA2_METHOD_1_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0x176CC260)
#define CLASS_1_1D9161B95AEB2DA2_METHOD_1_2C64889981DCAEA6_OFFSET UNITYSDK_OFFSET(0x176E9190)
#define CLASS_1_1D9161B95AEB2DA2_METHOD_1_32B4F5A1936E7F8C_OFFSET UNITYSDK_OFFSET(0x176E8A60)
#define CLASS_1_1D9161B95AEB2DA2_METHOD_1_34C54ADE820FC12E_OFFSET UNITYSDK_OFFSET(0x176E5A50)
#define CLASS_1_1D9161B95AEB2DA2_METHOD_1_3CCA0B8A31B650A8_OFFSET UNITYSDK_OFFSET(0x176E9490)
#define CLASS_1_1D9161B95AEB2DA2_METHOD_1_4CF69163E59DA6BE_OFFSET UNITYSDK_OFFSET(0x176E97F0)
#define CLASS_1_1D9161B95AEB2DA2_METHOD_1_51B1913088EB79E1_OFFSET UNITYSDK_OFFSET(0x176E8B90)
#define CLASS_1_1D9161B95AEB2DA2_METHOD_1_59142F0F818BA8A1_OFFSET UNITYSDK_OFFSET(0x176E3F90)
#define CLASS_1_1D9161B95AEB2DA2_METHOD_1_59C99D0ED4D4F1C7_OFFSET UNITYSDK_OFFSET(0x176DCBF0)
#define CLASS_1_1D9161B95AEB2DA2_METHOD_1_64496BEA38D53218_OFFSET UNITYSDK_OFFSET(0x176DCB80)
#define CLASS_1_1D9161B95AEB2DA2_METHOD_1_644FCFB3A0C74B6F_OFFSET UNITYSDK_OFFSET(0x176E63F0)
#define CLASS_1_1D9161B95AEB2DA2_METHOD_1_655DDB722F1FDE73_OFFSET UNITYSDK_OFFSET(0x176DCC90)
#define CLASS_1_1D9161B95AEB2DA2_METHOD_1_7A8E0877F8264081_OFFSET UNITYSDK_OFFSET(0x176E8F10)
#define CLASS_1_1D9161B95AEB2DA2_METHOD_1_7F9C807C717CB143_OFFSET UNITYSDK_OFFSET(0x176E64A0)
#define CLASS_1_1D9161B95AEB2DA2_METHOD_1_82E57BDB160B358B_OFFSET UNITYSDK_OFFSET(0x176E7C90)
#define CLASS_1_1D9161B95AEB2DA2_METHOD_1_8819C779F8922CE0_OFFSET UNITYSDK_OFFSET(0x176DCA80)
#define CLASS_1_1D9161B95AEB2DA2_METHOD_1_89EDA8A39E494E88_OFFSET UNITYSDK_OFFSET(0x176EAA60)
#define CLASS_1_1D9161B95AEB2DA2_METHOD_1_910DAC79A7F71E50_OFFSET UNITYSDK_OFFSET(0x176E2F40)
#define CLASS_1_1D9161B95AEB2DA2_METHOD_1_99053D1AE5A59190_OFFSET UNITYSDK_OFFSET(0x176DC830)
#define CLASS_1_1D9161B95AEB2DA2_METHOD_1_9EF071EFB1B6B19B_OFFSET UNITYSDK_OFFSET(0x176E4880)
#define CLASS_1_1D9161B95AEB2DA2_METHOD_1_ABD23FFA448A6BA2_OFFSET UNITYSDK_OFFSET(0x176EA760)
#define CLASS_1_1D9161B95AEB2DA2_METHOD_1_ACE8186261E8D897_1_OFFSET UNITYSDK_OFFSET(0x176E0590)
#define CLASS_1_1D9161B95AEB2DA2_METHOD_1_ACE8186261E8D897_OFFSET UNITYSDK_OFFSET(0x176DDBE0)
#define CLASS_1_1D9161B95AEB2DA2_METHOD_1_ADB0DB7411609665_OFFSET UNITYSDK_OFFSET(0x176E9260)
#define CLASS_1_1D9161B95AEB2DA2_METHOD_1_B0034881F9EBE4AD_OFFSET UNITYSDK_OFFSET(0x176E6200)
#define CLASS_1_1D9161B95AEB2DA2_METHOD_1_B135819BF0D9DD40_OFFSET UNITYSDK_OFFSET(0x176E89E0)
#define CLASS_1_1D9161B95AEB2DA2_METHOD_1_BA1BB49741CFDFE1_OFFSET UNITYSDK_OFFSET(0x176EA8C0)
#define CLASS_1_1D9161B95AEB2DA2_METHOD_1_CBD42B47F20F2A16_OFFSET UNITYSDK_OFFSET(0x176E5E70)
#define CLASS_1_1D9161B95AEB2DA2_METHOD_1_D0BD1377F2594D33_1_OFFSET UNITYSDK_OFFSET(0x176EAC10)
#define CLASS_1_1D9161B95AEB2DA2_METHOD_1_D0BD1377F2594D33_2_OFFSET UNITYSDK_OFFSET(0x176CFEA0)
#define CLASS_1_1D9161B95AEB2DA2_METHOD_1_D0BD1377F2594D33_3_OFFSET UNITYSDK_OFFSET(0x176EADF0)
#define CLASS_1_1D9161B95AEB2DA2_METHOD_1_D0BD1377F2594D33_OFFSET UNITYSDK_OFFSET(0x176EA9D0)
#define CLASS_1_1D9161B95AEB2DA2_METHOD_1_D3BB66572D7E1E95_OFFSET UNITYSDK_OFFSET(0x176E6850)
#define CLASS_1_1D9161B95AEB2DA2_METHOD_1_D5BFCD68F7DD77E2_OFFSET UNITYSDK_OFFSET(0x176E6D60)
#define CLASS_1_1D9161B95AEB2DA2_METHOD_1_E2F60B2753942D10_OFFSET UNITYSDK_OFFSET(0x176E7050)
#define CLASS_1_1D9161B95AEB2DA2_METHOD_1_EC23DC06D9179AD6_OFFSET UNITYSDK_OFFSET(0x176E8E00)
#define CLASS_1_1D9161B95AEB2DA2_METHOD_1_EDDFE9D4C5D04628_1_OFFSET UNITYSDK_OFFSET(0x176E5620)
#define CLASS_1_1D9161B95AEB2DA2_METHOD_1_EDDFE9D4C5D04628_OFFSET UNITYSDK_OFFSET(0x176E51F0)
#define CLASS_1_1D9161B95AEB2DA2_METHOD_1_EE27BA5388FE7451_OFFSET UNITYSDK_OFFSET(0x176E73D0)
#define CLASS_1_1D9161B95AEB2DA2_METHOD_1_F2F025114DE122A5_1_OFFSET UNITYSDK_OFFSET(0x176EA150)
#define CLASS_1_1D9161B95AEB2DA2_METHOD_1_F2F025114DE122A5_OFFSET UNITYSDK_OFFSET(0x176E9B40)
#define CLASS_1_1D9161B95AEB2DA2_METHOD_1_F4F61B09D32675B2_OFFSET UNITYSDK_OFFSET(0x176EAE80)
#define CLASS_1_1D9161B95AEB2DA2_METHOD_1_F63FE1AA9633F811_OFFSET UNITYSDK_OFFSET(0x176DD080)
#define CLASS_1_1D9161B95AEB2DA2_METHOD_1_FBB3443D127CBF20_OFFSET UNITYSDK_OFFSET(0x176E9600)
#define CLASS_1_1D9161B95AEB2DA2__CTOR_OFFSET UNITYSDK_OFFSET(0x176DC680)

inline static constexpr unsigned int Class_1_1D9161B95AEB2DA2_TypeDefinitionIndex = 72947;

class Class_1_1D9161B95AEB2DA2 : public ::System::Object
{
public:
	::Class_1_B4357A1C72BABC6B* Field_1_0; // 0x10
	::Class_3_1E4F9B0ED3BF21DE* Field_1_1; // 0x18
	::System::Collections::Generic::HashSet_1<::System::UInt32>* Field_1_2; // 0x20
	::Class_1_1D9161B95AEB2DA2_Class_1_EE9B86BAF05B6550* Field_1_3; // 0x28

	::System::Void _ctor(::Class_1_B4357A1C72BABC6B* a1, ::Class_3_1E4F9B0ED3BF21DE* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B4357A1C72BABC6B*, ::Class_3_1E4F9B0ED3BF21DE*))((::PBYTE)hIl2Cpp + CLASS_1_1D9161B95AEB2DA2__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1D9161B95AEB2DA2_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_99053D1AE5A59190()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1D9161B95AEB2DA2_METHOD_1_99053D1AE5A59190_OFFSET))(this);
	}

	::System::Void Method_1_8819C779F8922CE0(::System::String* a1, ::RPG::Client::LittleGame::FiveDim::FiveDimEnterType a2, ::System::UInt32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::RPG::Client::LittleGame::FiveDim::FiveDimEnterType, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_1D9161B95AEB2DA2_METHOD_1_8819C779F8922CE0_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_59C99D0ED4D4F1C7(::RPG::Client::LittleGame::FiveDim::FiveDimExitType a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::FiveDim::FiveDimExitType, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_1D9161B95AEB2DA2_METHOD_1_59C99D0ED4D4F1C7_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_655DDB722F1FDE73()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1D9161B95AEB2DA2_METHOD_1_655DDB722F1FDE73_OFFSET))(this);
	}

	::System::Void Method_1_F63FE1AA9633F811()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1D9161B95AEB2DA2_METHOD_1_F63FE1AA9633F811_OFFSET))(this);
	}

	::System::Void Method_1_CBD42B47F20F2A16(::RPG::GameCore::FiveDimGameplayMode a1, ::RPG::Client::LittleGame::FiveDim::FiveDimMiniGameEnterType a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FiveDimGameplayMode, ::RPG::Client::LittleGame::FiveDim::FiveDimMiniGameEnterType))((::PBYTE)hIl2Cpp + CLASS_1_1D9161B95AEB2DA2_METHOD_1_CBD42B47F20F2A16_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_7F9C807C717CB143(::System::Int32 a1, ::System::UInt32 a2, ::System::UInt32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_1D9161B95AEB2DA2_METHOD_1_7F9C807C717CB143_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_D3BB66572D7E1E95(::RPG::GameCore::FiveDimGameplayMode a1, ::RPG::Client::LittleGame::FiveDim::FiveDimMiniGameExitType a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FiveDimGameplayMode, ::RPG::Client::LittleGame::FiveDim::FiveDimMiniGameExitType))((::PBYTE)hIl2Cpp + CLASS_1_1D9161B95AEB2DA2_METHOD_1_D3BB66572D7E1E95_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_D5BFCD68F7DD77E2(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_1D9161B95AEB2DA2_METHOD_1_D5BFCD68F7DD77E2_OFFSET))(this, a1);
	}

	::System::Void Method_1_E2F60B2753942D10(::System::UInt32 a1, ::System::Int32 a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_1D9161B95AEB2DA2_METHOD_1_E2F60B2753942D10_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_EE27BA5388FE7451(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_1D9161B95AEB2DA2_METHOD_1_EE27BA5388FE7451_OFFSET))(this, a1);
	}

	::System::Void Method_1_0CDB2F9957E5574B(::System::UInt32 a1, ::System::Boolean a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Int32 a5, ::System::Collections::Generic::IEnumerable_1<::System::Tuple_2<::System::String*, ::System::Int16>*>* a6)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Collections::Generic::IEnumerable_1<::System::Tuple_2<::System::String*, ::System::Int16>*>*))((::PBYTE)hIl2Cpp + CLASS_1_1D9161B95AEB2DA2_METHOD_1_0CDB2F9957E5574B_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::String* Method_1_82E57BDB160B358B(::System::Collections::Generic::IEnumerable_1<::System::Tuple_2<::System::String*, ::System::Int16>*>* a1)
	{
		return ((::System::String*(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::System::Tuple_2<::System::String*, ::System::Int16>*>*))((::PBYTE)hIl2Cpp + CLASS_1_1D9161B95AEB2DA2_METHOD_1_82E57BDB160B358B_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_B0034881F9EBE4AD(::RPG::GameCore::FiveDimGameplayMode a1, ::System::String*& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::FiveDimGameplayMode, ::System::String*&))((::PBYTE)hIl2Cpp + CLASS_1_1D9161B95AEB2DA2_METHOD_1_B0034881F9EBE4AD_OFFSET))(this, a1, a2);
	}

	::System::UInt32 Method_1_644FCFB3A0C74B6F(::RPG::GameCore::FiveDimGameplayMode a1)
	{
		return ((::System::UInt32(*)(::PVOID, ::RPG::GameCore::FiveDimGameplayMode))((::PBYTE)hIl2Cpp + CLASS_1_1D9161B95AEB2DA2_METHOD_1_644FCFB3A0C74B6F_OFFSET))(this, a1);
	}

	::System::Void Method_1_64496BEA38D53218(::Class_1_CB93BA65C1FA482A* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_CB93BA65C1FA482A*))((::PBYTE)hIl2Cpp + CLASS_1_1D9161B95AEB2DA2_METHOD_1_64496BEA38D53218_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_B135819BF0D9DD40(::UnityEngine::Collider* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + CLASS_1_1D9161B95AEB2DA2_METHOD_1_B135819BF0D9DD40_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_51B1913088EB79E1(::RPG::PoolDictionary_2<::UnityEngine::Collider*, ::UnityEngine::Collision*>* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::PoolDictionary_2<::UnityEngine::Collider*, ::UnityEngine::Collision*>*))((::PBYTE)hIl2Cpp + CLASS_1_1D9161B95AEB2DA2_METHOD_1_51B1913088EB79E1_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_32B4F5A1936E7F8C(::Class_2_B9E8C2EEAA5C96EC* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*))((::PBYTE)hIl2Cpp + CLASS_1_1D9161B95AEB2DA2_METHOD_1_32B4F5A1936E7F8C_OFFSET))(this, a1);
	}

	::System::Void Method_1_0C1A9D6D9E04543C(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_1D9161B95AEB2DA2_METHOD_1_0C1A9D6D9E04543C_OFFSET))(this, a1);
	}

	::System::Void Method_1_EC23DC06D9179AD6(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_1D9161B95AEB2DA2_METHOD_1_EC23DC06D9179AD6_OFFSET))(this, a1);
	}

	::System::Void Method_1_7A8E0877F8264081(::RPG::Client::LittleGame::FiveDim::AcquireFiveDimPlayerRebornReason a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::FiveDim::AcquireFiveDimPlayerRebornReason))((::PBYTE)hIl2Cpp + CLASS_1_1D9161B95AEB2DA2_METHOD_1_7A8E0877F8264081_OFFSET))(this, a1);
	}

	::System::String* Method_1_ACE8186261E8D897()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1D9161B95AEB2DA2_METHOD_1_ACE8186261E8D897_OFFSET))(this);
	}

	::System::Void Method_1_ADB0DB7411609665(::RPG::Client::LittleGame::FiveDim::AcquireFiveDimPlayerBeatBackReason a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::FiveDim::AcquireFiveDimPlayerBeatBackReason))((::PBYTE)hIl2Cpp + CLASS_1_1D9161B95AEB2DA2_METHOD_1_ADB0DB7411609665_OFFSET))(this, a1);
	}

	::System::String* Method_1_ACE8186261E8D897_1()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1D9161B95AEB2DA2_METHOD_1_ACE8186261E8D897_1_OFFSET))(this);
	}

	::System::Void Method_1_3CCA0B8A31B650A8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1D9161B95AEB2DA2_METHOD_1_3CCA0B8A31B650A8_OFFSET))(this);
	}

	::System::Void Method_1_4CF69163E59DA6BE(::RPG::Client::LittleGame::FiveDim::FiveDimStatisticPlayerActionType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::FiveDim::FiveDimStatisticPlayerActionType))((::PBYTE)hIl2Cpp + CLASS_1_1D9161B95AEB2DA2_METHOD_1_4CF69163E59DA6BE_OFFSET))(this, a1);
	}

	::System::Void Method_1_F2F025114DE122A5(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::UInt32 a4, ::System::UInt32 a5, ::System::UInt32 a6)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_1D9161B95AEB2DA2_METHOD_1_F2F025114DE122A5_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Void Method_1_F2F025114DE122A5_1(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::UInt32 a4, ::System::UInt32 a5, ::System::UInt32 a6)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_1D9161B95AEB2DA2_METHOD_1_F2F025114DE122A5_1_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Void Method_1_1290EA767C459179()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1D9161B95AEB2DA2_METHOD_1_1290EA767C459179_OFFSET))(this);
	}

	::System::Void Method_1_ABD23FFA448A6BA2(::RPG::Client::LittleGame::Move::MoveState a1, ::RPG::Client::LittleGame::Move::MoveState a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::Move::MoveState, ::RPG::Client::LittleGame::Move::MoveState))((::PBYTE)hIl2Cpp + CLASS_1_1D9161B95AEB2DA2_METHOD_1_ABD23FFA448A6BA2_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_BA1BB49741CFDFE1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1D9161B95AEB2DA2_METHOD_1_BA1BB49741CFDFE1_OFFSET))(this);
	}

	::System::String* Method_1_9EF071EFB1B6B19B()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1D9161B95AEB2DA2_METHOD_1_9EF071EFB1B6B19B_OFFSET))(this);
	}

	::System::String* Method_1_EDDFE9D4C5D04628()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1D9161B95AEB2DA2_METHOD_1_EDDFE9D4C5D04628_OFFSET))(this);
	}

	::System::String* Method_1_EDDFE9D4C5D04628_1()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1D9161B95AEB2DA2_METHOD_1_EDDFE9D4C5D04628_1_OFFSET))(this);
	}

	::System::String* Method_1_910DAC79A7F71E50()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1D9161B95AEB2DA2_METHOD_1_910DAC79A7F71E50_OFFSET))(this);
	}

	::System::Void Method_1_FBB3443D127CBF20(::Class_1_CB93BA65C1FA482A* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_CB93BA65C1FA482A*))((::PBYTE)hIl2Cpp + CLASS_1_1D9161B95AEB2DA2_METHOD_1_FBB3443D127CBF20_OFFSET))(this, a1);
	}

	::System::Void Method_1_D0BD1377F2594D33()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1D9161B95AEB2DA2_METHOD_1_D0BD1377F2594D33_OFFSET))(this);
	}

	::System::Void Method_1_89EDA8A39E494E88(::RPG::Client::LittleGame::FiveDim::FiveDimPlayerInteractType a1, ::Class_2_B9E8C2EEAA5C96EC* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::FiveDim::FiveDimPlayerInteractType, ::Class_2_B9E8C2EEAA5C96EC*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_1D9161B95AEB2DA2_METHOD_1_89EDA8A39E494E88_OFFSET))(this, a1, a2, a3);
	}

	::System::String* Method_1_59142F0F818BA8A1()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1D9161B95AEB2DA2_METHOD_1_59142F0F818BA8A1_OFFSET))(this);
	}

	::System::String* Method_1_34C54ADE820FC12E()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1D9161B95AEB2DA2_METHOD_1_34C54ADE820FC12E_OFFSET))(this);
	}

	::System::Void Method_1_D0BD1377F2594D33_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1D9161B95AEB2DA2_METHOD_1_D0BD1377F2594D33_1_OFFSET))(this);
	}

	::System::Void Method_1_D0BD1377F2594D33_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1D9161B95AEB2DA2_METHOD_1_D0BD1377F2594D33_2_OFFSET))(this);
	}

	::System::Void Method_1_07BBBCD8B7BDC663(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_1D9161B95AEB2DA2_METHOD_1_07BBBCD8B7BDC663_OFFSET))(this, a1);
	}

	::System::Void Method_1_D0BD1377F2594D33_3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1D9161B95AEB2DA2_METHOD_1_D0BD1377F2594D33_3_OFFSET))(this);
	}

	::System::Void Method_1_F4F61B09D32675B2(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_1D9161B95AEB2DA2_METHOD_1_F4F61B09D32675B2_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_2C64889981DCAEA6()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1D9161B95AEB2DA2_METHOD_1_2C64889981DCAEA6_OFFSET))(this);
	}
};
