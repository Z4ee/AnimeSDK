#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_1049829BF7973998.h"
#include "unitysdk/RPG/Client/SequentialPanelContainer/EdgeDirection.h"
#include "unitysdk/System/ValueTuple_2.h"

#define CLASS_2_5892D7E177089471_4_METHOD_2_AE31073233167114_OFFSET UNITYSDK_OFFSET(0x14A5B300)
#define CLASS_2_5892D7E177089471_4__CTOR_OFFSET UNITYSDK_OFFSET(0x14A5B360)

inline static constexpr unsigned int Class_2_5892D7E177089471_4_TypeDefinitionIndex = 71314;

class Class_2_5892D7E177089471_4 : public ::Class_1_1049829BF7973998
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5892D7E177089471_4__CTOR_OFFSET))(this);
	}

	::System::ValueTuple_2<::RPG::Client::SequentialPanelContainer::EdgeDirection, ::RPG::Client::SequentialPanelContainer::EdgeDirection> Method_2_AE31073233167114(::RPG::Client::SequentialPanelContainer::EdgeDirection a1, ::RPG::Client::SequentialPanelContainer::EdgeDirection a2)
	{
		return ((::System::ValueTuple_2<::RPG::Client::SequentialPanelContainer::EdgeDirection, ::RPG::Client::SequentialPanelContainer::EdgeDirection>(*)(::PVOID, ::RPG::Client::SequentialPanelContainer::EdgeDirection, ::RPG::Client::SequentialPanelContainer::EdgeDirection))((::PBYTE)hIl2Cpp + CLASS_2_5892D7E177089471_4_METHOD_2_AE31073233167114_OFFSET))(this, a1, a2);
	}
};
