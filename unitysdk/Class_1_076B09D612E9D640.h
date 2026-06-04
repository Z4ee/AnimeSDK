#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_E74E5E69A522CF12;
namespace RPG::GameCore { class FiveDimSimpleHitBoxConfig; }

#define CLASS_1_076B09D612E9D640_CLEAR_OFFSET UNITYSDK_OFFSET(0x18C01C00)
#define CLASS_1_076B09D612E9D640__CTOR_OFFSET UNITYSDK_OFFSET(0x18C01C80)

inline static constexpr unsigned int Class_1_076B09D612E9D640_TypeDefinitionIndex = 40107;

class Class_1_076B09D612E9D640 : public ::System::Object
{
public:
	::RPG::GameCore::FiveDimSimpleHitBoxConfig* Field_1_0; // 0x10
	::Class_1_E74E5E69A522CF12* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_076B09D612E9D640__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_076B09D612E9D640_CLEAR_OFFSET))(this);
	}
};
