#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/Struct_2_331ACDD60B60D2E3.h"

class Class_1_7A22A3DBEEDD1F80;
class Class_2_EF79B40F86BE9C39;

#define CLASS_2_218E95D425DAB365_METHOD_2_2F4B6108E2917C18_OFFSET UNITYSDK_OFFSET(0x18272930)
#define CLASS_2_218E95D425DAB365__CTOR_OFFSET UNITYSDK_OFFSET(0x18272AE0)

inline static constexpr unsigned int Class_2_218E95D425DAB365_TypeDefinitionIndex = 15919;

class Class_2_218E95D425DAB365 : public ::RPG::GameCore::JsonConfig
{
public:
	::Il2CppArray<::Struct_2_331ACDD60B60D2E3>* Field_2_1; // 0x10
	::Il2CppArray<::Class_2_EF79B40F86BE9C39*>* Field_2_2; // 0x18
	::System::UInt64 Field_2_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_218E95D425DAB365__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_2_2F4B6108E2917C18(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_2_218E95D425DAB365*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_2_218E95D425DAB365*&))((::PBYTE)hIl2Cpp + CLASS_2_218E95D425DAB365_METHOD_2_2F4B6108E2917C18_OFFSET))(a1, a2);
	}
};
