#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_D0732A9EE482521E.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_1257637E4CB15DE5_2_METHOD_1_FC545203151D288E_OFFSET UNITYSDK_OFFSET(0x14065E50)
#define CLASS_1_1257637E4CB15DE5_2__CCTOR_OFFSET UNITYSDK_OFFSET(0x14065E10)

inline static constexpr unsigned int Class_1_1257637E4CB15DE5_2_TypeDefinitionIndex = 68046;

class Class_1_1257637E4CB15DE5_2 : public ::System::Object
{
public:
	static ::Struct_2_D0732A9EE482521E* StaticGet_Field_1_0()
	{
		return (::Struct_2_D0732A9EE482521E*)Il2CppClass::FromTypeDefinitionIndex(Class_1_1257637E4CB15DE5_2_TypeDefinitionIndex)->GetStaticField(0x10510);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_1257637E4CB15DE5_2__CCTOR_OFFSET))();
	}

	static ::Struct_2_D0732A9EE482521E Method_1_FC545203151D288E()
	{
		return ((::Struct_2_D0732A9EE482521E(*)())((::PBYTE)hIl2Cpp + CLASS_1_1257637E4CB15DE5_2_METHOD_1_FC545203151D288E_OFFSET))();
	}
};
