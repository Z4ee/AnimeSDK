#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_46533D273E3AA747_2_METHOD_1_A0EEEBAD7F37F580_OFFSET UNITYSDK_OFFSET(0x1D8FF690)
#define CLASS_1_46533D273E3AA747_2_METHOD_1_CE81D059476B1F49_OFFSET UNITYSDK_OFFSET(0x1D8FF680)
#define CLASS_1_46533D273E3AA747_2__CTOR_OFFSET UNITYSDK_OFFSET(0x1D8FF670)

inline static constexpr unsigned int Class_1_46533D273E3AA747_2_TypeDefinitionIndex = 35270;

class Class_1_46533D273E3AA747_2 : public ::System::Object
{
public:
	static ::System::UInt64* StaticGet_Field_1_0()
	{
		return (::System::UInt64*)Il2CppClass::FromTypeDefinitionIndex(Class_1_46533D273E3AA747_2_TypeDefinitionIndex)->GetStaticField(0x84F0);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_46533D273E3AA747_2__CTOR_OFFSET))(this);
	}

	static ::System::UInt64 Method_1_CE81D059476B1F49()
	{
		return ((::System::UInt64(*)())((::PBYTE)hIl2Cpp + CLASS_1_46533D273E3AA747_2_METHOD_1_CE81D059476B1F49_OFFSET))();
	}

	static ::System::UInt64 Method_1_A0EEEBAD7F37F580()
	{
		return ((::System::UInt64(*)())((::PBYTE)hIl2Cpp + CLASS_1_46533D273E3AA747_2_METHOD_1_A0EEEBAD7F37F580_OFFSET))();
	}
};
