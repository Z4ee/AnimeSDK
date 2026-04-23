#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_ADVCHARACTERSTEERTOINPUTDIR_METHOD_3_1F605BCABA65CBFE_OFFSET UNITYSDK_OFFSET(0x1864B040)
#define RPG_GAMECORE_ADVCHARACTERSTEERTOINPUTDIR_METHOD_3_5D861ADE43A37ABD_OFFSET UNITYSDK_OFFSET(0x1864B0C0)
#define RPG_GAMECORE_ADVCHARACTERSTEERTOINPUTDIR__CTOR_OFFSET UNITYSDK_OFFSET(0x1864B090)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvCharacterSteerToInputDir_TypeDefinitionIndex = 19175;

	class AdvCharacterSteerToInputDir : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* AnimStateName; // 0x18
		::System::Single NormalizedTimeEnd; // 0x20
		::System::Single MinRotationSpeed; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVCHARACTERSTEERTOINPUTDIR__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_1F605BCABA65CBFE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvCharacterSteerToInputDir*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvCharacterSteerToInputDir*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVCHARACTERSTEERTOINPUTDIR_METHOD_3_1F605BCABA65CBFE_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_5D861ADE43A37ABD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvCharacterSteerToInputDir* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvCharacterSteerToInputDir*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVCHARACTERSTEERTOINPUTDIR_METHOD_3_5D861ADE43A37ABD_OFFSET))(a1, a2);
		}
	};
}
