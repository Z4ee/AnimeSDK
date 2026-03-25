#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FIVEDIMRESUMEMUSICACTION_METHOD_3_553BA8C7B27049C4_OFFSET UNITYSDK_OFFSET(0x17207940)
#define RPG_GAMECORE_FIVEDIMRESUMEMUSICACTION_METHOD_3_658BF22C34BCAA1D_OFFSET UNITYSDK_OFFSET(0x17207880)
#define RPG_GAMECORE_FIVEDIMRESUMEMUSICACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x17207920)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimResumeMusicAction_TypeDefinitionIndex = 17165;

	class FiveDimResumeMusicAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMRESUMEMUSICACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_658BF22C34BCAA1D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimResumeMusicAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimResumeMusicAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMRESUMEMUSICACTION_METHOD_3_658BF22C34BCAA1D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_553BA8C7B27049C4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimResumeMusicAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimResumeMusicAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMRESUMEMUSICACTION_METHOD_3_553BA8C7B27049C4_OFFSET))(a1, a2);
		}
	};
}
