#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ChenLingFesTargetConfig; }

#define CLASS_3_32A870E0A57B49DE_METHOD_3_79D2339C9987D6C4_OFFSET UNITYSDK_OFFSET(0x1B510530)
#define CLASS_3_32A870E0A57B49DE_METHOD_3_9EA7A67A8BC52A5F_OFFSET UNITYSDK_OFFSET(0x1B510570)
#define CLASS_3_32A870E0A57B49DE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B510560)

inline static constexpr unsigned int Class_3_32A870E0A57B49DE_TypeDefinitionIndex = 20703;

class Class_3_32A870E0A57B49DE : public ::RPG::GameCore::TaskConfig
{
public:
	::RPG::GameCore::ChenLingFesTargetConfig* Field_3_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_32A870E0A57B49DE__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_79D2339C9987D6C4(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_32A870E0A57B49DE*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_32A870E0A57B49DE*&))((::PBYTE)hIl2Cpp + CLASS_3_32A870E0A57B49DE_METHOD_3_79D2339C9987D6C4_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_9EA7A67A8BC52A5F(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_32A870E0A57B49DE* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_32A870E0A57B49DE*))((::PBYTE)hIl2Cpp + CLASS_3_32A870E0A57B49DE_METHOD_3_9EA7A67A8BC52A5F_OFFSET))(a1, a2);
	}
};
