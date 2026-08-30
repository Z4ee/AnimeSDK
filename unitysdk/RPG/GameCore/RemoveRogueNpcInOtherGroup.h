#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_REMOVEROGUENPCINOTHERGROUP_METHOD_3_4C0017D8827AB24C_OFFSET UNITYSDK_OFFSET(0x1DB8E8E0)
#define RPG_GAMECORE_REMOVEROGUENPCINOTHERGROUP_METHOD_3_C5AFA0B7EAA6D5D0_OFFSET UNITYSDK_OFFSET(0x1DB8E890)
#define RPG_GAMECORE_REMOVEROGUENPCINOTHERGROUP__CTOR_OFFSET UNITYSDK_OFFSET(0x1DB8E8D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RemoveRogueNpcInOtherGroup_TypeDefinitionIndex = 20247;

	class RemoveRogueNpcInOtherGroup : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REMOVEROGUENPCINOTHERGROUP__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_C5AFA0B7EAA6D5D0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RemoveRogueNpcInOtherGroup*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RemoveRogueNpcInOtherGroup*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REMOVEROGUENPCINOTHERGROUP_METHOD_3_C5AFA0B7EAA6D5D0_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_4C0017D8827AB24C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RemoveRogueNpcInOtherGroup* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RemoveRogueNpcInOtherGroup*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REMOVEROGUENPCINOTHERGROUP_METHOD_3_4C0017D8827AB24C_OFFSET))(a1, a2);
		}
	};
}
