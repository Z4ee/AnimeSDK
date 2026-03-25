#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TimeRewindAudioConfig; }
namespace RPG::GameCore { class TimeRewindCameraShakeConfig; }
namespace RPG::GameCore { class TimeRewindEffConfig; }
namespace RPG::GameCore { class TimeRewindEntityEventConfig; }

#define RPG_GAMECORE_SINGLETIMEREWINDENTITYANIMEVENTBASECONFIG_METHOD_2_115212FCB58435B4_OFFSET UNITYSDK_OFFSET(0x1770B2D0)
#define RPG_GAMECORE_SINGLETIMEREWINDENTITYANIMEVENTBASECONFIG_METHOD_2_65BF1AD30BF00CFA_OFFSET UNITYSDK_OFFSET(0x1770B480)
#define RPG_GAMECORE_SINGLETIMEREWINDENTITYANIMEVENTBASECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1770B2C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SingleTimeRewindEntityAnimEventBaseConfig_TypeDefinitionIndex = 15206;

	class SingleTimeRewindEntityAnimEventBaseConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Single NormalizeTime; // 0x10
		::Il2CppArray<::RPG::GameCore::TimeRewindEffConfig*>* TimeRewindEffConfigs; // 0x18
		::Il2CppArray<::RPG::GameCore::TimeRewindAudioConfig*>* TimeRewindAudioConfigs; // 0x20
		::Il2CppArray<::RPG::GameCore::TimeRewindCameraShakeConfig*>* TimeRewindCameraShakeConfigs; // 0x28
		::Il2CppArray<::RPG::GameCore::TimeRewindEntityEventConfig*>* TimeRewindEntityEventConfigs; // 0x30
		::System::Boolean ShowSpecularMat; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SINGLETIMEREWINDENTITYANIMEVENTBASECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_115212FCB58435B4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SingleTimeRewindEntityAnimEventBaseConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SingleTimeRewindEntityAnimEventBaseConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SINGLETIMEREWINDENTITYANIMEVENTBASECONFIG_METHOD_2_115212FCB58435B4_OFFSET))(a1, a2);
		}

		static ::System::Void Method_2_65BF1AD30BF00CFA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SingleTimeRewindEntityAnimEventBaseConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SingleTimeRewindEntityAnimEventBaseConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SINGLETIMEREWINDENTITYANIMEVENTBASECONFIG_METHOD_2_65BF1AD30BF00CFA_OFFSET))(a1, a2);
		}
	};
}
