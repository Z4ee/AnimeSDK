#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_4608E37A1B3D374A_30.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_126;

#define CLASS_1_F3DE26CE32518C07_METHOD_1_1B5DC4A248A4FA9D_OFFSET UNITYSDK_OFFSET(0x1E396A50)
#define CLASS_1_F3DE26CE32518C07_METHOD_1_F978A1D172468895_OFFSET UNITYSDK_OFFSET(0x1E396840)
#define CLASS_1_F3DE26CE32518C07__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E3967F0)
#define CLASS_1_F3DE26CE32518C07__CTOR_OFFSET UNITYSDK_OFFSET(0x1E396A40)

inline static constexpr unsigned int Class_1_F3DE26CE32518C07_TypeDefinitionIndex = 34516;

class Class_1_F3DE26CE32518C07 : public ::System::Object
{
public:
	static ::Il2CppArray<::Class_0_16E4307DCC419505_126*>** StaticGet_Field_1_0()
	{
		return (::Il2CppArray<::Class_0_16E4307DCC419505_126*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F3DE26CE32518C07_TypeDefinitionIndex)->GetStaticField(0x28DD0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_F3DE26CE32518C07__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F3DE26CE32518C07__CTOR_OFFSET))(this);
	}

	static ::Class_0_16E4307DCC419505_126* Method_1_1B5DC4A248A4FA9D(::Enum_3_4608E37A1B3D374A_30 a1)
	{
		return ((::Class_0_16E4307DCC419505_126*(*)(::Enum_3_4608E37A1B3D374A_30))((::PBYTE)hIl2Cpp + CLASS_1_F3DE26CE32518C07_METHOD_1_1B5DC4A248A4FA9D_OFFSET))(a1);
	}

	static ::System::Void Method_1_F978A1D172468895()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_F3DE26CE32518C07_METHOD_1_F978A1D172468895_OFFSET))();
	}
};
