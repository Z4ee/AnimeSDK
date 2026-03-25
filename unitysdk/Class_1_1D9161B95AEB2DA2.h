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
class Class_1_24C2E7EF22229C6A;
class Class_1_CB93BA65C1FA482A;
class Class_2_9DD8A46984F1AFFD;
class Class_3_1A92845FAFA5EC77;
namespace RPG { template <typename T1, typename T2> class PoolDictionary_2; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Tuple_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace UnityEngine { class Collider; }
namespace UnityEngine { class Collision; }

#define CLASS_1_1D9161B95AEB2DA2_DISPOSE_OFFSET UNITYSDK_OFFSET(0x118A9FF0)
#define CLASS_1_1D9161B95AEB2DA2_METHOD_1_070BDEDA445C3ECD_OFFSET UNITYSDK_OFFSET(0x118AA3D0)
#define CLASS_1_1D9161B95AEB2DA2_METHOD_1_0CDB2F9957E5574B_OFFSET UNITYSDK_OFFSET(0x118BA660)
#define CLASS_1_1D9161B95AEB2DA2_METHOD_1_100843C949699661_OFFSET UNITYSDK_OFFSET(0x118BDFC0)
#define CLASS_1_1D9161B95AEB2DA2_METHOD_1_1ECEDD21A002C3AC_1_OFFSET UNITYSDK_OFFSET(0x118B8970)
#define CLASS_1_1D9161B95AEB2DA2_METHOD_1_1ECEDD21A002C3AC_OFFSET UNITYSDK_OFFSET(0x118B84F0)
#define CLASS_1_1D9161B95AEB2DA2_METHOD_1_1FC4CAF1D31EC204_OFFSET UNITYSDK_OFFSET(0x118BBF70)
#define CLASS_1_1D9161B95AEB2DA2_METHOD_1_45F0369A056A5CE7_OFFSET UNITYSDK_OFFSET(0x118BC5B0)
#define CLASS_1_1D9161B95AEB2DA2_METHOD_1_4645DB336D582057_OFFSET UNITYSDK_OFFSET(0x118BD870)
#define CLASS_1_1D9161B95AEB2DA2_METHOD_1_4CF69163E59DA6BE_OFFSET UNITYSDK_OFFSET(0x118BC7E0)
#define CLASS_1_1D9161B95AEB2DA2_METHOD_1_5001618CC6722171_1_OFFSET UNITYSDK_OFFSET(0x118BD180)
#define CLASS_1_1D9161B95AEB2DA2_METHOD_1_5001618CC6722171_OFFSET UNITYSDK_OFFSET(0x118BCC00)
#define CLASS_1_1D9161B95AEB2DA2_METHOD_1_503073FB57C7AA07_OFFSET UNITYSDK_OFFSET(0x118BB5B0)
#define CLASS_1_1D9161B95AEB2DA2_METHOD_1_51B1913088EB79E1_OFFSET UNITYSDK_OFFSET(0x118BB7E0)
#define CLASS_1_1D9161B95AEB2DA2_METHOD_1_51E5EEEA00253CC2_OFFSET UNITYSDK_OFFSET(0x118BBAE0)
#define CLASS_1_1D9161B95AEB2DA2_METHOD_1_532B7320C9373143_OFFSET UNITYSDK_OFFSET(0x118BB630)
#define CLASS_1_1D9161B95AEB2DA2_METHOD_1_55FB2EF0CF995ED8_OFFSET UNITYSDK_OFFSET(0x118B8DF0)
#define CLASS_1_1D9161B95AEB2DA2_METHOD_1_644FCFB3A0C74B6F_OFFSET UNITYSDK_OFFSET(0x118B9380)
#define CLASS_1_1D9161B95AEB2DA2_METHOD_1_655DDB722F1FDE73_OFFSET UNITYSDK_OFFSET(0x118AA560)
#define CLASS_1_1D9161B95AEB2DA2_METHOD_1_6916CB2AB9451DD7_OFFSET UNITYSDK_OFFSET(0x118AA040)
#define CLASS_1_1D9161B95AEB2DA2_METHOD_1_6A564E2650A7FFFF_OFFSET UNITYSDK_OFFSET(0x118BBA20)
#define CLASS_1_1D9161B95AEB2DA2_METHOD_1_6D19BB7866DAB074_OFFSET UNITYSDK_OFFSET(0x118BDCE0)
#define CLASS_1_1D9161B95AEB2DA2_METHOD_1_79830F666EE579C0_1_OFFSET UNITYSDK_OFFSET(0x118BDEB0)
#define CLASS_1_1D9161B95AEB2DA2_METHOD_1_79830F666EE579C0_OFFSET UNITYSDK_OFFSET(0x118BDBE0)
#define CLASS_1_1D9161B95AEB2DA2_METHOD_1_8E8C91E86CE07FD5_OFFSET UNITYSDK_OFFSET(0x11897620)
#define CLASS_1_1D9161B95AEB2DA2_METHOD_1_97D83E4CB3B11935_OFFSET UNITYSDK_OFFSET(0x118BD700)
#define CLASS_1_1D9161B95AEB2DA2_METHOD_1_A7625B916F49CA9F_OFFSET UNITYSDK_OFFSET(0x118B73D0)
#define CLASS_1_1D9161B95AEB2DA2_METHOD_1_A7C4A6FA5DA2B20C_OFFSET UNITYSDK_OFFSET(0x118AA900)
#define CLASS_1_1D9161B95AEB2DA2_METHOD_1_AC2C2503E572B35E_OFFSET UNITYSDK_OFFSET(0x118AA240)
#define CLASS_1_1D9161B95AEB2DA2_METHOD_1_B0034881F9EBE4AD_OFFSET UNITYSDK_OFFSET(0x118B9190)
#define CLASS_1_1D9161B95AEB2DA2_METHOD_1_C4B2681812B3B584_1_OFFSET UNITYSDK_OFFSET(0x118B0AF0)
#define CLASS_1_1D9161B95AEB2DA2_METHOD_1_C4B2681812B3B584_OFFSET UNITYSDK_OFFSET(0x118AB3C0)
#define CLASS_1_1D9161B95AEB2DA2_METHOD_1_C7BF9C1E6A78DCAB_OFFSET UNITYSDK_OFFSET(0x118BC3C0)
#define CLASS_1_1D9161B95AEB2DA2_METHOD_1_CA7AE65E5D65413C_OFFSET UNITYSDK_OFFSET(0x118AA440)
#define CLASS_1_1D9161B95AEB2DA2_METHOD_1_D3BB66572D7E1E95_OFFSET UNITYSDK_OFFSET(0x118B9790)
#define CLASS_1_1D9161B95AEB2DA2_METHOD_1_D7863B3865B81FC2_OFFSET UNITYSDK_OFFSET(0x118BAB30)
#define CLASS_1_1D9161B95AEB2DA2_METHOD_1_DFEC27F1F6CA5A80_OFFSET UNITYSDK_OFFSET(0x118BDA50)
#define CLASS_1_1D9161B95AEB2DA2_METHOD_1_E1486BEFBA700CB8_OFFSET UNITYSDK_OFFSET(0x118B7C50)
#define CLASS_1_1D9161B95AEB2DA2_METHOD_1_E2F60B2753942D10_OFFSET UNITYSDK_OFFSET(0x118B9F40)
#define CLASS_1_1D9161B95AEB2DA2_METHOD_1_E8FD5761E15701ED_OFFSET UNITYSDK_OFFSET(0x118BBC40)
#define CLASS_1_1D9161B95AEB2DA2_METHOD_1_F32D6DFEB4A59E15_OFFSET UNITYSDK_OFFSET(0x118B6220)
#define CLASS_1_1D9161B95AEB2DA2_METHOD_1_F476304D68944B28_1_OFFSET UNITYSDK_OFFSET(0x118BA2A0)
#define CLASS_1_1D9161B95AEB2DA2_METHOD_1_F476304D68944B28_OFFSET UNITYSDK_OFFSET(0x118B9C60)
#define CLASS_1_1D9161B95AEB2DA2_METHOD_1_F4EB328C18549868_OFFSET UNITYSDK_OFFSET(0x118B9430)
#define CLASS_1_1D9161B95AEB2DA2_METHOD_1_F53D1A91B3932B29_OFFSET UNITYSDK_OFFSET(0x118BC0E0)
#define CLASS_1_1D9161B95AEB2DA2__CTOR_OFFSET UNITYSDK_OFFSET(0x118A9E90)

inline static constexpr unsigned int Class_1_1D9161B95AEB2DA2_TypeDefinitionIndex = 62591;

class Class_1_1D9161B95AEB2DA2 : public ::System::Object
{
public:
	::Class_1_1D9161B95AEB2DA2_Class_1_EE9B86BAF05B6550* Field_1_2; // 0x10
	::System::Collections::Generic::HashSet_1<::System::UInt32>* Field_1_3; // 0x18
	::Class_1_24C2E7EF22229C6A* Field_1_0; // 0x20
	::Class_3_1A92845FAFA5EC77* Field_1_1; // 0x28

	::System::Void _ctor(::Class_1_24C2E7EF22229C6A* a1, ::Class_3_1A92845FAFA5EC77* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_24C2E7EF22229C6A*, ::Class_3_1A92845FAFA5EC77*))((::PBYTE)hIl2Cpp + CLASS_1_1D9161B95AEB2DA2__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1D9161B95AEB2DA2_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_6916CB2AB9451DD7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1D9161B95AEB2DA2_METHOD_1_6916CB2AB9451DD7_OFFSET))(this);
	}

	::System::Void Method_1_AC2C2503E572B35E(::System::String* a1, ::RPG::Client::LittleGame::FiveDim::FiveDimEnterType a2, ::System::UInt32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::RPG::Client::LittleGame::FiveDim::FiveDimEnterType, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_1D9161B95AEB2DA2_METHOD_1_AC2C2503E572B35E_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_CA7AE65E5D65413C(::RPG::Client::LittleGame::FiveDim::FiveDimExitType a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::FiveDim::FiveDimExitType, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_1D9161B95AEB2DA2_METHOD_1_CA7AE65E5D65413C_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_655DDB722F1FDE73()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1D9161B95AEB2DA2_METHOD_1_655DDB722F1FDE73_OFFSET))(this);
	}

	::System::Void Method_1_A7C4A6FA5DA2B20C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1D9161B95AEB2DA2_METHOD_1_A7C4A6FA5DA2B20C_OFFSET))(this);
	}

	::System::Void Method_1_55FB2EF0CF995ED8(::RPG::GameCore::FiveDimGameplayMode a1, ::RPG::Client::LittleGame::FiveDim::FiveDimMiniGameEnterType a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FiveDimGameplayMode, ::RPG::Client::LittleGame::FiveDim::FiveDimMiniGameEnterType))((::PBYTE)hIl2Cpp + CLASS_1_1D9161B95AEB2DA2_METHOD_1_55FB2EF0CF995ED8_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_F4EB328C18549868(::System::Int32 a1, ::System::UInt32 a2, ::System::UInt32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_1D9161B95AEB2DA2_METHOD_1_F4EB328C18549868_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_D3BB66572D7E1E95(::RPG::GameCore::FiveDimGameplayMode a1, ::RPG::Client::LittleGame::FiveDim::FiveDimMiniGameExitType a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FiveDimGameplayMode, ::RPG::Client::LittleGame::FiveDim::FiveDimMiniGameExitType))((::PBYTE)hIl2Cpp + CLASS_1_1D9161B95AEB2DA2_METHOD_1_D3BB66572D7E1E95_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_F476304D68944B28(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_1D9161B95AEB2DA2_METHOD_1_F476304D68944B28_OFFSET))(this, a1);
	}

	::System::Void Method_1_E2F60B2753942D10(::System::UInt32 a1, ::System::Int32 a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_1D9161B95AEB2DA2_METHOD_1_E2F60B2753942D10_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_F476304D68944B28_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_1D9161B95AEB2DA2_METHOD_1_F476304D68944B28_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_0CDB2F9957E5574B(::System::UInt32 a1, ::System::Boolean a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Int32 a5, ::System::Collections::Generic::IEnumerable_1<::System::Tuple_2<::System::String*, ::System::Int16>*>* a6)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Collections::Generic::IEnumerable_1<::System::Tuple_2<::System::String*, ::System::Int16>*>*))((::PBYTE)hIl2Cpp + CLASS_1_1D9161B95AEB2DA2_METHOD_1_0CDB2F9957E5574B_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::String* Method_1_D7863B3865B81FC2(::System::Collections::Generic::IEnumerable_1<::System::Tuple_2<::System::String*, ::System::Int16>*>* a1)
	{
		return ((::System::String*(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::System::Tuple_2<::System::String*, ::System::Int16>*>*))((::PBYTE)hIl2Cpp + CLASS_1_1D9161B95AEB2DA2_METHOD_1_D7863B3865B81FC2_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_B0034881F9EBE4AD(::RPG::GameCore::FiveDimGameplayMode a1, ::System::String*& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::FiveDimGameplayMode, ::System::String*&))((::PBYTE)hIl2Cpp + CLASS_1_1D9161B95AEB2DA2_METHOD_1_B0034881F9EBE4AD_OFFSET))(this, a1, a2);
	}

	::System::UInt32 Method_1_644FCFB3A0C74B6F(::RPG::GameCore::FiveDimGameplayMode a1)
	{
		return ((::System::UInt32(*)(::PVOID, ::RPG::GameCore::FiveDimGameplayMode))((::PBYTE)hIl2Cpp + CLASS_1_1D9161B95AEB2DA2_METHOD_1_644FCFB3A0C74B6F_OFFSET))(this, a1);
	}

	::System::Void Method_1_070BDEDA445C3ECD(::Class_1_CB93BA65C1FA482A* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_CB93BA65C1FA482A*))((::PBYTE)hIl2Cpp + CLASS_1_1D9161B95AEB2DA2_METHOD_1_070BDEDA445C3ECD_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_503073FB57C7AA07(::UnityEngine::Collider* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + CLASS_1_1D9161B95AEB2DA2_METHOD_1_503073FB57C7AA07_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_51B1913088EB79E1(::RPG::PoolDictionary_2<::UnityEngine::Collider*, ::UnityEngine::Collision*>* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::PoolDictionary_2<::UnityEngine::Collider*, ::UnityEngine::Collision*>*))((::PBYTE)hIl2Cpp + CLASS_1_1D9161B95AEB2DA2_METHOD_1_51B1913088EB79E1_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_532B7320C9373143(::Class_2_9DD8A46984F1AFFD* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*))((::PBYTE)hIl2Cpp + CLASS_1_1D9161B95AEB2DA2_METHOD_1_532B7320C9373143_OFFSET))(this, a1);
	}

	::System::Void Method_1_6A564E2650A7FFFF(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_1D9161B95AEB2DA2_METHOD_1_6A564E2650A7FFFF_OFFSET))(this, a1);
	}

	::System::Void Method_1_51E5EEEA00253CC2(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_1D9161B95AEB2DA2_METHOD_1_51E5EEEA00253CC2_OFFSET))(this, a1);
	}

	::System::Void Method_1_E8FD5761E15701ED(::RPG::Client::LittleGame::FiveDim::AcquireFiveDimPlayerRebornReason a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::FiveDim::AcquireFiveDimPlayerRebornReason))((::PBYTE)hIl2Cpp + CLASS_1_1D9161B95AEB2DA2_METHOD_1_E8FD5761E15701ED_OFFSET))(this, a1);
	}

	::System::String* Method_1_C4B2681812B3B584()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1D9161B95AEB2DA2_METHOD_1_C4B2681812B3B584_OFFSET))(this);
	}

	::System::Void Method_1_F53D1A91B3932B29(::RPG::Client::LittleGame::FiveDim::AcquireFiveDimPlayerBeatBackReason a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::FiveDim::AcquireFiveDimPlayerBeatBackReason))((::PBYTE)hIl2Cpp + CLASS_1_1D9161B95AEB2DA2_METHOD_1_F53D1A91B3932B29_OFFSET))(this, a1);
	}

	::System::String* Method_1_C4B2681812B3B584_1()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1D9161B95AEB2DA2_METHOD_1_C4B2681812B3B584_1_OFFSET))(this);
	}

	::System::Void Method_1_C7BF9C1E6A78DCAB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1D9161B95AEB2DA2_METHOD_1_C7BF9C1E6A78DCAB_OFFSET))(this);
	}

	::System::Void Method_1_4CF69163E59DA6BE(::RPG::Client::LittleGame::FiveDim::FiveDimStatisticPlayerActionType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::FiveDim::FiveDimStatisticPlayerActionType))((::PBYTE)hIl2Cpp + CLASS_1_1D9161B95AEB2DA2_METHOD_1_4CF69163E59DA6BE_OFFSET))(this, a1);
	}

	::System::Void Method_1_5001618CC6722171(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::UInt32 a4, ::System::UInt32 a5, ::System::UInt32 a6)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_1D9161B95AEB2DA2_METHOD_1_5001618CC6722171_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Void Method_1_5001618CC6722171_1(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::UInt32 a4, ::System::UInt32 a5, ::System::UInt32 a6)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_1D9161B95AEB2DA2_METHOD_1_5001618CC6722171_1_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Void Method_1_97D83E4CB3B11935()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1D9161B95AEB2DA2_METHOD_1_97D83E4CB3B11935_OFFSET))(this);
	}

	::System::Void Method_1_4645DB336D582057(::RPG::Client::LittleGame::Move::MoveState a1, ::RPG::Client::LittleGame::Move::MoveState a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::Move::MoveState, ::RPG::Client::LittleGame::Move::MoveState))((::PBYTE)hIl2Cpp + CLASS_1_1D9161B95AEB2DA2_METHOD_1_4645DB336D582057_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_DFEC27F1F6CA5A80()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1D9161B95AEB2DA2_METHOD_1_DFEC27F1F6CA5A80_OFFSET))(this);
	}

	::System::String* Method_1_E1486BEFBA700CB8()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1D9161B95AEB2DA2_METHOD_1_E1486BEFBA700CB8_OFFSET))(this);
	}

	::System::String* Method_1_1ECEDD21A002C3AC()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1D9161B95AEB2DA2_METHOD_1_1ECEDD21A002C3AC_OFFSET))(this);
	}

	::System::String* Method_1_1ECEDD21A002C3AC_1()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1D9161B95AEB2DA2_METHOD_1_1ECEDD21A002C3AC_1_OFFSET))(this);
	}

	::System::String* Method_1_F32D6DFEB4A59E15()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1D9161B95AEB2DA2_METHOD_1_F32D6DFEB4A59E15_OFFSET))(this);
	}

	::System::Void Method_1_45F0369A056A5CE7(::Class_1_CB93BA65C1FA482A* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_CB93BA65C1FA482A*))((::PBYTE)hIl2Cpp + CLASS_1_1D9161B95AEB2DA2_METHOD_1_45F0369A056A5CE7_OFFSET))(this, a1);
	}

	::System::Void Method_1_79830F666EE579C0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1D9161B95AEB2DA2_METHOD_1_79830F666EE579C0_OFFSET))(this);
	}

	::System::Void Method_1_8E8C91E86CE07FD5(::RPG::Client::LittleGame::FiveDim::FiveDimPlayerInteractType a1, ::Class_2_9DD8A46984F1AFFD* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::FiveDim::FiveDimPlayerInteractType, ::Class_2_9DD8A46984F1AFFD*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_1D9161B95AEB2DA2_METHOD_1_8E8C91E86CE07FD5_OFFSET))(this, a1, a2, a3);
	}

	::System::String* Method_1_A7625B916F49CA9F()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1D9161B95AEB2DA2_METHOD_1_A7625B916F49CA9F_OFFSET))(this);
	}

	::System::Void Method_1_6D19BB7866DAB074(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_1D9161B95AEB2DA2_METHOD_1_6D19BB7866DAB074_OFFSET))(this, a1);
	}

	::System::Void Method_1_79830F666EE579C0_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1D9161B95AEB2DA2_METHOD_1_79830F666EE579C0_1_OFFSET))(this);
	}

	::System::Void Method_1_100843C949699661(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_1D9161B95AEB2DA2_METHOD_1_100843C949699661_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_1FC4CAF1D31EC204()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1D9161B95AEB2DA2_METHOD_1_1FC4CAF1D31EC204_OFFSET))(this);
	}
};
