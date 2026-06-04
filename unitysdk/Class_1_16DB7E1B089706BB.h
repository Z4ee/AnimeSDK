#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_A7BB374B2DB46D73;
namespace RPG::GameCore { class FiveDimBorderPlatConfig; }

#define CLASS_1_16DB7E1B089706BB_CLEAR_OFFSET UNITYSDK_OFFSET(0x18C22950)
#define CLASS_1_16DB7E1B089706BB__CTOR_OFFSET UNITYSDK_OFFSET(0x18C229B0)

inline static constexpr unsigned int Class_1_16DB7E1B089706BB_TypeDefinitionIndex = 40087;

class Class_1_16DB7E1B089706BB : public ::System::Object
{
public:
	::RPG::GameCore::FiveDimBorderPlatConfig* Field_1_0; // 0x10
	::Class_1_A7BB374B2DB46D73* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_16DB7E1B089706BB__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_16DB7E1B089706BB_CLEAR_OFFSET))(this);
	}
};
