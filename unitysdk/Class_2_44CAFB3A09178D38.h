#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_A170EEF84D06CBD4.h"

#define CLASS_2_44CAFB3A09178D38_METHOD_2_D460587695D41831_OFFSET UNITYSDK_OFFSET(0x95CDCE0)
#define CLASS_2_44CAFB3A09178D38__CCTOR_OFFSET UNITYSDK_OFFSET(0x95CE0F0)
#define CLASS_2_44CAFB3A09178D38__CTOR_OFFSET UNITYSDK_OFFSET(0x95CE0E0)

inline static constexpr unsigned int Class_2_44CAFB3A09178D38_TypeDefinitionIndex = 71502;

class Class_2_44CAFB3A09178D38 : public ::Class_1_A170EEF84D06CBD4
{
public:
	static ::System::Int32* StaticGet_Field_2_0()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_44CAFB3A09178D38_TypeDefinitionIndex)->GetStaticField(0x10460);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_44CAFB3A09178D38__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_44CAFB3A09178D38__CCTOR_OFFSET))();
	}

	::System::Void Method_2_D460587695D41831()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_44CAFB3A09178D38_METHOD_2_D460587695D41831_OFFSET))(this);
	}
};
