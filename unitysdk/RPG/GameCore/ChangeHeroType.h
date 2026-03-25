#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CHANGEHEROTYPE_METHOD_3_CAFA0220AFB5DD7F_OFFSET UNITYSDK_OFFSET(0x17063470)
#define RPG_GAMECORE_CHANGEHEROTYPE_METHOD_3_E7599A312C4D46CF_OFFSET UNITYSDK_OFFSET(0x17063500)
#define RPG_GAMECORE_CHANGEHEROTYPE__CTOR_OFFSET UNITYSDK_OFFSET(0x170634D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChangeHeroType_TypeDefinitionIndex = 18757;

	class ChangeHeroType : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHANGEHEROTYPE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_CAFA0220AFB5DD7F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChangeHeroType*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChangeHeroType*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHANGEHEROTYPE_METHOD_3_CAFA0220AFB5DD7F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_E7599A312C4D46CF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChangeHeroType* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChangeHeroType*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHANGEHEROTYPE_METHOD_3_E7599A312C4D46CF_OFFSET))(a1, a2);
		}
	};
}
