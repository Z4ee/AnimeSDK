#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ChimeraDuelTalkData; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_CLIENT_CHIMERADUELTALKINFO_DISPOSE_OFFSET UNITYSDK_OFFSET(0xCB401D0)
#define RPG_CLIENT_CHIMERADUELTALKINFO_INIT_OFFSET UNITYSDK_OFFSET(0xCB3F990)
#define RPG_CLIENT_CHIMERADUELTALKINFO_TRYGETTALKDATA_OFFSET UNITYSDK_OFFSET(0xCB42BC0)
#define RPG_CLIENT_CHIMERADUELTALKINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xCB3F980)
#define RPG_CLIENT_CHIMERADUELTALKINFO__LOADDATA_OFFSET UNITYSDK_OFFSET(0xCB42900)

namespace RPG::Client
{
	inline static constexpr unsigned int ChimeraDuelTalkInfo_TypeDefinitionIndex = 63391;

	class ChimeraDuelTalkInfo : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ChimeraDuelTalkData*>* _DataDict; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELTALKINFO__CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELTALKINFO_INIT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELTALKINFO_DISPOSE_OFFSET))(this);
		}

		::RPG::Client::ChimeraDuelTalkData* TryGetTalkData(::System::UInt32 a1)
		{
			return ((::RPG::Client::ChimeraDuelTalkData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELTALKINFO_TRYGETTALKDATA_OFFSET))(this, a1);
		}

		::System::Void _LoadData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELTALKINFO__LOADDATA_OFFSET))(this);
		}
	};
}
