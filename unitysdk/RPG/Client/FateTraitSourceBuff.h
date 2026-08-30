#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FateBuffRarityType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class FateBuffData; }
namespace RPG::Client { class FateBuffTraitInfo; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_CLIENT_FATETRAITSOURCEBUFF_GETDESC_OFFSET UNITYSDK_OFFSET(0xD043440)
#define RPG_CLIENT_FATETRAITSOURCEBUFF_GETIMGICON_OFFSET UNITYSDK_OFFSET(0xD0430E0)
#define RPG_CLIENT_FATETRAITSOURCEBUFF_GETNAME_OFFSET UNITYSDK_OFFSET(0xD043360)
#define RPG_CLIENT_FATETRAITSOURCEBUFF_GETRARITYBG_OFFSET UNITYSDK_OFFSET(0xD043280)
#define RPG_CLIENT_FATETRAITSOURCEBUFF_GET_BUFFDATA_OFFSET UNITYSDK_OFFSET(0xD043190)
#define RPG_CLIENT_FATETRAITSOURCEBUFF_GET_BUFFID_OFFSET UNITYSDK_OFFSET(0xD043570)
#define RPG_CLIENT_FATETRAITSOURCEBUFF_ISACTIVE_OFFSET UNITYSDK_OFFSET(0xD043510)
#define RPG_CLIENT_FATETRAITSOURCEBUFF_SET_BUFFID_OFFSET UNITYSDK_OFFSET(0xD043580)
#define RPG_CLIENT_FATETRAITSOURCEBUFF__CTOR_OFFSET UNITYSDK_OFFSET(0xD041720)

namespace RPG::Client
{
	inline static constexpr unsigned int FateTraitSourceBuff_TypeDefinitionIndex = 64072;

	class FateTraitSourceBuff : public ::System::Object
	{
	public:
		::RPG::Client::FateBuffData* _BuffData; // 0x10
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::FateBuffRarityType, ::System::String*>* _BuffRarityIconPath; // 0x18
		::RPG::Client::FateBuffTraitInfo* _BelongTraitInfo; // 0x20
		::System::UInt32 _BuffID_k__BackingField; // 0x28

		::System::Void _ctor(::System::UInt32 a1, ::RPG::Client::FateBuffTraitInfo* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::Client::FateBuffTraitInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATETRAITSOURCEBUFF__CTOR_OFFSET))(this, a1, a2);
		}

		::System::String* GetImgIcon()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATETRAITSOURCEBUFF_GETIMGICON_OFFSET))(this);
		}

		::System::String* GetRarityBg()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATETRAITSOURCEBUFF_GETRARITYBG_OFFSET))(this);
		}

		::RPG::Client::TextID GetName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATETRAITSOURCEBUFF_GETNAME_OFFSET))(this);
		}

		::System::String* GetDesc()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATETRAITSOURCEBUFF_GETDESC_OFFSET))(this);
		}

		::System::Boolean IsActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATETRAITSOURCEBUFF_ISACTIVE_OFFSET))(this);
		}

		::System::UInt32 get_BuffID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATETRAITSOURCEBUFF_GET_BUFFID_OFFSET))(this);
		}

		::System::Void set_BuffID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATETRAITSOURCEBUFF_SET_BUFFID_OFFSET))(this, a1);
		}

		::RPG::Client::FateBuffData* get_BuffData()
		{
			return ((::RPG::Client::FateBuffData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATETRAITSOURCEBUFF_GET_BUFFDATA_OFFSET))(this);
		}
	};
}
