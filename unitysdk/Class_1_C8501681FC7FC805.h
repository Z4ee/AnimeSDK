#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChimeraDuelBubbleEventType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Prop { class ChimeraDuelBubbleEvent; }

#define CLASS_1_C8501681FC7FC805_METHOD_1_66FD9FC2D8625D93_OFFSET UNITYSDK_OFFSET(0xF3629E0)
#define CLASS_1_C8501681FC7FC805__CTOR_OFFSET UNITYSDK_OFFSET(0xF362A40)

inline static constexpr unsigned int Class_1_C8501681FC7FC805_TypeDefinitionIndex = 63734;

class Class_1_C8501681FC7FC805 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C8501681FC7FC805__CTOR_OFFSET))(this);
	}

	::RPG::GameCore::ChimeraDuelBubbleEventType Method_1_66FD9FC2D8625D93(::RPG::Client::Prop::ChimeraDuelBubbleEvent* a1)
	{
		return ((::RPG::GameCore::ChimeraDuelBubbleEventType(*)(::PVOID, ::RPG::Client::Prop::ChimeraDuelBubbleEvent*))((::PBYTE)hIl2Cpp + CLASS_1_C8501681FC7FC805_METHOD_1_66FD9FC2D8625D93_OFFSET))(this, a1);
	}
};
