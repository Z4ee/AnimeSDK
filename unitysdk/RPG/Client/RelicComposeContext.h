#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class RelicRecommendData; }

#define RPG_CLIENT_RELICCOMPOSECONTEXT_CLEAR_OFFSET UNITYSDK_OFFSET(0xC6D7DD0)
#define RPG_CLIENT_RELICCOMPOSECONTEXT_CREATE_OFFSET UNITYSDK_OFFSET(0xC6D7D80)
#define RPG_CLIENT_RELICCOMPOSECONTEXT_GETRECOMMENDDATA_OFFSET UNITYSDK_OFFSET(0xC6D7F00)
#define RPG_CLIENT_RELICCOMPOSECONTEXT_GET_AVATARID_OFFSET UNITYSDK_OFFSET(0xC6D7D60)
#define RPG_CLIENT_RELICCOMPOSECONTEXT_SETAVATARID_OFFSET UNITYSDK_OFFSET(0xC6D7E20)
#define RPG_CLIENT_RELICCOMPOSECONTEXT_SET_AVATARID_OFFSET UNITYSDK_OFFSET(0xC6D7D70)
#define RPG_CLIENT_RELICCOMPOSECONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0xC6D7DC0)
#define RPG_CLIENT_RELICCOMPOSECONTEXT__ONAVATARIDCHANGED_OFFSET UNITYSDK_OFFSET(0xC6D7EB0)

namespace RPG::Client
{
	inline static constexpr unsigned int RelicComposeContext_TypeDefinitionIndex = 61476;

	class RelicComposeContext : public ::System::Object
	{
	public:
		::RPG::Client::RelicRecommendData* _RecommendData; // 0x10
		::System::UInt32 _AvatarID_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICCOMPOSECONTEXT__CTOR_OFFSET))(this);
		}

		::System::UInt32 get_AvatarID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICCOMPOSECONTEXT_GET_AVATARID_OFFSET))(this);
		}

		::System::Void set_AvatarID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICCOMPOSECONTEXT_SET_AVATARID_OFFSET))(this, a1);
		}

		static ::RPG::Client::RelicComposeContext* Create()
		{
			return ((::RPG::Client::RelicComposeContext*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICCOMPOSECONTEXT_CREATE_OFFSET))();
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICCOMPOSECONTEXT_CLEAR_OFFSET))(this);
		}

		::System::Void SetAvatarID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICCOMPOSECONTEXT_SETAVATARID_OFFSET))(this, a1);
		}

		::System::Void _OnAvatarIDChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICCOMPOSECONTEXT__ONAVATARIDCHANGED_OFFSET))(this);
		}

		::RPG::Client::RelicRecommendData* GetRecommendData()
		{
			return ((::RPG::Client::RelicRecommendData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICCOMPOSECONTEXT_GETRECOMMENDDATA_OFFSET))(this);
		}
	};
}
