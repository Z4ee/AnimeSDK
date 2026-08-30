#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/FMChannelSourceRequestPriority.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_12040229E0D4A17F_CLEAR_OFFSET UNITYSDK_OFFSET(0x17E554C0)
#define CLASS_1_12040229E0D4A17F__CTOR_OFFSET UNITYSDK_OFFSET(0x17E55520)

inline static constexpr unsigned int Class_1_12040229E0D4A17F_TypeDefinitionIndex = 60999;

class Class_1_12040229E0D4A17F : public ::System::Object
{
public:
	::System::String* ECCIPKNJJLH; // 0x10
	::System::Single GCJMFBKLGHI; // 0x18
	::System::Single IEHPFADHJFD; // 0x1C
	::RPG::Client::FMChannelSourceRequestPriority NALMBOOCCIN; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_12040229E0D4A17F__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_12040229E0D4A17F_CLEAR_OFFSET))(this);
	}
};
