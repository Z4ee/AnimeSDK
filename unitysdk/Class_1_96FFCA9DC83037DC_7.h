#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Prop { class ChimeraDuelBubbleData; }

#define CLASS_1_96FFCA9DC83037DC_7_METHOD_1_C3D71580F94E264C_OFFSET UNITYSDK_OFFSET(0x16BB6100)
#define CLASS_1_96FFCA9DC83037DC_7__CTOR_OFFSET UNITYSDK_OFFSET(0x16BB6160)

inline static constexpr unsigned int Class_1_96FFCA9DC83037DC_7_TypeDefinitionIndex = 74336;

class Class_1_96FFCA9DC83037DC_7 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_96FFCA9DC83037DC_7__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_C3D71580F94E264C(::RPG::Client::Prop::ChimeraDuelBubbleData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::ChimeraDuelBubbleData*))((::PBYTE)hIl2Cpp + CLASS_1_96FFCA9DC83037DC_7_METHOD_1_C3D71580F94E264C_OFFSET))(this, a1);
	}
};
