#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_ADVCHARACTERSTEERTOINPUTDIR_METHOD_3_5D861ADE43A37ABD_OFFSET UNITYSDK_OFFSET(0x1CDC4440)
#define RPG_GAMECORE_ADVCHARACTERSTEERTOINPUTDIR_METHOD_3_D3CAFED6DD117D88_OFFSET UNITYSDK_OFFSET(0x1CDC4400)
#define RPG_GAMECORE_ADVCHARACTERSTEERTOINPUTDIR__CTOR_OFFSET UNITYSDK_OFFSET(0x1CDC4430)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvCharacterSteerToInputDir_TypeDefinitionIndex = 20000;

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

		static ::System::Void Method_3_D3CAFED6DD117D88(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvCharacterSteerToInputDir*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvCharacterSteerToInputDir*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVCHARACTERSTEERTOINPUTDIR_METHOD_3_D3CAFED6DD117D88_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_5D861ADE43A37ABD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvCharacterSteerToInputDir* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvCharacterSteerToInputDir*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVCHARACTERSTEERTOINPUTDIR_METHOD_3_5D861ADE43A37ABD_OFFSET))(a1, a2);
		}
	};
}
