#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueHyperParamType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define CLASS_1_73507DF29F8561CD_METHOD_1_D44B7F51DEAAFB41_OFFSET UNITYSDK_OFFSET(0x17722130)
#define CLASS_1_73507DF29F8561CD__CTOR_OFFSET UNITYSDK_OFFSET(0x17722240)

inline static constexpr unsigned int Class_1_73507DF29F8561CD_TypeDefinitionIndex = 13429;

class Class_1_73507DF29F8561CD : public ::System::Object
{
public:
	::System::String* Field_1_1; // 0x10
	::RPG::GameCore::RogueHyperParamType Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_73507DF29F8561CD__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_D44B7F51DEAAFB41(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_1_73507DF29F8561CD*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_1_73507DF29F8561CD*&))((::PBYTE)hIl2Cpp + CLASS_1_73507DF29F8561CD_METHOD_1_D44B7F51DEAAFB41_OFFSET))(a1, a2);
	}
};
