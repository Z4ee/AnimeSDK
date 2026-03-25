#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_EEB24CB710C1E558_METHOD_1_D02A943E69A5767C_OFFSET UNITYSDK_OFFSET(0x114959D0)
#define CLASS_1_EEB24CB710C1E558__CCTOR_OFFSET UNITYSDK_OFFSET(0x11495AB0)
#define CLASS_1_EEB24CB710C1E558__CTOR_OFFSET UNITYSDK_OFFSET(0x11495AA0)

inline static constexpr unsigned int Class_1_EEB24CB710C1E558_TypeDefinitionIndex = 53350;

class Class_1_EEB24CB710C1E558 : public ::System::Object
{
public:
	static ::Class_1_EEB24CB710C1E558** StaticGet_Field_1_0()
	{
		return (::Class_1_EEB24CB710C1E558**)Il2CppClass::FromTypeDefinitionIndex(Class_1_EEB24CB710C1E558_TypeDefinitionIndex)->GetStaticField(0x36820);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EEB24CB710C1E558__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_EEB24CB710C1E558__CCTOR_OFFSET))();
	}

	::System::UInt32 Method_1_D02A943E69A5767C(::System::UInt32 a1)
	{
		return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_EEB24CB710C1E558_METHOD_1_D02A943E69A5767C_OFFSET))(this, a1);
	}
};
