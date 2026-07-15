#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class OrbitMoveRange; }
namespace System { class String; }

#define CLASS_2_DC5AFEB4384BEEDA_METHOD_2_1C228CF47BAE7E24_OFFSET UNITYSDK_OFFSET(0xBBCC1A0)
#define CLASS_2_DC5AFEB4384BEEDA__CTOR_OFFSET UNITYSDK_OFFSET(0xBBCC2C0)

inline static constexpr unsigned int Class_2_DC5AFEB4384BEEDA_TypeDefinitionIndex = 22047;

class Class_2_DC5AFEB4384BEEDA : public ::RPG::GameCore::JsonConfig
{
public:
	::Il2CppArray<::RPG::GameCore::OrbitMoveRange*>* Field_2_0; // 0x10
	::System::String* Field_2_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DC5AFEB4384BEEDA__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_2_1C228CF47BAE7E24(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_2_DC5AFEB4384BEEDA*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_2_DC5AFEB4384BEEDA*&))((::PBYTE)hIl2Cpp + CLASS_2_DC5AFEB4384BEEDA_METHOD_2_1C228CF47BAE7E24_OFFSET))(a1, a2);
	}
};
