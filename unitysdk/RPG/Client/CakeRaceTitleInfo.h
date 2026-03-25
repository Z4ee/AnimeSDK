#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class CakeRaceTitleData; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_CLIENT_CAKERACETITLEINFO_DISPOSE_OFFSET UNITYSDK_OFFSET(0x92488D0)
#define RPG_CLIENT_CAKERACETITLEINFO_GETTITLE_OFFSET UNITYSDK_OFFSET(0x923FCC0)
#define RPG_CLIENT_CAKERACETITLEINFO_INIT_OFFSET UNITYSDK_OFFSET(0x9247DD0)
#define RPG_CLIENT_CAKERACETITLEINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x9247B80)

namespace RPG::Client
{
	inline static constexpr unsigned int CakeRaceTitleInfo_TypeDefinitionIndex = 51178;

	class CakeRaceTitleInfo : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::CakeRaceTitleData*>* _TitleMap; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACETITLEINFO__CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACETITLEINFO_INIT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACETITLEINFO_DISPOSE_OFFSET))(this);
		}

		::RPG::Client::CakeRaceTitleData* GetTitle(::System::UInt32 titleId)
		{
			return ((::RPG::Client::CakeRaceTitleData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACETITLEINFO_GETTITLE_OFFSET))(this, titleId);
		}
	};
}
