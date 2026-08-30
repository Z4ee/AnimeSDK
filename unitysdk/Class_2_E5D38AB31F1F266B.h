#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/OrbitTargetPosType.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }

#define CLASS_2_E5D38AB31F1F266B_METHOD_2_BB96740FC520E8ED_OFFSET UNITYSDK_OFFSET(0x1ADFB470)
#define CLASS_2_E5D38AB31F1F266B__CTOR_OFFSET UNITYSDK_OFFSET(0x1ADFB840)

inline static constexpr unsigned int Class_2_E5D38AB31F1F266B_TypeDefinitionIndex = 22604;

class Class_2_E5D38AB31F1F266B : public ::RPG::GameCore::JsonConfig
{
public:
	::RPG::GameCore::DynamicFloat* NEMDKBKDFDN; // 0x10
	::RPG::GameCore::DynamicFloat* DBFCBDAFGAP; // 0x18
	::RPG::GameCore::DynamicFloat* IDKONBFPBLH; // 0x20
	::RPG::GameCore::DynamicFloat* HBAMPJPOOLM; // 0x28
	::RPG::GameCore::DynamicFloat* NHJNGNINNIL; // 0x30
	::RPG::GameCore::DynamicFloat* IKMMBBLANIC; // 0x38
	::RPG::GameCore::OrbitTargetPosType ILCCOJAOAFO; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E5D38AB31F1F266B__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_2_BB96740FC520E8ED(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_2_E5D38AB31F1F266B*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_2_E5D38AB31F1F266B*&))((::PBYTE)hIl2Cpp + CLASS_2_E5D38AB31F1F266B_METHOD_2_BB96740FC520E8ED_OFFSET))(a1, a2);
	}
};
