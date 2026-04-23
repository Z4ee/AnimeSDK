#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FateBuffRarityType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class FateBuffData; }
namespace RPG::Client { class FateBuffTraitInfo; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_CLIENT_FATETRAITSOURCEBUFF_GETDESC_OFFSET UNITYSDK_OFFSET(0xA3687A0)
#define RPG_CLIENT_FATETRAITSOURCEBUFF_GETIMGICON_OFFSET UNITYSDK_OFFSET(0xA368150)
#define RPG_CLIENT_FATETRAITSOURCEBUFF_GETNAME_OFFSET UNITYSDK_OFFSET(0xA3685A0)
#define RPG_CLIENT_FATETRAITSOURCEBUFF_GETRARITYBG_OFFSET UNITYSDK_OFFSET(0xA3683D0)
#define RPG_CLIENT_FATETRAITSOURCEBUFF_GET_BUFFDATA_OFFSET UNITYSDK_OFFSET(0xA3682E0)
#define RPG_CLIENT_FATETRAITSOURCEBUFF_GET_BUFFID_OFFSET UNITYSDK_OFFSET(0xA368AC0)
#define RPG_CLIENT_FATETRAITSOURCEBUFF_ISACTIVE_OFFSET UNITYSDK_OFFSET(0xA368A60)
#define RPG_CLIENT_FATETRAITSOURCEBUFF_SET_BUFFID_OFFSET UNITYSDK_OFFSET(0xA368AD0)
#define RPG_CLIENT_FATETRAITSOURCEBUFF__CTOR_OFFSET UNITYSDK_OFFSET(0xA366D70)

namespace RPG::Client
{
	inline static constexpr unsigned int FateTraitSourceBuff_TypeDefinitionIndex = 58876;

	class FateTraitSourceBuff : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::FateBuffRarityType, ::System::String*>* _BuffRarityIconPath; // 0x10
		::RPG::Client::FateBuffData* _BuffData; // 0x18
		::RPG::Client::FateBuffTraitInfo* _BelongTraitInfo; // 0x20
		::System::UInt32 _BuffID_k__BackingField; // 0x28

		::System::Void _ctor(::System::UInt32 buffID, ::RPG::Client::FateBuffTraitInfo* belongTraitInfo)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::Client::FateBuffTraitInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATETRAITSOURCEBUFF__CTOR_OFFSET))(this, buffID, belongTraitInfo);
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

		::System::Void set_BuffID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATETRAITSOURCEBUFF_SET_BUFFID_OFFSET))(this, value);
		}

		::RPG::Client::FateBuffData* get_BuffData()
		{
			return ((::RPG::Client::FateBuffData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATETRAITSOURCEBUFF_GET_BUFFDATA_OFFSET))(this);
		}
	};
}
