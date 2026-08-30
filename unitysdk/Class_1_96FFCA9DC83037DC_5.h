#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Prop { class ChimeraDuelBubbleData; }

#define CLASS_1_96FFCA9DC83037DC_5_METHOD_1_C3D71580F94E264C_OFFSET UNITYSDK_OFFSET(0x1580FF20)
#define CLASS_1_96FFCA9DC83037DC_5__CTOR_OFFSET UNITYSDK_OFFSET(0x1580FF80)

inline static constexpr unsigned int Class_1_96FFCA9DC83037DC_5_TypeDefinitionIndex = 77819;

class Class_1_96FFCA9DC83037DC_5 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_96FFCA9DC83037DC_5__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_C3D71580F94E264C(::RPG::Client::Prop::ChimeraDuelBubbleData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::ChimeraDuelBubbleData*))((::PBYTE)hIl2Cpp + CLASS_1_96FFCA9DC83037DC_5_METHOD_1_C3D71580F94E264C_OFFSET))(this, a1);
	}
};
