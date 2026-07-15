#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define CLASS_2_9B3E8C45B71122D5_METHOD_2_1C228CF47BAE7E24_OFFSET UNITYSDK_OFFSET(0x1B3BEC90)
#define CLASS_2_9B3E8C45B71122D5__CTOR_OFFSET UNITYSDK_OFFSET(0x1B3BEDA0)

inline static constexpr unsigned int Class_2_9B3E8C45B71122D5_TypeDefinitionIndex = 22375;

class Class_2_9B3E8C45B71122D5 : public ::RPG::GameCore::JsonConfig
{
public:
	::System::String* Field_2_0; // 0x10
	::System::String* Field_2_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9B3E8C45B71122D5__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_2_1C228CF47BAE7E24(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_2_9B3E8C45B71122D5*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_2_9B3E8C45B71122D5*&))((::PBYTE)hIl2Cpp + CLASS_2_9B3E8C45B71122D5_METHOD_2_1C228CF47BAE7E24_OFFSET))(a1, a2);
	}
};
