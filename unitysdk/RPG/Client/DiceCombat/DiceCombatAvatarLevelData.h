#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class ActivityDiceCombatAvatarLevelRow; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_CLIENT_DICECOMBAT_DICECOMBATAVATARLEVELDATA_CREATE_OFFSET UNITYSDK_OFFSET(0xA1182E0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATAVATARLEVELDATA_GETFRAMEPATHBYDICECOUNT_OFFSET UNITYSDK_OFFSET(0xA1186F0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATAVATARLEVELDATA_GETUI3DFRAMEPATHBYDICECOUNT_OFFSET UNITYSDK_OFFSET(0xA1187B0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATAVATARLEVELDATA_GET_FRONTANDBACKUI3DMATPATH_OFFSET UNITYSDK_OFFSET(0xA118870)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATAVATARLEVELDATA_GET_SIDEUI3DMATPATH_OFFSET UNITYSDK_OFFSET(0xA118890)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATAVATARLEVELDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xA1182D0)

namespace RPG::Client::DiceCombat
{
	inline static constexpr unsigned int DiceCombatAvatarLevelData_TypeDefinitionIndex = 69828;

	class DiceCombatAvatarLevelData : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::String*>* _DiceCountUI3DFramePathMap; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::String*>* _DiceCountFramePathMap; // 0x18
		::RPG::GameCore::ActivityDiceCombatAvatarLevelRow* _Row; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATAVATARLEVELDATA__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::DiceCombat::DiceCombatAvatarLevelData* Create(::RPG::GameCore::ActivityDiceCombatAvatarLevelRow* row)
		{
			return ((::RPG::Client::DiceCombat::DiceCombatAvatarLevelData*(*)(::RPG::GameCore::ActivityDiceCombatAvatarLevelRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATAVATARLEVELDATA_CREATE_OFFSET))(row);
		}

		::System::String* GetFramePathByDiceCount(::System::UInt32 diceCount)
		{
			return ((::System::String*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATAVATARLEVELDATA_GETFRAMEPATHBYDICECOUNT_OFFSET))(this, diceCount);
		}

		::System::String* GetUI3DFramePathByDiceCount(::System::UInt32 diceCount)
		{
			return ((::System::String*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATAVATARLEVELDATA_GETUI3DFRAMEPATHBYDICECOUNT_OFFSET))(this, diceCount);
		}

		::System::String* get_FrontAndBackUI3DMatPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATAVATARLEVELDATA_GET_FRONTANDBACKUI3DMATPATH_OFFSET))(this);
		}

		::System::String* get_SideUI3DMatPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATAVATARLEVELDATA_GET_SIDEUI3DMATPATH_OFFSET))(this);
		}
	};
}
