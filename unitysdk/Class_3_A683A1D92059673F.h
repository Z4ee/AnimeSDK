#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ElationTimeAtmosphereShowNumberType.h"
#include "unitysdk/RPG/GameCore/ElationTimeAtmosphereType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define CLASS_3_A683A1D92059673F_METHOD_3_99AC8556B83941E4_OFFSET UNITYSDK_OFFSET(0x18B836C0)
#define CLASS_3_A683A1D92059673F_METHOD_3_FF096862EF90B096_OFFSET UNITYSDK_OFFSET(0x18B83640)
#define CLASS_3_A683A1D92059673F__CTOR_OFFSET UNITYSDK_OFFSET(0x18B83690)

inline static constexpr unsigned int Class_3_A683A1D92059673F_TypeDefinitionIndex = 21508;

class Class_3_A683A1D92059673F : public ::RPG::GameCore::TaskConfig
{
public:
	::RPG::GameCore::TargetEvaluator* Field_3_3; // 0x18
	::RPG::GameCore::ElationTimeAtmosphereShowNumberType Field_3_2; // 0x20
	::System::Boolean Field_3_4; // 0x24
	::System::Boolean Field_3_0; // 0x25
	::RPG::GameCore::ElationTimeAtmosphereType Field_3_1; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A683A1D92059673F__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_FF096862EF90B096(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_A683A1D92059673F*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_A683A1D92059673F*&))((::PBYTE)hIl2Cpp + CLASS_3_A683A1D92059673F_METHOD_3_FF096862EF90B096_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_99AC8556B83941E4(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_A683A1D92059673F* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_A683A1D92059673F*))((::PBYTE)hIl2Cpp + CLASS_3_A683A1D92059673F_METHOD_3_99AC8556B83941E4_OFFSET))(a1, a2);
	}
};
