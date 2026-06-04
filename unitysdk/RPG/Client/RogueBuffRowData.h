#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/RogueBuffAeonType.h"
#include "unitysdk/RPG/GameCore/RogueBuffCategory.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class RogueBuffRow; }
namespace System { class String; }

#define RPG_CLIENT_ROGUEBUFFROWDATA_GETAEONCROSSICON_OFFSET UNITYSDK_OFFSET(0xC773370)
#define RPG_CLIENT_ROGUEBUFFROWDATA_GETBATTLEEVENTBUFF_OFFSET UNITYSDK_OFFSET(0xC7733D0)
#define RPG_CLIENT_ROGUEBUFFROWDATA_GETEXTRAEFFECTROWIDS_OFFSET UNITYSDK_OFFSET(0xC773270)
#define RPG_CLIENT_ROGUEBUFFROWDATA_GETMAZEBUFFLEVEL_OFFSET UNITYSDK_OFFSET(0xC773130)
#define RPG_CLIENT_ROGUEBUFFROWDATA_GETROGUEAEONID_OFFSET UNITYSDK_OFFSET(0xC7732D0)
#define RPG_CLIENT_ROGUEBUFFROWDATA_GETROGUEBUFFCATEGORY_OFFSET UNITYSDK_OFFSET(0xC773230)
#define RPG_CLIENT_ROGUEBUFFROWDATA_GETROGUEBUFFRARITY_OFFSET UNITYSDK_OFFSET(0xC7731D0)
#define RPG_CLIENT_ROGUEBUFFROWDATA_GETROGUEBUFFTAG_OFFSET UNITYSDK_OFFSET(0xC773320)
#define RPG_CLIENT_ROGUEBUFFROWDATA_GETROGUEBUFFTYPE_OFFSET UNITYSDK_OFFSET(0xC773180)
#define RPG_CLIENT_ROGUEBUFFROWDATA_GET_ACTIVITYMODULEID_OFFSET UNITYSDK_OFFSET(0xC773420)
#define RPG_CLIENT_ROGUEBUFFROWDATA_GET_HANDBOOKUNLOCKDESC_OFFSET UNITYSDK_OFFSET(0xC773470)
#define RPG_CLIENT_ROGUEBUFFROWDATA_GET_MAZEBUFFID_OFFSET UNITYSDK_OFFSET(0xC7730E0)
#define RPG_CLIENT_ROGUEBUFFROWDATA_ISVALID_OFFSET UNITYSDK_OFFSET(0xC773090)
#define RPG_CLIENT_ROGUEBUFFROWDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xC7718B0)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueBuffRowData_TypeDefinitionIndex = 62836;

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
