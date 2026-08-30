#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Prop { class ChimeraDuelBubbleData; }

#define CLASS_1_96FFCA9DC83037DC_4_METHOD_1_C3D71580F94E264C_OFFSET UNITYSDK_OFFSET(0x188D18D0)
#define CLASS_1_96FFCA9DC83037DC_4__CTOR_OFFSET UNITYSDK_OFFSET(0x188D1930)

inline static constexpr unsigned int Class_1_96FFCA9DC83037DC_4_TypeDefinitionIndex = 77818;

class Class_1_96FFCA9DC83037DC_4 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_96FFCA9DC83037DC_4__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_C3D71580F94E264C(::RPG::Client::Prop::ChimeraDuelBubbleData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::ChimeraDuelBubbleData*))((::PBYTE)hIl2Cpp + CLASS_1_96FFCA9DC83037DC_4_METHOD_1_C3D71580F94E264C_OFFSET))(this, a1);
	}
};
