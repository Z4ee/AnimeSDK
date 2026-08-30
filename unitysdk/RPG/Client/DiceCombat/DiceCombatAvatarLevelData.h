#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class ActivityDiceCombatAvatarLevelRow; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_CLIENT_DICECOMBAT_DICECOMBATAVATARLEVELDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x19306D10)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATAVATARLEVELDATA_GETFRAMEPATHBYDICECOUNT_OFFSET UNITYSDK_OFFSET(0x19307120)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATAVATARLEVELDATA_GETUI3DFRAMEPATHBYDICECOUNT_OFFSET UNITYSDK_OFFSET(0x193071B0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATAVATARLEVELDATA_GET_FRONTANDBACKUI3DMATPATH_OFFSET UNITYSDK_OFFSET(0x19307240)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATAVATARLEVELDATA_GET_SIDEUI3DMATPATH_OFFSET UNITYSDK_OFFSET(0x19307290)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATAVATARLEVELDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x19306D00)

namespace RPG::Client::DiceCombat
{
	inline static constexpr unsigned int DiceCombatAvatarLevelData_TypeDefinitionIndex = 75589;

	class DiceCombatAvatarLevelData : public ::System::Object
	{
	public:
		::RPG::GameCore::ActivityDiceCombatAvatarLevelRow* _Row; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::String*>* _DiceCountFramePathMap; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::String*>* _DiceCountUI3DFramePathMap; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATAVATARLEVELDATA__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::DiceCombat::DiceCombatAvatarLevelData* Create(::RPG::GameCore::ActivityDiceCombatAvatarLevelRow* a1)
		{
			return ((::RPG::Client::DiceCombat::DiceCombatAvatarLevelData*(*)(::RPG::GameCore::ActivityDiceCombatAvatarLevelRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATAVATARLEVELDATA_CREATE_OFFSET))(a1);
		}

		::System::String* GetFramePathByDiceCount(::System::UInt32 a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATAVATARLEVELDATA_GETFRAMEPATHBYDICECOUNT_OFFSET))(this, a1);
		}

		::System::String* GetUI3DFramePathByDiceCount(::System::UInt32 a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATAVATARLEVELDATA_GETUI3DFRAMEPATHBYDICECOUNT_OFFSET))(this, a1);
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
