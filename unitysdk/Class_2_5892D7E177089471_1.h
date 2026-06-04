#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_46DD0805BD563560.h"
#include "unitysdk/RPG/Client/SequentialPanelContainer/EdgeDirection.h"
#include "unitysdk/System/ValueTuple_2.h"

#define CLASS_2_5892D7E177089471_1_METHOD_2_AE31073233167114_OFFSET UNITYSDK_OFFSET(0xD197E20)
#define CLASS_2_5892D7E177089471_1__CTOR_OFFSET UNITYSDK_OFFSET(0xD197EA0)

inline static constexpr unsigned int Class_2_5892D7E177089471_1_TypeDefinitionIndex = 69788;

class Class_2_5892D7E177089471_1 : public ::Class_1_46DD0805BD563560
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5892D7E177089471_1__CTOR_OFFSET))(this);
	}

	::System::ValueTuple_2<::RPG::Client::SequentialPanelContainer::EdgeDirection, ::RPG::Client::SequentialPanelContainer::EdgeDirection> Method_2_AE31073233167114(::RPG::Client::SequentialPanelContainer::EdgeDirection a1, ::RPG::Client::SequentialPanelContainer::EdgeDirection a2)
	{
		return ((::System::ValueTuple_2<::RPG::Client::SequentialPanelContainer::EdgeDirection, ::RPG::Client::SequentialPanelContainer::EdgeDirection>(*)(::PVOID, ::RPG::Client::SequentialPanelContainer::EdgeDirection, ::RPG::Client::SequentialPanelContainer::EdgeDirection))((::PBYTE)hIl2Cpp + CLASS_2_5892D7E177089471_1_METHOD_2_AE31073233167114_OFFSET))(this, a1, a2);
	}
};
