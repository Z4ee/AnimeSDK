#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChenLingFesAnimState.h"
#include "unitysdk/RPG/GameCore/STTaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define CLASS_4_48419B731F2612DE_METHOD_4_509114C78249BEAB_OFFSET UNITYSDK_OFFSET(0x191BE6A0)
#define CLASS_4_48419B731F2612DE_METHOD_4_F074025B94DFED31_OFFSET UNITYSDK_OFFSET(0x191BE5D0)
#define CLASS_4_48419B731F2612DE__CTOR_OFFSET UNITYSDK_OFFSET(0x191BE650)

inline static constexpr unsigned int Class_4_48419B731F2612DE_TypeDefinitionIndex = 20164;

class Class_4_48419B731F2612DE : public ::RPG::GameCore::STTaskConfig
{
public:
	::RPG::GameCore::ChenLingFesAnimState Field_4_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_48419B731F2612DE__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_4_F074025B94DFED31(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_4_48419B731F2612DE*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_4_48419B731F2612DE*&))((::PBYTE)hIl2Cpp + CLASS_4_48419B731F2612DE_METHOD_4_F074025B94DFED31_OFFSET))(a1, a2);
	}

	static ::System::Void Method_4_509114C78249BEAB(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_4_48419B731F2612DE* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_4_48419B731F2612DE*))((::PBYTE)hIl2Cpp + CLASS_4_48419B731F2612DE_METHOD_4_509114C78249BEAB_OFFSET))(a1, a2);
	}
};
