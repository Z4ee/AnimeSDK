#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/FMChannelSourceRequestPriority.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_12040229E0D4A17F_CLEAR_OFFSET UNITYSDK_OFFSET(0x119443D0)
#define CLASS_1_12040229E0D4A17F__CTOR_OFFSET UNITYSDK_OFFSET(0x11944430)

inline static constexpr unsigned int Class_1_12040229E0D4A17F_TypeDefinitionIndex = 49366;

class Class_1_12040229E0D4A17F : public ::System::Object
{
public:
	::System::String* Field_1_0; // 0x10
	::RPG::Client::FMChannelSourceRequestPriority Field_1_1; // 0x18
	::System::Single Field_1_3; // 0x1C
	::System::Single Field_1_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_12040229E0D4A17F__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_12040229E0D4A17F_CLEAR_OFFSET))(this);
	}
};
