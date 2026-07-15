#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/RogueBuffAeonType.h"
#include "unitysdk/RPG/GameCore/RogueBuffCategory.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class RogueBuffRow; }
namespace System { class String; }

#define RPG_CLIENT_ROGUEBUFFROWDATA_GETAEONCROSSICON_OFFSET UNITYSDK_OFFSET(0x1A443A20)
#define RPG_CLIENT_ROGUEBUFFROWDATA_GETBATTLEEVENTBUFF_OFFSET UNITYSDK_OFFSET(0x1A443A80)
#define RPG_CLIENT_ROGUEBUFFROWDATA_GETEXTRAEFFECTROWIDS_OFFSET UNITYSDK_OFFSET(0x173B5A70)
#define RPG_CLIENT_ROGUEBUFFROWDATA_GETMAZEBUFFLEVEL_OFFSET UNITYSDK_OFFSET(0x173B5930)
#define RPG_CLIENT_ROGUEBUFFROWDATA_GETROGUEAEONID_OFFSET UNITYSDK_OFFSET(0x173B5AD0)
#define RPG_CLIENT_ROGUEBUFFROWDATA_GETROGUEBUFFCATEGORY_OFFSET UNITYSDK_OFFSET(0x173B5A30)
#define RPG_CLIENT_ROGUEBUFFROWDATA_GETROGUEBUFFRARITY_OFFSET UNITYSDK_OFFSET(0x173B59D0)
#define RPG_CLIENT_ROGUEBUFFROWDATA_GETROGUEBUFFTAG_OFFSET UNITYSDK_OFFSET(0x173B5B20)
#define RPG_CLIENT_ROGUEBUFFROWDATA_GETROGUEBUFFTYPE_OFFSET UNITYSDK_OFFSET(0x173B5980)
#define RPG_CLIENT_ROGUEBUFFROWDATA_GET_ACTIVITYMODULEID_OFFSET UNITYSDK_OFFSET(0x1A443AD0)
#define RPG_CLIENT_ROGUEBUFFROWDATA_GET_HANDBOOKUNLOCKDESC_OFFSET UNITYSDK_OFFSET(0x1A443B20)
#define RPG_CLIENT_ROGUEBUFFROWDATA_GET_MAZEBUFFID_OFFSET UNITYSDK_OFFSET(0x173B58E0)
#define RPG_CLIENT_ROGUEBUFFROWDATA_ISVALID_OFFSET UNITYSDK_OFFSET(0x173B5890)
#define RPG_CLIENT_ROGUEBUFFROWDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x173B3F80)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueBuffRowData_TypeDefinitionIndex = 64203;

	class RogueBuffRowData : public ::System::Object
	{
	public:
		::RPG::GameCore::RogueBuffRow* _Row; // 0x10

		::System::Void _ctor(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEBUFFROWDATA__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEBUFFROWDATA_ISVALID_OFFSET))(this);
		}

		::System::UInt32 get_MazeBuffID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEBUFFROWDATA_GET_MAZEBUFFID_OFFSET))(this);
		}

		::System::UInt32 GetMazeBuffLevel()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEBUFFROWDATA_GETMAZEBUFFLEVEL_OFFSET))(this);
		}

		::System::UInt32 GetRogueBuffType()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEBUFFROWDATA_GETROGUEBUFFTYPE_OFFSET))(this);
		}

		::System::UInt32 GetRogueBuffRarity()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEBUFFROWDATA_GETROGUEBUFFRARITY_OFFSET))(this);
		}

		::RPG::GameCore::RogueBuffCategory GetRogueBuffCategory()
		{
			return ((::RPG::GameCore::RogueBuffCategory(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEBUFFROWDATA_GETROGUEBUFFCATEGORY_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* GetExtraEffectRowIDs()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEBUFFROWDATA_GETEXTRAEFFECTROWIDS_OFFSET))(this);
		}

		::System::UInt32 GetRogueAeonID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEBUFFROWDATA_GETROGUEAEONID_OFFSET))(this);
		}

		::System::UInt32 GetRogueBuffTag()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEBUFFROWDATA_GETROGUEBUFFTAG_OFFSET))(this);
		}

		::System::String* GetAeonCrossIcon()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEBUFFROWDATA_GETAEONCROSSICON_OFFSET))(this);
		}

		::RPG::GameCore::RogueBuffAeonType GetBattleEventBuff()
		{
			return ((::RPG::GameCore::RogueBuffAeonType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEBUFFROWDATA_GETBATTLEEVENTBUFF_OFFSET))(this);
		}

		::System::UInt32 get_ActivityModuleID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEBUFFROWDATA_GET_ACTIVITYMODULEID_OFFSET))(this);
		}

		::RPG::Client::TextID get_HandbookUnlockDesc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEBUFFROWDATA_GET_HANDBOOKUNLOCKDESC_OFFSET))(this);
		}
	};
}
