#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_9CBF59E4DF0BEF5F;
namespace RPG::Client::Compliance::Ftc::DropLink { class FtcDropLink; }
namespace RPG::Client::Compliance::Ftc::DropLink { class IFtcDropLink; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_CLIENT_COMPLIANCE_FTC_DROPLINK_FTCDROPLINKREPOSITORY_GET_OFFSET UNITYSDK_OFFSET(0xCBA3EE0)
#define RPG_CLIENT_COMPLIANCE_FTC_DROPLINK_FTCDROPLINKREPOSITORY__CTOR_OFFSET UNITYSDK_OFFSET(0xCBA48A0)

namespace RPG::Client::Compliance::Ftc::DropLink
{
	inline static constexpr unsigned int FtcDropLinkRepository_TypeDefinitionIndex = 74821;

	class FtcDropLinkRepository : public ::System::Object
	{
	public:
		::Class_1_9CBF59E4DF0BEF5F* _Factory; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::Compliance::Ftc::DropLink::FtcDropLink*>* _Cached; // 0x18

		::System::Void _ctor(::Class_1_9CBF59E4DF0BEF5F* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_9CBF59E4DF0BEF5F*))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPLIANCE_FTC_DROPLINK_FTCDROPLINKREPOSITORY__CTOR_OFFSET))(this, a1);
		}

		::RPG::Client::Compliance::Ftc::DropLink::IFtcDropLink* Get(::System::UInt32 a1)
		{
			return ((::RPG::Client::Compliance::Ftc::DropLink::IFtcDropLink*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPLIANCE_FTC_DROPLINK_FTCDROPLINKREPOSITORY_GET_OFFSET))(this, a1);
		}
	};
}
