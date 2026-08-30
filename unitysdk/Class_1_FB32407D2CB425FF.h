#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define CLASS_1_FB32407D2CB425FF__CTOR_OFFSET UNITYSDK_OFFSET(0xDACFF10)

inline static constexpr unsigned int Class_1_FB32407D2CB425FF_TypeDefinitionIndex = 56411;

class Class_1_FB32407D2CB425FF : public ::System::Object
{
public:
	::System::Action* MHEGPBOBCNB; // 0x10
	::System::Action* HMLKKGLNFCJ; // 0x18
	::System::Single BJMAMHMCOEL; // 0x20
	::System::Boolean CIHFGJDCHIA; // 0x24
	::System::Single HEMMCOGMEFA; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FB32407D2CB425FF__CTOR_OFFSET))(this);
	}
};
