#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/PlayerSettingType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class PlayerSettingItem; }

#define CLASS_1_E4919DFAA96CFF60_METHOD_1_679A7E10B98C9236_OFFSET UNITYSDK_OFFSET(0x1A6D0570)
#define CLASS_1_E4919DFAA96CFF60__CTOR_OFFSET UNITYSDK_OFFSET(0x1A6D16E0)

inline static constexpr unsigned int Class_1_E4919DFAA96CFF60_TypeDefinitionIndex = 66725;

class Class_1_E4919DFAA96CFF60 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E4919DFAA96CFF60__CTOR_OFFSET))(this);
	}

	static ::RPG::Client::PlayerSettingItem* Method_1_679A7E10B98C9236(::RPG::Client::PlayerSettingType a1)
	{
		return ((::RPG::Client::PlayerSettingItem*(*)(::RPG::Client::PlayerSettingType))((::PBYTE)hIl2Cpp + CLASS_1_E4919DFAA96CFF60_METHOD_1_679A7E10B98C9236_OFFSET))(a1);
	}
};
