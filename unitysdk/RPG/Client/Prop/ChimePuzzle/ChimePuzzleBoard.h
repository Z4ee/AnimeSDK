#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/ChimePuzzle/ChimeCoord.h"
#include "unitysdk/RPG/Client/Prop/ChimePuzzle/ChimeProxy.h"
#include "unitysdk/RPG/Client/Prop/ChimePuzzle/ChimePuzzleMode.h"
#include "unitysdk/RPG/Client/Prop/ChimePuzzle/ChimeType.h"
#include "unitysdk/RPG/Client/Prop/PuzzleBoardBase.h"

class Class_0_16E4307DCC419505_382;
class Class_1_10C1CA4432641F33;
class Class_1_3133E5682FCA6A92;
class Class_1_A01E51E263E7AB9B;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class PropInitPuzzle; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_PROP_CHIMEPUZZLE_CHIMEPUZZLEBOARD_DIMALLBOARD_OFFSET UNITYSDK_OFFSET(0xADADBB0)
#define RPG_CLIENT_PROP_CHIMEPUZZLE_CHIMEPUZZLEBOARD_DISPOSE_OFFSET UNITYSDK_OFFSET(0xADAD520)
#define RPG_CLIENT_PROP_CHIMEPUZZLE_CHIMEPUZZLEBOARD_INITPUZZLE_OFFSET UNITYSDK_OFFSET(0xADAC7F0)
#define RPG_CLIENT_PROP_CHIMEPUZZLE_CHIMEPUZZLEBOARD_METHOD_6_187B4790D46C8F21_OFFSET UNITYSDK_OFFSET(0xADAE070)
#define RPG_CLIENT_PROP_CHIMEPUZZLE_CHIMEPUZZLEBOARD_METHOD_6_1DCC6201EDE6A3A0_OFFSET UNITYSDK_OFFSET(0xADAD410)
#define RPG_CLIENT_PROP_CHIMEPUZZLE_CHIMEPUZZLEBOARD_METHOD_6_50F03662731E0345_OFFSET UNITYSDK_OFFSET(0xADAE5E0)
#define RPG_CLIENT_PROP_CHIMEPUZZLE_CHIMEPUZZLEBOARD_METHOD_6_6809545EE0D44167_OFFSET UNITYSDK_OFFSET(0xADAD920)
#define RPG_CLIENT_PROP_CHIMEPUZZLE_CHIMEPUZZLEBOARD_METHOD_6_7DB49B5407C8FD68_OFFSET UNITYSDK_OFFSET(0xADADEC0)
#define RPG_CLIENT_PROP_CHIMEPUZZLE_CHIMEPUZZLEBOARD_METHOD_6_91D737883517099B_OFFSET UNITYSDK_OFFSET(0xADAC8B0)
#define RPG_CLIENT_PROP_CHIMEPUZZLE_CHIMEPUZZLEBOARD_METHOD_6_BA8C682AC210619E_OFFSET UNITYSDK_OFFSET(0xADAD580)
#define RPG_CLIENT_PROP_CHIMEPUZZLE_CHIMEPUZZLEBOARD_METHOD_6_D70C8B847AF08ADE_OFFSET UNITYSDK_OFFSET(0xADAE550)
#define RPG_CLIENT_PROP_CHIMEPUZZLE_CHIMEPUZZLEBOARD_RESETPUZZLE_OFFSET UNITYSDK_OFFSET(0xADADA30)
#define RPG_CLIENT_PROP_CHIMEPUZZLE_CHIMEPUZZLEBOARD_SETCHIMEWRONGSTATE_OFFSET UNITYSDK_OFFSET(0xADADD70)
#define RPG_CLIENT_PROP_CHIMEPUZZLE_CHIMEPUZZLEBOARD_SHOWBOARD_OFFSET UNITYSDK_OFFSET(0xADADCA0)
#define RPG_CLIENT_PROP_CHIMEPUZZLE_CHIMEPUZZLEBOARD__CCTOR_OFFSET UNITYSDK_OFFSET(0xADAEBA0)
#define RPG_CLIENT_PROP_CHIMEPUZZLE_CHIMEPUZZLEBOARD__CTOR_OFFSET UNITYSDK_OFFSET(0xADAE990)
#define RPG_CLIENT_PROP_CHIMEPUZZLE_CHIMEPUZZLEBOARD___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xADAED00)
#define RPG_CLIENT_PROP_CHIMEPUZZLE_CHIMEPUZZLEBOARD___IFIXBASEPROXY_INITPUZZLE_OFFSET UNITYSDK_OFFSET(0xADAECF0)
#define RPG_CLIENT_PROP_CHIMEPUZZLE_CHIMEPUZZLEBOARD___IFIXBASEPROXY_RESETPUZZLE_OFFSET UNITYSDK_OFFSET(0xADAED10)

namespace RPG::Client::Prop::ChimePuzzle
{
	inline static constexpr unsigned int ChimePuzzleBoard_TypeDefinitionIndex = 72484;

	class ChimePuzzleBoard : public ::RPG::Client::Prop::PuzzleBoardBase
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::Client::Prop::ChimePuzzle::ChimeType, ::System::Int32>** StaticGet_ChimeScore()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::Client::Prop::ChimePuzzle::ChimeType, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(ChimePuzzleBoard_TypeDefinitionIndex)->GetStaticField(0x5EE0);
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
		::Class_1_A01E51E263E7AB9B* _ChimePuzzleInst; // 0x88
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

		::System::Void Method_6_BA8C682AC210619E(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMEPUZZLE_CHIMEPUZZLEBOARD_METHOD_6_BA8C682AC210619E_OFFSET))(this, a1);
		}

		::System::Boolean Method_6_91D737883517099B(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMEPUZZLE_CHIMEPUZZLEBOARD_METHOD_6_91D737883517099B_OFFSET))(this, a1);
		}

		::System::Void Method_6_187B4790D46C8F21(::Class_0_16E4307DCC419505_382* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_382*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMEPUZZLE_CHIMEPUZZLEBOARD_METHOD_6_187B4790D46C8F21_OFFSET))(this, a1);
		}

		::System::Void Method_6_7DB49B5407C8FD68()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMEPUZZLE_CHIMEPUZZLEBOARD_METHOD_6_7DB49B5407C8FD68_OFFSET))(this);
		}

		::System::Boolean Method_6_50F03662731E0345()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMEPUZZLE_CHIMEPUZZLEBOARD_METHOD_6_50F03662731E0345_OFFSET))(this);
		}

		::System::Void Method_6_1DCC6201EDE6A3A0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMEPUZZLE_CHIMEPUZZLEBOARD_METHOD_6_1DCC6201EDE6A3A0_OFFSET))(this);
		}

		::System::Void Method_6_6809545EE0D44167()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMEPUZZLE_CHIMEPUZZLEBOARD_METHOD_6_6809545EE0D44167_OFFSET))(this);
		}

		::System::Void Method_6_D70C8B847AF08ADE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMEPUZZLE_CHIMEPUZZLEBOARD_METHOD_6_D70C8B847AF08ADE_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_InitPuzzle(::RPG::GameCore::GameEntity* P0, ::RPG::GameCore::TaskContext* P1, ::RPG::GameCore::PropInitPuzzle* P2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PropInitPuzzle*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMEPUZZLE_CHIMEPUZZLEBOARD___IFIXBASEPROXY_INITPUZZLE_OFFSET))(this, P0, P1, P2);
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
