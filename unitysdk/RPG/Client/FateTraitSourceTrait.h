#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class FateBuffTraitInfo; }
namespace RPG::Client { class FateTraitData; }
namespace System { class String; }

#define RPG_CLIENT_FATETRAITSOURCETRAIT_GETDESC_OFFSET UNITYSDK_OFFSET(0x96AA050)
#define RPG_CLIENT_FATETRAITSOURCETRAIT_GETIMGICON_OFFSET UNITYSDK_OFFSET(0x96A9E00)
#define RPG_CLIENT_FATETRAITSOURCETRAIT_GETNAME_OFFSET UNITYSDK_OFFSET(0x96A9FD0)
#define RPG_CLIENT_FATETRAITSOURCETRAIT_GETRARITYBG_OFFSET UNITYSDK_OFFSET(0x96A9F60)
#define RPG_CLIENT_FATETRAITSOURCETRAIT_GET_TRAITDATA_OFFSET UNITYSDK_OFFSET(0x96A9E70)
#define RPG_CLIENT_FATETRAITSOURCETRAIT_GET_TRAITID_OFFSET UNITYSDK_OFFSET(0x96AA160)
#define RPG_CLIENT_FATETRAITSOURCETRAIT_ISACTIVE_OFFSET UNITYSDK_OFFSET(0x96AA120)
#define RPG_CLIENT_FATETRAITSOURCETRAIT_SET_TRAITID_OFFSET UNITYSDK_OFFSET(0x96AA170)
#define RPG_CLIENT_FATETRAITSOURCETRAIT__CTOR_OFFSET UNITYSDK_OFFSET(0x96A7FA0)

namespace RPG::Client
{
	inline static constexpr unsigned int FateTraitSourceTrait_TypeDefinitionIndex = 51928;

	class FateTraitSourceTrait : public ::System::Object
	{
	public:
		::RPG::Client::FateBuffTraitInfo* _BelongTraitInfo; // 0x10
		::RPG::Client::FateTraitData* _TraitData; // 0x18
		::System::UInt32 _TraitID_k__BackingField; // 0x20

		::System::Void _ctor(::System::UInt32 traitId, ::RPG::Client::FateBuffTraitInfo* belongTraitInfo)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::Client::FateBuffTraitInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATETRAITSOURCETRAIT__CTOR_OFFSET))(this, traitId, belongTraitInfo);
		}

		::System::String* GetImgIcon()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATETRAITSOURCETRAIT_GETIMGICON_OFFSET))(this);
		}

		::System::String* GetRarityBg()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATETRAITSOURCETRAIT_GETRARITYBG_OFFSET))(this);
		}

		::RPG::Client::TextID GetName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATETRAITSOURCETRAIT_GETNAME_OFFSET))(this);
		}

		::System::String* GetDesc()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATETRAITSOURCETRAIT_GETDESC_OFFSET))(this);
		}

		::System::Boolean IsActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATETRAITSOURCETRAIT_ISACTIVE_OFFSET))(this);
		}

		::System::UInt32 get_TraitID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATETRAITSOURCETRAIT_GET_TRAITID_OFFSET))(this);
		}

		::System::Void set_TraitID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATETRAITSOURCETRAIT_SET_TRAITID_OFFSET))(this, value);
		}

		::RPG::Client::FateTraitData* get_TraitData()
		{
			return ((::RPG::Client::FateTraitData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATETRAITSOURCETRAIT_GET_TRAITDATA_OFFSET))(this);
		}
	};
}
