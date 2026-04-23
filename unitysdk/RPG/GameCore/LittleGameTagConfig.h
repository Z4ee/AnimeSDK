#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LittleGameComponentConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class HoyoTagContainer; }

#define RPG_GAMECORE_LITTLEGAMETAGCONFIG_METHOD_3_C29932943B87CA43_OFFSET UNITYSDK_OFFSET(0x18A69280)
#define RPG_GAMECORE_LITTLEGAMETAGCONFIG_METHOD_3_C4AE5EF6E81A4FAF_OFFSET UNITYSDK_OFFSET(0x18A6EE50)
#define RPG_GAMECORE_LITTLEGAMETAGCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x18A69260)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LittleGameTagConfig_TypeDefinitionIndex = 17909;

	class LittleGameTagConfig : public ::RPG::GameCore::LittleGameComponentConfig
	{
	public:
		::RPG::GameCore::HoyoTagContainer* Tags; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMETAGCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_C4AE5EF6E81A4FAF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LittleGameTagConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LittleGameTagConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMETAGCONFIG_METHOD_3_C4AE5EF6E81A4FAF_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_C29932943B87CA43(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LittleGameTagConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LittleGameTagConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMETAGCONFIG_METHOD_3_C29932943B87CA43_OFFSET))(a1, a2);
		}
	};
}
