#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define FRAMETIMINGUTILS_END_OFFSET UNITYSDK_OFFSET(0x14D74C90)
#define FRAMETIMINGUTILS_START_OFFSET UNITYSDK_OFFSET(0x14D74C30)

inline static constexpr unsigned int FrameTimingUtils_TypeDefinitionIndex = 46502;

class FrameTimingUtils : public ::System::Object
{
public:
	static ::System::Void Start(::System::String* filePath)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + FRAMETIMINGUTILS_START_OFFSET))(filePath);
	}

	static ::System::Void End()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FRAMETIMINGUTILS_END_OFFSET))();
	}
};
