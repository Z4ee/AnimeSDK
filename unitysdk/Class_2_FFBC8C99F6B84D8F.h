#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/STDetectMoneyType.h"

class Class_1_7A22A3DBEEDD1F80;

#define CLASS_2_FFBC8C99F6B84D8F_METHOD_2_E4EE4D98EE55C81B_OFFSET UNITYSDK_OFFSET(0x1BE88710)
#define CLASS_2_FFBC8C99F6B84D8F__CTOR_OFFSET UNITYSDK_OFFSET(0x1BE88860)

inline static constexpr unsigned int Class_2_FFBC8C99F6B84D8F_TypeDefinitionIndex = 19353;

class Class_2_FFBC8C99F6B84D8F : public ::RPG::GameCore::JsonConfig
{
public:
	::System::Single Field_2_0; // 0x10
	::RPG::GameCore::STDetectMoneyType Field_2_1; // 0x14

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FFBC8C99F6B84D8F__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_2_E4EE4D98EE55C81B(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_2_FFBC8C99F6B84D8F*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_2_FFBC8C99F6B84D8F*&))((::PBYTE)hIl2Cpp + CLASS_2_FFBC8C99F6B84D8F_METHOD_2_E4EE4D98EE55C81B_OFFSET))(a1, a2);
	}
};
