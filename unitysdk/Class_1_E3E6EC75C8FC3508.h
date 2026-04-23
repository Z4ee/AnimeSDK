#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_3B5AB7569B3158C1.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class FiveDimEntryConfig; }
namespace System { class String; }

#define CLASS_1_E3E6EC75C8FC3508_METHOD_1_DA1BF2C227DC3D86_OFFSET UNITYSDK_OFFSET(0x17FCD4F0)
#define CLASS_1_E3E6EC75C8FC3508__CTOR_OFFSET UNITYSDK_OFFSET(0x17FCD530)

inline static constexpr unsigned int Class_1_E3E6EC75C8FC3508_TypeDefinitionIndex = 39168;

class Class_1_E3E6EC75C8FC3508 : public ::System::Object
{
public:
	::RPG::GameCore::FiveDimEntryConfig* Field_1_0; // 0x10
	::Struct_2_3B5AB7569B3158C1 Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E3E6EC75C8FC3508__CTOR_OFFSET))(this);
	}

	::System::String* Method_1_DA1BF2C227DC3D86()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E3E6EC75C8FC3508_METHOD_1_DA1BF2C227DC3D86_OFFSET))(this);
	}
};
