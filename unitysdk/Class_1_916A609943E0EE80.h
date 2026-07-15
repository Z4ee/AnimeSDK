#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_916A609943E0EE80__CTOR_OFFSET UNITYSDK_OFFSET(0x1646A320)

inline static constexpr unsigned int Class_1_916A609943E0EE80_TypeDefinitionIndex = 75584;

class Class_1_916A609943E0EE80 : public ::System::Object
{
public:
	::System::UInt32 Field_1_0; // 0x10
	::System::Boolean Field_1_1; // 0x14

	::System::Void _ctor(::System::UInt32 a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_916A609943E0EE80__CTOR_OFFSET))(this, a1, a2);
	}
};
