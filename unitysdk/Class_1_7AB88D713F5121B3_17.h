#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_7AB88D713F5121B3_17__CCTOR_OFFSET UNITYSDK_OFFSET(0x17ADF5E0)
#define CLASS_1_7AB88D713F5121B3_17__CTOR_OFFSET UNITYSDK_OFFSET(0x17ADF5D0)

inline static constexpr unsigned int Class_1_7AB88D713F5121B3_17_TypeDefinitionIndex = 37712;

class Class_1_7AB88D713F5121B3_17 : public ::System::Object
{
public:
	static ::System::UInt32* StaticGet_Field_1_1()
	{
		return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_7AB88D713F5121B3_17_TypeDefinitionIndex)->GetStaticField(0x4F90);
	}
	static ::System::UInt32* StaticGet_Field_1_0()
	{
		return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_7AB88D713F5121B3_17_TypeDefinitionIndex)->GetStaticField(0x4F94);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7AB88D713F5121B3_17__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_7AB88D713F5121B3_17__CCTOR_OFFSET))();
	}
};
