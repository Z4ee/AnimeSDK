#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_96F671E4E83A73C0;

#define CLASS_1_D55B8B56969C8255_METHOD_1_054B8F7AF60506D5_OFFSET UNITYSDK_OFFSET(0x1D0F3510)
#define CLASS_1_D55B8B56969C8255__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D0F6F40)
#define CLASS_1_D55B8B56969C8255__CTOR_OFFSET UNITYSDK_OFFSET(0x1D0F6F30)

inline static constexpr unsigned int Class_1_D55B8B56969C8255_TypeDefinitionIndex = 41503;

class Class_1_D55B8B56969C8255 : public ::System::Object
{
public:
	static ::Class_1_D55B8B56969C8255** StaticGet_Field_1_0()
	{
		return (::Class_1_D55B8B56969C8255**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D55B8B56969C8255_TypeDefinitionIndex)->GetStaticField(0x4E270);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D55B8B56969C8255__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D55B8B56969C8255__CCTOR_OFFSET))();
	}

	::System::Void Method_1_054B8F7AF60506D5(::Class_1_96F671E4E83A73C0* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_96F671E4E83A73C0*))((::PBYTE)hIl2Cpp + CLASS_1_D55B8B56969C8255_METHOD_1_054B8F7AF60506D5_OFFSET))(this, a1);
	}
};
