#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::AvatarSystem { class IAvatar; }
namespace RPG::GameCore { class RogueArcadeConfigRow; }
namespace RPG::GameCore { class RogueArcadeTypeConfigRow; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ROGUEARCADEROOMDATA_CREATE_OFFSET UNITYSDK_OFFSET(0xC76D5A0)
#define RPG_CLIENT_ROGUEARCADEROOMDATA_GETROGUEAVATARCOLLECTION_OFFSET UNITYSDK_OFFSET(0xC76E950)
#define RPG_CLIENT_ROGUEARCADEROOMDATA_GETROGUEDEBUGINFO_OFFSET UNITYSDK_OFFSET(0xC76E680)
#define RPG_CLIENT_ROGUEARCADEROOMDATA_GET_ARCADEROW_OFFSET UNITYSDK_OFFSET(0xC76EAD0)
#define RPG_CLIENT_ROGUEARCADEROOMDATA_GET_ID_OFFSET UNITYSDK_OFFSET(0xC76EAB0)
#define RPG_CLIENT_ROGUEARCADEROOMDATA_GET_REWARDTIER_OFFSET UNITYSDK_OFFSET(0xC76EBB0)
#define RPG_CLIENT_ROGUEARCADEROOMDATA_GET_ROW_OFFSET UNITYSDK_OFFSET(0xC76D860)
#define RPG_CLIENT_ROGUEARCADEROOMDATA_SET_ID_OFFSET UNITYSDK_OFFSET(0xC76EAC0)
#define RPG_CLIENT_ROGUEARCADEROOMDATA_SET_REWARDTIER_OFFSET UNITYSDK_OFFSET(0xC76EBC0)
#define RPG_CLIENT_ROGUEARCADEROOMDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xC76E670)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueArcadeRoomData_TypeDefinitionIndex = 63002;

	class RogueArcadeRoomData : public ::System::Object
	{
	public:
		::RPG::GameCore::RogueArcadeTypeConfigRow* _ArcadeRow; // 0x10
		::RPG::GameCore::RogueArcadeConfigRow* _Row; // 0x18
		::System::Int32 _RewardTier_k__BackingField; // 0x20
		::System::UInt32 _ID_k__BackingField; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEARCADEROOMDATA__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::RogueArcadeRoomData* Create(::System::UInt32 a1)
		{
			return ((::RPG::Client::RogueArcadeRoomData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEARCADEROOMDATA_CREATE_OFFSET))(a1);
		}

		::System::String* GetRogueDebugInfo()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEARCADEROOMDATA_GETROGUEDEBUGINFO_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>* GetRogueAvatarCollection()
		{
			return ((::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEARCADEROOMDATA_GETROGUEAVATARCOLLECTION_OFFSET))(this);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEARCADEROOMDATA_GET_ID_OFFSET))(this);
		}

		::System::Void set_ID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEARCADEROOMDATA_SET_ID_OFFSET))(this, a1);
		}

		::RPG::GameCore::RogueArcadeConfigRow* get_Row()
		{
			return ((::RPG::GameCore::RogueArcadeConfigRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEARCADEROOMDATA_GET_ROW_OFFSET))(this);
		}

		::RPG::GameCore::RogueArcadeTypeConfigRow* get_ArcadeRow()
		{
			return ((::RPG::GameCore::RogueArcadeTypeConfigRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEARCADEROOMDATA_GET_ARCADEROW_OFFSET))(this);
		}

		::System::Int32 get_RewardTier()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEARCADEROOMDATA_GET_REWARDTIER_OFFSET))(this);
		}

		::System::Void set_RewardTier(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEARCADEROOMDATA_SET_REWARDTIER_OFFSET))(this, a1);
		}
	};
}
