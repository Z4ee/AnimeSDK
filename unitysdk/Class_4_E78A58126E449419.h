#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChenLingFesAIState.h"
#include "unitysdk/RPG/GameCore/STTaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define CLASS_4_E78A58126E449419_METHOD_4_509114C78249BEAB_OFFSET UNITYSDK_OFFSET(0x19D489D0)
#define CLASS_4_E78A58126E449419_METHOD_4_F074025B94DFED31_OFFSET UNITYSDK_OFFSET(0x19D48900)
#define CLASS_4_E78A58126E449419__CTOR_OFFSET UNITYSDK_OFFSET(0x19D48980)

inline static constexpr unsigned int Class_4_E78A58126E449419_TypeDefinitionIndex = 20163;

class Class_4_E78A58126E449419 : public ::RPG::GameCore::STTaskConfig
{
public:
	::RPG::GameCore::ChenLingFesAIState Field_4_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_E78A58126E449419__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_4_F074025B94DFED31(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_4_E78A58126E449419*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_4_E78A58126E449419*&))((::PBYTE)hIl2Cpp + CLASS_4_E78A58126E449419_METHOD_4_F074025B94DFED31_OFFSET))(a1, a2);
	}

	static ::System::Void Method_4_509114C78249BEAB(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_4_E78A58126E449419* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_4_E78A58126E449419*))((::PBYTE)hIl2Cpp + CLASS_4_E78A58126E449419_METHOD_4_509114C78249BEAB_OFFSET))(a1, a2);
	}
};
