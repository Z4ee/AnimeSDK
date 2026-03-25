#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System { class String; }

#define CLASS_2_CFE01593AA29BD1C_CLASS_1_22046C69D06B0F53__CTOR_OFFSET UNITYSDK_OFFSET(0x8AE8450)

inline static constexpr unsigned int Class_2_CFE01593AA29BD1C_Class_1_22046C69D06B0F53_TypeDefinitionIndex = 42302;

class Class_2_CFE01593AA29BD1C_Class_1_22046C69D06B0F53 : public ::System::Object
{
public:
	::System::Action* Field_1_1; // 0x10
	::System::String* Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CFE01593AA29BD1C_CLASS_1_22046C69D06B0F53__CTOR_OFFSET))(this);
	}
};
