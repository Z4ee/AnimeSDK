#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateRinHouguRarityType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define CLASS_1_16BF9868480A3A80_METHOD_1_D44B7F51DEAAFB41_OFFSET UNITYSDK_OFFSET(0x1A40FE80)
#define CLASS_1_16BF9868480A3A80__CTOR_OFFSET UNITYSDK_OFFSET(0x1A40FF90)

inline static constexpr unsigned int Class_1_16BF9868480A3A80_TypeDefinitionIndex = 11528;

class Class_1_16BF9868480A3A80 : public ::System::Object
{
public:
	::System::String* OCBFMPOCBIK; // 0x10
	::RPG::GameCore::FateRinHouguRarityType PMIEAEGJNMJ; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_16BF9868480A3A80__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_D44B7F51DEAAFB41(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_1_16BF9868480A3A80*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_1_16BF9868480A3A80*&))((::PBYTE)hIl2Cpp + CLASS_1_16BF9868480A3A80_METHOD_1_D44B7F51DEAAFB41_OFFSET))(a1, a2);
	}
};
