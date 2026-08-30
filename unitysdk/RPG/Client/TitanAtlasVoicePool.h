#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class TitanAtlasVoiceInfo; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_TITANATLASVOICEPOOL_ADDVOICEINFO_OFFSET UNITYSDK_OFFSET(0x197BA0D0)
#define RPG_CLIENT_TITANATLASVOICEPOOL_CREATE_OFFSET UNITYSDK_OFFSET(0x197BA010)
#define RPG_CLIENT_TITANATLASVOICEPOOL_GETRANDOMINFO_OFFSET UNITYSDK_OFFSET(0x197B8080)
#define RPG_CLIENT_TITANATLASVOICEPOOL_GET_ID_OFFSET UNITYSDK_OFFSET(0x197BA2C0)
#define RPG_CLIENT_TITANATLASVOICEPOOL_SET_ID_OFFSET UNITYSDK_OFFSET(0x197BA2D0)
#define RPG_CLIENT_TITANATLASVOICEPOOL_SUMALLWEIGHT_OFFSET UNITYSDK_OFFSET(0x197BA180)
#define RPG_CLIENT_TITANATLASVOICEPOOL__CTOR_OFFSET UNITYSDK_OFFSET(0x197BA090)

namespace RPG::Client
{
	inline static constexpr unsigned int TitanAtlasVoicePool_TypeDefinitionIndex = 68139;

	class TitanAtlasVoicePool : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::TitanAtlasVoiceInfo*>* _Infos; // 0x10
		::System::UInt32 _ID_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TITANATLASVOICEPOOL__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::TitanAtlasVoicePool* Create(::System::UInt32 a1)
		{
			return ((::RPG::Client::TitanAtlasVoicePool*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TITANATLASVOICEPOOL_CREATE_OFFSET))(a1);
		}

		::System::Void AddVoiceInfo(::RPG::Client::TitanAtlasVoiceInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TitanAtlasVoiceInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TITANATLASVOICEPOOL_ADDVOICEINFO_OFFSET))(this, a1);
		}

		::RPG::Client::TitanAtlasVoiceInfo* GetRandomInfo()
		{
			return ((::RPG::Client::TitanAtlasVoiceInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TITANATLASVOICEPOOL_GETRANDOMINFO_OFFSET))(this);
		}

		::System::Int32 SumAllWeight()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TITANATLASVOICEPOOL_SUMALLWEIGHT_OFFSET))(this);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TITANATLASVOICEPOOL_GET_ID_OFFSET))(this);
		}

		::System::Void set_ID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TITANATLASVOICEPOOL_SET_ID_OFFSET))(this, a1);
		}
	};
}
