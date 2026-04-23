#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_WAITROGUESELECTMIRACLE_METHOD_3_577888128C9BDBD3_OFFSET UNITYSDK_OFFSET(0x19106D70)
#define RPG_GAMECORE_WAITROGUESELECTMIRACLE_METHOD_3_D157F91051DB9083_OFFSET UNITYSDK_OFFSET(0x19106E00)
#define RPG_GAMECORE_WAITROGUESELECTMIRACLE__CTOR_OFFSET UNITYSDK_OFFSET(0x19106DD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WaitRogueSelectMiracle_TypeDefinitionIndex = 19442;

	class WaitRogueSelectMiracle : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITROGUESELECTMIRACLE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_577888128C9BDBD3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaitRogueSelectMiracle*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaitRogueSelectMiracle*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITROGUESELECTMIRACLE_METHOD_3_577888128C9BDBD3_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_D157F91051DB9083(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaitRogueSelectMiracle* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaitRogueSelectMiracle*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITROGUESELECTMIRACLE_METHOD_3_D157F91051DB9083_OFFSET))(a1, a2);
		}
	};
}
