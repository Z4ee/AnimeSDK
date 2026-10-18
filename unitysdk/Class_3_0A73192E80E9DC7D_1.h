#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define CLASS_3_0A73192E80E9DC7D_1_METHOD_3_469ECD10EF199C13_OFFSET UNITYSDK_OFFSET(0x1CEBF400)
#define CLASS_3_0A73192E80E9DC7D_1_METHOD_3_9E3D0C5F7C38F16C_OFFSET UNITYSDK_OFFSET(0x1CEBF390)
#define CLASS_3_0A73192E80E9DC7D_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1CEBF3E0)

inline static constexpr unsigned int Class_3_0A73192E80E9DC7D_1_TypeDefinitionIndex = 21467;

class Class_3_0A73192E80E9DC7D_1 : public ::RPG::GameCore::TaskConfig
{
public:
	::System::String* ADGDEBNHPOK; // 0x18
	::System::String* IPAEPDOOKNE; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0A73192E80E9DC7D_1__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_9E3D0C5F7C38F16C(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_0A73192E80E9DC7D_1*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_0A73192E80E9DC7D_1*&))((::PBYTE)hIl2Cpp + CLASS_3_0A73192E80E9DC7D_1_METHOD_3_9E3D0C5F7C38F16C_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_469ECD10EF199C13(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_0A73192E80E9DC7D_1* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_0A73192E80E9DC7D_1*))((::PBYTE)hIl2Cpp + CLASS_3_0A73192E80E9DC7D_1_METHOD_3_469ECD10EF199C13_OFFSET))(a1, a2);
	}
};
