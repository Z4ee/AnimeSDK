#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_A7BB374B2DB46D73;
namespace RPG::GameCore { class FiveDimBorderPlatConfig; }

#define CLASS_1_16DB7E1B089706BB_CLEAR_OFFSET UNITYSDK_OFFSET(0x17E08700)
#define CLASS_1_16DB7E1B089706BB__CTOR_OFFSET UNITYSDK_OFFSET(0x17E08760)

inline static constexpr unsigned int Class_1_16DB7E1B089706BB_TypeDefinitionIndex = 39318;

class Class_1_16DB7E1B089706BB : public ::System::Object
{
public:
	::Class_1_A7BB374B2DB46D73* Field_1_1; // 0x10
	::RPG::GameCore::FiveDimBorderPlatConfig* Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_16DB7E1B089706BB__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_16DB7E1B089706BB_CLEAR_OFFSET))(this);
	}
};
