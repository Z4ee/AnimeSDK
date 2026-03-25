#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_96F671E4E83A73C0;

#define CLASS_1_97FD96A0BFFCE8AF_METHOD_1_E1513374C600EBEC_OFFSET UNITYSDK_OFFSET(0x18382390)
#define CLASS_1_97FD96A0BFFCE8AF__CCTOR_OFFSET UNITYSDK_OFFSET(0x18387A90)
#define CLASS_1_97FD96A0BFFCE8AF__CTOR_OFFSET UNITYSDK_OFFSET(0x18387A80)

inline static constexpr unsigned int Class_1_97FD96A0BFFCE8AF_TypeDefinitionIndex = 34038;

class Class_1_97FD96A0BFFCE8AF : public ::System::Object
{
public:
	static ::Class_1_97FD96A0BFFCE8AF** StaticGet_Field_1_0()
	{
		return (::Class_1_97FD96A0BFFCE8AF**)Il2CppClass::FromTypeDefinitionIndex(Class_1_97FD96A0BFFCE8AF_TypeDefinitionIndex)->GetStaticField(0x26960);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_97FD96A0BFFCE8AF__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_97FD96A0BFFCE8AF__CCTOR_OFFSET))();
	}

	::System::Void Method_1_E1513374C600EBEC(::Class_1_96F671E4E83A73C0* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_96F671E4E83A73C0*))((::PBYTE)hIl2Cpp + CLASS_1_97FD96A0BFFCE8AF_METHOD_1_E1513374C600EBEC_OFFSET))(this, a1);
	}
};
