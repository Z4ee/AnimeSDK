#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigHollowChessboard_BigTVMoveFireEffect_EffectInfo.h"
#include "unitysdk/MoleMole/Config/ConfigHollowChessboard_BigTVMoveFireEffect_RuntimeEffectInfo.h"
#include "unitysdk/MoleMole/Config/ConfigHollowChessboard_ChessEffectBase.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"
#include "unitysdk/MoleMole/Vector2Int.h"
#include "unitysdk/ProtoScript/HollowGridLink.h"

class Class_1_8CE3173023BA2453;
class Class_5_A6F8D19602712D95;
class Class_5_FCAF801AC482D3B5;
namespace MoleMole::Config { class ConfigHollowChessboard_ChessEffectRunContextBase; }
namespace System { template <typename T> class Action_1; }
namespace System { template <typename T> class Lazy_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARD_BIGTVMOVEFIREEFFECT_CREATERUNTIMEEFFECTLIST_OFFSET UNITYSDK_OFFSET(0x18AD49F0)
#define MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARD_BIGTVMOVEFIREEFFECT_GETGRIDEXISTLIST_OFFSET UNITYSDK_OFFSET(0x18AD4660)
#define MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARD_BIGTVMOVEFIREEFFECT_GET_TOTALDURATION_OFFSET UNITYSDK_OFFSET(0x18AD41C0)
#define MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARD_BIGTVMOVEFIREEFFECT_RUN_OFFSET UNITYSDK_OFFSET(0x18AD41D0)
#define MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARD_BIGTVMOVEFIREEFFECT_TRYCREATECREATERUNTIMEEFFECTINFO_OFFSET UNITYSDK_OFFSET(0x18AD4D10)
#define MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARD_BIGTVMOVEFIREEFFECT__CCTOR_OFFSET UNITYSDK_OFFSET(0x18AD50A0)
#define MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARD_BIGTVMOVEFIREEFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0x18AD5090)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigHollowChessboard_BigTVMoveFireEffect_TypeDefinitionIndex = 64406;

	class ConfigHollowChessboard_BigTVMoveFireEffect : public ::MoleMole::Config::ConfigHollowChessboard_ChessEffectBase
	{
	public:
		static ::System::Lazy_1<::System::Collections::Generic::List_1<::MoleMole::Vector2Int>*>** StaticGet__indexOffset()
		{
			return (::System::Lazy_1<::System::Collections::Generic::List_1<::MoleMole::Vector2Int>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigHollowChessboard_BigTVMoveFireEffect_TypeDefinitionIndex)->GetStaticField(0x39BC0);
		}
		::System::Collections::Generic::List_1<::MoleMole::Config::ConfigHollowChessboard_BigTVMoveFireEffect_EffectInfo>* InfoList; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARD_BIGTVMOVEFIREEFFECT__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARD_BIGTVMOVEFIREEFFECT__CCTOR_OFFSET))();
		}

		::System::Single get_totalDuration()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARD_BIGTVMOVEFIREEFFECT_GET_TOTALDURATION_OFFSET))(this);
		}

		::System::Void Run(::Class_5_A6F8D19602712D95* chessPiece, ::System::Action_1<::MoleMole::Config::ConfigHollowChessboard_ChessEffectBase*>* endCallback, ::MoleMole::Config::ConfigHollowChessboard_ChessEffectRunContextBase* context, ::Class_1_8CE3173023BA2453* timeScale)
		{
			return ((::System::Void(*)(::PVOID, ::Class_5_A6F8D19602712D95*, ::System::Action_1<::MoleMole::Config::ConfigHollowChessboard_ChessEffectBase*>*, ::MoleMole::Config::ConfigHollowChessboard_ChessEffectRunContextBase*, ::Class_1_8CE3173023BA2453*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARD_BIGTVMOVEFIREEFFECT_RUN_OFFSET))(this, chessPiece, endCallback, context, timeScale);
		}

		::System::Collections::Generic::List_1<::MoleMole::Config::ConfigHollowChessboard_BigTVMoveFireEffect_RuntimeEffectInfo>* CreateRuntimeEffectList(::Class_5_A6F8D19602712D95* chessPiece, ::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowCell>* gridsFullIndex, ::ProtoScript::HollowGridLink moveDir)
		{
			return ((::System::Collections::Generic::List_1<::MoleMole::Config::ConfigHollowChessboard_BigTVMoveFireEffect_RuntimeEffectInfo>*(*)(::PVOID, ::Class_5_A6F8D19602712D95*, ::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowCell>*, ::ProtoScript::HollowGridLink))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARD_BIGTVMOVEFIREEFFECT_CREATERUNTIMEEFFECTLIST_OFFSET))(this, chessPiece, gridsFullIndex, moveDir);
		}

		::System::Void TryCreateCreateRuntimeEffectInfo(::Class_5_A6F8D19602712D95* chessPiece, ::Class_5_FCAF801AC482D3B5* chessboard, ::System::Collections::Generic::List_1<::MoleMole::Config::ConfigHollowChessboard_BigTVMoveFireEffect_RuntimeEffectInfo>* inRuntimeEffectList, ::MoleMole::Config::ConfigHollowChessboard_BigTVMoveFireEffect_EffectInfo& effectInfo, ::MoleMole::HollowChessboard::HollowCell fullIndex, ::System::Boolean inIsRightSide, ::System::Boolean inIsMirror, ::System::Boolean inIsUpDir)
		{
			return ((::System::Void(*)(::PVOID, ::Class_5_A6F8D19602712D95*, ::Class_5_FCAF801AC482D3B5*, ::System::Collections::Generic::List_1<::MoleMole::Config::ConfigHollowChessboard_BigTVMoveFireEffect_RuntimeEffectInfo>*, ::MoleMole::Config::ConfigHollowChessboard_BigTVMoveFireEffect_EffectInfo&, ::MoleMole::HollowChessboard::HollowCell, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARD_BIGTVMOVEFIREEFFECT_TRYCREATECREATERUNTIMEEFFECTINFO_OFFSET))(this, chessPiece, chessboard, inRuntimeEffectList, effectInfo, fullIndex, inIsRightSide, inIsMirror, inIsUpDir);
		}

		::System::Boolean GetGridExistList(::Class_5_A6F8D19602712D95* chessPiece, ::ProtoScript::HollowGridLink curMoveDir, ::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowCell>*& gridsExist)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_5_A6F8D19602712D95*, ::ProtoScript::HollowGridLink, ::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowCell>*&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARD_BIGTVMOVEFIREEFFECT_GETGRIDEXISTLIST_OFFSET))(this, chessPiece, curMoveDir, gridsExist);
		}
	};
}
