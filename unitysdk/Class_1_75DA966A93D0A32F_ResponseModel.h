#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_75DA966A93D0A32F_RESPONSEMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0x15E419F0)

inline static constexpr unsigned int Class_1_75DA966A93D0A32F_ResponseModel_TypeDefinitionIndex = 47812;

class Class_1_75DA966A93D0A32F_ResponseModel : public ::System::Object
{
public:
	::System::Int32 retcode; // 0x10
	::System::String* message; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_75DA966A93D0A32F_RESPONSEMODEL__CTOR_OFFSET))(this);
	}
};
