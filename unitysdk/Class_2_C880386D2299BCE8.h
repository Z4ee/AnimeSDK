#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/STDetectNPCMonsterType.h"

class Class_1_7A22A3DBEEDD1F80;

#define CLASS_2_C880386D2299BCE8_METHOD_2_1C228CF47BAE7E24_OFFSET UNITYSDK_OFFSET(0x1CC62D50)
#define CLASS_2_C880386D2299BCE8__CTOR_OFFSET UNITYSDK_OFFSET(0x1CC62E70)

inline static constexpr unsigned int Class_2_C880386D2299BCE8_TypeDefinitionIndex = 19893;

class Class_2_C880386D2299BCE8 : public ::RPG::GameCore::JsonConfig
{
public:
	::System::Single LABDELLPODK; // 0x10
	::RPG::GameCore::STDetectNPCMonsterType ABFDDDEHDGN; // 0x14

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C880386D2299BCE8__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_2_1C228CF47BAE7E24(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_2_C880386D2299BCE8*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_2_C880386D2299BCE8*&))((::PBYTE)hIl2Cpp + CLASS_2_C880386D2299BCE8_METHOD_2_1C228CF47BAE7E24_OFFSET))(a1, a2);
	}
};
