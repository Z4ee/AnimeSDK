#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_WAITROGUESELECTBUFF_METHOD_3_3BB8608BA10E841F_OFFSET UNITYSDK_OFFSET(0x1D1BAE30)
#define RPG_GAMECORE_WAITROGUESELECTBUFF_METHOD_3_F866739344894223_OFFSET UNITYSDK_OFFSET(0x1D1BAE80)
#define RPG_GAMECORE_WAITROGUESELECTBUFF__CTOR_OFFSET UNITYSDK_OFFSET(0x1D1BAE70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WaitRogueSelectBuff_TypeDefinitionIndex = 19702;

	class WaitRogueSelectBuff : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITROGUESELECTBUFF__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_3BB8608BA10E841F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaitRogueSelectBuff*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaitRogueSelectBuff*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITROGUESELECTBUFF_METHOD_3_3BB8608BA10E841F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_F866739344894223(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaitRogueSelectBuff* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaitRogueSelectBuff*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITROGUESELECTBUFF_METHOD_3_F866739344894223_OFFSET))(a1, a2);
		}
	};
}
