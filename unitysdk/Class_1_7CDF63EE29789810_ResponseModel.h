#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_7CDF63EE29789810_RESPONSEMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0x119837C0)

inline static constexpr unsigned int Class_1_7CDF63EE29789810_ResponseModel_TypeDefinitionIndex = 46264;

class Class_1_7CDF63EE29789810_ResponseModel : public ::System::Object
{
public:
	::System::Int32 retcode; // 0x10
	::System::String* message; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7CDF63EE29789810_RESPONSEMODEL__CTOR_OFFSET))(this);
	}
};
