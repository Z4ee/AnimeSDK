#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FIVEDIMPAUSEMUSICACTION_METHOD_3_64C15A810288E0F1_OFFSET UNITYSDK_OFFSET(0x1D0F7400)
#define RPG_GAMECORE_FIVEDIMPAUSEMUSICACTION_METHOD_3_94F500745B78EA9C_OFFSET UNITYSDK_OFFSET(0x1D0F7380)
#define RPG_GAMECORE_FIVEDIMPAUSEMUSICACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1D0F73F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimPauseMusicAction_TypeDefinitionIndex = 18490;

	class FiveDimPauseMusicAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMPAUSEMUSICACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_94F500745B78EA9C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimPauseMusicAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimPauseMusicAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMPAUSEMUSICACTION_METHOD_3_94F500745B78EA9C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_64C15A810288E0F1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimPauseMusicAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimPauseMusicAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMPAUSEMUSICACTION_METHOD_3_64C15A810288E0F1_OFFSET))(a1, a2);
		}
	};
}
