#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Prop { class ChimeraDuelBubbleData; }

#define CLASS_1_5209D94393A46BCB_1_METHOD_1_6EA905D94DE80515_OFFSET UNITYSDK_OFFSET(0x1244A210)
#define CLASS_1_5209D94393A46BCB_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1244A270)

inline static constexpr unsigned int Class_1_5209D94393A46BCB_1_TypeDefinitionIndex = 71783;

class Class_1_5209D94393A46BCB_1 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5209D94393A46BCB_1__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_6EA905D94DE80515(::RPG::Client::Prop::ChimeraDuelBubbleData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::ChimeraDuelBubbleData*))((::PBYTE)hIl2Cpp + CLASS_1_5209D94393A46BCB_1_METHOD_1_6EA905D94DE80515_OFFSET))(this, a1);
	}
};
