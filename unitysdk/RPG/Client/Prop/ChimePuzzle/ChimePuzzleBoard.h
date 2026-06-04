#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/ChimePuzzle/ChimeCoord.h"
#include "unitysdk/RPG/Client/Prop/ChimePuzzle/ChimeProxy.h"
#include "unitysdk/RPG/Client/Prop/ChimePuzzle/ChimePuzzleMode.h"
#include "unitysdk/RPG/Client/Prop/ChimePuzzle/ChimeType.h"
#include "unitysdk/RPG/Client/Prop/PuzzleBoardBase.h"

class Class_0_16E4307DCC419505_401;
class Class_1_10C1CA4432641F33;
class Class_1_3133E5682FCA6A92;
class Class_1_8EE73BB839E63837;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class PropInitPuzzle; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_PROP_CHIMEPUZZLE_CHIMEPUZZLEBOARD_DIMALLBOARD_OFFSET UNITYSDK_OFFSET(0xC4F1AC0)
#define RPG_CLIENT_PROP_CHIMEPUZZLE_CHIMEPUZZLEBOARD_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC4F1320)
#define RPG_CLIENT_PROP_CHIMEPUZZLE_CHIMEPUZZLEBOARD_INITPUZZLE_OFFSET UNITYSDK_OFFSET(0xC4F03D0)
#define RPG_CLIENT_PROP_CHIMEPUZZLE_CHIMEPUZZLEBOARD_METHOD_6_4438B031809D397B_OFFSET UNITYSDK_OFFSET(0xC4F1380)
#define RPG_CLIENT_PROP_CHIMEPUZZLE_CHIMEPUZZLEBOARD_METHOD_6_50F03662731E0345_OFFSET UNITYSDK_OFFSET(0xC4F25A0)
#define RPG_CLIENT_PROP_CHIMEPUZZLE_CHIMEPUZZLEBOARD_METHOD_6_8131D4D8C02BAA62_OFFSET UNITYSDK_OFFSET(0xC4F2510)
#define RPG_CLIENT_PROP_CHIMEPUZZLE_CHIMEPUZZLEBOARD_METHOD_6_A5B6063FFC26FC8F_OFFSET UNITYSDK_OFFSET(0xC4F1DB0)
#define RPG_CLIENT_PROP_CHIMEPUZZLE_CHIMEPUZZLEBOARD_METHOD_6_DD784213055292FB_1_OFFSET UNITYSDK_OFFSET(0xC4F16C0)
#define RPG_CLIENT_PROP_CHIMEPUZZLE_CHIMEPUZZLEBOARD_METHOD_6_DD784213055292FB_OFFSET UNITYSDK_OFFSET(0xC4F1080)
#define RPG_CLIENT_PROP_CHIMEPUZZLE_CHIMEPUZZLEBOARD_METHOD_6_E495EFFB22D4AFAB_OFFSET UNITYSDK_OFFSET(0xC4F1FB0)
#define RPG_CLIENT_PROP_CHIMEPUZZLE_CHIMEPUZZLEBOARD_METHOD_6_E885EC74FCEE16A4_OFFSET UNITYSDK_OFFSET(0xC4F04A0)
#define RPG_CLIENT_PROP_CHIMEPUZZLE_CHIMEPUZZLEBOARD_RESETPUZZLE_OFFSET UNITYSDK_OFFSET(0xC4F1960)
#define RPG_CLIENT_PROP_CHIMEPUZZLE_CHIMEPUZZLEBOARD_SETCHIMEWRONGSTATE_OFFSET UNITYSDK_OFFSET(0xC4F1C70)
#define RPG_CLIENT_PROP_CHIMEPUZZLE_CHIMEPUZZLEBOARD_SHOWBOARD_OFFSET UNITYSDK_OFFSET(0xC4F1BB0)
#define RPG_CLIENT_PROP_CHIMEPUZZLE_CHIMEPUZZLEBOARD__CCTOR_OFFSET UNITYSDK_OFFSET(0xC4F2B60)
#define RPG_CLIENT_PROP_CHIMEPUZZLE_CHIMEPUZZLEBOARD__CTOR_OFFSET UNITYSDK_OFFSET(0xC4F2940)
#define RPG_CLIENT_PROP_CHIMEPUZZLE_CHIMEPUZZLEBOARD___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC4F2CC0)
#define RPG_CLIENT_PROP_CHIMEPUZZLE_CHIMEPUZZLEBOARD___IFIXBASEPROXY_INITPUZZLE_OFFSET UNITYSDK_OFFSET(0xC4F2CB0)
#define RPG_CLIENT_PROP_CHIMEPUZZLE_CHIMEPUZZLEBOARD___IFIXBASEPROXY_RESETPUZZLE_OFFSET UNITYSDK_OFFSET(0xC4F2CD0)

namespace RPG::Client::Prop::ChimePuzzle
{
	inline static constexpr unsigned int ChimePuzzleBoard_TypeDefinitionIndex = 73506;

	class ChimePuzzleBoard : public ::RPG::Client::Prop::PuzzleBoardBase
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::Client::Prop::ChimePuzzle::ChimeType, ::System::Int32>** StaticGet_ChimeScore()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::Client::Prop::ChimePuzzle::ChimeType, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(ChimePuzzleBoard_TypeDefinitionIndex)->GetStaticField(0x12190);
		}
		::System::UInt32 ChimePuzzleGroupID; // 0x48
		::System::String* ChimePuzzleGroupIDDynamicString; // 0x50
		::RPG::Client::Prop::ChimePuzzle::ChimePuzzleMode Mode; // 0x58
		::System::Int32 MaxValue; // 0x5C
		::Il2CppArray<::System::Int32>* Combination; // 0x60
		::Il2CppArray<::System::Int32>* InitCombination; // 0x68
		::System::Collections::Generic::List_1<::RPG::Client::Prop::ChimePuzzle::ChimeProxy>* ChimeInfos; // 0x70
		::Il2CppArray<::RPG::Client::Prop::ChimePuzzle::ChimeCoord>* BrokenBlocks; // 0x78
		::Il2CppArray<::Class_1_3133E5682FCA6A92*>* _ChimeBoardProxise; // 0x80
		::Class_1_8EE73BB839E63837* _ChimePuzzleInst; // 0x88
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>* _ChimeRunTimeIDToIndex; // 0x90
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_10C1CA4432641F33*>* _ChimeViewProxyMap; // 0x98
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::HashSet_1<::System::Int32>*>* _BlockCoords; // 0xA0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMEPUZZLE_CHIMEPUZZLEBOARD__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMEPUZZLE_CHIMEPUZZLEBOARD__CCTOR_OFFSET))();
		}

		::System::Void InitPuzzle(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::TaskContext* a2, ::RPG::GameCore::PropInitPuzzle* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PropInitPuzzle*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMEPUZZLE_CHIMEPUZZLEBOARD_INITPUZZLE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMEPUZZLE_CHIMEPUZZLEBOARD_DISPOSE_OFFSET))(this);
		}

		::System::Void ResetPuzzle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMEPUZZLE_CHIMEPUZZLEBOARD_RESETPUZZLE_OFFSET))(this);
		}

		::System::Void DimAllBoard()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMEPUZZLE_CHIMEPUZZLEBOARD_DIMALLBOARD_OFFSET))(this);
		}

		::System::Void ShowBoard(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMEPUZZLE_CHIMEPUZZLEBOARD_SHOWBOARD_OFFSET))(this, a1);
		}

		::System::Void SetChimeWrongState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMEPUZZLE_CHIMEPUZZLEBOARD_SETCHIMEWRONGSTATE_OFFSET))(this);
		}

		::System::Void Method_6_4438B031809D397B(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMEPUZZLE_CHIMEPUZZLEBOARD_METHOD_6_4438B031809D397B_OFFSET))(this, a1);
		}

		::System::Boolean Method_6_E885EC74FCEE16A4(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMEPUZZLE_CHIMEPUZZLEBOARD_METHOD_6_E885EC74FCEE16A4_OFFSET))(this, a1);
		}

		::System::Void Method_6_E495EFFB22D4AFAB(::Class_0_16E4307DCC419505_401* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_401*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMEPUZZLE_CHIMEPUZZLEBOARD_METHOD_6_E495EFFB22D4AFAB_OFFSET))(this, a1);
		}

		::System::Void Method_6_A5B6063FFC26FC8F()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMEPUZZLE_CHIMEPUZZLEBOARD_METHOD_6_A5B6063FFC26FC8F_OFFSET))(this);
		}

		::System::Boolean Method_6_50F03662731E0345()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMEPUZZLE_CHIMEPUZZLEBOARD_METHOD_6_50F03662731E0345_OFFSET))(this);
		}

		::System::Void Method_6_DD784213055292FB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMEPUZZLE_CHIMEPUZZLEBOARD_METHOD_6_DD784213055292FB_OFFSET))(this);
		}

		::System::Void Method_6_DD784213055292FB_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMEPUZZLE_CHIMEPUZZLEBOARD_METHOD_6_DD784213055292FB_1_OFFSET))(this);
		}

		::System::Void Method_6_8131D4D8C02BAA62()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMEPUZZLE_CHIMEPUZZLEBOARD_METHOD_6_8131D4D8C02BAA62_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_InitPuzzle(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::TaskContext* a2, ::RPG::GameCore::PropInitPuzzle* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PropInitPuzzle*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMEPUZZLE_CHIMEPUZZLEBOARD___IFIXBASEPROXY_INITPUZZLE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void __iFixBaseProxy_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMEPUZZLE_CHIMEPUZZLEBOARD___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_ResetPuzzle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMEPUZZLE_CHIMEPUZZLEBOARD___IFIXBASEPROXY_RESETPUZZLE_OFFSET))(this);
		}
	};
}
