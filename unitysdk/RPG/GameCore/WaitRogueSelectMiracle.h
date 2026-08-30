#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_WAITROGUESELECTMIRACLE_METHOD_3_11A19154C24B677F_OFFSET UNITYSDK_OFFSET(0x1D6AAF80)
#define RPG_GAMECORE_WAITROGUESELECTMIRACLE_METHOD_3_D157F91051DB9083_OFFSET UNITYSDK_OFFSET(0x1D6AAFD0)
#define RPG_GAMECORE_WAITROGUESELECTMIRACLE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D6AAFC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WaitRogueSelectMiracle_TypeDefinitionIndex = 20249;

	class WaitRogueSelectMiracle : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITROGUESELECTMIRACLE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_11A19154C24B677F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaitRogueSelectMiracle*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaitRogueSelectMiracle*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITROGUESELECTMIRACLE_METHOD_3_11A19154C24B677F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_D157F91051DB9083(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaitRogueSelectMiracle* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaitRogueSelectMiracle*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITROGUESELECTMIRACLE_METHOD_3_D157F91051DB9083_OFFSET))(a1, a2);
		}
	};
}
