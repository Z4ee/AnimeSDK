#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_83665B095F1535B5_12_METHOD_1_86026B47A3027B67_OFFSET UNITYSDK_OFFSET(0x100DA290)
#define CLASS_1_83665B095F1535B5_12__CCTOR_OFFSET UNITYSDK_OFFSET(0x100DA280)
#define CLASS_1_83665B095F1535B5_12__CTOR_OFFSET UNITYSDK_OFFSET(0x100DA270)

inline static constexpr unsigned int Class_1_83665B095F1535B5_12_TypeDefinitionIndex = 65774;

class Class_1_83665B095F1535B5_12 : public ::System::Object
{
public:
	static ::System::Boolean* StaticGet_Field_1_0()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_83665B095F1535B5_12_TypeDefinitionIndex)->GetStaticField(0xF080);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_83665B095F1535B5_12__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_83665B095F1535B5_12__CCTOR_OFFSET))();
	}

	static ::System::Boolean Method_1_86026B47A3027B67()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_83665B095F1535B5_12_METHOD_1_86026B47A3027B67_OFFSET))();
	}
};
