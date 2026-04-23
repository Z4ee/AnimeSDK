#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_228EAF83AFF17FC4_METHOD_1_6765E2507E6BA335_OFFSET UNITYSDK_OFFSET(0x9A119F0)

inline static constexpr unsigned int Class_1_228EAF83AFF17FC4_TypeDefinitionIndex = 67004;

class Class_1_228EAF83AFF17FC4 : public ::System::Object
{
public:
	static ::System::Boolean* StaticGet_Field_1_0()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_228EAF83AFF17FC4_TypeDefinitionIndex)->GetStaticField(0x2A90);
	}

	static ::System::String* Method_1_6765E2507E6BA335()
	{
		return ((::System::String*(*)())((::PBYTE)hIl2Cpp + CLASS_1_228EAF83AFF17FC4_METHOD_1_6765E2507E6BA335_OFFSET))();
	}
};
