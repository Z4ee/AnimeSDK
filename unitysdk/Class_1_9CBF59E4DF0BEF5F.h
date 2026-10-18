#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Compliance::Ftc::DropLink { class FtcDropLink; }
namespace RPG::Client::Compliance::Ftc::DropLink { class GachaFtcDropLinkFactory; }

#define CLASS_1_9CBF59E4DF0BEF5F_METHOD_1_D2BCA21EDDD7F6D7_OFFSET UNITYSDK_OFFSET(0xBBE62D0)
#define CLASS_1_9CBF59E4DF0BEF5F__CTOR_OFFSET UNITYSDK_OFFSET(0xBBE6280)

inline static constexpr unsigned int Class_1_9CBF59E4DF0BEF5F_TypeDefinitionIndex = 74818;

class Class_1_9CBF59E4DF0BEF5F : public ::System::Object
{
public:
	::RPG::Client::Compliance::Ftc::DropLink::GachaFtcDropLinkFactory* ADHGPMBAAFG; // 0x10

	::System::Void _ctor(::RPG::Client::Compliance::Ftc::DropLink::GachaFtcDropLinkFactory* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::Compliance::Ftc::DropLink::GachaFtcDropLinkFactory*))((::PBYTE)hIl2Cpp + CLASS_1_9CBF59E4DF0BEF5F__CTOR_OFFSET))(this, a1);
	}

	::RPG::Client::Compliance::Ftc::DropLink::FtcDropLink* Method_1_D2BCA21EDDD7F6D7(::System::UInt32 a1)
	{
		return ((::RPG::Client::Compliance::Ftc::DropLink::FtcDropLink*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_9CBF59E4DF0BEF5F_METHOD_1_D2BCA21EDDD7F6D7_OFFSET))(this, a1);
	}
};
