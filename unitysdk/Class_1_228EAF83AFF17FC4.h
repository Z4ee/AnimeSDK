#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_228EAF83AFF17FC4_METHOD_1_6765E2507E6BA335_OFFSET UNITYSDK_OFFSET(0x1631E2F0)

inline static constexpr unsigned int Class_1_228EAF83AFF17FC4_TypeDefinitionIndex = 72659;

class Class_1_228EAF83AFF17FC4 : public ::System::Object
{
public:
	static ::System::Boolean* StaticGet_JPEBCEKMHPK()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_228EAF83AFF17FC4_TypeDefinitionIndex)->GetStaticField(0x143B0);
	}

	static ::System::String* Method_1_6765E2507E6BA335()
	{
		return ((::System::String*(*)())((::PBYTE)hIl2Cpp + CLASS_1_228EAF83AFF17FC4_METHOD_1_6765E2507E6BA335_OFFSET))();
	}
};
