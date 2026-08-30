#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class TitanAtlasVoicePoolRow; }
namespace System { class String; }

#define RPG_CLIENT_TITANATLASVOICEINFO_CREATE_OFFSET UNITYSDK_OFFSET(0xE22A9E0)
#define RPG_CLIENT_TITANATLASVOICEINFO_GET_AUDIOEVENT_OFFSET UNITYSDK_OFFSET(0xE22AB70)
#define RPG_CLIENT_TITANATLASVOICEINFO_GET_ID_OFFSET UNITYSDK_OFFSET(0xE22AA50)
#define RPG_CLIENT_TITANATLASVOICEINFO_GET_ROW_OFFSET UNITYSDK_OFFSET(0xE22AA70)
#define RPG_CLIENT_TITANATLASVOICEINFO_GET_WEIGHT_OFFSET UNITYSDK_OFFSET(0xE22AAD0)
#define RPG_CLIENT_TITANATLASVOICEINFO_SET_ID_OFFSET UNITYSDK_OFFSET(0xE22AA60)
#define RPG_CLIENT_TITANATLASVOICEINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xE22AA40)

namespace RPG::Client
{
	inline static constexpr unsigned int TitanAtlasVoiceInfo_TypeDefinitionIndex = 68138;

	class TitanAtlasVoiceInfo : public ::System::Object
	{
	public:
		::System::UInt32 _ID_k__BackingField; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TITANATLASVOICEINFO__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::TitanAtlasVoiceInfo* Create(::System::UInt32 a1)
		{
			return ((::RPG::Client::TitanAtlasVoiceInfo*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TITANATLASVOICEINFO_CREATE_OFFSET))(a1);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TITANATLASVOICEINFO_GET_ID_OFFSET))(this);
		}

		::System::Void set_ID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TITANATLASVOICEINFO_SET_ID_OFFSET))(this, a1);
		}

		::RPG::GameCore::TitanAtlasVoicePoolRow* get_Row()
		{
			return ((::RPG::GameCore::TitanAtlasVoicePoolRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TITANATLASVOICEINFO_GET_ROW_OFFSET))(this);
		}

		::System::Int32 get_Weight()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TITANATLASVOICEINFO_GET_WEIGHT_OFFSET))(this);
		}

		::System::String* get_AudioEvent()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TITANATLASVOICEINFO_GET_AUDIOEVENT_OFFSET))(this);
		}
	};
}
