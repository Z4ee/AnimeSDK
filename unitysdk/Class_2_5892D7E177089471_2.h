#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_1049829BF7973998.h"
#include "unitysdk/RPG/Client/SequentialPanelContainer/EdgeDirection.h"
#include "unitysdk/System/ValueTuple_2.h"

#define CLASS_2_5892D7E177089471_2_METHOD_2_AE31073233167114_OFFSET UNITYSDK_OFFSET(0xBE82E70)
#define CLASS_2_5892D7E177089471_2__CTOR_OFFSET UNITYSDK_OFFSET(0xBE82EF0)

inline static constexpr unsigned int Class_2_5892D7E177089471_2_TypeDefinitionIndex = 74619;

class Class_2_5892D7E177089471_2 : public ::Class_1_1049829BF7973998
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5892D7E177089471_2__CTOR_OFFSET))(this);
	}

	::System::ValueTuple_2<::RPG::Client::SequentialPanelContainer::EdgeDirection, ::RPG::Client::SequentialPanelContainer::EdgeDirection> Method_2_AE31073233167114(::RPG::Client::SequentialPanelContainer::EdgeDirection a1, ::RPG::Client::SequentialPanelContainer::EdgeDirection a2)
	{
		return ((::System::ValueTuple_2<::RPG::Client::SequentialPanelContainer::EdgeDirection, ::RPG::Client::SequentialPanelContainer::EdgeDirection>(*)(::PVOID, ::RPG::Client::SequentialPanelContainer::EdgeDirection, ::RPG::Client::SequentialPanelContainer::EdgeDirection))((::PBYTE)hIl2Cpp + CLASS_2_5892D7E177089471_2_METHOD_2_AE31073233167114_OFFSET))(this, a1, a2);
	}
};
