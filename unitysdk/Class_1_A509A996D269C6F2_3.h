#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_A509A996D269C6F2_3__CTOR_OFFSET UNITYSDK_OFFSET(0xC2AD390)

inline static constexpr unsigned int Class_1_A509A996D269C6F2_3_TypeDefinitionIndex = 72316;

class Class_1_A509A996D269C6F2_3 : public ::System::Object
{
public:
	::System::String* FBKAMIHGLFK; // 0x10
	::System::UInt32 PJIEOECDIFN; // 0x18
	::System::UInt32 AAGKEBFHLMC; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A509A996D269C6F2_3__CTOR_OFFSET))(this);
	}
};
