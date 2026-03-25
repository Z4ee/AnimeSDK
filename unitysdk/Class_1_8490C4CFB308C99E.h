#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LimaoNewsPostDisplayTag.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define CLASS_1_8490C4CFB308C99E_METHOD_1_0E3C9CE42200F670_OFFSET UNITYSDK_OFFSET(0x16B709A0)
#define CLASS_1_8490C4CFB308C99E__CTOR_OFFSET UNITYSDK_OFFSET(0x16B70BF0)

inline static constexpr unsigned int Class_1_8490C4CFB308C99E_TypeDefinitionIndex = 12730;

class Class_1_8490C4CFB308C99E : public ::System::Object
{
public:
	::Il2CppArray<::RPG::GameCore::LimaoNewsPostDisplayTag>* Field_1_3; // 0x10
	::System::UInt32 Field_1_4; // 0x18
	::System::UInt32 Field_1_1; // 0x1C
	::System::UInt32 Field_1_0; // 0x20
	::System::UInt32 Field_1_2; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8490C4CFB308C99E__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_0E3C9CE42200F670(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_1_8490C4CFB308C99E*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_1_8490C4CFB308C99E*&))((::PBYTE)hIl2Cpp + CLASS_1_8490C4CFB308C99E_METHOD_1_0E3C9CE42200F670_OFFSET))(a1, a2);
	}
};
