#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ChimeraDuelTalkData; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_CLIENT_CHIMERADUELTALKINFO_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA020BC0)
#define RPG_CLIENT_CHIMERADUELTALKINFO_INIT_OFFSET UNITYSDK_OFFSET(0xA020360)
#define RPG_CLIENT_CHIMERADUELTALKINFO_TRYGETTALKDATA_OFFSET UNITYSDK_OFFSET(0xA023230)
#define RPG_CLIENT_CHIMERADUELTALKINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xA020350)
#define RPG_CLIENT_CHIMERADUELTALKINFO__LOADDATA_OFFSET UNITYSDK_OFFSET(0xA022FC0)

namespace RPG::Client
{
	inline static constexpr unsigned int ChimeraDuelTalkInfo_TypeDefinitionIndex = 58399;

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

		::RPG::Client::ChimeraDuelTalkData* TryGetTalkData(::System::UInt32 id)
		{
			return ((::RPG::Client::ChimeraDuelTalkData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELTALKINFO_TRYGETTALKDATA_OFFSET))(this, id);
		}

		::System::Void _LoadData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELTALKINFO__LOADDATA_OFFSET))(this);
		}
	};
}
